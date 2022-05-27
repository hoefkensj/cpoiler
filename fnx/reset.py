#!/usr/bin/env python
import click as C
from fnx.check import BDPROCHOT
from fnx.logic import rebase2ctx

from fnx.msr import rdmsr_0x1FC


@C.pass_context
def calc_clr(ctx):
	rdmsr_0x1FC()
	BDPROCHOT()
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
	
	
	
	
