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
%token '.'
%token ','
%token '{'
%token '}'
%token '['
%token ']'
%token '-'
%token '+'

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
%token AMOUNT
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
//Extra exc2 Tokens
%token CONTENT
%token TOTAL_PAGES
%token TOTAL_ELEMENTS
%token NUMBER_OF_ELEMENTS
%token SORT
%token DIRECTION
%token PROPERTY
%token IGNORE_CASE
%token NULL_HANDLING
%token DESCENDING
%token ASCENDING
%token FIRST
%token SIZE
%token NUMBER
%token IDONE
%token CLASSITEM

//Value Tokens
%token POSITIVE_INTEGER
%token ALPHANUMERIC
%token POSITIVE_INTEGER_TWO_TO_EIGHT
%token POSITIVE_INTEGER_ZERO_OR_ONE
%token TRUE
%token FALSE

%%
compiler:   '{' last ',' active '}' {fprintf(yyout,"The Syntax was Correct!\n");}
	  | '{' content ',' totalPages ',' totalElements ',' last2 ',' numberOfElements ',' sort ',' first ',' size ',' number '}' {fprintf(yyout,"The Syntax was Correct!\n");}
	  ;

last: LAST '{'  gameId ',' drawId ',' drawTime ',' status ',' drawBreak ',' visualDraw ',' pricePoints ',' winningNumbers ',' prizeCategories ',' wagerStatistics '}'  {}

active: ACTIVE '{' gameId ',' drawId ',' drawTime ',' status ',' drawBreak ',' visualDraw ',' pricePoints ',' prizeCategories ',' wagerStatistics '}' {}

positivereal: POSITIVE_INTEGER '.' POSITIVE_INTEGER {}
real: positivereal | '-' positivereal {}
arrayint: POSITIVE_INTEGER ','  arrayint | POSITIVE_INTEGER {}
arrayposints: '[' arrayint ']' {}
arrayposint: '[' POSITIVE_INTEGER ']' {}
jsoncontent: ALPHANUMERIC ',' jsoncontent | ALPHANUMERIC {}
jsonarray: '[' jsoncontent ']' | '[' ']' {}

gameId: GAMEID POSITIVE_INTEGER {}
drawId: DRAWID POSITIVE_INTEGER {}
drawTime: DRAW_TIME POSITIVE_INTEGER {}
status: STATUS ALPHANUMERIC {}
drawBreak: DRAW_BREAK POSITIVE_INTEGER {}
visualDraw: VISUAL_DRAW POSITIVE_INTEGER {}
pricePoints: PRICE_POINTS '{' amount '}' {}
amount: AMOUNT positivereal {}
winningNumbers: WINNING_NUMBERS '{' list ',' bonus '}' {}
list: LIST arrayposints{}
bonus: BONUS arrayposint{}
prizecontent: '{' idone ',' divident ',' winners ',' distributed ',' jackpot ',' fixed ',' categoryType ',' gameType ',' minimumDistributed '}'
		| '{' id ',' divident ',' winners ',' distributed ',' jackpot ',' fixed ',' categoryType ',' gameType '}' {}
prizelisting: prizecontent ',' prizelisting | prizecontent 
prizeCategories: PRIZE_CATEGORIES '[' prizelisting ']' {}
idone: IDONE {}
id: ID POSITIVE_INTEGER_TWO_TO_EIGHT {}
divident: DIVIDENT positivereal {}
winners: WINNERS POSITIVE_INTEGER {}
distributed: DISTRIBUTED positivereal {}
jackpot: JACKPOT positivereal {}
fixed: FIXED positivereal {}
categoryType: CATEGORY_TYPE POSITIVE_INTEGER_ZERO_OR_ONE {}
gameType: GAMETYPE ALPHANUMERIC {}
minimumDistributed: MINIMUM_DISTRIBUTED positivereal 
wagerStatistics: WAGER_STATISTICS '{' columns ',' wagers ',' addOn '}' {}
columns: COLUMNS POSITIVE_INTEGER {}
wagers: WAGERS POSITIVE_INTEGER {}
addOn: ADDON jsonarray {}

//Extra exc2 Tokens
contentlisting: '{' gameId ',' drawId ',' drawTime ',' status ',' drawBreak ',' visualDraw ',' pricePoints ',' winningNumbers ',' prizeCategories ',' wagerStatistics '}' ',' contentlisting |  '{' gameId ',' drawId ',' drawTime ',' status ',' drawBreak ',' visualDraw ',' pricePoints ',' winningNumbers ',' prizeCategories ',' wagerStatistics '}' ',' {};
content: CONTENT '[' contentlisting ']' {} 

sort: SORT '[' '{'  direction ',' property ',' ignoreCase ',' nullHandling ',' descending ',' ascending '}' ']' {};

totalPages: TOTAL_PAGES POSITIVE_INTEGER {}
totalElements: TOTAL_ELEMENTS POSITIVE_INTEGER {}
boolean: TRUE | FALSE {}
last2: LAST boolean{}
numberOfElements: NUMBER_OF_ELEMENTS POSITIVE_INTEGER {}
direction: DIRECTION ALPHANUMERIC {}
property: PROPERTY CLASSITEM{}
ignoreCase: IGNORE_CASE boolean {}
nullHandling: NULL_HANDLING ALPHANUMERIC {}
descending: DESCENDING boolean {}
ascending: ASCENDING boolean{}
first: FIRST boolean {}
size: SIZE POSITIVE_INTEGER {}
number: NUMBER POSITIVE_INTEGER {}

%%

void yyerror(const char *errmsg)
{
	fprintf(yyout, "error in line:  %d\n%s\n", yylineno, errmsg);
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
