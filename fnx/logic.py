#!/usr/bin/env python
import textwrap
import click as C

def xnot_bitwise(A):
	ln=len(A)
	# remove leading “0x”
	# A = A.lstrip('0x')
	A = A[2:]
	# pad both strings to same length
	A = A.rjust(ln, "0")
	# calculate nand for each pair of digits
	output = ''.join([xnot(A[i]) for i in range(ln)])
	return output.upper()

def xnot(a):
	return xnand(a, a)

def xnand(a, b):
	a = int(a, 16) # convert to integer
	b = int(b, 16)
	nand = ~(a & b) % 16 # bitwise nand
	return hex(nand).lstrip('0x')

def xnand_bitwise(A, B):
	ln=len(A if len(A)>len(B) else B)
	A = A.lstrip('0x').rjust(ln, "0")
	B = B.lstrip('0x').rjust(ln, "0")
	output = ''.join([xnand(A[i], B[i]) for i in range(ln)])
	return "0x" + output.upper()

def hexallbase(ctx,root,x):
	ctx.obj['V'][x]['H']='0x'+str(root[2:]).zfill(8)
	ctx.obj['V'][x]['D']=int(ctx.obj['V'][x]['H'],base=16)
	ctx.obj['V'][x]['B']='0b'+str(bin(ctx.obj['V'][x]['D'])[2:].zfill(32))
	ctx.obj['V'][x]['N']=textwrap.wrap(ctx.obj['V'][x]['B'][2:].zfill(32),4)
	# #print(x,'H',repr(ctx.obj['V'][x]['H']))
	# #print(repr(ctx.obj['V'][x]['D']))
	# #print(repr(ctx.obj['V'][x]['B']))
	return

def xtonib(x):
	hex(x)
	
@C.pass_context
def rebase2ctx(ctx,term):
	root=ctx.obj['MSR'].get(term) or ctx.obj['STATIC'].get(term)
	lfill=ctx.obj['FILL'].get(term)
	ctx.obj['V'][term]['H']=f'{root.rjust(8,lfill[0])}'
	ctx.obj['V'][term]['D']=f'{int(root,base=16)}'
	ctx.obj['V'][term]['B']=f'{bin(int(root.rjust(8,lfill[0]),base=16)).lstrip("0b").rjust(32,lfill[1])}'
	ctx.obj['V'][term]['N']=textwrap.wrap(ctx.obj['V'][term]['B'],4)

@C.pass_context
def rowboat(ctx,**k):
	SPL 		= 	k.get('SPL') 		 	or			'\u2502'
	A1 			= 	k.get('A1') 		 	or			' #'
	A2 			= 	k.get('A2')			 	or			'BIN'
	HEX 		= 	k.get('HEX') 		 	or			'0'
	NIB 		= 	k.get('NIB') 		 	or			''
	HEAD 		= 	k.get('HEAD') 	 	or			''
	ACTIVE 	= 	k.get('ACTIVE')	 	or	 		''
	COL1 		= 	k.get('COL1') 	 	or			''
	COL2 		= 	k.get('COL2') 	 	or			''
	CSD 		= 	k.get('CSD') 		 	or			'\u2551'
	CSE 		= 	k.get('CSE') 		 	or			'\u2551'
	CSI 		= 	k.get('CSI') 		 	or			'\u2551'
	G 			= 	k.get('G') 			 	or			37
	Y 			= 	k.get('Y') 			 	or			33
	R 			= 	k.get('R') 			 	or			31
	S				=		k.get('S') 			 	or			' '

	head	=		f'\x1b[0;1m{HEAD}'
	csi		=		f'\x1b[12G\x1b[0m{CSI}\x1b[0m'
	a1		=		f'\x1b[31m{A1}\x1b[0m'
	hexx	=		f''.join([f'\x1b[1;{Y}m{i}' for i in HEX])
	csd		=		f'\x1b[0;1m{S}{CSD}{S}{CSD}{S}\x1b[0m'
	a2		=		f'\x1b[0;{R}m{A2}'
	nib 	=		f''.join([f'\x1b[0;34m{SPL}\x1b[0;{G}m{NIBLE}' for NIBLE in NIB])
	cse		=		f'\x1b[1D\x1b[1;32m{ACTIVE}\x1b[0;39m{S}{CSE}'
	row=			f''.join([head,csi,a1,hexx,csd,a2,nib,cse])
	return row



@C.pass_context
def table(ctx):
	h='\u2550'
	trc='\u2557'
	tt='\u2566'
	bt='\u2569'
	brc='\u255d'
	csd='\u256C'
	cse='\u2563'
	csi='\u256C\u2550'
	
	R_Ttt={
		'HEAD'		:		f'{h*16}',
		'A1'			:		f'\x1b[0;1m{h}',
		'HEX'			:		h*8,
		'CSD'			:		tt,
		'CSI'			:		f'{tt}{h}',
		'G'				:		39,
		'Y'				:		39,
		'R'				:		39,
		'A2'			:		h*44,
		'S'				:		h,
		'CSE'			:		trc,
	}
	R_Ths_A={
		'HEAD'		:		h+'AND =[&]-'+h*8,
		'A1'			:		f'\x1b[0;1m{h}',
		'HEX'			:		h*8,
		'CSD'			:		csd,
		'CSE'			:		cse,
		'CSI'			:		csi,
		'G'				:		39,
		'Y'				:		39,
		'R'				:		39,
		'A2'			:		h*44,
		'S'				:		h,
		}
	R_Ths_O={
		'HEAD'		:		h+'OR =[+]- '+h*8,
		'A1'			:		f'\x1b[0;1m{h}',
		'HEX'			:		h*8,
		'CSD'			:		csd,
		'CSE'			:		cse,
		'CSI'			:		csi,
		'G'				:		39,
		'Y'				:		39,
		'R'				:		39,
		'A2'			:		h*44,
		'S'				:		h,
		}
	R_Ttb={
		'HEAD'		:		h*16,
		'A1'		:		f'\x1b[0;1m{h}',
		'HEX'		:		h*8,
		'CSD'		:		bt,
		'CSE'		:		brc,
		'CSI'		:		f'{bt}{h}',
		'G'		:		39,
		'Y'		:		39,
		'R'		:		39,
		'A2'		:		h*44,
		'S'		:		h
		}

	ctx.obj['R']['R_Ttt']=rowboat(**R_Ttt)
	ctx.obj['R']['R_Ths_A']=rowboat(**R_Ths_A)
	ctx.obj['R']['R_Ths_O']=rowboat(**R_Ths_O)
	ctx.obj['R']['R_Ttb']=rowboat(**R_Ttb)