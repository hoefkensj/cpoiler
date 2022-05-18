#!/usr/bin/env python
import click as C
from fnx.proc import proc_chk
from fnx.proc import proc_clr
from fnx.proc import proc_set
from fnx.main import mk_ctxobj



@C.group()
# @C.option('-v','--verbose','verbose' ,is_flag=True)
# @C.option('-n','--no-val','novalidate' ,is_flag=True)
# @C.option('-s','--script','script' ,is_flag=True, help='Set this Flag For use within scripts(see commandflags)')
@C.option('-y','--yes','yes', is_flag=True, help="Dont Ask Questions just do it!")
@C.pass_context
def entry_point(ctx,yes):
	"""Throttlestop : \n Control MSR: BiDirectional Processor Hot """
	  # ensure that ctx.obj exists and is a dict (in case `cli()` is called
    # by means other than the `if` block below)
	ctx.ensure_object(dict)
	mk_ctxobj()
	ctx.obj['F']['y']=yes

@C.command()
@C.option('-#','--bin','stdout' ,flag_value='#')
@C.option('-b','--bool','stdout' ,flag_value='b')
@C.option('-f','--full','stdout' ,flag_value='f', default=True)
@C.pass_context
def cli_chk(ctx,stdout):
	"""Check MSR: 0x1FC"""
	ctx.obj['F']['stdout']=stdout
	proc_chk()

@C.command()
@C.option('-#','--bin','stdout' ,flag_value='#')
@C.option('-b','--bool','stdout' ,flag_value='b')
@C.option('-f','--full','stdout' ,flag_value='f', default=True)
@C.pass_context
def cli_set(ctx,stdout):
	"""Set BD_PROCHOT Flag (set to 1)"""
	ctx.obj['F']['stdout']=stdout
	proc_set()

@C.command()
@C.option('-#','--bin','stdout' ,flag_value='#')
@C.option('-b','--bool','stdout' ,flag_value='b')
@C.option('-f','--full','stdout' ,flag_value='f', default=True)
@C.pass_context
def cli_clr(ctx,stdout):
	"""Clear BD_PROCHOT Flag (set to 0)"""
	ctx.obj['F']['stdout']=stdout
	proc_clr()

@C.command()
@C.argument('hexx', type=str)
@C.pass_context
def cli_wMSR(ctx,hexx):
	"""write msr 0x1FC directly"""
	ctx.obj['V']['W']['H']=hexx
	proc_wrMSR()

@C.command()
@C.pass_context
def cli_modMSR(ctx):
	"""test  msr kernel module"""
	proc_modMSR()
	
	
entry_point.add_command(cli_chk, name="check")
entry_point.add_command(cli_set, name="set")
entry_point.add_command(cli_clr, name="clear")
entry_point.add_command(cli_wMSR, name="xwrmsr")
entry_point.add_command(cli_modMSR, name="xmodmsr")

