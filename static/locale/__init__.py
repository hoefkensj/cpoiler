#!/usr/bin/env python
locales={
	'en' : {
		'cli':	{
			'main' : {
				'info'	:	{
					}}}}}
strings={
	'opt_y'		:  'Dont Ask Questions just do it!',
	
}
locales['en']['cli']['main']['info']=strings
def loadloc(loc,locales=locales):
	return locales[loc]
