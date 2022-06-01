/* just like Unix wc */
%{
	#include <stdio.h>
	#include "y.tab.h"
%}

%option noyywrap yylineno

%%

"\n"		{}
","		{ return ',';}
"{"		{ return '{';}
"}"		{ return '}';}
"\"last\":"	{ return LAST; }
"\"active\":"	{ return ACTIVE; }

%%
