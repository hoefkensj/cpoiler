#!/usr/bin/sudo python
from cli import entry_point
import os,sys

def sudo(trys=2):
	euid = os.geteuid
	if euid() != 0:
		print("Script not started as root. Running sudo..")
		args = ['sudo', sys.executable] + sys.argv + [os.environ]
		# the next line replaces the currently-running process with the sudo
		os.execlpe('sudo', *args)
	else:
		return euid == 0





if __name__ == '__main__':

	entry_point()





