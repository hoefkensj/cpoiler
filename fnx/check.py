#!/usr/bin/env python
import click as C
from fnx.logic import rowboat

@C.pass_context
def rd_BDPROCHOT(ctx):
	msr_0x1FC=ctx.obj['V']['R']['H']
	BD_PROCHOT=ctx.obj['V']['R']['B'][-1]
	ctx.obj['MSR']['check_BDPROCHOT']=BD_PROCHOT
	HEX=f'{ctx.obj["V"]["R"]["H"]}'
	BIN=ctx.obj['V']['R']['B']
	NIB=ctx.obj['V']['R']['N']
	
	h='\u2550'
	trc='\u2557'
	tt='\u2566'
	bt='\u2569'
	brc='\u255d'
	

	
	ctx.obj['R']['R_og']=rowboat(
		HEX=HEX,
		NIB=NIB,
		HEAD=' MSR0x1FC',
		ACTIVE=BD_PROCHOT
	)
	
