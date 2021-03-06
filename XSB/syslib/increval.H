/* File:      increval.H
** Author(s): Diptikalyan Saha, C. R. Ramakrishnan
** Contact:   xsb-contact@cs.sunysb.edu
** 
** Copyright (C) The Research Foundation of SUNY, 1986, 1993-1998
** 
** XSB is free software; you can redistribute it and/or modify it under the
** terms of the GNU Library General Public License as published by the Free
** Software Foundation; either version 2 of the License, or (at your option)
** any later version.
** 
** XSB is distributed in the hope that it will be useful, but WITHOUT ANY
** WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
** FOR A PARTICULAR PURPOSE.  See the GNU Library General Public License for
** more details.
** 
** You should have received a copy of the GNU Library General Public License
** along with XSB; if not, write to the Free Software Foundation,
** Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
**
** $$
** 
*/
:- export
%   incr_table_update/0,
%   incr_table_update/1,
%   incr_table_update/2,
   incr_assert/3,
   incr_assert/1,
   incr_asserta/1,
   incr_assertz/1,
   incr_retractall/1,
   incr_retract/1,
%   incr_assert_inval/1,
%   incr_asserta_inval/1,
%   incr_assertz_inval/1,
%   incr_assert_inval/3,
%   incr_retractall_inval/1,
%   incr_retract_inval/1,
   incr_invalidate_call/1,
   incr_directly_depends/2,
   incr_trans_depends/2,
   incr_eval_builtin/3.
%:- export incr_asserta_immed/1,
%   incr_assertz_immed/1,
%   incr_assert_immed/1,
%   incr_retract_immed/1,
%   incr_retractall_immed/1.
:- export lazy_reeval_trap/1.
%:- export lazy_reeval/1b.
:- export invalidate_callnode_trie/1.
   
:- import assert/3,retractall/1, retract/1
	from assert.
:- import member/2
         from basics.
   :- import instantiation_error/3, table_error/1 from error_handler.
:- import term_psc/2, psc_tabled/2,psc_get_incr/2 from machine.
:- import findall/3
         from setof.
:- import get_calls/3 from tables.
:- import (table)/1 from standard.
