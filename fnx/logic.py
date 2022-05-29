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

def xtonib(x):
	hex(x)
	

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
	
