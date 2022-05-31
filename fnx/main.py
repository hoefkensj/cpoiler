#!/usr/bin/env python
import shlex
import subprocess
import sys
import os

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

def su():
	euid = os.geteuid()
	if euid != 0:
		print("Script not started as root. Running sudo..")
		args = ['sudo', sys.executable] + sys.argv + [os.environ]
		# the next line replaces the currently-running process with the sudo
		os.execlpe('sudo', *args)
		return
	else:
		return euid == 0

