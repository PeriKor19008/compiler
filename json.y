%{
#include <stdio.h>
void yyerror(char *);
extern FILE *yyin;
extern FILE *yyout;
%}

//Symbol Tokens
%token ,
%token {
%token }
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
%token POSITIVE_INTEGER_ONE_TO_EIGHT
%token BOOLEAN
%token JSON_ARRAY
%token REAL

%%
program: last active {printf("It is working!\n");}

last: LAST {printf("Found last!\n");};
active: ACTIVE {printf("Found active!\n");};
%%

void yyerror(char *s)
{
	printf("Error was found!\n");
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
