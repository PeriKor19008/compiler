%{
	#include <stdio.h>
	#include "y.tab.h"
	int list_count=0;
	int prizeCategoriesCounter = 0;
	extern void yyerror(const char *);
	#define PRINT fwrite (yytext, yyleng, 1, yyout)
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
"\-" 		{ PRINT; return '-'; }
"\+"		{ PRINT; return '+'; }
"\,"		{ PRINT; return ','; }
"\{"		{ PRINT; return '{'; }
"\}"		{ PRINT; return '}'; }
"\["		{ PRINT; return '['; }
"\]"		{ PRINT; return ']'; }
"\."		{ PRINT; return '.'; }
"\"id\": 1"	{ PRINT; return IDONE; }
"\"id\":1"	{ PRINT; return IDONE; }
"\"last\":"	{ PRINT; return LAST; }
"\"active\":"	{ PRINT; return ACTIVE; }
"\"gameId\":" 	{ BEGIN(CHECK); PRINT; return GAMEID; }
"\"drawId\":"  	{ PRINT; return DRAWID; }
"\"drawTime\":" 	{ PRINT; return DRAW_TIME; }
"\"status\":"	{ BEGIN(ALPHA); PRINT; return STATUS; }
"\"drawBreak\":"	{ PRINT; return DRAW_BREAK; }
"\"visualDraw\":"	{ PRINT; return VISUAL_DRAW; }    
"\"pricePoints\":"	{ PRINT; return PRICE_POINTS; }
"\"amount\":" 	{ PRINT; return AMOUNT; }
"\"winningNumbers\":" 	{ PRINT; return WINNING_NUMBERS; }	 
"\"list\":" 	{ BEGIN(LISTCHECK); PRINT; return LIST; }
"\"bonus\":" 	{ PRINT; return BONUS; }
"\"prizeCategories\":" 	{ prizeCategoriesCounter = 0; PRINT; return PRIZE_CATEGORIES; }
"\"id\":" { BEGIN(BETA); PRINT; return ID; }
"\"divident\":" 	{ prizeCategoriesCounter++; checkMaximumPrizeCategories(); PRINT; return DIVIDENT; }
"\"winners\":" 	{ PRINT; return WINNERS; }
"\"distributed\":"  	{ PRINT; return DISTRIBUTED; }
"\"jackpot\":" 	{ PRINT; return JACKPOT; }
"\"fixed\":" 	{ PRINT; return FIXED; }
"\"categoryType\":" 	{ BEGIN(BETA); PRINT; return CATEGORY_TYPE; }
"\"gameType\":"	{ BEGIN(ALPHA); PRINT; return GAMETYPE; }
"\"minimumDistributed\":"   { PRINT; return MINIMUM_DISTRIBUTED; }
"\"wagerStatistics\":"  	{ checkMinimumPrizeCategories(); PRINT; return WAGER_STATISTICS; }
"\"columns\":"	{ PRINT; return COLUMNS; }
"\"wagers\":"	{ PRINT; return WAGERS; }
"\"addOn\":"	{ BEGIN(ALPHA); PRINT; return ADDON; }
{num}		{ yylval = atoi(yytext); PRINT; return POSITIVE_INTEGER; }
"\"content\":"	{ PRINT; return CONTENT;}
"\"sort\":"	{ PRINT; return SORT;}
"\"totalPages\":"	{ PRINT; return TOTAL_PAGES;}
"\"totalElements\":"	{ PRINT; return TOTAL_ELEMENTS;}
"\"last2\":"	{ PRINT; return LAST;}
"\"numberOfElements\":"	{ PRINT; return NUMBER_OF_ELEMENTS;}
"\"direction\":"	{ BEGIN(ALPHA); PRINT; return DIRECTION;}
"\"property\":"		{ BEGIN(GAMMA); PRINT; return PROPERTY;}
"\"ignoreCase\":"	{ PRINT; return IGNORE_CASE;}
"\"nullHandling\":"	{ BEGIN(ALPHA); PRINT; return NULL_HANDLING;}
"\"descending\":"	{ PRINT; return DESCENDING;}
"\"ascending\":"	{ PRINT; return ASCENDING;}
"\"first\":"		{ PRINT; return FIRST;}
"\"size\":"		{ PRINT; return SIZE;}
"\"number\":"		{ PRINT; return NUMBER;}
"true"			{ PRINT; return TRUE; }
"false"			{ PRINT; return FALSE; }
}

<ALPHA>
{
	"\["		{ PRINT; return '['; }
	"\]"		{ BEGIN(INITIAL); PRINT; return ']'; }
	{alphanumeric}	{ BEGIN(INITIAL); PRINT; return  ALPHANUMERIC; }
}

<BETA>
{
	{zeroone}	{ BEGIN(INITIAL); PRINT; return POSITIVE_INTEGER_ZERO_OR_ONE; }
	{twotoeight}	{ BEGIN(INITIAL); PRINT; return POSITIVE_INTEGER_TWO_TO_EIGHT;}
}

<GAMMA>
{
	{classitem}	{ BEGIN(INITIAL); PRINT; return CLASSITEM; }
}
<CHECK>{

"\n"		{}
{num}		{ yylval = atoi(yytext); check(yylval); BEGIN(INITIAL); PRINT; return POSITIVE_INTEGER;}

}

<LISTCHECK>{

"\n"		{}
"\,"		{ PRINT; return ','; }
{num}		{ yylval = atoi(yytext); list_count++; num_range(yylval); PRINT; return POSITIVE_INTEGER;}
"\["		{ PRINT; return '['; }
"\]"		{ list_check(list_count);list_count=0; BEGIN(INITIAL); PRINT; return ']'; }


}

%%
void num_range(int val){
	if((0<val)&&(val<45))
		return;
	fprintf(yyout,"\nError: In List Item There Is Value (%d) Which Is Outside Of The Allowed Range!\n",val);
	exit(0);
}
void list_check(int count){
	if(count==5)
		return;
	fprintf(yyout, "\nError: List Embeded JSON Items Are  %d, Not 5!\n",count);
	exit(0);
}
void check (int val){
	if(val == 1100)
		return;
	else if(val == 1110)
		return;
	else if(val == 2100)
		return;
	else if(val == 2101)
		return;
	else if(val == 5103)
		return;	
		
	else if(val == 5104)
		return;	
	else if(val == 5106)
		return;	
		
	fprintf(yyout, "\nError: Invalid GameId!\n");
		exit(0);
}

void checkMaximumPrizeCategories()
{
	if(prizeCategoriesCounter > 8)
	{
		fprintf(yyout, "\nError: prizeCategories Has More Than 8 Embedded JSON Objects!\n");
		exit(0);
	}
	return;
}

void checkMinimumPrizeCategories()
{
	if(prizeCategoriesCounter < 8)
	{
		fprintf(yyout, "\nError: prizeCategories Has Less Than 8 Embedded JSON Objects!\n");
		exit(0);
	}
	return;
}
