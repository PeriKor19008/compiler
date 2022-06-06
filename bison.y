%{
	#include <stdio.h>
	void yyerror(const char *);
	extern FILE *yyin;
	extern FILE *yyout;
	extern int yylineno;
%}

%define parse.error verbose
%locations

//Symbol Tokens
%token ','
%token '{'
%token '}'
%token '['
%token ']'

//Identifier Tokens
%token LAST
%token ACTIVE
%token GAMEID
%token DRAWID
%token DRAW_TIME
%token STATUS
%token DRAW_BREAK
%token VISUAL_DRAW
%token PRICE_POINTS
%token AMMOUNT
%token WINNING_NUMBERS
%token LIST
%token BONUS
%token PRIZE_CATEGORIES
%token ID
%token DIVIDENT
%token WINNERS
%token DISTRIBUTED
%token JACKPOT
%token FIXED
%token CATEGORY_TYPE
%token GAMETYPE
%token MINIMUM_DISTRIBUTED
%token WAGER_STATISTICS
%token COLUMNS
%token WAGERS
%token ADDON

//Value Tokens
%token POSITIVE_INTEGER
%token ALPHANUMERIC
%token POSITIVE_REAL
%token ARRAY_POSITIVE_INTEGERS
%token ARRAY_POSITIVE_INTEGER
%token POSITIVE_INTEGER_TWO_TO_EIGHT
%token BOOLEAN
%token JSON_ARRAY
%token REAL
%token '1'

%%
compiler: '{' last ',' active '}' {printf("The Syntax was Correct!\n");}

last: LAST {}; //This is temporary

//Below is the correct  entry
//last: LAST '{'  gameId ',' drawId ',' drawTime ',' status ',' drawBreak ',' visualDraw ',' pricePoints ',' winningNumbers ',' prizeCategories ',' wagerStatistics '}' {};

active: ACTIVE {}; // This is temporary

// Below is the correct entry
//active: ACTIVE '{' gameId ',' drawId ',' drawTime ',' status ',' drawBreak ',' visualDraw ',' pricePoints ',' prizeCategories ',' wagerStatistics '}' {}

gameId: GAMEID POSITIVE_INTEGER {}
drawId: DRAWID POSITIVE_INTEGER {}
drawTime: DRAW_TIME POSITIVE_INTEGER {}
status: STATUS ALPHANUMERIC {}
drawBreak: DRAW_BREAK POSITIVE_INTEGER {}
visualDraw: VISUAL_DRAW POSITIVE_INTEGER {}
pricePoints: PRICE_POINTS ammount {}
ammount: AMMOUNT POSITIVE_REAL {}
winningNumbers: WINNING_NUMBERS '{' list ',' bonus '}' {}
list: LIST ARRAY_POSITIVE_INTEGERS {}
bonus: BONUS ARRAY_POSITIVE_INTEGER {}
prizeCategories: PRIZE_CATEGORIES '[' '1' ',' divident ',' winners ',' distributed ',' jackpot ',' fixed ',' categoryType ',' gameType ',' minimumDistributed ']' {}
	       | PRIZE_CATEGORIES '[' id ',' divident ',' winners ',' distributed ',' jackpot ',' fixed ',' categoryType ',' gameType ']' {}
id: ID POSITIVE_INTEGER_TWO_TO_EIGHT {}
divident: DIVIDENT POSITIVE_REAL {}
winners: WINNERS POSITIVE_INTEGER {}
distributed: DISTRIBUTED POSITIVE_REAL {}
jackpot: JACKPOT POSITIVE_REAL {}
fixed: FIXED POSITIVE_REAL {}
categoryType: CATEGORY_TYPE BOOLEAN {}
gameType: GAMETYPE ALPHANUMERIC {}
minimumDistributed: MINIMUM_DISTRIBUTED POSITIVE_REAL 
wagerStatistics: WAGER_STATISTICS '{' columns ',' wagers ',' addOn '}'{}
columns: COLUMNS POSITIVE_INTEGER {}
wagers: WAGERS POSITIVE_INTEGER {}
addOn: ADDON JSON_ARRAY {}
%%

void yyerror(const char *errmsg)
{
	fprintf(stderr, "error in line:  %d\n%s\n", yylineno, errmsg);
}

int main (int argc, char **argv)
{
	++argv; --argc;
	if (argc > 0)
 		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	yyout = fopen("output", "w");
	yyparse();
	return 0;
}
