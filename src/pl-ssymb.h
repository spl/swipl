/*  $Id$

    Part of SWI-Prolog

    Author:        Jan Wielemaker
    E-mail:        jan@swi.psy.uva.nl
    WWW:           http://www.swi-prolog.org
    Copyright (C): 1985-2002, University of Amsterdam

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#define pl_dwim_match		Sdwimmatch
#define pl_dwim_predicate	Sdwimpred
#define store_string		Sstores
#define store_string_local	Sstoresl
#define pl_greaterNumbers	Sgn
#define pl_greaterEqualNumbers	Sgen
#define pl_greaterStandard	Sgs
#define pl_greaterEqualStandard	Sges
#define pl_print		Sprt
#define pl_print2		Sprt2
#define pl_profile		Sprof
#define pl_profile_count	Sprofcnt
#define pl_protocol		Sprot
#define pl_protocola		Sprota
#define pl_protocolling		Sproting
#define pl_exists_file		Sef
#define pl_exists_directory	Sed
#define pl_close		Sclose
#define pl_close_wic		Sclosewic
#define pl_collect_bag		Scollbag
#define pl_collect_parms	Scollparms
#define pl_current_arithmetic_function Scfa
#define pl_current_atom		Sca
#define pl_current_input	Scin
#define pl_current_output	Scout
#define pl_current_functor	Scfunctor
#define pl_current_flag		Scflag
#define pl_current_predicate	Scpred
#define pl_current_module	Scmodule
#define pl_current_op		Scop
#define pl_current_key		Sckey
#define pl_debug		Sdebug
#define pl_debugging		Sdebugging
#define pl_open_null_stream	Sopennull
#define pl_openwic		Sopenwic
#define pl_prolog_current_frame	Spcf
#define pl_prolog_frame_attribute	Spfa
#define pl_trace		Strace
#define pl_format		Sfmt
#define pl_format3		Sfmt3
#define pl_format_number	Sfmtnumber
#define pl_format_predicate	Sfmtpred
#define	pl_write		Swrt
#define	pl_writeq		Swrtq
#define	pl_write2		Swrt2
#define	pl_writeq2		Swrtq2
#define pl_string		Sstr
#define pl_string_length	Sstrl
#define pl_string_to_atom	Sstrta
#define pl_string_to_list	Sstrtl
#define	pl_lessEqualNumbers	Slen
#define pl_lessEqualStandard	Sles
#define pl_concat		Sconcat
#define pl_concat_atom		Sconcata
#define	pl_structural_equal	Sse
#define	pl_structural_nonequal	Ssne
#define pl_number		Snumber
#define pl_numbervars		Snvars
#define pl_atom_hashstat	Sahashstat
#define	pl_atom			Satom
#define pl_atomic		Satomic
#define pl_atom_length		Salen
#define	isCurrentFunctor	Siscf
#define isCurrentProcedure	Siscp
#define	isCurrentSourceFile	Siscsf
#define isCurrentModule		Siscm
#define isCurrentOperator	Siscop
#define	atomIsFunctor		Saisf
#define	atomIsProcedure		Saisp
#define	atomIsProcedureModule	Saispm
#define	pl_break		Sbrk
#define pl_break1		Sbrk1
#define pl_start_consult	Sstc
#define pl_start_module_wic	Sstmw
#define pl_time_file		Stf
#define pl_time_source_file	Stsf
#define pl_line_count		Slcnt
#define pl_line_position	Slpos
#define pl_list_references	Slr
#define pl_list_active_procedures Slap
#define	pl_display		Sdispl
#define	pl_displayq		Sdisplq
#define	pl_display2		Sdispl2
#define	pl_displayq2		Sdisplq2
#define decompileHead		Sdecomp
#define	decompile		Sdecomph
#define pl_assertz		Sastz
#define pl_asserta		Sasta
#define pl_assertz2		Sastz2
#define pl_asserta2		Sasta2
#define pl_record_bag		Srecbag
#define pl_record_clause	Sreccl
#define pl_recorda		Sreca
#define pl_recordz		Srecz
#define pl_recorded		Sreced
#define pl_read			Sread
#define pl_read_clause		Srdcl
#define pl_read_clause2		Srdcl2
#define	pl_save_program		Ssavprg
#define	pl_save_program2	Ssavprg2
#define copyTermToGlobal	Scptermg
#define copyTermToHeap		Scptermh
#define pl_equalNumbers		Seqnumbers
#define pl_equal		Seq
#define pl_import		Simport
#define pl_import_wic		Simprtwic
#define pl_export		Sexport
#define pl_export_wic		Sexprtwic
#define pl_tty_get_capability	Sttygcap
#define pl_tty_goto		Sttygoto

#define PROCEDURE_garbage_collect0	Sproc_gc
