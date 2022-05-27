#!/usr/bin/env python
import click as C
from fnx.main import mk_cmd

lsmod= mk_cmd('lsmod')
modprobe= mk_cmd("modprobe")
rdmsr= mk_cmd("rdmsr")
wrmsr= mk_cmd("wrmsr")

def test_msr():
	stdout_lsmod=lsmod().stdout
	if "intel_rapl_msr" in stdout_lsmod:return True
	else:	return False

def load_msr():
	mod_msr=modprobe('msr')
	return mod_msr

@C.pass_context
def	rdmsr_0x1FC(ctx):
	addr=ctx.obj['STATIC']['addr']
	read=rdmsr(addr=addr).stdout.strip('\n')
	read=f'{read.rjust(8,"0")}'
	ctx.obj['MSR']['R']=read
	return read

@C.pass_context
def wrmsr_0x1FC(ctx):
	addr=	ctx.obj['STATIC']['addr']
	write=ctx.obj['MSR']['W']
	wrmsr(addr=addr,write=write)
	return write

# if C.confirm(text=f"\n\x1b[31m!! WARNING !!\x1b[0m \tWrite \x1b[31m#\x1b[1;32m{hex_write}\x1b[0m to MSR: \x1b[1;32m{hex_addr}\x1b[0m ?", default='Y'):
		# 	wr(addr=addr,write=hex_write)

	