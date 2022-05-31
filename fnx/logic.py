#!/usr/bin/env python

def OR(a, b) -> bin:
	a = int(a, 2) # convert to integer
	b = int(b, 2)
	result =f'{(a | b) % 2}' # bitwise nand
	return result

def AND(a, b) -> bin:
	a = int(a, 2) # convert to integer
	b = int(b, 2)
	result =f'{(a & b) % 2}' # bitwise nand
	return result
	
def or_bitwise(A, B):
	ln=len(A)
	result=''.join([OR(A[i],B[i]) for i in range(len(A))])
	return result

def and_bitwise(A, B):
	ln=len(A)
	result=''.join([AND(A[i],B[i]) for i in range(len(A))])
	return result

def rebase(binroot):
	# root=ctx.obj['MSR'].get(term) or ctx.obj['STATIC'].get(term)
	# lfill=ctx.obj['FILL'].get(term)
	nibb=textwrap.wrap(binroot,4)
	hexx=''.join([f'{int(nib,2):x}' for nib in nibb])
	return hexx,nibb


	# base={}
	# 	base['N']
	# base['H']=int(,base=2)
	# ctx.obj['V'][term]['D']=f'{int(root,base=16)}'
	# ctx.obj['V'][term]['B']=f'{bin(int(root.rjust(8,lfill[0]),base=16)).lstrip("0b").rjust(32,lfill[1])}'
	# ctx.obj['V'][term]['N']=textwrap.wrap(ctx.obj['V'][term]['B'],4)
	# bases	=	[
	# 	ctx.obj['V'][term]['H'],
	# 	ctx.obj['V'][term]['N'],
	# 	ctx.obj['V'][term]['D'],
	# 	ctx.obj['V'][term]['B'],
	# 	]
	# bases=[ctx.obj['V'][term].values()]
	return
	
