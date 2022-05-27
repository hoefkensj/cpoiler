#!/usr/bin/env python
#!/usr/bin/env python
import click as C
from fnx.check import BDPROCHOT
from fnx.logic import rebase2ctx

from fnx.msr import rdmsr_0x1FC

@C.pass_context
def calc_set(ctx):
	OR=ctx.obj['STATIC']['O']
	rebase2ctx('R')
	rebase2ctx('O')
	O_HEX=ctx.obj['V']['O']['H']
	R_HEX=ctx.obj['V']['R']['H']
	ctx.obj['MSR']['W']=f'{hex(int(R_HEX,base=16) | int(O_HEX,base=16)).lstrip("0x")}'
	rebase2ctx('W')

	