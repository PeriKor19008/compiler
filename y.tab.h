/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LAST = 258,                    /* LAST  */
    ACTIVE = 259,                  /* ACTIVE  */
    GAMEID = 260,                  /* GAMEID  */
    DRAWID = 261,                  /* DRAWID  */
    DRAW_TIME = 262,               /* DRAW_TIME  */
    STATUS = 263,                  /* STATUS  */
    DRAW_BREAK = 264,              /* DRAW_BREAK  */
    VISUAL_DRAW = 265,             /* VISUAL_DRAW  */
    PRICE_POINTS = 266,            /* PRICE_POINTS  */
    AMMOUNT = 267,                 /* AMMOUNT  */
    WINNING_NUMBERS = 268,         /* WINNING_NUMBERS  */
    LIST = 269,                    /* LIST  */
    BONUS = 270,                   /* BONUS  */
    PRIZE_CATEGORIES = 271,        /* PRIZE_CATEGORIES  */
    ID = 272,                      /* ID  */
    DIVIDENT = 273,                /* DIVIDENT  */
    WINNERS = 274,                 /* WINNERS  */
    DISTRIBUTED = 275,             /* DISTRIBUTED  */
    JACKPOT = 276,                 /* JACKPOT  */
    FIXED = 277,                   /* FIXED  */
    CATEGORY_TYPE = 278,           /* CATEGORY_TYPE  */
    GAMETYPE = 279,                /* GAMETYPE  */
    MINIMUM_DISTRIBUTED = 280,     /* MINIMUM_DISTRIBUTED  */
    WAGER_STATISTICS = 281,        /* WAGER_STATISTICS  */
    COLUMNS = 282,                 /* COLUMNS  */
    WAGERS = 283,                  /* WAGERS  */
    ADDON = 284,                   /* ADDON  */
    POSITIVE_INTEGER = 285,        /* POSITIVE_INTEGER  */
    ALPHANUMERIC = 286,            /* ALPHANUMERIC  */
    POSITIVE_REAL = 287,           /* POSITIVE_REAL  */
    ARRAY_POSITIVE_INTEGERS = 288, /* ARRAY_POSITIVE_INTEGERS  */
    ARRAY_POSITIVE_INTEGER = 289,  /* ARRAY_POSITIVE_INTEGER  */
    POSITIVE_INTEGER_TWO_TO_EIGHT = 290, /* POSITIVE_INTEGER_TWO_TO_EIGHT  */
    BOOLEAN = 291,                 /* BOOLEAN  */
    JSON_ARRAY = 292,              /* JSON_ARRAY  */
    REAL = 293                     /* REAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LAST 258
#define ACTIVE 259
#define GAMEID 260
#define DRAWID 261
#define DRAW_TIME 262
#define STATUS 263
#define DRAW_BREAK 264
#define VISUAL_DRAW 265
#define PRICE_POINTS 266
#define AMMOUNT 267
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
#define POSITIVE_INTEGER 285
#define ALPHANUMERIC 286
#define POSITIVE_REAL 287
#define ARRAY_POSITIVE_INTEGERS 288
#define ARRAY_POSITIVE_INTEGER 289
#define POSITIVE_INTEGER_TWO_TO_EIGHT 290
#define BOOLEAN 291
#define JSON_ARRAY 292
#define REAL 293

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
