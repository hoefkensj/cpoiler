#!/usr/bin/env python

locales={
	'en' : {
		'cli':	{
			'main' : {
				'info'	:	{
					}}}}}
def en_cli_main_info():
	strings={
		'fn_discript'		:		'Throttlestop : \n Control MSR: BiDirectional Processor Hot',
		'opt_y'					:		'Dont Ask Questions just do it!',
		'opt_script'		:		'for use in (automation) scripts implies -y -#',
		
	}
	return strings
	



locales['en']['cli']['main']['info']=en_cli_main_info()



def loadloc(loc,locales=locales):
	return locales[loc]
