#!/usr/bin/env python
import click as C
import fnx.check
import fnx.reset
import fnx.set
import fnx.main
import fnx.msr
import fnx.logic



@C.pass_context
def proc_msr_test(ctx):
	return fnx.msr.test_msr()
	
@C.pass_context
def proc_msr_load(ctx):
	return fnx.msr.load_msr()

@C.pass_context
def proc_msr(ctx):
	C.echo('MSR access:')
	mod_loaded=proc_msr_test()
	if not mod_loaded:
		C.echo('\x1b[F\x1b[25G\x1b[31mFAIL\x1b[0m')
		if C.confirm('Load MSR Kernel Module:', default='Y'):
			proc_msr_load()
			fnx.main.std_write('\x1b[1FTest MSR access:\t\x1b[32mDONE\x1b[0m')
		else:
			C.echo('\x1b[F\x1b[25G\x1b[31mFAIL\x1b[0m')
	else:
		C.echo('\x1b[F\x1b[25G\x1b[32mOK\x1b[0m')
	return mod_loaded


@C.pass_context
def proc_chk(ctx):
	check=fnx.msr.rdmsr_0x1FC()
	rd_bss=fnx.logic.rebase2ctx('R')
	BDPH=fnx.check.BDPROCHOT()
	bdph=str(int(BDPH))
	dct={'chk':[rd_bss,[BDPH,bdph]]}
	return dct
		

@C.pass_context
def proc_set(ctx):
	check	=proc_chk()
	OR		=fnx.set.calc_set()
	or_bss=fnx.logic.rebase2ctx('O')
	BDPH=or_bss[-2][-1]
	bdph=str(int(BDPH))
	dct= {'or':[or_bss,[BDPH,bdph]]}
	dcts={
		**check,
		'or' : dct,
		}
	return dcts


@C.pass_context
def proc_clr(ctx):
	fnx.clear.calc_clr()

	return


@C.pass_context
def proc_wrMSR(ctx):
	hex_addr=ctx.obj['HEX_ADDR']
	hex_val=ctx.obj['HEX_WRITE']
	fnx.msr.wrmsr()

def abort_if_false(ctx, param, value):
    if not value:
        ctx.abort()