#!/usr/bin/env python
import click as C

import fnx.logic
@C.pass_context
def BDPROCHOT(ctx):
	BD_PROCHOT=ctx.obj['V']['R']['B'][-1]
	return bool(int(BD_PROCHOT,base=2))

