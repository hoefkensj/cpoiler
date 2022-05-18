#!/usr/bin/env python
import click as C
from fnx.check import rd_BDPROCHOT
from fnx.logic import rebase2ctx
from fnx.logic import rowboat
from fnx.msr import rdmsr_0x1FC

@C.pass_context
def calc_clr(ctx):
	rdmsr_0x1FC()
	rd_BDPROCHOT()
	rebase2ctx('R')
	rebase2ctx('A')
	A_HEX=ctx.obj['V']['A']['H']
	R_HEX=ctx.obj['V']['R']['H']
	ctx.obj['MSR']['W']=f'{hex(int(R_HEX,base=16) & int(A_HEX,base=16)).lstrip("0x")}'
	rebase2ctx('W')
	N=ctx.obj['V']['W']
	N_HEX=N['H']
	N_NIB=N['N']
	R_NIB=ctx.obj['V']['R']['N']
	A_NIB=ctx.obj['V']['A']['N']
	R_og={
	'HEAD'		:	' MSR0x1FC',
	'HEX'		:	R_HEX[-8:],
	'NIB'		:	R_NIB,
	'ACTIVE'	:	R_NIB[-1][-1],
	}
	R_op={
	'HEAD'		:	' CLEAR[0]',
	'HEX'		:	A_HEX[-8:],
	'NIB'		:	A_NIB,
	'ACTIVE'	:	A_NIB[-1][-1],
	}
	R_new={
	'HEAD'		:	' NEW0x1FC',
	'HEX'		:	N_HEX[-8:],
	'NIB'		:	N_NIB,
	'ACTIVE'	:	N_NIB[-1][-1],
	}

	ctx.obj['R']['R_og']=rowboat(**R_og)
	ctx.obj['R']['R_op']=rowboat(**R_op)
	ctx.obj['R']['R_new']=rowboat(**R_new)
