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
    AMOUNT = 267,                  /* AMOUNT  */
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
    IDONE = 299,                   /* IDONE  */
    CLASSITEM = 300,               /* CLASSITEM  */
    POSITIVE_INTEGER = 301,        /* POSITIVE_INTEGER  */
    ALPHANUMERIC = 302,            /* ALPHANUMERIC  */
    POSITIVE_INTEGER_TWO_TO_EIGHT = 303, /* POSITIVE_INTEGER_TWO_TO_EIGHT  */
    POSITIVE_INTEGER_ZERO_OR_ONE = 304, /* POSITIVE_INTEGER_ZERO_OR_ONE  */
    TRUE = 305,                    /* TRUE  */
    FALSE = 306                    /* FALSE  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '.'  */
  YYSYMBOL_4_ = 4,                         /* ','  */
  YYSYMBOL_5_ = 5,                         /* '{'  */
  YYSYMBOL_6_ = 6,                         /* '}'  */
  YYSYMBOL_7_ = 7,                         /* '['  */
  YYSYMBOL_8_ = 8,                         /* ']'  */
  YYSYMBOL_9_ = 9,                         /* '-'  */
  YYSYMBOL_10_ = 10,                       /* '+'  */
  YYSYMBOL_LAST = 11,                      /* LAST  */
  YYSYMBOL_ACTIVE = 12,                    /* ACTIVE  */
  YYSYMBOL_GAMEID = 13,                    /* GAMEID  */
  YYSYMBOL_DRAWID = 14,                    /* DRAWID  */
  YYSYMBOL_DRAW_TIME = 15,                 /* DRAW_TIME  */
  YYSYMBOL_STATUS = 16,                    /* STATUS  */
  YYSYMBOL_DRAW_BREAK = 17,                /* DRAW_BREAK  */
  YYSYMBOL_VISUAL_DRAW = 18,               /* VISUAL_DRAW  */
  YYSYMBOL_PRICE_POINTS = 19,              /* PRICE_POINTS  */
  YYSYMBOL_AMOUNT = 20,                    /* AMOUNT  */
  YYSYMBOL_WINNING_NUMBERS = 21,           /* WINNING_NUMBERS  */
  YYSYMBOL_LIST = 22,                      /* LIST  */
  YYSYMBOL_BONUS = 23,                     /* BONUS  */
  YYSYMBOL_PRIZE_CATEGORIES = 24,          /* PRIZE_CATEGORIES  */
  YYSYMBOL_ID = 25,                        /* ID  */
  YYSYMBOL_DIVIDENT = 26,                  /* DIVIDENT  */
  YYSYMBOL_WINNERS = 27,                   /* WINNERS  */
  YYSYMBOL_DISTRIBUTED = 28,               /* DISTRIBUTED  */
  YYSYMBOL_JACKPOT = 29,                   /* JACKPOT  */
  YYSYMBOL_FIXED = 30,                     /* FIXED  */
  YYSYMBOL_CATEGORY_TYPE = 31,             /* CATEGORY_TYPE  */
  YYSYMBOL_GAMETYPE = 32,                  /* GAMETYPE  */
  YYSYMBOL_MINIMUM_DISTRIBUTED = 33,       /* MINIMUM_DISTRIBUTED  */
  YYSYMBOL_WAGER_STATISTICS = 34,          /* WAGER_STATISTICS  */
  YYSYMBOL_COLUMNS = 35,                   /* COLUMNS  */
  YYSYMBOL_WAGERS = 36,                    /* WAGERS  */
  YYSYMBOL_ADDON = 37,                     /* ADDON  */
  YYSYMBOL_CONTENT = 38,                   /* CONTENT  */
  YYSYMBOL_TOTAL_PAGES = 39,               /* TOTAL_PAGES  */
  YYSYMBOL_TOTAL_ELEMENTS = 40,            /* TOTAL_ELEMENTS  */
  YYSYMBOL_NUMBER_OF_ELEMENTS = 41,        /* NUMBER_OF_ELEMENTS  */
  YYSYMBOL_SORT = 42,                      /* SORT  */
  YYSYMBOL_DIRECTION = 43,                 /* DIRECTION  */
  YYSYMBOL_PROPERTY = 44,                  /* PROPERTY  */
  YYSYMBOL_IGNORE_CASE = 45,               /* IGNORE_CASE  */
  YYSYMBOL_NULL_HANDLING = 46,             /* NULL_HANDLING  */
  YYSYMBOL_DESCENDING = 47,                /* DESCENDING  */
  YYSYMBOL_ASCENDING = 48,                 /* ASCENDING  */
  YYSYMBOL_FIRST = 49,                     /* FIRST  */
  YYSYMBOL_SIZE = 50,                      /* SIZE  */
  YYSYMBOL_NUMBER = 51,                    /* NUMBER  */
  YYSYMBOL_IDONE = 52,                     /* IDONE  */
  YYSYMBOL_CLASSITEM = 53,                 /* CLASSITEM  */
  YYSYMBOL_POSITIVE_INTEGER = 54,          /* POSITIVE_INTEGER  */
  YYSYMBOL_ALPHANUMERIC = 55,              /* ALPHANUMERIC  */
  YYSYMBOL_POSITIVE_INTEGER_TWO_TO_EIGHT = 56, /* POSITIVE_INTEGER_TWO_TO_EIGHT  */
  YYSYMBOL_POSITIVE_INTEGER_ZERO_OR_ONE = 57, /* POSITIVE_INTEGER_ZERO_OR_ONE  */
  YYSYMBOL_TRUE = 58,                      /* TRUE  */
  YYSYMBOL_FALSE = 59,                     /* FALSE  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_compiler = 61,                  /* compiler  */
  YYSYMBOL_last = 62,                      /* last  */
  YYSYMBOL_active = 63,                    /* active  */
  YYSYMBOL_positivereal = 64,              /* positivereal  */
  YYSYMBOL_arrayint = 65,                  /* arrayint  */
  YYSYMBOL_arrayposints = 66,              /* arrayposints  */
  YYSYMBOL_arrayposint = 67,               /* arrayposint  */
  YYSYMBOL_jsoncontent = 68,               /* jsoncontent  */
  YYSYMBOL_jsonarray = 69,                 /* jsonarray  */
  YYSYMBOL_gameId = 70,                    /* gameId  */
  YYSYMBOL_drawId = 71,                    /* drawId  */
  YYSYMBOL_drawTime = 72,                  /* drawTime  */
  YYSYMBOL_status = 73,                    /* status  */
  YYSYMBOL_drawBreak = 74,                 /* drawBreak  */
  YYSYMBOL_visualDraw = 75,                /* visualDraw  */
  YYSYMBOL_pricePoints = 76,               /* pricePoints  */
  YYSYMBOL_amount = 77,                    /* amount  */
  YYSYMBOL_winningNumbers = 78,            /* winningNumbers  */
  YYSYMBOL_list = 79,                      /* list  */
  YYSYMBOL_bonus = 80,                     /* bonus  */
  YYSYMBOL_prizecontent = 81,              /* prizecontent  */
  YYSYMBOL_prizelisting = 82,              /* prizelisting  */
  YYSYMBOL_prizeCategories = 83,           /* prizeCategories  */
  YYSYMBOL_idone = 84,                     /* idone  */
  YYSYMBOL_id = 85,                        /* id  */
  YYSYMBOL_divident = 86,                  /* divident  */
  YYSYMBOL_winners = 87,                   /* winners  */
  YYSYMBOL_distributed = 88,               /* distributed  */
  YYSYMBOL_jackpot = 89,                   /* jackpot  */
  YYSYMBOL_fixed = 90,                     /* fixed  */
  YYSYMBOL_categoryType = 91,              /* categoryType  */
  YYSYMBOL_gameType = 92,                  /* gameType  */
  YYSYMBOL_minimumDistributed = 93,        /* minimumDistributed  */
  YYSYMBOL_wagerStatistics = 94,           /* wagerStatistics  */
  YYSYMBOL_columns = 95,                   /* columns  */
  YYSYMBOL_wagers = 96,                    /* wagers  */
  YYSYMBOL_addOn = 97,                     /* addOn  */
  YYSYMBOL_contentlisting = 98,            /* contentlisting  */
  YYSYMBOL_content = 99,                   /* content  */
  YYSYMBOL_sort = 100,                     /* sort  */
  YYSYMBOL_totalPages = 101,               /* totalPages  */
  YYSYMBOL_totalElements = 102,            /* totalElements  */
  YYSYMBOL_boolean = 103,                  /* boolean  */
  YYSYMBOL_last2 = 104,                    /* last2  */
  YYSYMBOL_numberOfElements = 105,         /* numberOfElements  */
  YYSYMBOL_direction = 106,                /* direction  */
  YYSYMBOL_property = 107,                 /* property  */
  YYSYMBOL_ignoreCase = 108,               /* ignoreCase  */
  YYSYMBOL_nullHandling = 109,             /* nullHandling  */
  YYSYMBOL_descending = 110,               /* descending  */
  YYSYMBOL_ascending = 111,                /* ascending  */
  YYSYMBOL_first = 112,                    /* first  */
  YYSYMBOL_size = 113,                     /* size  */
  YYSYMBOL_number = 114                    /* number  */
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
typedef yytype_int16 yy_state_t;

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
#define YYLAST   223

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
       2,     2,     2,    10,     4,     9,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     7,     2,     8,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     5,     2,     6,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    77,    77,    78,    81,    83,    85,    87,    87,    88,
      89,    90,    90,    91,    91,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   124,   124,   125,   127,   129,
     130,   131,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142
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
  "\"end of file\"", "error", "\"invalid token\"", "'.'", "','", "'{'",
  "'}'", "'['", "']'", "'-'", "'+'", "LAST", "ACTIVE", "GAMEID", "DRAWID",
  "DRAW_TIME", "STATUS", "DRAW_BREAK", "VISUAL_DRAW", "PRICE_POINTS",
  "AMOUNT", "WINNING_NUMBERS", "LIST", "BONUS", "PRIZE_CATEGORIES", "ID",
  "DIVIDENT", "WINNERS", "DISTRIBUTED", "JACKPOT", "FIXED",
  "CATEGORY_TYPE", "GAMETYPE", "MINIMUM_DISTRIBUTED", "WAGER_STATISTICS",
  "COLUMNS", "WAGERS", "ADDON", "CONTENT", "TOTAL_PAGES", "TOTAL_ELEMENTS",
  "NUMBER_OF_ELEMENTS", "SORT", "DIRECTION", "PROPERTY", "IGNORE_CASE",
  "NULL_HANDLING", "DESCENDING", "ASCENDING", "FIRST", "SIZE", "NUMBER",
  "IDONE", "CLASSITEM", "POSITIVE_INTEGER", "ALPHANUMERIC",
  "POSITIVE_INTEGER_TWO_TO_EIGHT", "POSITIVE_INTEGER_ZERO_OR_ONE", "TRUE",
  "FALSE", "$accept", "compiler", "last", "active", "positivereal",
  "arrayint", "arrayposints", "arrayposint", "jsoncontent", "jsonarray",
  "gameId", "drawId", "drawTime", "status", "drawBreak", "visualDraw",
  "pricePoints", "amount", "winningNumbers", "list", "bonus",
  "prizecontent", "prizelisting", "prizeCategories", "idone", "id",
  "divident", "winners", "distributed", "jackpot", "fixed", "categoryType",
  "gameType", "minimumDistributed", "wagerStatistics", "columns", "wagers",
  "addOn", "contentlisting", "content", "sort", "totalPages",
  "totalElements", "boolean", "last2", "numberOfElements", "direction",
  "property", "ignoreCase", "nullHandling", "descending", "ascending",
  "first", "size", "number", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-191)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    -9,    22,    19,    20,    29,    30,  -191,    13,    31,
      23,    -2,   -16,    35,    13,    33,    37,    38,    -7,    41,
    -191,    32,    44,  -191,    13,  -191,  -191,    11,    -1,    48,
      32,    50,     1,    52,  -191,    42,    54,    32,  -191,    49,
       5,    57,    42,    58,   -47,    59,  -191,    53,    60,    42,
    -191,  -191,  -191,    24,    15,    62,    53,    64,    17,    68,
    -191,    56,    70,    53,  -191,    34,    21,    73,    56,    74,
      72,    76,  -191,    63,    78,    56,    79,    36,    39,    82,
      63,    83,    40,   -47,    84,  -191,    71,    85,    63,    43,
      87,  -191,    45,    91,    88,    71,    93,  -191,    55,    46,
      97,    86,    81,    99,    71,    51,   101,  -191,    61,    65,
     102,   104,   103,    81,   106,  -191,    66,    67,   107,   112,
    -191,  -191,    94,    96,   113,    96,   -47,   114,  -191,  -191,
      69,   115,   120,   118,   122,    96,   123,  -191,    89,  -191,
      75,  -191,   105,   125,    98,   127,    98,    90,   129,   130,
     128,   131,   133,   -21,   136,   134,   132,   135,    98,   137,
    -191,   100,    75,  -191,    92,  -191,  -191,    95,  -191,   140,
     144,   125,  -191,   117,  -191,   143,  -191,   -47,   146,  -191,
     145,  -191,   138,   138,  -191,   108,   150,   151,  -191,   109,
    -191,    65,   152,   154,  -191,   124,    31,   -47,   153,  -191,
     139,   139,   111,   157,  -191,  -191,   155,   116,   163,   164,
    -191,   141,  -191,  -191,   147,   147,   162,   165,    65,   168,
     169,    -5,  -191,  -191,  -191,   148,   148,  -191,   170,   171,
      65,   172,   176,   126,  -191,  -191,   156,   156,  -191,    65,
     178,   179,  -191,   158,   158,   142,   180,   181,  -191,   159,
     159,   149,   183,   182,  -191,   160,  -191,    65,   184,  -191,
    -191
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,    47,     0,     2,    49,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
      51,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,     0,
       0,     0,     0,     0,     0,    56,     0,     0,     0,     0,
      22,    21,     0,     0,     0,     0,     0,     0,    63,     3,
       0,     0,     0,     0,     0,     0,     0,    57,     0,     6,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
      58,     0,     0,     9,     0,    25,    23,     0,    31,     0,
       0,     0,    30,     0,     4,     0,     5,     0,     0,     7,
       0,    32,     0,     0,    28,     0,     0,     0,    59,     0,
      10,     0,     0,     0,    42,     0,    46,     0,     0,    33,
       0,     0,     0,     0,    45,    60,     0,     0,     0,     0,
      43,     0,    48,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    41,    35,     0,     0,    14,    12,     0,
       0,     0,     0,     0,    13,    36,     0,     0,    11,     0,
       0,     0,    37,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,    39,     0,    27,     0,     0,    40,
      26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,  -191,  -191,  -190,    47,  -191,  -191,   -41,  -191,
      -8,   -17,   -28,   -33,   -43,   -73,   -85,  -191,   110,  -191,
    -191,  -191,    25,  -117,  -191,  -191,    12,    -4,   -15,   -32,
     -39,   -42,   -49,  -191,  -141,  -191,  -191,  -191,     7,  -191,
    -191,  -191,  -191,   -83,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     5,    17,   120,   150,   141,   165,   229,   222,
      13,    29,    41,    55,    67,    79,    94,   110,   112,   132,
     152,   154,   155,   134,   169,   170,   192,   208,   219,   231,
     240,   246,   252,   258,   157,   186,   203,   217,    15,     6,
      71,    19,    33,    52,    45,    59,    90,   106,   127,   148,
     178,   198,    84,   100,   118
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,   199,     3,   227,   167,   159,    22,    87,   136,     1,
     103,    50,    51,    36,    48,    96,    31,   175,   145,   114,
      43,    57,     7,    62,     8,    74,    12,     9,   224,     4,
      69,   168,    81,    10,    11,    16,    14,    18,    20,    21,
     235,    23,    24,   137,    25,    27,    28,    26,    30,   242,
     228,    32,    35,    34,    37,    38,    39,    40,    42,    46,
      44,    47,    49,    53,    56,    58,    61,   259,    63,    54,
      60,    64,    65,    66,    68,    72,    70,    73,    75,    76,
      77,    78,    80,    89,    82,    83,    86,    88,    92,    95,
      93,    98,   102,    85,   188,    99,   101,   104,    97,   105,
     107,   108,   111,   113,   115,   116,   109,   123,   121,   122,
     125,   126,   117,   129,   205,   130,   131,   135,   138,   119,
     133,   128,   140,   139,   142,   143,   144,   146,   151,   149,
     153,   158,   156,   161,   162,   147,   163,   173,   164,   166,
     171,   174,   172,   176,   182,   160,   180,   177,   183,   187,
     189,   181,   185,   190,   195,   196,   200,   197,   201,   206,
     202,   211,   194,   212,   191,   210,   207,   214,   215,   221,
     213,   223,   225,   226,   233,   218,   236,   230,   216,   234,
     237,   228,   243,   244,   249,   250,   239,   255,   256,   245,
     260,   251,   238,   257,   232,   193,   184,   209,   241,   248,
     220,   253,   247,   204,   254,     0,     0,     0,     0,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124
};

static const yytype_int16 yycheck[] =
{
      83,   191,    11,     8,    25,   146,    14,    80,   125,     5,
      95,    58,    59,    30,    42,    88,    24,   158,   135,   104,
      37,    49,     0,    56,     5,    68,    13,     7,   218,    38,
      63,    52,    75,     4,     4,    12,     5,    39,    54,     4,
     230,     8,     5,   126,     6,     4,    14,    54,     4,   239,
      55,    40,     4,    54,     4,    54,     4,    15,     4,    54,
      11,     4,     4,     4,     4,    41,     4,   257,     4,    16,
      55,    54,     4,    17,     4,    54,    42,     4,     4,     7,
       4,    18,     4,    43,     5,    49,     4,     4,     4,     4,
      19,     4,     4,    54,   177,    50,     5,     4,    55,    44,
      54,     4,    21,     4,    53,     4,    20,     4,     6,     5,
       4,    45,    51,     6,   197,     3,    22,     4,     4,    54,
      24,    54,     7,    54,     4,     7,     4,     4,    23,    54,
       5,     4,    34,     4,     4,    46,     8,     5,     7,     6,
       4,     6,     8,     6,     4,    55,    54,    47,     4,     6,
       4,    56,    35,     8,     4,     4,     4,    48,     4,     6,
      36,     4,    54,     8,    26,    54,    27,     4,     4,     7,
      54,     6,     4,     4,     4,    28,     4,    29,    37,     8,
       4,    55,     4,     4,     4,     4,    30,     4,     6,    31,
       6,    32,   233,    33,   226,   183,   171,   201,   237,    57,
     215,   250,   244,   196,    55,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    61,    11,    38,    62,    99,     0,     5,     7,
       4,     4,    13,    70,     5,    98,    12,    63,    39,   101,
      54,     4,    70,     8,     5,     6,    54,     4,    14,    71,
       4,    70,    40,   102,    54,     4,    71,     4,    54,     4,
      15,    72,     4,    71,    11,   104,    54,     4,    72,     4,
      58,    59,   103,     4,    16,    73,     4,    72,    41,   105,
      55,     4,    73,     4,    54,     4,    17,    74,     4,    73,
      42,   100,    54,     4,    74,     4,     7,     4,    18,    75,
       4,    74,     5,    49,   112,    54,     4,    75,     4,    43,
     106,   103,     4,    19,    76,     4,    75,    55,     4,    50,
     113,     5,     4,    76,     4,    44,   107,    54,     4,    20,
      77,    21,    78,     4,    76,    53,     4,    51,   114,    54,
      64,     6,     5,     4,    78,     4,    45,   108,    54,     6,
       3,    22,    79,    24,    83,     4,    83,   103,     4,    54,
       7,    66,     4,     7,     4,    83,     4,    46,   109,    54,
      65,    23,    80,     5,    81,    82,    34,    94,     4,    94,
      55,     4,     4,     8,     7,    67,     6,    25,    52,    84,
      85,     4,     8,     5,     6,    94,     6,    47,   110,    65,
      54,    56,     4,     4,    82,    35,    95,     6,   103,     4,
       8,    26,    86,    86,    54,     4,     4,    48,   111,    64,
       4,     4,    36,    96,    98,   103,     6,    27,    87,    87,
      54,     4,     8,    54,     4,     4,    37,    97,    28,    88,
      88,     7,    69,     6,    64,     4,     4,     8,    55,    68,
      29,    89,    89,     4,     8,    64,     4,     4,    68,    30,
      90,    90,    64,     4,     4,    31,    91,    91,    57,     4,
       4,    32,    92,    92,    55,     4,     6,    33,    93,    64,
       6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    62,    63,    64,    65,    65,    66,
      67,    68,    68,    69,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    81,    82,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    98,    99,   100,   101,
     102,   103,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,    19,    22,    20,     3,     3,     1,     3,
       3,     3,     1,     3,     2,     2,     2,     2,     2,     2,
       2,     4,     2,     6,     2,     2,    19,    17,     3,     1,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     8,     2,     2,     2,    23,    22,     4,    16,     2,
       2,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2
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
#line 77 "bison.y"
                                    {printf("The Syntax was Correct!\n");}
#line 1884 "y.tab.c"
    break;

  case 3: /* compiler: '{' content ',' totalPages ',' totalElements ',' last2 ',' numberOfElements ',' sort ',' first ',' size ',' number '}'  */
#line 78 "bison.y"
                                                                                                                                   {printf("The Syntax was Correct!\n");}
#line 1890 "y.tab.c"
    break;

  case 5: /* active: ACTIVE '{' gameId ',' drawId ',' drawTime ',' status ',' drawBreak ',' visualDraw ',' pricePoints ',' prizeCategories ',' wagerStatistics '}'  */
#line 83 "bison.y"
                                                                                                                                                      {}
#line 1896 "y.tab.c"
    break;

  case 6: /* positivereal: POSITIVE_INTEGER '.' POSITIVE_INTEGER  */
#line 85 "bison.y"
                                                    {}
#line 1902 "y.tab.c"
    break;

  case 8: /* arrayint: POSITIVE_INTEGER  */
#line 87 "bison.y"
                                                            {}
#line 1908 "y.tab.c"
    break;

  case 9: /* arrayposints: '[' arrayint ']'  */
#line 88 "bison.y"
                               {}
#line 1914 "y.tab.c"
    break;

  case 10: /* arrayposint: '[' POSITIVE_INTEGER ']'  */
#line 89 "bison.y"
                                      {}
#line 1920 "y.tab.c"
    break;

  case 12: /* jsoncontent: ALPHANUMERIC  */
#line 90 "bison.y"
                                                         {}
#line 1926 "y.tab.c"
    break;

  case 14: /* jsonarray: '[' ']'  */
#line 91 "bison.y"
                                         {}
#line 1932 "y.tab.c"
    break;

  case 15: /* gameId: GAMEID POSITIVE_INTEGER  */
#line 93 "bison.y"
                                {}
#line 1938 "y.tab.c"
    break;

  case 16: /* drawId: DRAWID POSITIVE_INTEGER  */
#line 94 "bison.y"
                                {}
#line 1944 "y.tab.c"
    break;

  case 17: /* drawTime: DRAW_TIME POSITIVE_INTEGER  */
#line 95 "bison.y"
                                     {}
#line 1950 "y.tab.c"
    break;

  case 18: /* status: STATUS ALPHANUMERIC  */
#line 96 "bison.y"
                            {}
#line 1956 "y.tab.c"
    break;

  case 19: /* drawBreak: DRAW_BREAK POSITIVE_INTEGER  */
#line 97 "bison.y"
                                       {}
#line 1962 "y.tab.c"
    break;

  case 20: /* visualDraw: VISUAL_DRAW POSITIVE_INTEGER  */
#line 98 "bison.y"
                                         {}
#line 1968 "y.tab.c"
    break;

  case 21: /* pricePoints: PRICE_POINTS '{' amount '}'  */
#line 99 "bison.y"
                                         {}
#line 1974 "y.tab.c"
    break;

  case 22: /* amount: AMOUNT positivereal  */
#line 100 "bison.y"
                            {}
#line 1980 "y.tab.c"
    break;

  case 23: /* winningNumbers: WINNING_NUMBERS '{' list ',' bonus '}'  */
#line 101 "bison.y"
                                                       {}
#line 1986 "y.tab.c"
    break;

  case 24: /* list: LIST arrayposints  */
#line 102 "bison.y"
                       {}
#line 1992 "y.tab.c"
    break;

  case 25: /* bonus: BONUS arrayposint  */
#line 103 "bison.y"
                        {}
#line 1998 "y.tab.c"
    break;

  case 31: /* idone: IDONE  */
#line 108 "bison.y"
             {}
#line 2004 "y.tab.c"
    break;

  case 32: /* id: ID POSITIVE_INTEGER_TWO_TO_EIGHT  */
#line 109 "bison.y"
                                     {}
#line 2010 "y.tab.c"
    break;

  case 33: /* divident: DIVIDENT positivereal  */
#line 110 "bison.y"
                                {}
#line 2016 "y.tab.c"
    break;

  case 34: /* winners: WINNERS POSITIVE_INTEGER  */
#line 111 "bison.y"
                                  {}
#line 2022 "y.tab.c"
    break;

  case 35: /* distributed: DISTRIBUTED positivereal  */
#line 112 "bison.y"
                                      {}
#line 2028 "y.tab.c"
    break;

  case 36: /* jackpot: JACKPOT positivereal  */
#line 113 "bison.y"
                              {}
#line 2034 "y.tab.c"
    break;

  case 37: /* fixed: FIXED positivereal  */
#line 114 "bison.y"
                          {}
#line 2040 "y.tab.c"
    break;

  case 38: /* categoryType: CATEGORY_TYPE POSITIVE_INTEGER_ZERO_OR_ONE  */
#line 115 "bison.y"
                                                         {}
#line 2046 "y.tab.c"
    break;

  case 39: /* gameType: GAMETYPE ALPHANUMERIC  */
#line 116 "bison.y"
                                {}
#line 2052 "y.tab.c"
    break;

  case 41: /* wagerStatistics: WAGER_STATISTICS '{' columns ',' wagers ',' addOn '}'  */
#line 118 "bison.y"
                                                                       {}
#line 2058 "y.tab.c"
    break;

  case 42: /* columns: COLUMNS POSITIVE_INTEGER  */
#line 119 "bison.y"
                                  {}
#line 2064 "y.tab.c"
    break;

  case 43: /* wagers: WAGERS POSITIVE_INTEGER  */
#line 120 "bison.y"
                                {}
#line 2070 "y.tab.c"
    break;

  case 44: /* addOn: ADDON jsonarray  */
#line 121 "bison.y"
                       {}
#line 2076 "y.tab.c"
    break;

  case 46: /* contentlisting: '{' gameId ',' drawId ',' drawTime ',' status ',' drawBreak ',' visualDraw ',' pricePoints ',' winningNumbers ',' prizeCategories ',' wagerStatistics '}' ','  */
#line 124 "bison.y"
                                                                                                                                                                                                                                                                                                                                                              {}
#line 2082 "y.tab.c"
    break;

  case 47: /* content: CONTENT '[' contentlisting ']'  */
#line 125 "bison.y"
                                        {}
#line 2088 "y.tab.c"
    break;

  case 48: /* sort: SORT '[' '{' direction ',' property ',' ignoreCase ',' nullHandling ',' descending ',' ascending '}' ']'  */
#line 127 "bison.y"
                                                                                                                {}
#line 2094 "y.tab.c"
    break;

  case 49: /* totalPages: TOTAL_PAGES POSITIVE_INTEGER  */
#line 129 "bison.y"
                                         {}
#line 2100 "y.tab.c"
    break;

  case 50: /* totalElements: TOTAL_ELEMENTS POSITIVE_INTEGER  */
#line 130 "bison.y"
                                               {}
#line 2106 "y.tab.c"
    break;

  case 52: /* boolean: FALSE  */
#line 131 "bison.y"
                      {}
#line 2112 "y.tab.c"
    break;

  case 53: /* last2: LAST boolean  */
#line 132 "bison.y"
                   {}
#line 2118 "y.tab.c"
    break;

  case 54: /* numberOfElements: NUMBER_OF_ELEMENTS POSITIVE_INTEGER  */
#line 133 "bison.y"
                                                      {}
#line 2124 "y.tab.c"
    break;

  case 55: /* direction: DIRECTION ALPHANUMERIC  */
#line 134 "bison.y"
                                  {}
#line 2130 "y.tab.c"
    break;

  case 56: /* property: PROPERTY CLASSITEM  */
#line 135 "bison.y"
                            {}
#line 2136 "y.tab.c"
    break;

  case 57: /* ignoreCase: IGNORE_CASE boolean  */
#line 136 "bison.y"
                                {}
#line 2142 "y.tab.c"
    break;

  case 58: /* nullHandling: NULL_HANDLING ALPHANUMERIC  */
#line 137 "bison.y"
                                         {}
#line 2148 "y.tab.c"
    break;

  case 59: /* descending: DESCENDING boolean  */
#line 138 "bison.y"
                               {}
#line 2154 "y.tab.c"
    break;

  case 60: /* ascending: ASCENDING boolean  */
#line 139 "bison.y"
                            {}
#line 2160 "y.tab.c"
    break;

  case 61: /* first: FIRST boolean  */
#line 140 "bison.y"
                     {}
#line 2166 "y.tab.c"
    break;

  case 62: /* size: SIZE POSITIVE_INTEGER  */
#line 141 "bison.y"
                            {}
#line 2172 "y.tab.c"
    break;

  case 63: /* number: NUMBER POSITIVE_INTEGER  */
#line 142 "bison.y"
                                {}
#line 2178 "y.tab.c"
    break;


#line 2182 "y.tab.c"

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

#line 144 "bison.y"


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
