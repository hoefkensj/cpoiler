#!/usr/bin/env python
import click as C
from fnx.logic import rebase2ctx
from fnx.main import mk_cmd
from fnx.main import std_write


lsmod= mk_cmd('lsmod')
modprobe_msr= mk_cmd("modprobe msr")
rdmsr= mk_cmd("rdmsr 0x1FC")
wr= mk_cmd("wrmsr")
def msr_mod():
	def test_msr():
		stdout_lsmod=lsmod().stdout
		for line in stdout_lsmod.splitlines():
			if "intel_rapl_msr" in line:return 0
			else:	continue
		return 2,

	def ld_modMSR():
		std_write('Load MSR Kernel Module:')
		mod_msr=modprobe_msr()
		std_write('\x1b[1FTest MSR access:\t\x1b[32mDONE\x1b[0m')
		return
	
	std_write('Test MSR access:')
	msr_mod=test_msr()
	if msr_mod != 0 :
		std_write('\x1b[1FTest MSR access:\t\x1b[31mFAIL\x1b[0m')
		ld_modMSR()
		msr_mod=test_msr()
	std_write('\x1b[1FTest MSR access:\t\x1b[32mOK\x1b[0m')

@C.pass_context
def	rdmsr_0x1FC(ctx):
	#rdmsr=mk_cmd("rdmsr 0x1FC")
	rdmsr()
	read=rdmsr().stdout
	read=read.strip('\n')
	ctx.obj['MSR']['R']=f'{read.rjust(8,"0")}'
	rebase2ctx('R')

@C.pass_context
def wrmsr(ctx):
	hex_write=ctx.obj['V']['W']['H']
	hex_write='0x'+hex_write
	hex_addr=ctx.obj['MSR'].get('addr') or 	ctx.obj['STATIC']['addr']
	if ctx.obj['F']['y']:
		wr(addr=hex_addr,write=hex_write)
	else:
		if C.confirm(text=f"Write #\x1b[1;32m{hex_write}\x1b[0m to MSR: \x1b[1;32m{hex_addr}\x1b[0m ?", default='Y'):
			wr(addr=hex_addr,write=hex_write)

	