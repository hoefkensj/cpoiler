#!/usr/bin/env python
import click as C
import fnx.check
import fnx.main
import fnx.msr
import fnx.logic
import fnx.stdfn


@C.pass_context
def proc_msr_test(ctx):
	return fnx.msr.test_msr()
	
@C.pass_context
def proc_msr_load(ctx):
	return fnx.msr.load_msr()



@C.pass_context
def proc_msr(ctx):
	std_tblout('MSR access:')
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



def proc_chk():
	str_binary=fnx.msr.rdmsr_0x1FC()
	str_hexx,lst_nibb=fnx.logic.rebase(str_binary)
	BD_PROCHOT_ENABLED=fnx.msr.rdmsr_BDPROCHOT()
	result = {
		'BINN' 								: str_binary,
		'NIBB' 								: lst_nibb,
		'HEXX'								:	str_hexx,
		'BIT0'								:	BD_PROCHOT_ENABLED,
		}
	return result
		


def proc_set(check):
	str_binary	= f'{"0"*(len(check["BINN"])-1)}1'
	str_hexx,lst_nibb=fnx.logic.rebase(str_binary)
	orr = {
		'BINN' 								: str_binary,
		'NIBB' 								: lst_nibb,
		'HEXX'								:	str_hexx,
		'BIT0'								:	'1',
		}
	str_binary=fnx.logic.or_bitwise(check['BINN'],orr['BINN'])
	str_hexx,lst_nibb=fnx.logic.rebase(str_binary)
	result = {
		'BINN' 								: str_binary,
		'NIBB' 								: lst_nibb,
		'HEXX'								:	str_hexx,
		'BIT0'								:	'1',		}

	return orr,result



def proc_clr(check):
	str_binary	= f'{"1"*(len(check["BINN"])-1)}0'
	str_hexx,lst_nibb=fnx.logic.rebase(str_binary)
	andd = {
		'BINN' 								: str_binary,
		'NIBB' 								: lst_nibb,
		'HEXX'								:	str_hexx,
		'BIT0'								:	'0',
		}
	str_binary=fnx.logic.and_bitwise(check['BINN'],andd['BINN'])
	str_hexx,lst_nibb=fnx.logic.rebase(str_binary)
	result = {
		'BINN' 								: str_binary,
		'NIBB' 								: lst_nibb,
		'HEXX'								:	str_hexx,
		'BIT0'								:	'0',		}

	return andd,result


@C.pass_context
def proc_wrMSR(ctx):
	hex_addr=ctx.obj['HEX_ADDR']
	hex_val=ctx.obj['HEX_WRITE']
	fnx.msr.wrmsr()

def abort_if_false(ctx, param, value):
    if not value:
        ctx.abort()