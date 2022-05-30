#!/usr/bin/env python
import click as C
import fnx.main
import fnx.proc
import fnx.msr
import fnx.stdfn
import static.locale
import fnx.stdfn

INFO=static.locale.loadloc('en')['cli']['main']['info']


@C.group()
@C.option('-y','--yes','y' , is_flag=True, help=INFO['opt_y'])
@C.option('-s','--script','script' , is_flag=True, help=INFO['opt_y'])
@C.option('-m','--minimal','stdout' ,flag_value='m',is_flag=True,help=INFO['opt_y'])
@C.option('-#','--hex','stdout' ,flag_value='h',is_flag=True,help=INFO['opt_y'])
@C.option('-b','--bool','stdout' ,flag_value='b',is_flag=True,help=INFO['opt_y'])
@C.pass_context
def entry_point(ctx,y,script,stdout):
	"""Throttlestop : \n Control MSR: BiDirectional Processor Hot """
	  # ensure that ctx.obj exists and is a dict (in case `cli()` is called
    # by means other than the `if` block below)
	ctx.ensure_object(dict)
	fnx.main.su()


@C.command()
@C.pass_context
def cli_chk(ctx):
	"""Check MSR: 0x1FC[0]"""
	check=fnx.proc.proc_chk()

	

@C.command()
@C.pass_context
def cli_set(ctx):
	"""Set BD_PROCHOT Flag (set to 1)"""
	sett=fnx.proc.proc_set()
	fnx.stdfn.C_write_stdo(sett,sett['formats'][:2])
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
entry_point.add_command(cli_set, name="set")
entry_point.add_command(cli_clr, name="reset")
entry_point.add_command(cli_modMSR, name="msr")

