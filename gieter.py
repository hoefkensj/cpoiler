#!/usr/bin/env python
import shlex
import subprocess
import os,sys

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

def watchit() -> None:
	"""
	
	"""
	path=os.path.dirname(sys.argv[0])
	print(f'monitoring {path}')
	cmd = shlex.split("watchexec -w './' -d 500 --on-busy-update do-nothing --print-events -- git add --all ")
	proc_watch= subprocess.Popen(cmd ,stdout=subprocess.PIPE, universal_newlines=True)
	for line in iter(proc_watch.stdout.readline, ''):
		yield line.split(':')#'/'.join(line.split('->')[0].split('/')[len(srcdir.split('/')):])
	proc_watch.stdout.close()
	return_code = proc_watch.wait()
	if return_code:
		raise subprocess.CalledProcessError(return_code, proc_watch)

def execute(cmd):
	cmd=shlex.split(cmd)
	popen = subprocess.Popen(cmd, stdout=subprocess.PIPE, universal_newlines=True)
	for stdout_line in iter(popen.stdout.readline, ""):
		yield stdout_line
	popen.stdout.close()
	return_code = popen.wait()
	if return_code:
		raise subprocess.CalledProcessError(return_code, cmd)

# Example
# for path in execute(["locate", "a"]):
# # 		print(path, end="")
# for event in execute('gio monitor --dir="."'):
# 	# print(event,end='')
# 	change=os.path.basename(event.split(':')[1])
# 	print(change)
[print(n,event) for n,event in enumerate(watchit())]
