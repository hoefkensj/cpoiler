#!/usr/bin/env python
import shlex
import subprocess
import sys
import click as C

def mk_cmd(a):
	cmd=shlex.split(a)
	def shexec(**k):
		cmd=shlex.split(' '.join([a,*k.values()]))
		proc	=	subprocess.run(	
							cmd	,
							capture_output			=	True	,
							universal_newlines	=	True	,
						)
		return proc
	return shexec
	
def std_write(*a):
	args=''
	for arg in a:
		sys.stdout.write(arg)
	sys.stdout.flush()
	return

@C.pass_context
def mk_ctxobj(ctx):
	ctx.obj['FILL']={}
	ctx.obj['FILL']['A']=['F','1']
	ctx.obj['FILL']['O']=['0','0']
	ctx.obj['FILL']['R']=['0','0']
	ctx.obj['FILL']['W']=['0','0']
	ctx.obj['STATIC']={}
	ctx.obj['STATIC']['addr']= '0x1FC'
	ctx.obj['STATIC']['A']= 'FFFFFFFE'
	ctx.obj['STATIC']['O']= '00000001'
	ctx.obj['F']={} #F =Flags
	ctx.obj['V']={} #V = VALUES
	ctx.obj['V']['R']={	'D':'', 	'H':'', 	'B':'', 	'N':'',}
	ctx.obj['V']['W']={	'D':'', 	'H':'', 	'B':'', 	'N':'',}
	ctx.obj['V']['O']={	'D':'', 	'H':'', 	'B':'', 	'N':'',}
	ctx.obj['V']['A']={	'D':'', 	'H':'', 	'B':'', 	'N':'',}
	ctx.obj['BASE']={'R':'','W':'','O':'','A':'', }
	ctx.obj['R']={i:'' for i in range(8)}
	ctx.obj['MSR']={} #M = MSR
	ctx.obj['MSR']['R']= 0
	ctx.obj['MSR']['W']= 0
	ctx.obj['MSR']['check_BDPROCHOT']= 0
	ctx.obj['MSR']['write_BDPROCHOT']= 0
	ctx.obj['MSR']['rtest_BDPROCHOT']= 0
	ctx.obj['STD']={}
	ctx.obj['STD']['TABLE']={}
	ctx.obj['STD']['TABLE']['ROWS']=[]

@C.pass_context
def std_table(ctx):
	table_rows=ctx.obj['STD']['TABLE']['ROWS']
	for line in table_rows:
		std_write(ctx.obj['R'][line],'\n')

	

