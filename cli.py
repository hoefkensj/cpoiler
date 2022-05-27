#!/usr/bin/env python
import click as C
import fnx.main
import fnx.proc
import fnx.msr
import fnx.stdfn

@C.group()
@C.option('-y','--yes','y' ,flag_value='y', is_flag=True, help="Dont Ask Questions just do it!")
@C.option('-s','--script','stdout' ,flag_value='s', is_flag=True, help="requires root,same as  -y -b)")
@C.option('-f','--full','stdout' ,flag_value='f', default=True)
@C.option('-m','--minimal','stdout' ,flag_value='m',is_flag=True,)
@C.option('-#','--hex','stdout' ,flag_value='h',is_flag=True)
# @C.option('-#','--bin','stdout' ,flag_value='h',is_flag=True)
# @C.option('-#','--dec','stdout' ,flag_value='h',is_flag=True)
@C.option('-b','--bool','stdout' ,flag_value='b',is_flag=True)
@C.option('-q','--quiet','stdout' ,flag_value='q',is_flag=True)
@C.pass_context
def entry_point(ctx,y,stdout):
	"""Throttlestop : \n Control MSR: BiDirectional Processor Hot """
	  # ensure that ctx.obj exists and is a dict (in case `cli()` is called
    # by means other than the `if` block below)
	ctx.ensure_object(dict)
	fnx.main.mk_ctxobj()
	fnx.main.su()
	fn_stdout=fnx.stdfn.fn()
	case={

		'f': fn_stdout.f,

	}
	stdecho=case[stdout]
	ctx.obj['stdecho']=stdecho
	

@C.command()
@C.pass_context
def cli_chk(ctx):
	"""Check MSR: 0x1FC"""
	check=fnx.proc.proc_chk()
	og={
		'R_HEX' : check['chk'][0][0],
		'R_NIB' : check['chk'][0][-1]
	}
	ctx.obj['stdecho'](check,og=og)
	

@C.command()
@C.pass_context
def cli_set(ctx):
	"""Set BD_PROCHOT Flag (set to 1)"""
	sett=fnx.proc.proc_set()
	ctx.obj['stdecho'](sett)
	fnx.msr.wrmsr()
	return
	
@C.command()
@C.pass_context
def cli_clr(ctx):
	"""Clear BD_PROCHOT Flag (set to 0)"""
	clear=fnx.proc.proc_clr()
	
	ctx.obj['stdecho'](clear,R_HEX=clear[0][0])
	fnx.msr.wrmsr()
	return

@C.command()
@C.pass_context
def cli_modMSR(ctx):
	"""test  msr kernel module"""
	fnx.proc.proc_msr()
	
	
entry_point.add_command(cli_chk, name="check")
entry_point.add_command(cli_chk, name="c")

entry_point.add_command(cli_set, name="set")
entry_point.add_command(cli_set, name="s")
entry_point.add_command(cli_clr, name="reset")
entry_point.add_command(cli_clr, name="r")
entry_point.add_command(cli_modMSR, name="msr")
entry_point.add_command(cli_modMSR, name="m")

