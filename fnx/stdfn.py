#!/usr/bin/env python
import click as C
import types
import fnx.main

def item(**k):
	G=k.get('G')
	S=k.get('S')
	m=k.get('m')
	return f'\x1b[{G}G\x1b[0m\x1b[{m}m{S}'
	
def dec_boxwrap(fn):
	def fn_wrap(*a,**k):
		table_top=('╔══════════╦════════════╦══════════════════════════════════════════════╗')
		table_data=
		table_bot=('╚══════════╩════════════╩══════════════════════════════════════════════╝')
	return fn_wrap

@dec_boxwrap
def std_boxrow(offs=[0,0,12,13,25,15,24,26,29,67,72]):
	row_boxdraw=''
	row_boxdraw+=f"{item(G=offs[1],m=0,S='')}"
	row_boxdraw+=f"{item(G=offs[2],m=0,S='╠')}"
	row_boxdraw+=f"{item(G=offs[3],m=0,S='╬')}"
	row_boxdraw+=f"{item(G=offs[4],m=0,S='═')}"
	row_boxdraw+=f"{item(G=offs[5],m=0,S='╬')}"
	row_boxdraw+=f"{item(G=offs[6],m=0,S='═')}"
	row_boxdraw+=f"{item(G=offs[7],m=0,S='═')}"
	row_boxdraw+=f"{item(G=offs[8],m=0,S='║')}"
	return row_boxdraw

@dec_boxwrap
def std_row(data,head,offs):
	offss=[1+offs,(offs+len(head)+3),(offs+len(head)+len(data['HEXX'])+5)]
	c1	=	item(G=offss[0],m=0,S=head)
	c2	=	item(G=offss[1],m=0,S=data['HEXX'])
	c3	=	item(G=offss[2],m=0,S='│'.join(data['NIBB']))
	c= f'{c1}{c2}{c3}'

	return c

def rowboat(sel,**k):
	G 			=   k.get('G') 			 	or			37
	Y 			=   k.get('Y') 			 	or			33
	R 			=   k.get('R') 			 	or			31
	S				=   k.get('S') 			 	or			' '
	
	SPL 		=   k.get('SPL') 		 	or			'\u2502'
	A1 			=   k.get('A1') 		 	or			f'\x1b[0;{R}m#'
	A2 			=   k.get('A2')			 	or			f'\x1b[0;{R}mBIN'
	HEX 		=   k.get('HEX') 		 	or			'0'
	NIB 		=   k.get('NIB') 		 	or			''
	HEAD 		=   k.get('HEAD') 	 	or			''
	ACTIVE 	=   k.get('ACTIVE')	 	or	 		''
	COL1 		=   k.get('COL1') 	 	or			''
	COL2 		=   k.get('COL2') 	 	or			''
	CSD 		=   k.get('CSD') 		 	or			'\u2551'
	CSE 		=   k.get('CSE') 		 	or			'\u2551'
	CSI 		=   k.get('CSI') 		 	or			'\u2551'
	CSS			=   k.get('CSS') 		 	or			'\u2551'

	C2=''.join([f'\x1b[{Y}m{i}' for i in HEX])
	C3=''.join([f'\x1b[1D\x1b[0;34m{SPL}\x1b[0;{G}m{NIBLE}\x1b[0;34m{SPL}' for NIBLE in NIB])
	A3= f'\x1b[1;{R}m{ACTIVE}'

	G=[0,0,2,12,14,15,24,26,29,67,70]

	css		=	item(G=G[1],m=0,S=CSS)
	head	=	item(G=G[2],m=0,S=HEAD)
	csi		=	item(G=G[3],m=0,S=CSI)
	a1		=	item(G=G[4],m=0,S=A1)
	hexx	=	item(G=G[5],m=0,S=C2)
	csd		=	item(G=G[6],m=0,S=CSD)
	a2		=	item(G=G[7],m=0,S=A2)
	nib		=	item(G=G[8],m=0,S=C3)
	act		=	item(G=G[9],m=0,S=A3)
	cse		=	item(G=G[10],m=0,S=CSE)

	row= {
		'rowdat'	: f''.join([head,hexx,nib,act])   ,
		'rowfx'		: f''.join([css,csi,a1,csd,a2,cse])   ,
		}
	return row[sel]
	
a=std_boxrow()
