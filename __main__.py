#!/usr/bin/sudo python
def ui_cli():
	import interface.cli.cli
	interface.cli.cli.entry_point(
		prog_name	=	"ThrottleStop",
		)

if __name__ == '__main__':
	ui_cli()








