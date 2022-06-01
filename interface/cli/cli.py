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
@C.option('-t','--table','table' ,,help=INFO['opt_y'])
@C.pass_context
def entry_point(ctx,y,script,stdout):
	"""Throttlestop : \n Control MSR: BiDirectional Processor Hot """
	# ensure that ctx.obj exists and is a dict (in case `cli()` is called
	# by means other than the `if` block below)
	ctx.ensure_object(dict)
	
	if stdout=
	ctx.obj['']

	fnx.main.su()


@C.command()
@C.pass_context
def cli_chk(ctx):
	"""Check MSR: 0x1FC[0]"""
	check=fnx.proc.proc_chk()
	std_out=fnx.stdfn.std_row(check,'MSR #0x1FC' ,2)
	C.echo(std_out)
	

@C.command()
@C.pass_context
def cli_set(ctx):
	"""Set BD_PROCHOT Flag (set to 1)"""
	check	= fnx.proc.proc_chk()
	orr,result	=	fnx.proc.proc_set(check)
	std_out=[0,0,0]
	std_out[0]=fnx.stdfn.std_row(check,'MSR #0x1FC' ,2)
	std_out[1]=fnx.stdfn.std_row(orr,' OR #0x1FC' ,2)
	std_out[2]=fnx.stdfn.std_row(result,'NEW #0x1FC' ,2)
	
	C.echo(std_out)
	fnx.msr.wrmsr_0x1FC(result['HEXX'])
	return
	
@C.command()
@C.pass_context
def cli_clr(ctx):
	"""Clear BD_PROCHOT Flag (set to 0)"""
	check	= fnx.proc.proc_chk()
	andd,result	=	fnx.proc.proc_clr(check)
	std_out=std_box=[0,0,0]

	# C.echo(table)
	std_out[0],std_box[0]=fnx.stdfn.std_row(check,'MSR #0x1FC' ,2)
	std_out[1],std_box[1]=fnx.stdfn.std_row(andd,'AND #0x1FC' ,2)
	
	std_out[2],std_box[2]=fnx.stdfn.std_row(result,'NEW #0x1FC' ,2)
	
	table=fnx.stdfn.dec_boxwrap().format(rows=f'\n{std_box[0]}\n{std_box[1]}\n\n{std_box[2]}\n')
	
	C.echo(table)
	C.echo(std_out)
	# fnx.msr.wrmsr_0x1FC(result['HEXX'])
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

