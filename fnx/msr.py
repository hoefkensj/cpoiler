#!/usr/bin/env python
from fnx.main import mk_cmd
import os
lsmod= mk_cmd('lsmod')
modprobe= mk_cmd("modprobe")
rdmsr= mk_cmd("rdmsr -X0")
wrmsr= mk_cmd("wrmsr")
test=mk_cmd("rdmsr -X0")

def test_msr():
	stdout_lsmod=lsmod().stdout
	if "intel_rapl_msr" in stdout_lsmod:return True
	else:	return False

def load_msr():
	mod_msr=modprobe('msr')
	return mod_msr

def	rdmsr_BDPROCHOT() -> bool:
	read= int(rdmsr(opt='--bitfield 0:0',addr='0x1FC').stdout,2)
	BD_PROCHOT_ENABLED=bool(read)
	# ctx.obj['BD_PROCHOT_ENABLED']=BD_PROCHOT_ENABLED
	return BD_PROCHOT_ENABLED

def rdmsr_0x1FC(addr='0x1FC'):
	# binn+=[str(int((str(bin(int(rdmsr(opt=f'--bitfield {i}:{i}',addr=addr).stdout,base=16)))),base=2))]
	binn=[str(int((rdmsr(opt=f'--bitfield {i}:{i}',addr=addr).stdout),base=2))for i in range(64)]
	return ''.join(binn[::-1])

def wrmsr_0x1FC(val):
	addr='0x1FC'
	write=f'0x{val}'
	print(write)
	wrote=wrmsr(addr=addr,write=write).stdout
	return wrote
	
def cpu_freq():
	sys_cpu=os.listdir('/sys/devices/system/cpu/')
	cpu_n=0
	freqs=[]
	while True:
		cpu=os.path.join('/sys/devices/system/cpu',f'cpu{cpu_n}','cpufreq/scaling_cur_freq')
		if not os.path.isfile(cpu):
			break
		cpu_n+=1
	print(cpu_n)
	
	cpus=[f'cpu{nr}' for nr in range(cpu_n)]
	cpu_freqfiles=[os.path.join('/sys/devices/system/cpu',cpu,'cpufreq/scaling_cur_freq') for cpu in cpus]
	for i,file in enumerate(cpu_freqfiles):
		with open(file,'r') as f:
			freq=f.read().strip()
		freqs+=[int(freq)]
	avg=(sum(freqs)/len(freqs))
	print(avg)
cpu_freq()