#!/usr/bin/env python
import click as C
from fnx.check import rd_BDPROCHOT
from fnx.clear import calc_clr
from fnx.set import calc_set
from fnx.main import std_write
from fnx.main import std_table
from fnx.msr import msr_mod
from fnx.msr import rdmsr_0x1FC
from fnx.logic import table
from fnx.msr import wrmsr

@C.pass_context
def proc_chk(ctx):
	rdmsr_0x1FC()
	rd_BDPROCHOT()
	if ctx.obj['F']['stdout']=='#':
		std_write(str(int(ctx.obj['MSR']['check_BDPROCHOT'],base=2)))
	if ctx.obj['F']['stdout']=='b':
		std_write(str(bool(int(ctx.obj['MSR']['check_BDPROCHOT'],base=2))))
	if ctx.obj['F']['stdout']=='f':
		ctx.obj['STD']['TABLE']['ROWS']=['R_Ttt','R_og','R_Ttb']
		table()
		std_table()
@C.pass_context
def proc_modMSR(ctx):
	msr_mod()

@C.pass_context
def proc_set(ctx):
	calc_set()
	if ctx.obj['F']['stdout']=='#':
		std_write(str(int(ctx.obj['MSR']['write_BDPROCHOT'],base=2)))
	if ctx.obj['F']['stdout']=='b':
		std_write(str(bool(int(ctx.obj['MSR']['write_BDPROCHOT'],base=2))))
	if ctx.obj['F']['stdout']=='f':
		ctx.obj['STD']['TABLE']['ROWS']=['R_Ttt','R_og','R_op','R_Ths_O','R_new','R_Ttb']
		table()
		std_table()
		wrmsr()
		proc_chk()
	return

@C.pass_context
def proc_clr(ctx):
	calc_clr()
	if ctx.obj['F']['stdout']=='#':
		std_write(str(int(ctx.obj['MSR']['write_BDPROCHOT'],base=2)))
	if ctx.obj['F']['stdout']=='b':
		std_write(str(bool(int(ctx.obj['MSR']['write_BDPROCHOT'],base=2))))
	if ctx.obj['F']['stdout']=='f':
		ctx.obj['STD']['TABLE']['ROWS']=['R_Ttt','R_og','R_op','R_Ths_A','R_new','R_Ttb']
		table()
		std_table()
		wrmsr()
		proc_chk()
	return

@C.pass_context
def proc_wrMSR(ctx):
	hex_addr=ctx.obj['HEX_ADDR']
	hex_val=ctx.obj['HEX_WRITE']
	wrmsr()

def abort_if_false(ctx, param, value):
    if not value:
        ctx.abort()