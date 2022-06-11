/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LAST = 258,
    ACTIVE = 259,
    GAMEID = 260,
    DRAWID = 261,
    DRAW_TIME = 262,
    STATUS = 263,
    DRAW_BREAK = 264,
    VISUAL_DRAW = 265,
    PRICE_POINTS = 266,
    AMOUNT = 267,
    WINNING_NUMBERS = 268,
    LIST = 269,
    BONUS = 270,
    PRIZE_CATEGORIES = 271,
    ID = 272,
    DIVIDENT = 273,
    WINNERS = 274,
    DISTRIBUTED = 275,
    JACKPOT = 276,
    FIXED = 277,
    CATEGORY_TYPE = 278,
    GAMETYPE = 279,
    MINIMUM_DISTRIBUTED = 280,
    WAGER_STATISTICS = 281,
    COLUMNS = 282,
    WAGERS = 283,
    ADDON = 284,
    CONTENT = 285,
    TOTAL_PAGES = 286,
    TOTAL_ELEMENTS = 287,
    NUMBER_OF_ELEMENTS = 288,
    SORT = 289,
    DIRECTION = 290,
    PROPERTY = 291,
    IGNORE_CASE = 292,
    NULL_HANDLING = 293,
    DESCENDING = 294,
    ASCENDING = 295,
    FIRST = 296,
    SIZE = 297,
    NUMBER = 298,
    IDONE = 299,
    CLASSITEM = 300,
    POSITIVE_INTEGER = 301,
    ALPHANUMERIC = 302,
    POSITIVE_INTEGER_TWO_TO_EIGHT = 303,
    POSITIVE_INTEGER_ZERO_OR_ONE = 304,
    TRUE = 305,
    FALSE = 306
  };
#endif
/* Tokens.  */
#define LAST 258
#define ACTIVE 259
#define GAMEID 260
#define DRAWID 261
#define DRAW_TIME 262
#define STATUS 263
#define DRAW_BREAK 264
#define VISUAL_DRAW 265
#define PRICE_POINTS 266
#define AMOUNT 267
#define WINNING_NUMBERS 268
#define LIST 269
#define BONUS 270
#define PRIZE_CATEGORIES 271
#define ID 272
#define DIVIDENT 273
#define WINNERS 274
#define DISTRIBUTED 275
#define JACKPOT 276
#define FIXED 277
#define CATEGORY_TYPE 278
#define GAMETYPE 279
#define MINIMUM_DISTRIBUTED 280
#define WAGER_STATISTICS 281
#define COLUMNS 282
#define WAGERS 283
#define ADDON 284
#define CONTENT 285
#define TOTAL_PAGES 286
#define TOTAL_ELEMENTS 287
#define NUMBER_OF_ELEMENTS 288
#define SORT 289
#define DIRECTION 290
#define PROPERTY 291
#define IGNORE_CASE 292
#define NULL_HANDLING 293
#define DESCENDING 294
#define ASCENDING 295
#define FIRST 296
#define SIZE 297
#define NUMBER 298
#define IDONE 299
#define CLASSITEM 300
#define POSITIVE_INTEGER 301
#define ALPHANUMERIC 302
#define POSITIVE_INTEGER_TWO_TO_EIGHT 303
#define POSITIVE_INTEGER_ZERO_OR_ONE 304
#define TRUE 305
#define FALSE 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
