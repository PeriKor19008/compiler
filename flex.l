%{
	#include <stdio.h>
	#include "y.tab.h"
	int list_count=0;
%}

%s ALPHA BETA GAMMA CHECK LISTCHECK
%option noyywrap yylineno
digit   [0-9]
num	{digit}+
plus	"+"
minus 	"-"
true 	"true"
false	"false"
zeroone	[01]
twotoeight	[2-8]
alphanumeric [a-zA-Z0-9]
classitem {alphanumeric}\.{alphanumeric}

%%
<INITIAL>
{
"\n"		{}
"\-" 		{ return '-'; }
"\+"		{ return '+'; }
"\,"		{ return ','; }
"\{"		{ return '{'; }
"\}"		{ return '}'; }
"\["		{ return '['; }
"\]"		{ return ']'; }
"\."		{ return '.'; }
"\"id\": 1"	{ return IDONE; }
"\"id\":1"	{ return IDONE; }
"\"last\":"	{ return LAST; }
"\"active\":"	{ return ACTIVE; }
"\"gameId\":" 	{ BEGIN(CHECK);return GAMEID; }
"\"drawId\":"  	{ return DRAWID; }
"\"drawTime\":" 	{ return DRAW_TIME; }
"\"status\":"	{ BEGIN(ALPHA); return STATUS; }
"\"drawBreak\":"	{ return DRAW_BREAK; }
"\"visualDraw\":"	{ return VISUAL_DRAW; }    
"\"pricePoints\":"	{ return PRICE_POINTS; }
"\"amount\":" 	{ return AMOUNT; }
"\"winningNumbers\":" 	{ return WINNING_NUMBERS; }	 
"\"list\":" 	{ BEGIN(LISTCHECK);return LIST; }
"\"bonus\":" 	{ return BONUS; }
"\"prizeCategories\":" 	{ return PRIZE_CATEGORIES; }
"\"id\":" { BEGIN(BETA); return ID; }
"\"divident\":" 	{ return DIVIDENT; }
"\"winners\":" 	{ return WINNERS; }
"\"distributed\":"  	{ return DISTRIBUTED; }
"\"jackpot\":" 	{ return JACKPOT; }
"\"fixed\":" 	{ return FIXED; }
"\"categoryType\":" 	{ BEGIN(BETA); return CATEGORY_TYPE; }
"\"gameType\":"	{ BEGIN(ALPHA); return GAMETYPE; }
"\"minimumDistributed\":"   { return MINIMUM_DISTRIBUTED; }
"\"wagerStatistics\":"  	{ return WAGER_STATISTICS; }
"\"columns\":"	{ return COLUMNS; }
"\"wagers\":"	{ return WAGERS; }
"\"addOn\":"	{ BEGIN(ALPHA);  return ADDON; }
{num}		{ yylval = atoi(yytext); return POSITIVE_INTEGER; }
"\"content\":"	{return CONTENT;}
"\"sort\":"	{return SORT;}
"\"totalPages\":"	{return TOTAL_PAGES;}
"\"totalElements\":"	{return TOTAL_ELEMENTS;}
"\"last2\":"	{return LAST;}
"\"numberOfElements\":"	{return NUMBER_OF_ELEMENTS;}
"\"direction\":"	{ BEGIN(ALPHA); return DIRECTION;}
"\"property\":"		{ BEGIN(GAMMA); return PROPERTY;}
"\"ignoreCase\":"	{return IGNORE_CASE;}
"\"nullHandling\":"	{ BEGIN(ALPHA); return NULL_HANDLING;}
"\"descending\":"	{return DESCENDING;}
"\"ascending\":"	{return ASCENDING;}
"\"first\":"		{return FIRST;}
"\"size\":"		{return SIZE;}
"\"number\":"		{return NUMBER;}
"true"			{ return TRUE; }
"false"			{ return FALSE; }
}

<ALPHA>
{
	"\["		{ return '['; }
	"\]"		{ BEGIN(INITIAL); return ']'; }
	{alphanumeric}	{ BEGIN(INITIAL); return  ALPHANUMERIC; }
}

<BETA>
{
	{zeroone}	{ BEGIN(INITIAL); return POSITIVE_INTEGER_ZERO_OR_ONE; }
	{twotoeight}	{ BEGIN(INITIAL); return POSITIVE_INTEGER_TWO_TO_EIGHT;}
}

<GAMMA>
{
	{classitem}	{ BEGIN(INITIAL); return CLASSITEM; }
}
<CHECK>{

"\n"		{}
{num}		{ yylval = atoi(yytext); check(yylval);BEGIN(INITIAL); return POSITIVE_INTEGER;}

}

<LISTCHECK>{

"\n"		{}
"\,"		{ return ','; }
{num}		{ yylval = atoi(yytext); list_count++; num_range(yylval);return POSITIVE_INTEGER;}
"\["		{ return '['; }
"\]"		{ list_check(list_count);list_count=0;BEGIN(INITIAL);return ']'; }


}

%%
void num_range(int val){
	if((0<val)&&(val<45))
		return;
	printf("in list item thre is value (%d) outside the allowed range",val);
	return;
}
void list_check(int count){
	if(count==5)
		return;
	printf("list embeded JSON items are  %d, not 5 \n",count);
	return;
}
void check (int val){
	if(val == 1100)
		return;
	if(val == 1110)
		return;
	if(val == 2100)
		return;
	if(val == 2101)
		return;
	if(val == 5103)
		return;	
		
	if(val == 5104)
		return;	
	if(val == 5106)
		return;	
		
	printf("wrong input at gameId");
		return;
}
