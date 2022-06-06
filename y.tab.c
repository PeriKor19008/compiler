/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison.y"

	#include <stdio.h>
	void yyerror(const char *);
	extern FILE *yyin;
	extern FILE *yyout;
	extern int yylineno;

#line 79 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    CONTENT = 285,                 /* CONTENT  */
    TOTAL_PAGES = 286,             /* TOTAL_PAGES  */
    TOTAL_ELEMENTS = 287,          /* TOTAL_ELEMENTS  */
    NUMBER_OF_ELEMENTS = 288,      /* NUMBER_OF_ELEMENTS  */
    SORT = 289,                    /* SORT  */
    DIRECTION = 290,               /* DIRECTION  */
    PROPERTY = 291,                /* PROPERTY  */
    IGNORE_CASE = 292,             /* IGNORE_CASE  */
    NULL_HANDLING = 293,           /* NULL_HANDLING  */
    DESCENDING = 294,              /* DESCENDING  */
    ASCENDING = 295,               /* ASCENDING  */
    FIRST = 296,                   /* FIRST  */
    SIZE = 297,                    /* SIZE  */
    NUMBER = 298,                  /* NUMBER  */
    POSITIVE_INTEGER = 299,        /* POSITIVE_INTEGER  */
    ALPHANUMERIC = 300,            /* ALPHANUMERIC  */
    POSITIVE_REAL = 301,           /* POSITIVE_REAL  */
    ARRAY_POSITIVE_INTEGERS = 302, /* ARRAY_POSITIVE_INTEGERS  */
    ARRAY_POSITIVE_INTEGER = 303,  /* ARRAY_POSITIVE_INTEGER  */
    POSITIVE_INTEGER_TWO_TO_EIGHT = 304, /* POSITIVE_INTEGER_TWO_TO_EIGHT  */
    BOOLEAN = 305,                 /* BOOLEAN  */
    JSON_ARRAY = 306,              /* JSON_ARRAY  */
    REAL = 307,                    /* REAL  */
    CONTENTOBJECT = 308            /* CONTENTOBJECT  */
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
#define POSITIVE_INTEGER 299
#define ALPHANUMERIC 300
#define POSITIVE_REAL 301
#define ARRAY_POSITIVE_INTEGERS 302
#define ARRAY_POSITIVE_INTEGER 303
#define POSITIVE_INTEGER_TWO_TO_EIGHT 304
#define BOOLEAN 305
#define JSON_ARRAY 306
#define REAL 307
#define CONTENTOBJECT 308

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* ','  */
  YYSYMBOL_4_ = 4,                         /* '{'  */
  YYSYMBOL_5_ = 5,                         /* '}'  */
  YYSYMBOL_6_ = 6,                         /* '['  */
  YYSYMBOL_7_ = 7,                         /* ']'  */
  YYSYMBOL_LAST = 8,                       /* LAST  */
  YYSYMBOL_ACTIVE = 9,                     /* ACTIVE  */
  YYSYMBOL_GAMEID = 10,                    /* GAMEID  */
  YYSYMBOL_DRAWID = 11,                    /* DRAWID  */
  YYSYMBOL_DRAW_TIME = 12,                 /* DRAW_TIME  */
  YYSYMBOL_STATUS = 13,                    /* STATUS  */
  YYSYMBOL_DRAW_BREAK = 14,                /* DRAW_BREAK  */
  YYSYMBOL_VISUAL_DRAW = 15,               /* VISUAL_DRAW  */
  YYSYMBOL_PRICE_POINTS = 16,              /* PRICE_POINTS  */
  YYSYMBOL_AMMOUNT = 17,                   /* AMMOUNT  */
  YYSYMBOL_WINNING_NUMBERS = 18,           /* WINNING_NUMBERS  */
  YYSYMBOL_LIST = 19,                      /* LIST  */
  YYSYMBOL_BONUS = 20,                     /* BONUS  */
  YYSYMBOL_PRIZE_CATEGORIES = 21,          /* PRIZE_CATEGORIES  */
  YYSYMBOL_ID = 22,                        /* ID  */
  YYSYMBOL_DIVIDENT = 23,                  /* DIVIDENT  */
  YYSYMBOL_WINNERS = 24,                   /* WINNERS  */
  YYSYMBOL_DISTRIBUTED = 25,               /* DISTRIBUTED  */
  YYSYMBOL_JACKPOT = 26,                   /* JACKPOT  */
  YYSYMBOL_FIXED = 27,                     /* FIXED  */
  YYSYMBOL_CATEGORY_TYPE = 28,             /* CATEGORY_TYPE  */
  YYSYMBOL_GAMETYPE = 29,                  /* GAMETYPE  */
  YYSYMBOL_MINIMUM_DISTRIBUTED = 30,       /* MINIMUM_DISTRIBUTED  */
  YYSYMBOL_WAGER_STATISTICS = 31,          /* WAGER_STATISTICS  */
  YYSYMBOL_COLUMNS = 32,                   /* COLUMNS  */
  YYSYMBOL_WAGERS = 33,                    /* WAGERS  */
  YYSYMBOL_ADDON = 34,                     /* ADDON  */
  YYSYMBOL_CONTENT = 35,                   /* CONTENT  */
  YYSYMBOL_TOTAL_PAGES = 36,               /* TOTAL_PAGES  */
  YYSYMBOL_TOTAL_ELEMENTS = 37,            /* TOTAL_ELEMENTS  */
  YYSYMBOL_NUMBER_OF_ELEMENTS = 38,        /* NUMBER_OF_ELEMENTS  */
  YYSYMBOL_SORT = 39,                      /* SORT  */
  YYSYMBOL_DIRECTION = 40,                 /* DIRECTION  */
  YYSYMBOL_PROPERTY = 41,                  /* PROPERTY  */
  YYSYMBOL_IGNORE_CASE = 42,               /* IGNORE_CASE  */
  YYSYMBOL_NULL_HANDLING = 43,             /* NULL_HANDLING  */
  YYSYMBOL_DESCENDING = 44,                /* DESCENDING  */
  YYSYMBOL_ASCENDING = 45,                 /* ASCENDING  */
  YYSYMBOL_FIRST = 46,                     /* FIRST  */
  YYSYMBOL_SIZE = 47,                      /* SIZE  */
  YYSYMBOL_NUMBER = 48,                    /* NUMBER  */
  YYSYMBOL_POSITIVE_INTEGER = 49,          /* POSITIVE_INTEGER  */
  YYSYMBOL_ALPHANUMERIC = 50,              /* ALPHANUMERIC  */
  YYSYMBOL_POSITIVE_REAL = 51,             /* POSITIVE_REAL  */
  YYSYMBOL_ARRAY_POSITIVE_INTEGERS = 52,   /* ARRAY_POSITIVE_INTEGERS  */
  YYSYMBOL_ARRAY_POSITIVE_INTEGER = 53,    /* ARRAY_POSITIVE_INTEGER  */
  YYSYMBOL_POSITIVE_INTEGER_TWO_TO_EIGHT = 54, /* POSITIVE_INTEGER_TWO_TO_EIGHT  */
  YYSYMBOL_BOOLEAN = 55,                   /* BOOLEAN  */
  YYSYMBOL_JSON_ARRAY = 56,                /* JSON_ARRAY  */
  YYSYMBOL_REAL = 57,                      /* REAL  */
  YYSYMBOL_58_1_ = 58,                     /* '1'  */
  YYSYMBOL_CONTENTOBJECT = 59,             /* CONTENTOBJECT  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_compiler = 61,                  /* compiler  */
  YYSYMBOL_last = 62,                      /* last  */
  YYSYMBOL_active = 63,                    /* active  */
  YYSYMBOL_gameId = 64,                    /* gameId  */
  YYSYMBOL_drawId = 65,                    /* drawId  */
  YYSYMBOL_drawTime = 66,                  /* drawTime  */
  YYSYMBOL_status = 67,                    /* status  */
  YYSYMBOL_drawBreak = 68,                 /* drawBreak  */
  YYSYMBOL_visualDraw = 69,                /* visualDraw  */
  YYSYMBOL_pricePoints = 70,               /* pricePoints  */
  YYSYMBOL_ammount = 71,                   /* ammount  */
  YYSYMBOL_winningNumbers = 72,            /* winningNumbers  */
  YYSYMBOL_list = 73,                      /* list  */
  YYSYMBOL_bonus = 74,                     /* bonus  */
  YYSYMBOL_prizeCategories = 75,           /* prizeCategories  */
  YYSYMBOL_id = 76,                        /* id  */
  YYSYMBOL_divident = 77,                  /* divident  */
  YYSYMBOL_winners = 78,                   /* winners  */
  YYSYMBOL_distributed = 79,               /* distributed  */
  YYSYMBOL_jackpot = 80,                   /* jackpot  */
  YYSYMBOL_fixed = 81,                     /* fixed  */
  YYSYMBOL_categoryType = 82,              /* categoryType  */
  YYSYMBOL_gameType = 83,                  /* gameType  */
  YYSYMBOL_minimumDistributed = 84,        /* minimumDistributed  */
  YYSYMBOL_wagerStatistics = 85,           /* wagerStatistics  */
  YYSYMBOL_columns = 86,                   /* columns  */
  YYSYMBOL_wagers = 87,                    /* wagers  */
  YYSYMBOL_addOn = 88,                     /* addOn  */
  YYSYMBOL_content = 89,                   /* content  */
  YYSYMBOL_sort = 90,                      /* sort  */
  YYSYMBOL_totalPages = 91,                /* totalPages  */
  YYSYMBOL_totalElements = 92,             /* totalElements  */
  YYSYMBOL_last2 = 93,                     /* last2  */
  YYSYMBOL_numberOfElements = 94,          /* numberOfElements  */
  YYSYMBOL_direction = 95,                 /* direction  */
  YYSYMBOL_property = 96,                  /* property  */
  YYSYMBOL_ignoreCase = 97,                /* ignoreCase  */
  YYSYMBOL_nullHandling = 98,              /* nullHandling  */
  YYSYMBOL_descending = 99,                /* descending  */
  YYSYMBOL_ascending = 100,                /* ascending  */
  YYSYMBOL_first = 101,                    /* first  */
  YYSYMBOL_size = 102,                     /* size  */
  YYSYMBOL_number = 103                    /* number  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     2,     2,    58,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     6,     2,     7,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     2,     5,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    80,    83,    88,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   121,   123,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "','", "'{'", "'}'",
  "'['", "']'", "LAST", "ACTIVE", "GAMEID", "DRAWID", "DRAW_TIME",
  "STATUS", "DRAW_BREAK", "VISUAL_DRAW", "PRICE_POINTS", "AMMOUNT",
  "WINNING_NUMBERS", "LIST", "BONUS", "PRIZE_CATEGORIES", "ID", "DIVIDENT",
  "WINNERS", "DISTRIBUTED", "JACKPOT", "FIXED", "CATEGORY_TYPE",
  "GAMETYPE", "MINIMUM_DISTRIBUTED", "WAGER_STATISTICS", "COLUMNS",
  "WAGERS", "ADDON", "CONTENT", "TOTAL_PAGES", "TOTAL_ELEMENTS",
  "NUMBER_OF_ELEMENTS", "SORT", "DIRECTION", "PROPERTY", "IGNORE_CASE",
  "NULL_HANDLING", "DESCENDING", "ASCENDING", "FIRST", "SIZE", "NUMBER",
  "POSITIVE_INTEGER", "ALPHANUMERIC", "POSITIVE_REAL",
  "ARRAY_POSITIVE_INTEGERS", "ARRAY_POSITIVE_INTEGER",
  "POSITIVE_INTEGER_TWO_TO_EIGHT", "BOOLEAN", "JSON_ARRAY", "REAL", "'1'",
  "CONTENTOBJECT", "$accept", "compiler", "last", "active", "gameId",
  "drawId", "drawTime", "status", "drawBreak", "visualDraw", "pricePoints",
  "ammount", "winningNumbers", "list", "bonus", "prizeCategories", "id",
  "divident", "winners", "distributed", "jackpot", "fixed", "categoryType",
  "gameType", "minimumDistributed", "wagerStatistics", "columns", "wagers",
  "addOn", "content", "sort", "totalPages", "totalElements", "last2",
  "numberOfElements", "direction", "property", "ignoreCase",
  "nullHandling", "descending", "ascending", "first", "size", "number", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-47)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -2,    -7,     3,   -47,    -1,     1,     4,   -47,    -4,     0,
     -28,   -39,     8,   -47,     7,   -36,    11,   -47,     5,   -47,
     -47,   -20,   -34,    15,   -30,    17,   -47,     9,   -47,    14,
     -26,    21,   -29,    22,   -47,    16,   -47,   -11,   -19,    27,
     -17,    30,   -47,    20,   -47,     2,   -14,    34,    32,    36,
     -47,    25,     6,    -3,    -5,    39,    10,    42,    -8,    45,
     -47,    33,   -47,    12,   -47,    18,    35,    47,    29,    51,
      13,    52,    19,   -47,    38,    23,    24,   -47,    26,   -47,
      53,    55,   -47,    28,    56,    31,    58,    48,    40,   -47,
      41,   -47,   -47,    37,    61,    62,    66,    43,    68,   -47,
      57,   -22,    44,   -47,    46,    49,    67,    50,    70,    73,
      74,    72,    54,    78,   -47,   -47,   -47,    63,    63,    59,
     -47,   -47,    60,    64,    82,    84,    65,    85,    69,    87,
     -47,    71,    71,   -47,    75,   -47,   -47,    76,    89,    93,
      77,    94,   -47,    81,    81,   -47,    79,    80,    95,    96,
      83,    98,   -47,    86,    86,   -47,   -47,    90,    97,   104,
     -47,    91,    91,    92,   107,   108,   -47,    88,    88,    99,
     114,   116,   -47,   100,   100,   101,   117,   115,   -47,   102,
     -47,   105,   120,   -47,   -47
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     4,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     6,     0,     2,
      34,     0,     0,     0,     0,     0,     7,     0,    35,     0,
       0,     0,     0,     0,     8,     0,    36,     0,     0,     0,
       0,     0,     9,     0,    37,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,    38,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,    45,     0,    13,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    40,
       0,    46,     3,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    14,    19,     0,     0,     0,
      32,    42,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,    29,     0,    43,    33,     0,     0,     0,
       0,     0,    21,     0,     0,    30,     0,     0,     0,     0,
       0,     0,    22,     0,     0,    31,    28,     0,     0,     0,
      23,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
      18,     0,     0,    27,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   103,   -31,   -23,
     -24,   -27,   -45,   -46,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     5,    14,    12,    23,    31,    39,    47,    55,
      67,    73,    81,    94,   106,    96,   109,   124,   138,   148,
     158,   164,   170,   176,   182,   111,   127,   141,   151,     6,
      49,    16,    25,    33,    41,    57,    69,    84,    98,   113,
     129,    59,    71,    86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     107,     3,     1,     7,     9,     8,    11,    10,    15,    13,
      17,    18,    19,    20,    21,    26,    22,    24,    27,    28,
      29,    30,    32,    34,    35,    37,    36,    40,     4,    38,
      43,    42,    44,    45,    46,    50,   108,    51,    52,    53,
      54,    48,    61,    58,    60,    63,    56,    64,    65,    66,
      74,    75,    72,    68,    76,    78,    80,    87,    88,    90,
      62,    95,    77,    92,   100,    70,    83,    93,   101,   102,
      79,   104,   115,   117,    85,   110,   118,   105,   119,   120,
      91,   122,    82,    89,    97,   131,   123,   132,   134,    99,
     112,   126,   143,   103,   136,   137,   144,   146,   153,   154,
     161,   139,   114,   156,   116,   128,   147,   162,   140,   121,
     167,   168,   157,   150,   133,   130,   169,   173,   163,   174,
     179,   149,   180,   171,   135,   142,   145,   184,   177,   175,
     159,   152,   181,     0,     0,   165,     0,     0,     0,   155,
       0,   160,     0,   166,     0,     0,     0,     0,     0,     0,
       0,   178,     0,     0,   172,     0,   183,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125
};

static const yytype_int16 yycheck[] =
{
      22,     8,     4,     0,     3,     6,    10,     3,    36,     9,
      49,     3,     5,    49,     3,    49,    11,    37,     3,    49,
       3,    12,     8,    49,     3,     3,    55,    38,    35,    13,
       3,    50,    49,     3,    14,    49,    58,     3,     6,     3,
      15,    39,     3,    46,    49,     3,    40,    55,     3,    16,
       3,    22,    17,    41,     3,     3,    18,     4,     3,     3,
      50,    21,    49,     5,     3,    47,    42,    19,     6,     3,
      51,     3,     5,     3,    48,    31,     3,    20,     4,     7,
      49,     3,    59,    55,    43,     3,    23,     3,     3,    52,
      44,    32,     3,    50,     7,    24,     3,     3,     3,     3,
       3,   132,    53,     5,    54,    45,    25,     3,    33,    55,
       3,     3,    26,    34,    49,    51,    28,     3,    27,     3,
       3,   144,     7,   168,    55,    49,    49,     7,   174,    29,
     154,    51,    30,    -1,    -1,   162,    -1,    -1,    -1,    56,
      -1,    51,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    55,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    61,     8,    35,    62,    89,     0,     6,     3,
       3,    10,    64,     9,    63,    36,    91,    49,     3,     5,
      49,     3,    11,    65,    37,    92,    49,     3,    49,     3,
      12,    66,     8,    93,    49,     3,    55,     3,    13,    67,
      38,    94,    50,     3,    49,     3,    14,    68,    39,    90,
      49,     3,     6,     3,    15,    69,    40,    95,    46,   101,
      49,     3,    50,     3,    55,     3,    16,    70,    41,    96,
      47,   102,    17,    71,     3,    22,     3,    49,     3,    51,
      18,    72,    59,    42,    97,    48,   103,     4,     3,    55,
       3,    49,     5,    19,    73,    21,    75,    43,    98,    52,
       3,     6,     3,    50,     3,    20,    74,    22,    58,    76,
      31,    85,    44,    99,    53,     5,    54,     3,     3,     4,
       7,    55,     3,    23,    77,    77,    32,    86,    45,   100,
      51,     3,     3,    49,     3,    55,     7,    24,    78,    78,
      33,    87,    49,     3,     3,    49,     3,    25,    79,    79,
      34,    88,    51,     3,     3,    56,     5,    26,    80,    80,
      51,     3,     3,    27,    81,    81,    51,     3,     3,    28,
      82,    82,    55,     3,     3,    29,    83,    83,    50,     3,
       7,    30,    84,    51,     7
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,    19,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     6,     2,     2,    20,    18,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     8,     2,
       2,     2,    22,    14,     2,     2,     2,     2,     2,     3,
       2,     2,     2,     2,     2,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* compiler: '{' last ',' active '}'  */
#line 79 "bison.y"
                                    {printf("The Syntax was Correct!\n");}
#line 1843 "y.tab.c"
    break;

  case 3: /* compiler: '{' content ',' totalPages ',' totalElements ',' last2 ',' numberOfElements ',' sort ',' first ',' size ',' number '}'  */
#line 80 "bison.y"
                                                                                                                                   {printf("The Syntax was Correct!\n");}
#line 1849 "y.tab.c"
    break;

  case 4: /* last: LAST  */
#line 83 "bison.y"
           {}
#line 1855 "y.tab.c"
    break;

  case 5: /* active: ACTIVE  */
#line 88 "bison.y"
               {}
#line 1861 "y.tab.c"
    break;

  case 6: /* gameId: GAMEID POSITIVE_INTEGER  */
#line 93 "bison.y"
                                {}
#line 1867 "y.tab.c"
    break;

  case 7: /* drawId: DRAWID POSITIVE_INTEGER  */
#line 94 "bison.y"
                                {}
#line 1873 "y.tab.c"
    break;

  case 8: /* drawTime: DRAW_TIME POSITIVE_INTEGER  */
#line 95 "bison.y"
                                     {}
#line 1879 "y.tab.c"
    break;

  case 9: /* status: STATUS ALPHANUMERIC  */
#line 96 "bison.y"
                            {}
#line 1885 "y.tab.c"
    break;

  case 10: /* drawBreak: DRAW_BREAK POSITIVE_INTEGER  */
#line 97 "bison.y"
                                       {}
#line 1891 "y.tab.c"
    break;

  case 11: /* visualDraw: VISUAL_DRAW POSITIVE_INTEGER  */
#line 98 "bison.y"
                                         {}
#line 1897 "y.tab.c"
    break;

  case 12: /* pricePoints: PRICE_POINTS ammount  */
#line 99 "bison.y"
                                  {}
#line 1903 "y.tab.c"
    break;

  case 13: /* ammount: AMMOUNT POSITIVE_REAL  */
#line 100 "bison.y"
                               {}
#line 1909 "y.tab.c"
    break;

  case 14: /* winningNumbers: WINNING_NUMBERS '{' list ',' bonus '}'  */
#line 101 "bison.y"
                                                       {}
#line 1915 "y.tab.c"
    break;

  case 15: /* list: LIST ARRAY_POSITIVE_INTEGERS  */
#line 102 "bison.y"
                                   {}
#line 1921 "y.tab.c"
    break;

  case 16: /* bonus: BONUS ARRAY_POSITIVE_INTEGER  */
#line 103 "bison.y"
                                    {}
#line 1927 "y.tab.c"
    break;

  case 17: /* prizeCategories: PRIZE_CATEGORIES '[' '1' ',' divident ',' winners ',' distributed ',' jackpot ',' fixed ',' categoryType ',' gameType ',' minimumDistributed ']'  */
#line 104 "bison.y"
                                                                                                                                                                  {}
#line 1933 "y.tab.c"
    break;

  case 18: /* prizeCategories: PRIZE_CATEGORIES '[' id ',' divident ',' winners ',' distributed ',' jackpot ',' fixed ',' categoryType ',' gameType ']'  */
#line 105 "bison.y"
                                                                                                                                          {}
#line 1939 "y.tab.c"
    break;

  case 19: /* id: ID POSITIVE_INTEGER_TWO_TO_EIGHT  */
#line 106 "bison.y"
                                     {}
#line 1945 "y.tab.c"
    break;

  case 20: /* divident: DIVIDENT POSITIVE_REAL  */
#line 107 "bison.y"
                                 {}
#line 1951 "y.tab.c"
    break;

  case 21: /* winners: WINNERS POSITIVE_INTEGER  */
#line 108 "bison.y"
                                  {}
#line 1957 "y.tab.c"
    break;

  case 22: /* distributed: DISTRIBUTED POSITIVE_REAL  */
#line 109 "bison.y"
                                       {}
#line 1963 "y.tab.c"
    break;

  case 23: /* jackpot: JACKPOT POSITIVE_REAL  */
#line 110 "bison.y"
                               {}
#line 1969 "y.tab.c"
    break;

  case 24: /* fixed: FIXED POSITIVE_REAL  */
#line 111 "bison.y"
                           {}
#line 1975 "y.tab.c"
    break;

  case 25: /* categoryType: CATEGORY_TYPE BOOLEAN  */
#line 112 "bison.y"
                                    {}
#line 1981 "y.tab.c"
    break;

  case 26: /* gameType: GAMETYPE ALPHANUMERIC  */
#line 113 "bison.y"
                                {}
#line 1987 "y.tab.c"
    break;

  case 28: /* wagerStatistics: WAGER_STATISTICS '{' columns ',' wagers ',' addOn '}'  */
#line 115 "bison.y"
                                                                      {}
#line 1993 "y.tab.c"
    break;

  case 29: /* columns: COLUMNS POSITIVE_INTEGER  */
#line 116 "bison.y"
                                  {}
#line 1999 "y.tab.c"
    break;

  case 30: /* wagers: WAGERS POSITIVE_INTEGER  */
#line 117 "bison.y"
                                {}
#line 2005 "y.tab.c"
    break;

  case 31: /* addOn: ADDON JSON_ARRAY  */
#line 118 "bison.y"
                        {}
#line 2011 "y.tab.c"
    break;

  case 32: /* content: CONTENT '[' gameId ',' drawId ',' drawTime ',' status ',' drawBreak ',' visualDraw ',' pricePoints ',' winningNumbers ',' prizeCategories ',' wagerStatistics ']'  */
#line 121 "bison.y"
                                                                                                                                                                           {}
#line 2017 "y.tab.c"
    break;

  case 33: /* sort: SORT '[' direction ',' property ',' ignoreCase ',' nullHandling ',' descending ',' ascending ']'  */
#line 123 "bison.y"
                                                                                                       {}
#line 2023 "y.tab.c"
    break;

  case 34: /* totalPages: TOTAL_PAGES POSITIVE_INTEGER  */
#line 125 "bison.y"
                                         {}
#line 2029 "y.tab.c"
    break;

  case 35: /* totalElements: TOTAL_ELEMENTS POSITIVE_INTEGER  */
#line 126 "bison.y"
                                               {}
#line 2035 "y.tab.c"
    break;

  case 36: /* last2: LAST BOOLEAN  */
#line 127 "bison.y"
                    {}
#line 2041 "y.tab.c"
    break;

  case 37: /* numberOfElements: NUMBER_OF_ELEMENTS POSITIVE_INTEGER  */
#line 128 "bison.y"
                                                      {}
#line 2047 "y.tab.c"
    break;

  case 38: /* direction: DIRECTION ALPHANUMERIC  */
#line 129 "bison.y"
                                  {}
#line 2053 "y.tab.c"
    break;

  case 39: /* property: PROPERTY ID CONTENTOBJECT  */
#line 130 "bison.y"
                                    {}
#line 2059 "y.tab.c"
    break;

  case 40: /* ignoreCase: IGNORE_CASE BOOLEAN  */
#line 131 "bison.y"
                                {}
#line 2065 "y.tab.c"
    break;

  case 41: /* nullHandling: NULL_HANDLING ALPHANUMERIC  */
#line 132 "bison.y"
                                         {}
#line 2071 "y.tab.c"
    break;

  case 42: /* descending: DESCENDING BOOLEAN  */
#line 133 "bison.y"
                               {}
#line 2077 "y.tab.c"
    break;

  case 43: /* ascending: ASCENDING BOOLEAN  */
#line 134 "bison.y"
                            {}
#line 2083 "y.tab.c"
    break;

  case 44: /* first: FIRST BOOLEAN  */
#line 135 "bison.y"
                     {}
#line 2089 "y.tab.c"
    break;

  case 45: /* size: SIZE POSITIVE_INTEGER  */
#line 136 "bison.y"
                            {}
#line 2095 "y.tab.c"
    break;

  case 46: /* number: NUMBER POSITIVE_INTEGER  */
#line 137 "bison.y"
                                {}
#line 2101 "y.tab.c"
    break;


#line 2105 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 139 "bison.y"


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
