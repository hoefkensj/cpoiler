#!/usr/bin/env python
import click as C
import types
import fnx.main


@C.pass_context
def fn(ctx):
	fn_stdout=types.SimpleNamespace()
	


	def f(*a,**k):
		frms=table()
		layouts={
		
		
		}
		R_og=''
		R_op=''
		R_new=''
		if k.get('og'):
			R_og={
				'HEAD'		:	' MSR0x1FC',
				'HEX'   : k['og'].get('R_HEX')[-8:],
				'NIB'   :	k['og'].get('R_NIB'),
				'ACTIVE'	:	k['og'].get('R_NIB')[-1][-1],
			}
			R_og=rowboat('rowdat',**R_og)
		if k.get('op'):
			R_op={
				'HEAD'		:	' CLEAR[0]',
				'HEX'   : k['op'].get('A_HEX')[-8:],
				'NIB'   :		k['op'].get('A_NIB'),
				'ACTIVE'	:		k['op'].get('A_NIB')[-1][-1],
				}
			R_op,FX_op=rowboat(**R_op)
			
		if k.get('new'):
			R_new={
				'HEAD'		:	' NEW0x1FC',
				'HEX'   : k['new'].get('N_HEX')[-8:],
				'NIB'   :	k['new'].get('N_NIB'),
				'ACTIVE'	:	k['new'].get('N_NIB')[-1][-1],
				}
			R_new,FX_new=rowboat(**R_new)



		C.echo(f'{frms[0]}\n{R_og}\n\n{R_new}\n{frms[3]}')
	
	

	


	fn_stdout.f= f

	return fn_stdout

	
	
@C.pass_context
def table(ctx):
	s= ' '
	h='\u2550'
	trc='\u2557'
	tlc='\u2554'
	tt='\u2566'
	bt='\u2569'
	brc='\u255d'
	blc='\u255a'
	csd='\u256C'
	cse='\u2563'
	css='\u2560'
	csi='\u256C\u2550'
	uni= '\u2500\u2501\u2502\u2503\u2504\u2505\u2506\u2507\u2508\u2509\u2510\u2511\u2512\u2513\u2514\u2515\u2516', \
  '\u2517\u2518\u2519\u2520\u2521\u2522\u2523\u2524\u2525\u2526\u2527\u2528\u2529\u2530\u2531\u2532\u2533\u2534\u2535\u2536\u2537\u2538\u2539\u2540\u2541\u2542\u2543\u2544\u2545\u2546\u2547\u2548\u2549\u2550\u2551\u2552\u2553\u2554\u2555\u2556\u2557\u2558\u2559\u2560\u2561\u2562\u2563\u2564\u2565\u2566\u2567\u2568\u2569\u2570\u2571\u2572\u2573\u2574\u2575\u2576\u2577\u2578\u2579\u2580\u2581\u2582\u2583\u2584\u2585\u2586\u2587\u2588\u2589\u2590\u2591\u2592\u2593\u2594\u2595\u2596\u2597\u2598\u2599'

	R_Ttt='╔══════════╦════════════╦══════════════════════════════════════════════╗'
	R_Ths_A={
		'HEAD'		:   'AND =[&]- '+h*8,
		'A1'			:		f'\x1b[0m{h}',
		'HEX'			:   h*8,
		'CSD'			:		csd,
		'CSE'			:		cse,
		'CSI'			:		csi,
		'G'				:		39,
		'Y'				:		39,
		'R'				:		39,
		'A2'			:   h*44,
		'S'				:		h,
		'CSS'			:		css,
		}
	R_Ths_O={
		'HEAD'		:   h+'OR =[+]- '+h*8,
		'A1'			:		f'\x1b[0m{h}',
		'HEX'			:   h*8,
		'CSD'			:		csd,
		'CSE'			:		cse,
		'CSI'			:		csi,
		'G'				:		39,
		'Y'				:		39,
		'R'				:		39,
		'A2'			:   h*44,
		'S'				:		h,
		'CSS'			:		css,
		}

	R_Ttb='╚══════════╩════════════╩══════════════════════════════════════════════╝'
	G=[0,0,12,25,72]
	D1=f'\x1b[{G[1]}G║\x1b[{G[2]}G║\x1b[{G[3]}G║\x1b[{G[4]}G║'
	# ctx.obj['R']['R_Ttt']	= \
	# 	f'║          ║           ║                                             ║\n'
	# f'╠═════════╬════════════╬════════════════════════════════════════════╣\n' \


	ctx.obj['R']['R_Ttt']	= f'{R_Ttt}\n{D1}\n{R_Ttb}' #f'\x1b[{G[2]}G\x1b[0m{tlc}\x1b[{G[5]}G\x1b[0m{trc}'
	# ctx.obj['R']['R_Ttt'] += f'\x1b[{G[3]}G\x1b[0m{tt}\x1b[{G[4]}G\x1b[0m{tt}'
	# ctx.obj['R']['R_Ttt'] += f'\x1b[10C\x1b[{G[3]}G\x1b[0m{css}\x1b[{G[4]}G\x1b[0m{css}'
	
	# ctx.obj['R']['R_Ttt']		+=	rowboat('rowfx',**R_Ttt)
	ctx.obj['R']['R_Ths_A']	=	rowboat('rowfx',**R_Ths_A)
	ctx.obj['R']['R_Ths_O']	=	rowboat('rowfx',**R_Ths_O)
	ctx.obj['R']['R_Ttb']		=	R_Ttb
	return [ctx.obj['R']['R_Ttt'],ctx.obj['R']['R_Ths_A'],ctx.obj['R']['R_Ths_O'],ctx.obj['R']['R_Ttb']]



def item(**k):
	G=k.get('G')
	S=k.get('S')
	m=k.get('m')
	return f'\x1b[{G}G\x1b[0mG\x1b[{m}m{S}'

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
	
#
# @C.pass_context
# def rowboat(ctx,**k):
# 	SPL 		=   k.get('SPL') 		 	or			'\u2502'
# 	A1 			=   k.get('A1') 		 	or			' #'
# 	A2 			=   k.get('A2')			 	or			'BIN'
# 	HEX 		=   k.get('HEX') 		 	or			'0'
# 	NIB 		=   k.get('NIB') 		 	or			''
# 	HEAD 		=   k.get('HEAD') 	 	or			''
# 	ACTIVE 	=   k.get('ACTIVE')	 	or	 		''
# 	COL1 		=   k.get('COL1') 	 	or			''
# 	COL2 		=   k.get('COL2') 	 	or			''
# 	CSD 		=   k.get('CSD') 		 	or			'\u2551'
# 	CSE 		=   k.get('CSE') 		 	or			'\u2551'
# 	CSI 		=   k.get('CSI') 		 	or			'\u2551'
# 	CSS			=   k.get('CSS') 		 	or			'\u2551'
# 	G 			=   k.get('G') 			 	or			37
# 	Y 			=   k.get('Y') 			 	or			33
# 	R 			=   k.get('R') 			 	or			31
# 	S				=   k.get('S') 			 	or			' '
#
# 	css		=		f'{CSS}'
# 	head	=		f'{HEAD}'
# 	csi		=		f'\x1b[12G{CSI}'
# 	a1		=		f'\x1b[{R}m{A1}\x1b[0m'
# 	hexx	=		f''.join([f'\x1b[{Y}m{i}' for i in HEX])
# 	csd		=		f'\x1b[0m{S}{CSD}{S}\x1b[0m'
# 	a2		=		f'\x1b[0;{R}m{A2}'
# 	nib 	=		f''.join([f'\x1b[0;34m{SPL}\x1b[0;{G}m{NIBLE}' for NIBLE in NIB])
# 	cse		= f'\x1b[1D\x1b[1;{G}m{ACTIVE}\x1b[0;39m{S}{CSE}'
# 	row = f''.join([css, head, csi, a1, hexx, csd, a2, nib, cse])
# 	return row
#
