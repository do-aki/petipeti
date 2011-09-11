/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse zendparse
#define yylex   zendlex
#define yyerror zenderror
#define yylval  zendlval
#define yychar  zendchar
#define yydebug zenddebug
#define yynerrs zendnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_SCALAR_CAST = 298,
     T_CLONE = 299,
     T_NEW = 300,
     T_EXIT = 301,
     T_IF = 302,
     T_ELSEIF = 303,
     T_ELSE = 304,
     T_ENDIF = 305,
     T_LNUMBER = 306,
     T_DNUMBER = 307,
     T_STRING = 308,
     T_STRING_VARNAME = 309,
     T_VARIABLE = 310,
     T_NUM_STRING = 311,
     T_INLINE_HTML = 312,
     T_CHARACTER = 313,
     T_BAD_CHARACTER = 314,
     T_ENCAPSED_AND_WHITESPACE = 315,
     T_CONSTANT_ENCAPSED_STRING = 316,
     T_ECHO = 317,
     T_DO = 318,
     T_WHILE = 319,
     T_ENDWHILE = 320,
     T_FOR = 321,
     T_ENDFOR = 322,
     T_FOREACH = 323,
     T_ENDFOREACH = 324,
     T_DECLARE = 325,
     T_ENDDECLARE = 326,
     T_AS = 327,
     T_SWITCH = 328,
     T_ENDSWITCH = 329,
     T_CASE = 330,
     T_DEFAULT = 331,
     T_BREAK = 332,
     T_CONTINUE = 333,
     T_GOTO = 334,
     T_FUNCTION = 335,
     T_CONST = 336,
     T_RETURN = 337,
     T_TRY = 338,
     T_CATCH = 339,
     T_THROW = 340,
     T_USE = 341,
     T_INSTEADOF = 342,
     T_GLOBAL = 343,
     T_PUBLIC = 344,
     T_PROTECTED = 345,
     T_PRIVATE = 346,
     T_FINAL = 347,
     T_ABSTRACT = 348,
     T_STATIC = 349,
     T_VAR = 350,
     T_UNSET = 351,
     T_ISSET = 352,
     T_EMPTY = 353,
     T_HALT_COMPILER = 354,
     T_CLASS = 355,
     T_TRAIT = 356,
     T_INTERFACE = 357,
     T_EXTENDS = 358,
     T_IMPLEMENTS = 359,
     T_OBJECT_OPERATOR = 360,
     T_DOUBLE_ARROW = 361,
     T_LIST = 362,
     T_ARRAY = 363,
     T_CLASS_C = 364,
     T_TRAIT_C = 365,
     T_METHOD_C = 366,
     T_FUNC_C = 367,
     T_LINE = 368,
     T_FILE = 369,
     T_COMMENT = 370,
     T_DOC_COMMENT = 371,
     T_OPEN_TAG = 372,
     T_OPEN_TAG_WITH_ECHO = 373,
     T_CLOSE_TAG = 374,
     T_WHITESPACE = 375,
     T_START_HEREDOC = 376,
     T_END_HEREDOC = 377,
     T_DOLLAR_OPEN_CURLY_BRACES = 378,
     T_CURLY_OPEN = 379,
     T_PAAMAYIM_NEKUDOTAYIM = 380,
     T_NAMESPACE = 381,
     T_NS_C = 382,
     T_DIR = 383,
     T_NS_SEPARATOR = 384
   };
#endif
/* Tokens.  */
#define END 0
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_SR_EQUAL 267
#define T_SL_EQUAL 268
#define T_XOR_EQUAL 269
#define T_OR_EQUAL 270
#define T_AND_EQUAL 271
#define T_MOD_EQUAL 272
#define T_CONCAT_EQUAL 273
#define T_DIV_EQUAL 274
#define T_MUL_EQUAL 275
#define T_MINUS_EQUAL 276
#define T_PLUS_EQUAL 277
#define T_BOOLEAN_OR 278
#define T_BOOLEAN_AND 279
#define T_IS_NOT_IDENTICAL 280
#define T_IS_IDENTICAL 281
#define T_IS_NOT_EQUAL 282
#define T_IS_EQUAL 283
#define T_IS_GREATER_OR_EQUAL 284
#define T_IS_SMALLER_OR_EQUAL 285
#define T_SR 286
#define T_SL 287
#define T_INSTANCEOF 288
#define T_UNSET_CAST 289
#define T_BOOL_CAST 290
#define T_OBJECT_CAST 291
#define T_ARRAY_CAST 292
#define T_STRING_CAST 293
#define T_DOUBLE_CAST 294
#define T_INT_CAST 295
#define T_DEC 296
#define T_INC 297
#define T_SCALAR_CAST 298
#define T_CLONE 299
#define T_NEW 300
#define T_EXIT 301
#define T_IF 302
#define T_ELSEIF 303
#define T_ELSE 304
#define T_ENDIF 305
#define T_LNUMBER 306
#define T_DNUMBER 307
#define T_STRING 308
#define T_STRING_VARNAME 309
#define T_VARIABLE 310
#define T_NUM_STRING 311
#define T_INLINE_HTML 312
#define T_CHARACTER 313
#define T_BAD_CHARACTER 314
#define T_ENCAPSED_AND_WHITESPACE 315
#define T_CONSTANT_ENCAPSED_STRING 316
#define T_ECHO 317
#define T_DO 318
#define T_WHILE 319
#define T_ENDWHILE 320
#define T_FOR 321
#define T_ENDFOR 322
#define T_FOREACH 323
#define T_ENDFOREACH 324
#define T_DECLARE 325
#define T_ENDDECLARE 326
#define T_AS 327
#define T_SWITCH 328
#define T_ENDSWITCH 329
#define T_CASE 330
#define T_DEFAULT 331
#define T_BREAK 332
#define T_CONTINUE 333
#define T_GOTO 334
#define T_FUNCTION 335
#define T_CONST 336
#define T_RETURN 337
#define T_TRY 338
#define T_CATCH 339
#define T_THROW 340
#define T_USE 341
#define T_INSTEADOF 342
#define T_GLOBAL 343
#define T_PUBLIC 344
#define T_PROTECTED 345
#define T_PRIVATE 346
#define T_FINAL 347
#define T_ABSTRACT 348
#define T_STATIC 349
#define T_VAR 350
#define T_UNSET 351
#define T_ISSET 352
#define T_EMPTY 353
#define T_HALT_COMPILER 354
#define T_CLASS 355
#define T_TRAIT 356
#define T_INTERFACE 357
#define T_EXTENDS 358
#define T_IMPLEMENTS 359
#define T_OBJECT_OPERATOR 360
#define T_DOUBLE_ARROW 361
#define T_LIST 362
#define T_ARRAY 363
#define T_CLASS_C 364
#define T_TRAIT_C 365
#define T_METHOD_C 366
#define T_FUNC_C 367
#define T_LINE 368
#define T_FILE 369
#define T_COMMENT 370
#define T_DOC_COMMENT 371
#define T_OPEN_TAG 372
#define T_OPEN_TAG_WITH_ECHO 373
#define T_CLOSE_TAG 374
#define T_WHITESPACE 375
#define T_START_HEREDOC 376
#define T_END_HEREDOC 377
#define T_DOLLAR_OPEN_CURLY_BRACES 378
#define T_CURLY_OPEN 379
#define T_PAAMAYIM_NEKUDOTAYIM 380
#define T_NAMESPACE 381
#define T_NS_C 382
#define T_DIR 383
#define T_NS_SEPARATOR 384




/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2011 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id: zend_language_parser.y 314025 2011-08-01 12:08:44Z dmitry $ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangling elseif/else ambiguity. Solved by shift.
 *
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  198
/* YYNRULES -- Number of rules.  */
#define YYNRULES  500
/* YYNRULES -- Number of states.  */
#define YYNSTATES  962

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   157,     2,   154,    47,    31,     2,
     149,   150,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   151,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,   155,    30,     2,   156,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   152,    29,   153,    50,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    54,
      58,    60,    62,    66,    69,    74,    80,    85,    86,    90,
      91,    93,    95,    97,   102,   104,   107,   111,   112,   113,
     123,   124,   125,   138,   139,   140,   148,   149,   150,   160,
     161,   162,   163,   176,   177,   184,   187,   191,   194,   198,
     201,   205,   209,   213,   217,   221,   223,   226,   232,   233,
     234,   245,   246,   247,   258,   259,   266,   268,   269,   270,
     271,   272,   273,   292,   296,   300,   302,   303,   305,   308,
     309,   310,   321,   323,   327,   329,   331,   333,   334,   336,
     337,   348,   349,   358,   359,   367,   369,   372,   374,   377,
     378,   381,   383,   384,   387,   388,   391,   393,   397,   398,
     401,   403,   406,   408,   413,   415,   420,   422,   427,   431,
     437,   441,   446,   451,   457,   458,   459,   466,   467,   473,
     475,   477,   479,   484,   485,   486,   494,   495,   496,   505,
     506,   509,   510,   514,   516,   517,   520,   524,   530,   535,
     540,   546,   554,   561,   562,   564,   566,   568,   569,   571,
     573,   576,   580,   584,   589,   593,   595,   597,   600,   605,
     609,   615,   617,   621,   624,   625,   626,   631,   634,   636,
     637,   647,   651,   653,   657,   659,   663,   664,   666,   668,
     671,   674,   677,   681,   683,   687,   689,   691,   695,   700,
     704,   705,   707,   709,   713,   715,   717,   718,   720,   722,
     725,   727,   729,   731,   733,   735,   737,   741,   747,   749,
     753,   759,   764,   768,   770,   771,   773,   774,   779,   781,
     782,   790,   794,   799,   800,   808,   809,   814,   817,   821,
     825,   829,   833,   837,   841,   845,   849,   853,   857,   861,
     864,   867,   870,   873,   874,   879,   880,   885,   886,   891,
     892,   897,   901,   905,   909,   913,   917,   921,   925,   929,
     933,   937,   941,   945,   948,   951,   954,   957,   961,   965,
     969,   973,   977,   981,   985,   989,   993,   997,   998,   999,
    1007,  1008,  1014,  1016,  1019,  1022,  1025,  1028,  1031,  1034,
    1037,  1040,  1041,  1045,  1047,  1052,  1056,  1060,  1063,  1064,
    1075,  1076,  1088,  1090,  1091,  1096,  1100,  1105,  1107,  1110,
    1111,  1117,  1118,  1126,  1127,  1134,  1135,  1143,  1144,  1152,
    1153,  1161,  1162,  1170,  1171,  1177,  1179,  1181,  1185,  1188,
    1190,  1194,  1197,  1199,  1201,  1202,  1203,  1210,  1212,  1215,
    1216,  1219,  1220,  1223,  1227,  1228,  1230,  1232,  1233,  1237,
    1239,  1241,  1243,  1245,  1247,  1249,  1251,  1253,  1255,  1257,
    1259,  1263,  1266,  1268,  1270,  1274,  1277,  1280,  1283,  1288,
    1292,  1294,  1298,  1300,  1302,  1304,  1308,  1311,  1313,  1317,
    1321,  1322,  1325,  1326,  1328,  1334,  1338,  1342,  1344,  1346,
    1348,  1350,  1352,  1354,  1355,  1356,  1364,  1366,  1369,  1370,
    1371,  1376,  1381,  1386,  1387,  1392,  1394,  1396,  1397,  1399,
    1402,  1406,  1410,  1412,  1417,  1418,  1424,  1426,  1428,  1430,
    1432,  1435,  1437,  1442,  1447,  1449,  1451,  1456,  1457,  1459,
    1461,  1462,  1465,  1470,  1475,  1477,  1479,  1483,  1485,  1488,
    1492,  1494,  1496,  1497,  1503,  1504,  1505,  1508,  1514,  1518,
    1522,  1524,  1531,  1536,  1541,  1544,  1547,  1550,  1552,  1555,
    1557,  1558,  1564,  1568,  1572,  1579,  1583,  1585,  1587,  1589,
    1594,  1599,  1602,  1605,  1610,  1613,  1616,  1618,  1619,  1624,
    1628
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,    -1,   160,   161,   163,    -1,
      -1,    72,    -1,   162,   148,    72,    -1,   172,    -1,   203,
      -1,   204,    -1,   118,   149,   150,   151,    -1,   145,   162,
     151,    -1,    -1,   145,   162,   152,   164,   160,   153,    -1,
      -1,   145,   152,   165,   160,   153,    -1,   105,   166,   151,
      -1,   168,   151,    -1,   166,     8,   167,    -1,   167,    -1,
     162,    -1,   162,    91,    72,    -1,   148,   162,    -1,   148,
     162,    91,    72,    -1,   168,     8,    72,    13,   308,    -1,
     100,    72,    13,   308,    -1,    -1,   169,   170,   171,    -1,
      -1,   172,    -1,   203,    -1,   204,    -1,   118,   149,   150,
     151,    -1,   173,    -1,    72,    26,    -1,   152,   169,   153,
      -1,    -1,    -1,    66,   149,   314,   150,   174,   172,   175,
     229,   233,    -1,    -1,    -1,    66,   149,   314,   150,    26,
     176,   169,   177,   231,   234,    69,   151,    -1,    -1,    -1,
      83,   149,   178,   314,   150,   179,   228,    -1,    -1,    -1,
      82,   180,   172,    83,   149,   181,   314,   150,   151,    -1,
      -1,    -1,    -1,    85,   149,   267,   151,   182,   267,   151,
     183,   267,   150,   184,   219,    -1,    -1,    92,   149,   314,
     150,   185,   223,    -1,    96,   151,    -1,    96,   314,   151,
      -1,    97,   151,    -1,    97,   314,   151,    -1,   101,   151,
      -1,   101,   270,   151,    -1,   101,   318,   151,    -1,   107,
     240,   151,    -1,   113,   242,   151,    -1,    81,   266,   151,
      -1,    76,    -1,   314,   151,    -1,   115,   149,   201,   150,
     151,    -1,    -1,    -1,    87,   149,   318,    91,   186,   218,
     217,   150,   187,   220,    -1,    -1,    -1,    87,   149,   270,
      91,   188,   318,   217,   150,   189,   220,    -1,    -1,    89,
     190,   149,   222,   150,   221,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   191,   152,   169,   153,   103,   149,
     192,   297,   193,    74,   150,   194,   152,   169,   153,   195,
     196,    -1,   104,   314,   151,    -1,    98,    72,   151,    -1,
     197,    -1,    -1,   198,    -1,   197,   198,    -1,    -1,    -1,
     103,   149,   297,   199,    74,   150,   200,   152,   169,   153,
      -1,   202,    -1,   201,     8,   202,    -1,   318,    -1,   206,
      -1,   208,    -1,    -1,    31,    -1,    -1,   284,   205,    72,
     207,   149,   235,   150,   152,   169,   153,    -1,    -1,   211,
      72,   212,   209,   215,   152,   243,   153,    -1,    -1,   213,
      72,   210,   214,   152,   243,   153,    -1,   119,    -1,   112,
     119,    -1,   120,    -1,   111,   119,    -1,    -1,   122,   297,
      -1,   121,    -1,    -1,   122,   216,    -1,    -1,   123,   216,
      -1,   297,    -1,   216,     8,   297,    -1,    -1,   125,   218,
      -1,   318,    -1,    31,   318,    -1,   172,    -1,    26,   169,
      86,   151,    -1,   172,    -1,    26,   169,    88,   151,    -1,
     172,    -1,    26,   169,    90,   151,    -1,    72,    13,   308,
      -1,   222,     8,    72,    13,   308,    -1,   152,   224,   153,
      -1,   152,   151,   224,   153,    -1,    26,   224,    93,   151,
      -1,    26,   151,   224,    93,   151,    -1,    -1,    -1,   224,
      94,   314,   227,   225,   169,    -1,    -1,   224,    95,   227,
     226,   169,    -1,    26,    -1,   151,    -1,   172,    -1,    26,
     169,    84,   151,    -1,    -1,    -1,   229,    67,   149,   314,
     150,   230,   172,    -1,    -1,    -1,   231,    67,   149,   314,
     150,    26,   232,   169,    -1,    -1,    68,   172,    -1,    -1,
      68,    26,   169,    -1,   236,    -1,    -1,   237,    74,    -1,
     237,    31,    74,    -1,   237,    31,    74,    13,   308,    -1,
     237,    74,    13,   308,    -1,   236,     8,   237,    74,    -1,
     236,     8,   237,    31,    74,    -1,   236,     8,   237,    31,
      74,    13,   308,    -1,   236,     8,   237,    74,    13,   308,
      -1,    -1,   127,    -1,   297,    -1,   239,    -1,    -1,   270,
      -1,   318,    -1,    31,   316,    -1,   239,     8,   270,    -1,
     239,     8,   318,    -1,   239,     8,    31,   316,    -1,   240,
       8,   241,    -1,   241,    -1,    74,    -1,   154,   315,    -1,
     154,   152,   314,   153,    -1,   242,     8,    74,    -1,   242,
       8,    74,    13,   308,    -1,    74,    -1,    74,    13,   308,
      -1,   243,   244,    -1,    -1,    -1,   260,   245,   264,   151,
      -1,   265,   151,    -1,   247,    -1,    -1,   261,   284,   205,
      72,   246,   149,   235,   150,   259,    -1,   105,   248,   249,
      -1,   297,    -1,   248,     8,   297,    -1,   151,    -1,   152,
     250,   153,    -1,    -1,   251,    -1,   252,    -1,   251,   252,
      -1,   253,   151,    -1,   257,   151,    -1,   256,   106,   254,
      -1,   297,    -1,   254,     8,   297,    -1,    72,    -1,   256,
      -1,   297,   144,    72,    -1,   255,    91,   258,    72,    -1,
     255,    91,   263,    -1,    -1,   263,    -1,   151,    -1,   152,
     169,   153,    -1,   262,    -1,   114,    -1,    -1,   262,    -1,
     263,    -1,   262,   263,    -1,   108,    -1,   109,    -1,   110,
      -1,   113,    -1,   112,    -1,   111,    -1,   264,     8,    74,
      -1,   264,     8,    74,    13,   308,    -1,    74,    -1,    74,
      13,   308,    -1,   265,     8,    72,    13,   308,    -1,   100,
      72,    13,   308,    -1,   266,     8,   314,    -1,   314,    -1,
      -1,   268,    -1,    -1,   268,     8,   269,   314,    -1,   314,
      -1,    -1,   126,   149,   271,   343,   150,    13,   314,    -1,
     318,    13,   314,    -1,   318,    13,    31,   318,    -1,    -1,
     318,    13,    31,    64,   298,   272,   306,    -1,    -1,    64,
     298,   273,   306,    -1,    63,   314,    -1,   318,    24,   314,
      -1,   318,    23,   314,    -1,   318,    22,   314,    -1,   318,
      21,   314,    -1,   318,    20,   314,    -1,   318,    19,   314,
      -1,   318,    18,   314,    -1,   318,    17,   314,    -1,   318,
      16,   314,    -1,   318,    15,   314,    -1,   318,    14,   314,
      -1,   317,    60,    -1,    60,   317,    -1,   317,    59,    -1,
      59,   317,    -1,    -1,   314,    27,   274,   314,    -1,    -1,
     314,    28,   275,   314,    -1,    -1,   314,     9,   276,   314,
      -1,    -1,   314,    11,   277,   314,    -1,   314,    10,   314,
      -1,   314,    29,   314,    -1,   314,    31,   314,    -1,   314,
      30,   314,    -1,   314,    44,   314,    -1,   314,    42,   314,
      -1,   314,    43,   314,    -1,   314,    45,   314,    -1,   314,
      46,   314,    -1,   314,    47,   314,    -1,   314,    41,   314,
      -1,   314,    40,   314,    -1,    42,   314,    -1,    43,   314,
      -1,    48,   314,    -1,    50,   314,    -1,   314,    33,   314,
      -1,   314,    32,   314,    -1,   314,    35,   314,    -1,   314,
      34,   314,    -1,   314,    36,   314,    -1,   314,    39,   314,
      -1,   314,    37,   314,    -1,   314,    38,   314,    -1,   314,
      49,   298,    -1,   149,   314,   150,    -1,    -1,    -1,   314,
      25,   278,   314,    26,   279,   314,    -1,    -1,   314,    25,
      26,   280,   314,    -1,   352,    -1,    58,   314,    -1,    57,
     314,    -1,    56,   314,    -1,    55,   314,    -1,    54,   314,
      -1,    53,   314,    -1,    52,   314,    -1,    65,   304,    -1,
      -1,    51,   281,   314,    -1,   310,    -1,   127,   149,   346,
     150,    -1,    62,   346,   155,    -1,   156,   305,   156,    -1,
      12,   314,    -1,    -1,   284,   205,   149,   282,   235,   150,
     285,   152,   169,   153,    -1,    -1,   113,   284,   205,   149,
     283,   235,   150,   285,   152,   169,   153,    -1,    99,    -1,
      -1,   105,   149,   286,   150,    -1,   286,     8,    74,    -1,
     286,     8,    31,    74,    -1,    74,    -1,    31,    74,    -1,
      -1,   162,   149,   288,   238,   150,    -1,    -1,   145,   148,
     162,   149,   289,   238,   150,    -1,    -1,   148,   162,   149,
     290,   238,   150,    -1,    -1,   296,   144,   341,   149,   291,
     238,   150,    -1,    -1,   296,   144,   328,   149,   292,   238,
     150,    -1,    -1,   330,   144,   341,   149,   293,   238,   150,
      -1,    -1,   330,   144,   328,   149,   294,   238,   150,    -1,
      -1,   328,   149,   295,   238,   150,    -1,   113,    -1,   162,
      -1,   145,   148,   162,    -1,   148,   162,    -1,   162,    -1,
     145,   148,   162,    -1,   148,   162,    -1,   296,    -1,   299,
      -1,    -1,    -1,   334,   124,   300,   338,   301,   302,    -1,
     334,    -1,   302,   303,    -1,    -1,   124,   338,    -1,    -1,
     149,   150,    -1,   149,   314,   150,    -1,    -1,    79,    -1,
     348,    -1,    -1,   149,   238,   150,    -1,    70,    -1,    71,
      -1,    80,    -1,   132,    -1,   133,    -1,   147,    -1,   128,
      -1,   129,    -1,   130,    -1,   131,    -1,   146,    -1,   140,
      79,   141,    -1,   140,   141,    -1,   307,    -1,   162,    -1,
     145,   148,   162,    -1,   148,   162,    -1,    42,   308,    -1,
      43,   308,    -1,   127,   149,   311,   150,    -1,    62,   311,
     155,    -1,   309,    -1,   296,   144,    72,    -1,    73,    -1,
     355,    -1,   162,    -1,   145,   148,   162,    -1,   148,   162,
      -1,   307,    -1,   157,   348,   157,    -1,   140,   348,   141,
      -1,    -1,   313,   312,    -1,    -1,     8,    -1,   313,     8,
     308,   125,   308,    -1,   313,     8,   308,    -1,   308,   125,
     308,    -1,   308,    -1,   315,    -1,   270,    -1,   318,    -1,
     318,    -1,   318,    -1,    -1,    -1,   333,   124,   319,   338,
     320,   327,   321,    -1,   333,    -1,   321,   322,    -1,    -1,
      -1,   124,   338,   323,   327,    -1,   324,    62,   337,   155,
      -1,   325,    62,   337,   155,    -1,    -1,   149,   326,   238,
     150,    -1,   325,    -1,   324,    -1,    -1,   335,    -1,   342,
     335,    -1,   296,   144,   328,    -1,   330,   144,   328,    -1,
     335,    -1,   331,    62,   337,   155,    -1,    -1,   287,   332,
      62,   337,   155,    -1,   334,    -1,   331,    -1,   287,    -1,
     335,    -1,   342,   335,    -1,   329,    -1,   335,    62,   337,
     155,    -1,   335,   152,   314,   153,    -1,   336,    -1,    74,
      -1,   154,   152,   314,   153,    -1,    -1,   314,    -1,   340,
      -1,    -1,   328,   339,    -1,   340,    62,   337,   155,    -1,
     340,   152,   314,   153,    -1,   341,    -1,    72,    -1,   152,
     314,   153,    -1,   154,    -1,   342,   154,    -1,   343,     8,
     344,    -1,   344,    -1,   318,    -1,    -1,   126,   149,   345,
     343,   150,    -1,    -1,    -1,   347,   312,    -1,   347,     8,
     314,   125,   314,    -1,   347,     8,   314,    -1,   314,   125,
     314,    -1,   314,    -1,   347,     8,   314,   125,    31,   316,
      -1,   347,     8,    31,   316,    -1,   314,   125,    31,   316,
      -1,    31,   316,    -1,   348,   349,    -1,   348,    79,    -1,
     349,    -1,    79,   349,    -1,    74,    -1,    -1,    74,    62,
     350,   351,   155,    -1,    74,   124,    72,    -1,   142,   314,
     153,    -1,   142,    73,    62,   314,   155,   153,    -1,   143,
     318,   153,    -1,    72,    -1,    75,    -1,    74,    -1,   116,
     149,   353,   150,    -1,   117,   149,   318,   150,    -1,     7,
     314,    -1,     6,   314,    -1,     5,   149,   314,   150,    -1,
       4,   314,    -1,     3,   314,    -1,   318,    -1,    -1,   353,
       8,   354,   318,    -1,   296,   144,    72,    -1,   330,   144,
      72,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   214,   214,   218,   218,   219,   223,   224,   228,   229,
     230,   231,   232,   233,   233,   235,   235,   237,   238,   242,
     243,   247,   248,   249,   250,   254,   255,   259,   259,   260,
     265,   266,   267,   268,   273,   274,   278,   279,   279,   279,
     280,   280,   280,   281,   281,   281,   282,   282,   282,   286,
     288,   290,   283,   292,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   307,   308,
     306,   311,   312,   310,   314,   314,   315,   316,   317,   318,
     319,   320,   316,   322,   323,   328,   329,   333,   334,   339,
     339,   339,   344,   345,   349,   353,   357,   362,   363,   368,
     368,   374,   373,   380,   379,   389,   390,   391,   392,   396,
     397,   401,   404,   406,   409,   411,   415,   416,   420,   421,
     426,   427,   431,   432,   437,   438,   443,   444,   449,   450,
     455,   456,   457,   458,   463,   464,   464,   465,   465,   470,
     471,   476,   477,   482,   484,   484,   488,   490,   490,   494,
     496,   500,   502,   507,   508,   513,   514,   515,   516,   517,
     518,   519,   520,   525,   526,   527,   532,   533,   538,   539,
     540,   541,   542,   543,   547,   548,   553,   554,   555,   560,
     561,   562,   563,   569,   570,   575,   575,   576,   577,   578,
     578,   583,   587,   588,   592,   593,   596,   598,   602,   603,
     607,   608,   612,   616,   617,   621,   622,   626,   630,   631,
     635,   636,   640,   641,   645,   646,   650,   651,   655,   656,
     660,   661,   662,   663,   664,   665,   669,   670,   671,   672,
     676,   677,   681,   682,   687,   688,   692,   692,   693,   697,
     697,   698,   699,   700,   700,   701,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   718,   719,   719,   720,   720,   721,
     721,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   748,
     751,   751,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   762,   763,   764,   765,   766,   767,   768,   768,
     770,   770,   775,   778,   780,   784,   785,   786,   787,   791,
     791,   794,   794,   797,   797,   800,   800,   803,   803,   806,
     806,   809,   809,   812,   812,   818,   819,   820,   821,   825,
     826,   827,   833,   834,   839,   840,   839,   842,   847,   848,
     853,   857,   858,   859,   863,   864,   865,   870,   871,   876,
     877,   878,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   888,   893,   894,   895,   896,   897,   898,   899,   900,
     901,   905,   909,   910,   911,   912,   913,   914,   915,   916,
     921,   922,   925,   927,   931,   932,   933,   934,   938,   939,
     944,   949,   954,   959,   960,   959,   962,   966,   967,   972,
     972,   976,   977,   981,   981,   987,   988,   989,   993,   994,
     998,   999,  1004,  1008,  1009,  1009,  1014,  1015,  1016,  1021,
    1022,  1023,  1027,  1028,  1029,  1034,  1035,  1039,  1040,  1045,
    1046,  1046,  1050,  1051,  1052,  1056,  1057,  1061,  1062,  1066,
    1067,  1072,  1073,  1073,  1074,  1079,  1080,  1084,  1085,  1086,
    1087,  1088,  1089,  1090,  1091,  1095,  1096,  1097,  1098,  1104,
    1105,  1105,  1106,  1107,  1108,  1109,  1114,  1115,  1116,  1121,
    1122,  1123,  1124,  1125,  1126,  1127,  1131,  1132,  1132,  1136,
    1137
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "'='", "\">>= (T_SR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"", "\"|= (T_OR_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"+= (T_PLUS_EQUAL)\"", "'?'", "':'", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"== (T_IS_EQUAL)\"", "'<'", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<= (T_IS_SMALLER_OR_EQUAL)\"",
  "\">> (T_SR)\"", "\"<< (T_SL)\"", "'+'", "'-'", "'.'", "'*'", "'/'",
  "'%'", "'!'", "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"",
  "\"(scalar) (T_SCALAR_CAST)\"", "'['", "\"clone (T_CLONE)\"",
  "\"new (T_NEW)\"", "\"exit (T_EXIT)\"", "\"if (T_IF)\"",
  "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"", "\"endif (T_ENDIF)\"",
  "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"variable (T_VARIABLE)\"",
  "\"number (T_NUM_STRING)\"", "T_INLINE_HTML", "T_CHARACTER",
  "T_BAD_CHARACTER",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"throw (T_THROW)\"", "\"use (T_USE)\"", "\"insteadof (T_INSTEADOF)\"",
  "\"global (T_GLOBAL)\"", "\"public (T_PUBLIC)\"",
  "\"protected (T_PROTECTED)\"", "\"private (T_PRIVATE)\"",
  "\"final (T_FINAL)\"", "\"abstract (T_ABSTRACT)\"",
  "\"static (T_STATIC)\"", "\"var (T_VAR)\"", "\"unset (T_UNSET)\"",
  "\"isset (T_ISSET)\"", "\"empty (T_EMPTY)\"",
  "\"__halt_compiler (T_HALT_COMPILER)\"", "\"class (T_CLASS)\"",
  "\"trait (T_TRAIT)\"", "\"interface (T_INTERFACE)\"",
  "\"extends (T_EXTENDS)\"", "\"implements (T_IMPLEMENTS)\"",
  "\"-> (T_OBJECT_OPERATOR)\"", "\"=> (T_DOUBLE_ARROW)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"__CLASS__ (T_CLASS_C)\"",
  "\"__TRAIT__ (T_TRAIT_C)\"", "\"__METHOD__ (T_METHOD_C)\"",
  "\"__FUNCTION__ (T_FUNC_C)\"", "\"__LINE__ (T_LINE)\"",
  "\"__FILE__ (T_FILE)\"", "\"comment (T_COMMENT)\"",
  "\"doc comment (T_DOC_COMMENT)\"", "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"__DIR__ (T_DIR)\"",
  "\"\\\\ (T_NS_SEPARATOR)\"", "'('", "')'", "';'", "'{'", "'}'", "'$'",
  "']'", "'`'", "'\"'", "$accept", "start", "top_statement_list", "@1",
  "namespace_name", "top_statement", "@2", "@3", "use_declarations",
  "use_declaration", "constant_declaration", "inner_statement_list", "@4",
  "inner_statement", "statement", "unticked_statement", "@5", "@6", "@7",
  "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16", "@17",
  "@18", "@19", "@20", "@21", "@22", "@23", "@24", "@25", "@26",
  "additional_catches", "non_empty_additional_catches", "additional_catch",
  "@27", "@28", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "@29",
  "unticked_class_declaration_statement", "@30", "@31", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "@32", "@33", "case_separator", "while_statement", "elseif_list", "@34",
  "new_elseif_list", "@35", "else_single", "new_else_single",
  "parameter_list", "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "@36", "@37",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "@38",
  "expr_without_variable", "@39", "@40", "@41", "@42", "@43", "@44", "@45",
  "@46", "@47", "@48", "@49", "@50", "@51", "function", "lexical_vars",
  "lexical_var_list", "function_call", "@52", "@53", "@54", "@55", "@56",
  "@57", "@58", "@59", "class_name", "fully_qualified_class_name",
  "class_name_reference", "dynamic_class_name_reference", "@60", "@61",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "@62", "@63",
  "variable_properties", "variable_property", "@64",
  "array_method_dereference", "method", "@65", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "@66", "base_variable_with_function_calls",
  "base_variable", "reference_variable", "compound_variable", "dim_offset",
  "object_property", "@67", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "@68", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "@69",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "@70", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,    91,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,    40,
      41,    59,   123,   125,    36,    93,    96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   158,   159,   161,   160,   160,   162,   162,   163,   163,
     163,   163,   163,   164,   163,   165,   163,   163,   163,   166,
     166,   167,   167,   167,   167,   168,   168,   170,   169,   169,
     171,   171,   171,   171,   172,   172,   173,   174,   175,   173,
     176,   177,   173,   178,   179,   173,   180,   181,   173,   182,
     183,   184,   173,   185,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   186,   187,
     173,   188,   189,   173,   190,   173,   173,   191,   192,   193,
     194,   195,   173,   173,   173,   196,   196,   197,   197,   199,
     200,   198,   201,   201,   202,   203,   204,   205,   205,   207,
     206,   209,   208,   210,   208,   211,   211,   211,   211,   212,
     212,   213,   214,   214,   215,   215,   216,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   221,   221,   222,   222,
     223,   223,   223,   223,   224,   225,   224,   226,   224,   227,
     227,   228,   228,   229,   230,   229,   231,   232,   231,   233,
     233,   234,   234,   235,   235,   236,   236,   236,   236,   236,
     236,   236,   236,   237,   237,   237,   238,   238,   239,   239,
     239,   239,   239,   239,   240,   240,   241,   241,   241,   242,
     242,   242,   242,   243,   243,   245,   244,   244,   244,   246,
     244,   247,   248,   248,   249,   249,   250,   250,   251,   251,
     252,   252,   253,   254,   254,   255,   255,   256,   257,   257,
     258,   258,   259,   259,   260,   260,   261,   261,   262,   262,
     263,   263,   263,   263,   263,   263,   264,   264,   264,   264,
     265,   265,   266,   266,   267,   267,   269,   268,   268,   271,
     270,   270,   270,   272,   270,   273,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   274,   270,   275,   270,   276,   270,   277,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   278,   279,   270,
     280,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   281,   270,   270,   270,   270,   270,   270,   282,   270,
     283,   270,   284,   285,   285,   286,   286,   286,   286,   288,
     287,   289,   287,   290,   287,   291,   287,   292,   287,   293,
     287,   294,   287,   295,   287,   296,   296,   296,   296,   297,
     297,   297,   298,   298,   300,   301,   299,   299,   302,   302,
     303,   304,   304,   304,   305,   305,   305,   306,   306,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   309,   310,   310,   310,   310,   310,   310,   310,   310,
     311,   311,   312,   312,   313,   313,   313,   313,   314,   314,
     315,   316,   317,   319,   320,   318,   318,   321,   321,   323,
     322,   324,   324,   326,   325,   327,   327,   327,   328,   328,
     329,   329,   330,   331,   332,   331,   333,   333,   333,   334,
     334,   334,   335,   335,   335,   336,   336,   337,   337,   338,
     339,   338,   340,   340,   340,   341,   341,   342,   342,   343,
     343,   344,   345,   344,   344,   346,   346,   347,   347,   347,
     347,   347,   347,   347,   347,   348,   348,   348,   348,   349,
     350,   349,   349,   349,   349,   349,   351,   351,   351,   352,
     352,   352,   352,   352,   352,   352,   353,   354,   353,   355,
     355
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     3,
       1,     1,     3,     2,     4,     5,     4,     0,     3,     0,
       1,     1,     1,     4,     1,     2,     3,     0,     0,     9,
       0,     0,    12,     0,     0,     7,     0,     0,     9,     0,
       0,     0,    12,     0,     6,     2,     3,     2,     3,     2,
       3,     3,     3,     3,     3,     1,     2,     5,     0,     0,
      10,     0,     0,    10,     0,     6,     1,     0,     0,     0,
       0,     0,    18,     3,     3,     1,     0,     1,     2,     0,
       0,    10,     1,     3,     1,     1,     1,     0,     1,     0,
      10,     0,     8,     0,     7,     1,     2,     1,     2,     0,
       2,     1,     0,     2,     0,     2,     1,     3,     0,     2,
       1,     2,     1,     4,     1,     4,     1,     4,     3,     5,
       3,     4,     4,     5,     0,     0,     6,     0,     5,     1,
       1,     1,     4,     0,     0,     7,     0,     0,     8,     0,
       2,     0,     3,     1,     0,     2,     3,     5,     4,     4,
       5,     7,     6,     0,     1,     1,     1,     0,     1,     1,
       2,     3,     3,     4,     3,     1,     1,     2,     4,     3,
       5,     1,     3,     2,     0,     0,     4,     2,     1,     0,
       9,     3,     1,     3,     1,     3,     0,     1,     1,     2,
       2,     2,     3,     1,     3,     1,     1,     3,     4,     3,
       0,     1,     1,     3,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     5,     1,     3,
       5,     4,     3,     1,     0,     1,     0,     4,     1,     0,
       7,     3,     4,     0,     7,     0,     4,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     0,     7,
       0,     5,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     3,     1,     4,     3,     3,     2,     0,    10,
       0,    11,     1,     0,     4,     3,     4,     1,     2,     0,
       5,     0,     7,     0,     6,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     5,     1,     1,     3,     2,     1,
       3,     2,     1,     1,     0,     0,     6,     1,     2,     0,
       2,     0,     2,     3,     0,     1,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     1,     3,     2,     2,     2,     4,     3,
       1,     3,     1,     1,     1,     3,     2,     1,     3,     3,
       0,     2,     0,     1,     5,     3,     3,     1,     1,     1,
       1,     1,     1,     0,     0,     7,     1,     2,     0,     0,
       4,     4,     4,     0,     4,     1,     1,     0,     1,     2,
       3,     3,     1,     4,     0,     5,     1,     1,     1,     1,
       2,     1,     4,     4,     1,     1,     4,     0,     1,     1,
       0,     2,     4,     4,     1,     1,     3,     1,     2,     3,
       1,     1,     0,     5,     0,     0,     2,     5,     3,     3,
       1,     6,     4,     4,     2,     2,     2,     1,     2,     1,
       0,     5,     3,     3,     6,     3,     1,     1,     1,     4,
       4,     2,     2,     4,     2,     2,     1,     0,     4,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   311,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   465,     0,     0,   361,     0,
     369,   370,     6,   392,   445,    65,   371,     0,    46,     0,
       0,     0,    74,     0,     0,     0,     0,   322,     0,     0,
      77,     0,     0,     0,     0,     0,   345,     0,     0,     0,
       0,   105,   107,   111,     0,     0,   375,   376,   377,   378,
     372,   373,     0,     0,   379,   374,     0,     0,    76,    29,
     457,   364,     0,   394,     4,     0,     8,    34,     9,    10,
      95,    96,     0,     0,   409,    97,   438,     0,   397,   313,
       0,   408,     0,   410,     0,   441,     0,   437,   416,   436,
     439,   444,     0,   302,   393,     6,   345,     0,    97,   495,
     494,     0,   492,   491,   317,   283,   284,   285,   286,     0,
     309,   308,   307,   306,   305,   304,   303,   345,     0,     0,
     346,     0,   262,   412,     0,   260,     0,   470,     0,   402,
     247,     0,     0,   346,   352,   245,   353,     0,   357,   439,
       0,     0,   310,     0,    35,     0,   233,     0,    43,   234,
       0,     0,     0,    55,     0,    57,     0,     0,     0,    59,
     409,     0,   410,     0,     0,     0,    21,     0,    20,   176,
       0,     0,   175,   108,   106,   181,     0,    97,     0,     0,
       0,     0,   239,   465,   479,     0,   381,     0,     0,     0,
     477,     0,    15,     0,   396,     0,    27,     0,   365,     0,
     366,     0,     0,     0,   329,     0,    18,   109,   103,    98,
       0,     0,     0,   267,     0,   269,   297,   263,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
     261,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,     0,   447,   413,   447,     0,
     458,   440,     0,     0,   312,     0,   348,     0,     0,   474,
     411,     0,   315,   403,   466,     0,   348,     0,   367,     0,
     354,   440,   362,     0,     0,     0,    64,     0,     0,     0,
     235,   238,   409,   410,     0,     0,    56,    58,    84,     0,
      60,    61,    29,    83,    23,     0,     0,    17,     0,   177,
     410,     0,    62,     0,     0,    63,     0,     0,    92,    94,
     496,     0,     0,     0,   464,     0,   480,     0,   380,   478,
     392,     0,     0,   476,   399,   475,   395,     5,    12,    13,
     333,   296,    36,     0,     0,   316,   398,     7,   167,     0,
       0,   101,   112,    99,   318,   447,   499,     0,   430,   428,
       0,     0,     0,   271,     0,   300,     0,     0,     0,   272,
     274,   273,   288,   287,   290,   289,   291,   293,   294,   292,
     282,   281,   276,   277,   275,   278,   279,   280,   295,     0,
     241,   258,   257,   256,   255,   254,   253,   252,   251,   250,
     249,   248,   167,   500,   431,     0,   448,     0,     0,     0,
       0,   493,   347,   455,     0,   469,     0,   468,   347,   430,
     167,   246,   431,     0,   363,    37,   232,     0,     0,    49,
     236,    71,    68,     0,     0,    53,     0,     0,   400,     0,
       0,     0,     0,   383,     0,   382,    26,   390,    27,     0,
      22,    19,     0,   174,   182,   179,   320,     0,     0,   497,
     489,   490,    11,     0,   461,     0,   460,   314,     0,   482,
       0,   483,   485,   331,     3,     5,   167,     0,    28,    30,
      31,    32,   446,     0,     0,   166,   409,   410,     0,     0,
       0,   349,   110,   114,     0,     0,     0,   163,     0,     0,
     337,   335,   429,   268,   270,     0,     0,   264,   266,     0,
     242,     0,   341,   339,   433,   450,   414,   449,   454,   442,
     443,   473,   472,     0,     0,   355,    40,     0,    47,    44,
     234,     0,     0,     0,     0,     0,     0,     0,   386,   387,
     407,     0,   402,   400,     0,     0,   385,     0,     0,    24,
     178,     0,   163,    93,    67,     0,   462,   464,     0,   486,
     488,   487,     0,     0,   167,    16,     3,     0,     0,   170,
     330,     0,    25,     0,   351,     0,     0,   113,   116,   184,
     163,   164,     0,   153,     0,   165,   435,   456,   167,   167,
     301,   298,   243,   344,   167,   167,   451,   427,   447,     0,
       0,   467,   368,   359,    29,    38,     0,     0,     0,   237,
     118,     0,   118,   120,   128,     0,    29,   126,    75,   134,
     134,    54,     0,   389,   403,   401,     0,   384,   391,     0,
     180,     0,   498,   464,   459,     0,   481,     0,     0,    14,
     334,     0,     0,   409,   410,   350,   115,   184,     0,   216,
       0,   323,   163,     0,   155,     0,     0,     0,   367,     0,
       0,   423,   426,   425,   418,     0,     0,   471,   356,    27,
     143,     0,    29,   141,    45,    50,     0,     0,   121,     0,
       0,    27,   134,     0,   134,     0,   406,   405,   388,    78,
     323,     0,   240,   484,   332,    33,   173,   216,   117,     0,
       0,   220,   221,   222,   225,   224,   223,   215,   104,   183,
     188,   185,     0,   214,   218,     0,     0,     0,     0,     0,
     156,     0,   338,   336,   299,   244,   342,   340,   167,   447,
     447,   415,   452,   453,     0,   358,   146,   149,     0,    27,
     234,   119,    72,    69,   129,     0,     0,     0,     0,     0,
       0,   130,     0,     0,     0,   463,   102,     0,     0,   192,
       0,    97,   219,     0,   187,    29,     0,    29,     0,   159,
       0,   158,     0,     0,     0,     0,   417,   360,   151,     0,
       0,    39,    48,     0,     0,     0,     0,   127,     0,   132,
       0,   139,   140,   137,   131,   404,    79,    29,     0,     0,
     194,   196,   191,   228,     0,     0,     0,    27,     0,   327,
       0,    27,   160,     0,   157,   424,   421,   422,   419,     0,
       0,     0,     0,   150,   142,    51,    29,   124,    73,    70,
     133,   135,    29,     0,    27,   231,   193,     6,     0,   197,
     198,     0,     0,   206,     0,     0,     0,     0,   186,   189,
       0,   100,   328,     0,   324,   319,     0,   162,   427,     0,
      29,     0,     0,     0,    27,    29,    27,     0,   321,   195,
     199,   200,   210,     0,   201,     0,   229,   226,     0,   230,
       0,   325,   161,   420,     0,    27,    42,   144,    29,   122,
      52,     0,    27,    80,     0,   209,   202,   203,   207,     0,
     163,   326,     0,     0,    27,   125,     0,   208,     0,   227,
       0,   147,   145,     0,    29,   204,     0,    29,   123,    27,
     212,    29,   190,    27,    81,    27,    86,   213,     0,    82,
      85,    87,     0,    88,    89,     0,     0,    90,     0,    29,
      27,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    83,    84,   495,   357,   187,   188,
      85,   216,   363,   498,   847,    87,   547,   690,   624,   756,
     308,   627,   167,   626,   550,   760,   883,   557,   553,   806,
     552,   805,   171,   183,   773,   853,   926,   946,   949,   950,
     951,   955,   958,   337,   338,    88,    89,   230,    90,   516,
      91,   513,   372,    92,   371,    93,   515,   596,   597,   697,
     632,   910,   848,   638,   454,   641,   703,   885,   852,   813,
     694,   757,   923,   798,   937,   801,   841,   602,   603,   604,
     504,   505,   191,   192,   196,   669,   729,   780,   898,   730,
     778,   822,   858,   859,   860,   861,   916,   862,   863,   864,
     914,   942,   731,   732,   733,   734,   824,   735,   165,   309,
     310,   551,    94,   344,   678,   298,   387,   388,   382,   384,
     386,   677,   525,   129,   517,   572,   118,   738,   830,    96,
     368,   584,   496,   609,   608,   615,   614,   422,    97,   605,
     155,   156,   443,   623,   688,   755,   162,   219,   441,    98,
     560,   467,    99,   561,   294,   562,   181,   101,   289,   102,
     103,   428,   617,   751,   796,   878,   682,   683,   748,   684,
     104,   105,   106,   107,   231,   108,   109,   110,   111,   427,
     536,   616,   537,   538,   112,   485,   486,   653,   148,   149,
     209,   210,   488,   582,   113,   341,   575,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -715
static const yytype_int16 yypact[] =
{
    -715,    80,    95,  -715,  1715,  4077,  4077,   -51,  4077,  4077,
    4077,  4077,  4077,  4077,  4077,  -715,  4077,  4077,  4077,  4077,
    4077,  4077,  4077,   270,   270,  2636,  4077,   307,   -44,   -29,
    -715,  -715,    82,  -715,  -715,  -715,  -715,  4077,  -715,   -25,
      83,    91,  -715,    98,  2767,  2898,    84,  -715,   177,  3029,
    -715,  4077,   -30,   -41,   133,   178,   -14,   120,   164,   216,
     219,  -715,  -715,  -715,   223,   231,  -715,  -715,  -715,  -715,
    -715,  -715,   144,   -31,  -715,  -715,   312,  4077,  -715,  -715,
     152,   169,   220,   -65,  -715,    10,  -715,  -715,  -715,  -715,
    -715,  -715,   342,   349,  -715,   411,   389,   318,  -715,  -715,
    4511,  -715,    27,  1049,   311,  -715,   324,   408,   354,  -715,
      60,  -715,   -28,  -715,  -715,  -715,   374,   335,   411,  5193,
    5193,  4077,  5193,  5193,  5293,  -715,  -715,   462,  -715,  4077,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,   364,   312,
     244,   369,  -715,  -715,   370,  -715,   270,  5051,   372,   520,
    -715,   384,   312,   385,   393,  -715,  -715,   394,   410,   -19,
     -28,  3160,  -715,  4077,  -715,    14,  5193,  2505,  -715,  4077,
    4077,   396,  4077,  -715,  4552,  -715,  4595,   388,   533,  -715,
     399,  5193,   316,   395,  4636,   312,    23,    15,  -715,  -715,
     251,    18,  -715,  -715,  -715,   542,    28,   411,   270,   270,
     270,   406,  -715,  2636,   -13,   147,  -715,  4208,   270,   267,
    -715,   312,  -715,   197,   -45,  4677,   405,  4077,   159,   407,
     235,   159,   113,   492,  -715,   493,  -715,   444,  -715,  -715,
     -15,   505,    20,  -715,  4077,  -715,   547,  -715,  -715,  4077,
    4077,  4077,  4077,  4077,  4077,  4077,  4077,  4077,  4077,  4077,
    4077,  4077,  4077,  4077,  4077,  4077,  4077,  4077,   307,  -715,
    -715,  -715,  3291,  4077,  4077,  4077,  4077,  4077,  4077,  4077,
    4077,  4077,  4077,  4077,  -715,   154,  4077,  -715,  4077,  4077,
     152,   -37,   430,  4720,  -715,   312,   253,   170,   170,  -715,
    -715,  3422,  -715,  3553,  -715,   312,   385,   -27,   432,   -27,
    -715,    -1,  -715,  4761,  4803,  4077,  -715,   500,  4077,   440,
     586,  5193,   504,   502,   524,  4844,  -715,  -715,  -715,  1018,
    -715,  -715,  -715,  -715,   134,   527,   -30,  -715,  4077,  -715,
    -715,   -41,  -715,  1018,   526,  -715,   452,    13,  -715,  -715,
    -715,    32,   453,   454,   299,   456,  -715,   532,  -715,  -715,
     548,  1237,   464,  -715,  -715,  -715,   246,  -715,  -715,  -715,
    -715,  -715,  -715,  1846,  1333,  -715,  -715,  -715,  3684,   605,
     -17,  -715,   498,  -715,  -715,  4077,   473,  4077,   474,    -1,
     475,   -28,  4077,  5270,  4077,  -715,  4077,  4077,  4077,  2687,
    2818,  1464,  1501,  1501,  1501,  1501,  1263,  1263,  1263,  1263,
     543,   543,   391,   391,   391,   462,   462,   462,  -715,   243,
    5293,  5293,  5293,  5293,  5293,  5293,  5293,  5293,  5293,  5293,
    5293,  5293,  3684,   473,   477,   480,  5193,   476,   170,   479,
    1701,  -715,   283,  -715,   270,  5193,   270,  5092,   385,  -715,
    3684,  -715,  -715,   170,  -715,   606,  5193,   484,  4885,  -715,
    -715,  -715,  -715,   622,    36,  -715,  1018,  1018,  1018,   487,
      17,   489,   312,   -55,   496,  -715,  -715,  -715,   488,   571,
    -715,  -715,  4341,  -715,  -715,   633,  -715,   270,   497,  -715,
    -715,  -715,  -715,   495,  -715,    40,  -715,  -715,   155,  -715,
    4077,  -715,  -715,  -715,   494,  -715,  3684,   501,  -715,  -715,
    -715,  -715,  -715,   270,   506,   644,    43,    50,  1018,   507,
     312,   385,  -715,   531,   -17,   509,   508,   150,   511,  4382,
    -715,  -715,    -1,  5233,  5293,  4077,  5152,  1545,  1416,   307,
    -715,   512,  -715,  -715,  -715,  -715,  -715,     0,  -715,  -715,
    -715,  -715,  -715,  3815,   513,  -715,  -715,  2505,  -715,  -715,
    4077,  4077,   270,   207,  1018,   587,  1978,    -2,  -715,  -715,
     539,   515,   650,  1018,   530,   312,   136,   595,   569,  -715,
    -715,  1018,   150,  -715,  -715,   270,  -715,   299,   672,  -715,
    -715,  -715,   538,   983,  3684,  -715,   541,   549,   550,  -715,
    -715,  3946,  -715,   312,   385,   -17,   546,   698,  -715,  -715,
     150,  -715,   559,   702,    75,  -715,  -715,  -715,  3684,  3684,
    5316,  -715,  -715,  -715,  3684,  3684,  -715,   563,  4077,  4077,
     270,  5193,  -715,  -715,  -715,  -715,  4077,  2110,   562,  5193,
     591,   270,   591,  -715,  -715,   704,  -715,  -715,  -715,   568,
     572,  -715,  1018,  -715,  1018,  -715,   570,   210,  -715,   573,
    -715,   574,  -715,   299,  -715,  4077,  -715,   575,   576,  -715,
    -715,   578,   270,    44,   124,   385,   698,  -715,   -17,   631,
     577,   620,   123,   658,   724,   588,   596,  4077,   432,   601,
     602,  -715,   693,   706,  -715,   609,  4423,  -715,   646,   359,
    -715,  4927,  -715,  -715,  -715,  -715,   207,   623,  -715,   625,
    1018,   682,  -715,   355,  -715,   163,  -715,   651,  -715,  -715,
     620,    46,  5293,  -715,  -715,  -715,  -715,   648,  -715,   705,
     -17,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,   374,   387,  -715,    29,   626,   630,   628,   179,
     768,  1018,  -715,  -715,  5316,  -715,  -715,  -715,  3684,  4077,
    4077,   659,  -715,  -715,   170,  -715,  -715,   378,   634,   703,
    4077,  -715,  -715,  -715,  -715,   635,   371,   637,  4077,     6,
     232,  -715,  1018,   -17,   638,  -715,  -715,   769,     8,  -715,
     715,   411,  -715,   720,  -715,  -715,   185,  -715,   719,   781,
    1018,  -715,   653,   645,   649,   170,  -715,  -715,   390,   662,
    2505,  -715,  -715,   656,   663,  2242,  2242,  -715,   657,  -715,
    4470,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  1018,   -17,
    -715,    25,  -715,   799,    30,   742,   802,   665,   745,  -715,
      48,   667,   803,  1018,  -715,  -715,  -715,  -715,  -715,   673,
     795,   754,  4077,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,   752,   674,  -715,  -715,   737,   676,    25,
    -715,   679,   741,   728,   684,   694,  1018,   766,  -715,  -715,
    1018,  -715,  -715,   186,  -715,  -715,  1018,  -715,   563,  4077,
    -715,   690,  4968,  2374,   756,  -715,   -18,   695,  -715,  -715,
    -715,  -715,   503,   -17,  -715,   774,  -715,   835,   700,  -715,
     776,  -715,  -715,  -715,  5009,   783,  -715,  -715,  -715,  -715,
    -715,   708,   108,  -715,   784,   785,   847,  -715,  -715,  1018,
     150,  -715,   834,  2505,   775,  -715,   710,  -715,   -17,  -715,
     714,  -715,  -715,   716,  -715,  -715,   341,  -715,  -715,   712,
    -715,  -715,  -715,   421,  -715,   713,   765,  -715,   722,  -715,
     765,  -715,   -17,  -715,  -715,   798,   725,  -715,   717,  -715,
     721,  -715
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -715,  -715,  -340,  -715,   -23,  -715,  -715,  -715,  -715,   552,
    -715,   -83,  -715,  -715,    24,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
     -71,  -715,  -715,  -715,   404,   519,   521,  -116,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,   288,   256,
     189,  -715,    85,  -715,  -715,  -715,  -335,  -715,  -715,    76,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -561,  -715,   217,
    -395,  -715,  -715,   561,  -715,   226,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,    31,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -714,  -715,  -715,  -715,  -536,
    -715,  -715,   -40,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,     3,   184,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,   782,  -350,
    -246,  -715,  -715,  -715,  -715,  -715,  -715,  -715,   221,  -165,
     309,  -715,  -715,   332,   336,  -715,   670,   711,  -421,   478,
    1055,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,    22,
    -197,  -715,     7,  -715,  -715,  -715,   -22,   -24,  -715,  -268,
    -435,  -715,  -715,   142,   -21,   249,   326,  -715,   727,  -715,
     422,   254,  -715,  -715,  -715,  -715,  -715,  -715
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -456
static const yytype_int16 yytable[] =
{
     140,   140,   282,   159,   153,   158,   160,    95,   545,   180,
     429,   651,   408,   541,   628,   542,   819,   494,   225,   782,
     512,   477,   305,   326,   639,   278,   331,   531,    86,   186,
     144,   144,   811,   189,   157,   378,   334,   783,   867,   670,
     479,   115,   115,   278,   555,   544,    34,    34,   577,   346,
     213,  -168,  -171,   214,   577,   115,   873,   373,  -169,   197,
     195,   278,   618,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,  -138,  -138,  -138,   424,  -346,
       3,   336,   589,   223,   224,    47,   260,   261,   281,  -346,
     378,   424,   376,   223,    34,    -2,   564,   857,   121,  -348,
     439,   587,   442,   223,   360,   161,   673,   518,   164,  -412,
    -412,   347,  -429,   190,   325,   279,   286,   211,   185,   197,
     163,   212,   278,   140,   168,  -432,   280,    80,   509,   296,
     312,   510,  -172,   279,   374,  -138,   301,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   674,
     640,   279,   619,   144,   465,   586,   177,   812,   206,   820,
     821,   226,   324,   478,   598,   306,   327,   140,   465,   332,
     509,   223,   377,   510,    80,   140,   140,   140,   915,   335,
     784,   868,   480,  -412,  -412,   140,   556,   204,   356,   658,
     578,   307,   353,  -168,  -171,   115,   775,   144,   874,   687,
    -169,  -136,  -136,  -136,  -432,   144,   144,   144,   379,  -428,
     788,   381,   279,   675,   676,   144,   828,   900,   204,   679,
     680,   204,   115,   205,   804,   469,   423,   579,    34,   580,
     581,   535,   169,   204,   159,   153,   158,   160,   631,   468,
     170,   716,   433,   204,    34,   598,   535,   172,   218,   178,
     601,   379,   193,   789,   381,   207,   208,   768,   769,   829,
     901,  -136,   432,   379,   379,   157,   381,   381,   509,   198,
     366,   510,   438,   379,  -172,   379,   381,   601,   381,   115,
    -348,    34,   223,   612,   223,   206,   207,   208,   348,   207,
     208,   465,   465,   465,   204,   509,   463,   194,   510,   221,
    -154,   207,   208,   186,   217,   705,   377,   529,    80,   204,
     463,   207,   208,   199,   353,   115,   771,    34,   718,   797,
     137,   140,   377,   115,    80,    34,   768,   769,   506,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   204,   115,   465,    34,   223,   353,   511,   358,   359,
     685,   144,   138,   792,  -347,   139,   137,   522,   223,   930,
     838,    80,   207,   208,   137,   200,    95,   766,   201,   770,
     779,   115,   202,    34,   380,  -412,  -412,   207,   208,   115,
     203,    34,   506,   137,   115,   814,   140,   499,   138,   465,
    -347,   139,   223,   224,   223,   493,   138,    80,   465,   139,
     506,   223,   360,   328,   379,    80,   465,   381,   354,   207,
     208,   140,   137,   140,   227,   138,   144,   425,   139,   379,
     137,   228,   381,   816,    80,   483,   -41,   -41,   -41,   380,
     425,   223,   493,   463,   463,   463,   255,   256,   257,   566,
     258,   144,   229,   144,   138,   799,   800,   139,   767,   768,
     769,  -434,   151,    80,   140,   152,   506,   839,   840,   349,
     274,    80,   232,   355,   808,   768,   769,   321,   275,   856,
     276,   865,   349,    47,   355,   349,   355,   465,   277,   465,
     140,   793,   794,   211,   144,   463,  -217,   594,  -148,  -148,
    -148,   511,   940,   941,   511,   721,   722,   723,   724,   725,
     726,   142,   145,   220,   222,   159,   153,   158,   160,   865,
     144,   258,   285,   287,   288,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   292,   293,   140,
     140,   463,   295,   223,   300,   465,   157,   297,   299,   318,
     463,   689,   647,   917,   506,   314,   319,   322,   463,   511,
     320,   663,   140,   701,   140,   333,   343,   535,   362,   144,
     144,  -412,  -412,   365,   367,   369,   370,   375,   506,   506,
     665,   625,   511,   385,   506,   506,   465,   511,   935,   374,
     637,   440,   144,   447,   144,   252,   253,   254,   255,   256,
     257,   449,   258,   452,   450,   451,   453,   140,   535,   470,
     475,   476,   954,   481,   489,   482,   487,   465,   140,   759,
     490,   721,   722,   723,   724,   725,   726,   492,   508,   463,
     514,   463,  -455,   520,   521,   465,   532,   144,   466,   533,
     140,   534,   546,   548,   539,   554,   563,   565,   144,   140,
     567,   568,   474,   569,   576,   511,   571,   585,   574,   511,
     588,   693,   591,   465,   595,   593,   590,   600,   644,   635,
     144,   599,   613,   622,   642,   825,   606,   648,   465,   144,
     643,   348,   649,   140,   100,   119,   120,   463,   122,   123,
     124,   125,   126,   127,   128,   655,   130,   131,   132,   133,
     134,   135,   136,   656,   659,   147,   150,   511,   667,   660,
     661,   465,   827,   144,   831,   465,   668,   166,   506,   671,
     672,   465,   681,   695,   174,   176,   696,   700,   463,   702,
     708,   184,   709,   704,   710,   737,   714,   736,   713,   715,
     379,   719,   740,   381,   854,   781,   720,   741,   742,   721,
     722,   723,   724,   725,   726,   727,   743,   215,   719,   463,
     511,   746,   747,   720,   465,   749,   721,   722,   723,   724,
     725,   726,   727,   884,   752,   558,   559,   463,   750,   886,
     754,   379,   765,   762,   381,   763,   772,   777,   785,   786,
     787,   790,   818,   795,   728,   802,   807,   803,   809,   823,
     817,   283,   826,   832,   833,   463,   511,   905,   511,   284,
     836,   776,   912,   835,   837,   141,   141,   844,   850,   154,
     463,   842,   866,   845,   869,   870,   876,   592,   871,   872,
     875,   880,   879,   881,   843,   924,   887,   888,  -205,   889,
     891,   303,   892,   304,   893,   894,   511,   100,   895,   311,
     897,   906,   315,   463,   911,   913,   918,   463,   919,   920,
     921,   939,  -152,   463,   943,   928,   927,  -211,   945,   925,
     931,   933,   934,   634,   936,   944,   947,   938,   948,   959,
     511,   952,   956,   147,   961,   957,   960,   351,   471,   953,
     650,   573,   500,   666,   501,   761,   851,   364,   699,   739,
     890,   849,   473,   717,   774,   646,   463,   511,   645,   745,
     903,   329,   711,   654,   383,   511,     0,   909,     0,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   141,   511,
     345,     0,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,     0,     0,   426,   932,   426,   430,
       0,   706,     0,   707,     0,     0,     0,     0,     0,     0,
       0,   435,     0,   437,     0,     0,     0,     0,     0,     0,
       0,     0,   141,     0,     0,   446,     0,     0,   448,     0,
     141,   141,   141,     0,     0,     0,     0,     0,     0,     0,
     141,     0,   233,   234,   235,     0,     0,     0,   472,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,   764,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,   100,     0,     0,     0,     0,     0,     0,
     154,     0,     0,     0,     0,   426,     0,   519,     0,     0,
     791,     0,   523,     0,   524,     0,   526,   527,   528,     0,
     456,   457,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     0,     0,     0,     0,   143,   143,
     458,   815,     0,     0,     0,     0,     0,     0,    30,    31,
     115,     0,     0,     0,     0,     0,     0,     0,    36,   834,
       0,   464,     0,     0,   182,     0,     0,     0,  -412,  -412,
       0,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   855,     0,     0,
       0,   137,     0,     0,     0,     0,     0,     0,   657,     0,
       0,     0,   877,     0,     0,   459,    66,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,   460,     0,
     583,     0,     0,   461,    74,    75,   462,     0,     0,     0,
       0,     0,     0,     0,     0,   896,     0,     0,     0,   899,
       0,     0,     0,     0,     0,   902,     0,     0,     0,     0,
       0,   141,     0,     0,     0,   610,     0,     0,     0,     0,
       0,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   621,     0,     0,   141,   100,   141,     0,
     311,   629,     0,     0,     0,   313,   100,     0,   929,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   464,   464,
     464,     0,     0,     0,     0,   330,   233,   234,   235,     0,
       0,     0,     0,   339,   340,   342,     0,     0,     0,   141,
       0,     0,   236,   352,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   141,   258,     0,   426,   686,
     464,     0,     0,     0,     0,     0,   691,   100,     0,  -456,
    -456,  -456,  -456,   250,   251,   252,   253,   254,   255,   256,
     257,   154,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   712,     0,     0,     0,     0,
       0,     0,     0,     0,   141,   141,   464,     0,     0,     0,
       0,     0,   233,   234,   235,   464,     0,   744,     0,     0,
       0,     0,     0,   464,     0,     0,     0,   141,   236,   141,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
     491,     0,     0,     0,     0,     0,     0,     0,     0,   484,
       0,     0,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   141,     0,     0,     0,     0,     0,   426,
     426,     0,     0,   507,   464,     0,   464,     0,     0,     0,
     311,     0,     0,     0,     0,   141,     0,     0,   810,     0,
       0,     0,     0,     0,   141,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   530,   258,     0,     0,     0,     0,
     100,     0,     0,     0,     0,   100,   100,   507,   141,     0,
       0,     0,   464,     0,     0,     0,   502,     0,     0,   290,
       0,   290,     0,     0,     0,   507,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   882,   258,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   464,     0,     0,     0,     0,     0,     0,
       0,     0,   339,  -456,  -456,  -456,  -456,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   904,
     258,   507,     0,   100,   464,     0,     0,     0,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   464,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   100,   258,     0,     0,     0,     0,     0,
     464,     0,     0,     0,     0,     0,     0,   630,   633,     0,
       0,     0,     0,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     652,     0,   484,     0,     0,     0,     0,     0,     0,   507,
       0,     0,     0,     0,     0,     0,   664,     0,   464,     0,
       0,     0,   464,     0,     0,     0,     0,     0,   464,     0,
       0,     0,     0,   507,   507,     0,     0,     0,     0,   507,
     507,     0,     0,     0,     0,   290,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   698,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,   484,     0,
     233,   234,   235,     0,     0,     0,     0,   290,     5,     6,
       7,     8,     9,     0,     0,     0,   236,    10,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,   633,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,    29,     0,     0,     0,    30,    31,    32,    33,    34,
       0,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      40,     0,    41,   507,    42,     0,     0,    43,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50,     0,    51,
      52,     0,    53,     0,     0,     0,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    70,    71,     5,
       6,     7,     8,     9,   540,    72,     0,     0,    10,     0,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
       0,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,    33,
      34,     0,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,     0,    49,    50,     0,
      51,     0,     0,    53,     0,     0,     0,    54,    55,    56,
       0,    57,    58,    59,   497,    61,    62,    63,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     5,     6,     7,     8,     9,    72,     0,     0,     0,
      10,   117,    74,    75,    76,    77,     0,    78,    79,     0,
      80,     0,    81,    82,   636,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,    33,    34,     0,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,    51,     0,     0,    53,     0,     0,     0,     0,
       0,    56,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     5,     6,     7,     8,     9,    72,     0,
       0,     0,    10,   117,    74,    75,    76,    77,     0,    78,
      79,     0,    80,     0,    81,    82,   692,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,    29,     0,     0,     0,
      30,    31,    32,    33,    34,     0,    35,     0,     0,     0,
      36,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,    51,     0,     0,    53,     0,     0,
       0,     0,     0,    56,     0,    57,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     5,     6,     7,     8,     9,
      72,     0,     0,     0,    10,   117,    74,    75,    76,    77,
       0,    78,    79,     0,    80,     0,    81,    82,   846,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,    29,     0,
       0,     0,    30,    31,    32,    33,    34,     0,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    40,     0,    41,
       0,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,     0,    49,    50,     0,    51,     0,     0,    53,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     5,     6,     7,
       8,     9,    72,     0,     0,     0,    10,   117,    74,    75,
      76,    77,     0,    78,    79,     0,    80,     0,    81,    82,
     908,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
      29,     0,     0,     0,    30,    31,    32,    33,    34,     0,
      35,     0,     0,     0,    36,    37,    38,    39,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,     0,     0,
      44,    45,    46,    47,     0,    49,    50,     0,    51,     0,
       0,    53,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,     5,     6,
       7,     8,     9,     0,    72,     0,     0,    10,     0,   117,
      74,    75,    76,    77,     0,    78,    79,     0,    80,     0,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,    29,     0,     0,     0,    30,    31,    32,    33,    34,
       0,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      40,     0,    41,     0,    42,     0,     0,    43,     0,     0,
       0,    44,    45,    46,    47,     0,    49,    50,     0,    51,
       0,     0,    53,     0,     0,     0,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    70,    71,     5,
       6,     7,     8,     9,     0,    72,     0,     0,    10,     0,
     117,    74,    75,    76,    77,     0,    78,    79,     0,    80,
       0,    81,    82,     0,     0,     0,     0,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   115,    33,
      34,     0,     0,     0,     0,     0,    36,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,    47,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
       5,     6,     7,     8,     9,     0,    72,     0,     0,    10,
       0,   117,    74,    75,    76,    77,     0,     0,     0,     0,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   115,
      33,    34,     0,     0,     0,     0,     0,    36,     0,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,    47,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,    66,    67,    68,    69,    70,
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,   117,    74,    75,    76,    77,     0,   173,     0,
       0,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     115,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,   117,    74,    75,    76,    77,     0,   175,
       0,     0,    80,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   115,    33,    34,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   117,    74,    75,    76,    77,     0,
     179,     0,     0,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   115,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,   117,    74,    75,    76,    77,
     302,     0,     0,     0,    80,     0,    81,    82,     0,     0,
       0,     0,   409,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   115,    33,    34,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    70,    71,     5,     6,     7,     8,     9,
       0,    72,     0,     0,    10,     0,   117,    74,    75,    76,
      77,     0,     0,     0,     0,    80,     0,    81,    82,     0,
       0,     0,     0,   434,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   115,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,   117,    74,    75,
      76,    77,     0,     0,     0,     0,    80,     0,    81,    82,
       0,     0,     0,     0,   436,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   115,    33,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,    66,    67,    68,    69,    70,    71,     5,     6,     7,
       8,     9,     0,    72,     0,     0,    10,     0,   117,    74,
      75,    76,    77,     0,     0,     0,     0,    80,     0,    81,
      82,     0,     0,     0,     0,   503,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   115,    33,    34,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,     5,     6,
       7,     8,     9,     0,    72,     0,     0,    10,     0,   117,
      74,    75,    76,    77,     0,     0,     0,     0,    80,     0,
      81,    82,     0,     0,     0,     0,   620,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   115,    33,    34,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    70,    71,     5,
       6,     7,     8,     9,     0,    72,     0,     0,    10,     0,
     117,    74,    75,    76,    77,     0,     0,     0,     0,    80,
       0,    81,    82,     0,     0,     0,     0,   662,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   115,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
       5,     6,     7,     8,     9,     0,    72,     0,     0,    10,
       0,   117,    74,    75,    76,    77,     0,     0,     0,     0,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   115,
      33,    34,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,    66,    67,    68,    69,    70,
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,   117,    74,    75,    76,    77,     0,     0,     0,
       0,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     115,   350,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,    72,     0,
     233,   234,   235,   117,    74,    75,    76,    77,     0,     0,
       0,     0,    80,     0,    81,    82,   236,     0,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,   233,   234,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
       0,   258,   233,   234,   235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,     0,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,   233,
     234,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   570,   236,   811,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,     0,   258,
     233,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   607,   236,     0,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,   233,   234,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   753,   236,     0,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
       0,   258,     0,     0,   233,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     236,   812,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,     0,   258,   233,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   236,   259,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,     0,   258,   233,   234,   235,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,   316,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,     0,   258,     0,     0,   233,
     234,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   236,   317,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,     0,   258,
     233,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,   323,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,     0,   233,   234,   235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   361,   236,     0,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,   233,   234,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
     431,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,     0,   258,   233,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     236,   444,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,     0,   258,     0,   233,   234,   235,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,   445,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,     0,   258,   233,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,   455,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,     0,   258,   233,   234,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,   549,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,     0,   258,     0,
     233,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,   758,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,     0,
     258,   233,   234,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,   907,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   922,
       0,   233,   234,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   291,   236,   611,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
       0,   258,   233,   234,   235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   543,   236,     0,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,   234,   235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,     0,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   235,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   236,     0,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   236,   258,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,     0,   258,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,     0,   258
};

static const yytype_int16 yycheck[] =
{
      23,    24,   118,    27,    27,    27,    27,     4,   443,    49,
     278,   572,   258,   434,   550,   436,     8,   357,     8,   733,
     370,     8,     8,     8,    26,    62,     8,   422,     4,    52,
      23,    24,    26,    74,    27,   232,     8,     8,     8,   600,
       8,    72,    72,    62,     8,   440,    74,    74,     8,    62,
      73,     8,     8,    76,     8,    72,     8,    72,     8,    56,
      74,    62,    62,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    93,    94,    95,   275,   144,
       0,   197,   503,   148,   149,    99,    59,    60,   112,   144,
     287,   288,    72,   148,    74,     0,    79,    72,   149,   144,
     297,   496,   299,   148,   149,   149,    31,   375,    26,    59,
      60,   124,   149,   154,    91,   152,   139,   148,   148,   116,
     149,   152,    62,   146,   149,   144,   154,   154,   145,   152,
     170,   148,     8,   152,   149,   153,   160,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    74,
     152,   152,   152,   146,   319,   495,    72,   151,   141,   151,
     152,   151,   185,   150,   514,   151,   151,   190,   333,   151,
     145,   148,   152,   148,   154,   198,   199,   200,   892,   151,
     151,   151,   150,    59,    60,   208,   150,    74,   211,   584,
     150,   167,    79,   150,   150,    72,   150,   190,   150,   620,
     150,    93,    94,    95,   144,   198,   199,   200,   232,   149,
      31,   232,   152,   608,   609,   208,    31,    31,    74,   614,
     615,    74,    72,    79,   760,    91,    72,    72,    74,    74,
      75,   428,   149,    74,   258,   258,   258,   258,    31,   322,
     149,   662,    72,    74,    74,   595,   443,   149,    79,    72,
     127,   275,   119,    74,   275,   142,   143,    94,    95,    74,
      74,   153,   285,   287,   288,   258,   287,   288,   145,   149,
     157,   148,   295,   297,   150,   299,   297,   127,   299,    72,
     144,    74,   148,   529,   148,   141,   142,   143,   141,   142,
     143,   456,   457,   458,    74,   145,   319,   119,   148,    79,
     150,   142,   143,   326,   152,   640,   152,    64,   154,    74,
     333,   142,   143,   149,    79,    72,   153,    74,   668,   754,
     113,   344,   152,    72,   154,    74,    94,    95,   368,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    74,    72,   508,    74,   148,    79,   370,   151,   152,
     618,   344,   145,   748,   144,   148,   113,   381,   148,   920,
     795,   154,   142,   143,   113,   149,   363,   702,   149,   704,
     720,    72,   149,    74,   232,    59,    60,   142,   143,    72,
     149,    74,   422,   113,    72,   153,   409,   363,   145,   554,
     144,   148,   148,   149,   148,   149,   145,   154,   563,   148,
     440,   148,   149,   152,   428,   154,   571,   428,   141,   142,
     143,   434,   113,   436,    72,   145,   409,   275,   148,   443,
     113,    72,   443,   773,   154,   126,    67,    68,    69,   287,
     288,   148,   149,   456,   457,   458,    45,    46,    47,   462,
      49,   434,    31,   436,   145,    67,    68,   148,    93,    94,
      95,    62,   145,   154,   477,   148,   496,    67,    68,   205,
     149,   154,   144,   209,    93,    94,    95,   151,   144,   819,
      62,   821,   218,    99,   220,   221,   222,   642,   124,   644,
     503,   749,   750,   148,   477,   508,    99,   510,    67,    68,
      69,   514,   151,   152,   517,   108,   109,   110,   111,   112,
     113,    23,    24,    81,    82,   529,   529,   529,   529,   859,
     503,    49,   148,   144,   144,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   155,     8,   552,
     553,   554,   148,   148,   124,   700,   529,   144,   144,   151,
     563,   624,   565,   893,   584,   149,    13,   152,   571,   572,
     151,   591,   575,   636,   577,    13,   150,   754,   153,   552,
     553,    59,    60,   156,    72,    72,   122,    62,   608,   609,
     593,   547,   595,    26,   614,   615,   741,   600,   928,   149,
     556,   149,   575,    83,   577,    42,    43,    44,    45,    46,
      47,   151,    49,    91,     8,    91,    72,   620,   795,    72,
      74,   149,   952,   150,    72,   151,   150,   772,   631,   692,
      62,   108,   109,   110,   111,   112,   113,   153,    13,   642,
     122,   644,   149,   149,   149,   790,   149,   620,   319,   149,
     653,   155,    26,   149,   155,    13,   149,   148,   631,   662,
     144,   153,   333,    72,   149,   668,    13,   153,   151,   672,
     149,   627,     8,   818,   123,   148,   150,   149,     8,    72,
     653,   152,   150,   150,   125,   781,   155,    72,   833,   662,
     155,   141,   103,   696,     4,     5,     6,   700,     8,     9,
      10,    11,    12,    13,    14,    13,    16,    17,    18,    19,
      20,    21,    22,   155,   153,    25,    26,   720,   152,   150,
     150,   866,   785,   696,   787,   870,     8,    37,   748,   150,
       8,   876,   149,   151,    44,    45,   125,    13,   741,   151,
     150,    51,   149,   151,   150,   105,   150,   150,   153,   151,
     754,   100,    74,   754,   817,   732,   105,    13,   150,   108,
     109,   110,   111,   112,   113,   114,   150,    77,   100,   772,
     773,   150,   150,   105,   919,    62,   108,   109,   110,   111,
     112,   113,   114,   846,   155,   456,   457,   790,    62,   852,
     124,   795,    90,   150,   795,   150,   125,    72,   152,   149,
     152,    13,    13,   124,   153,   151,   151,    84,   151,    74,
     152,   121,    72,    74,    13,   818,   819,   880,   821,   129,
     155,   153,   885,   150,   155,    23,    24,   151,   151,    27,
     833,   149,    13,   150,    72,    13,    13,   508,   153,    74,
     153,    26,   149,    69,   800,   908,    74,   153,    91,   153,
     151,   161,    91,   163,   106,   151,   859,   167,   144,   169,
      74,   151,   172,   866,    88,   150,    72,   870,    13,   149,
      74,   934,    69,   876,   937,     8,    72,    72,   941,   151,
      26,    86,   152,   554,   150,   153,   153,   151,   103,   152,
     893,   149,    74,   203,   153,   150,   959,   207,   326,   950,
     571,   477,   363,   595,   363,   696,   810,   217,   632,   672,
     859,   806,   331,   667,   710,   563,   919,   920,   562,   678,
     878,   190,   653,   577,   234,   928,    -1,   883,    -1,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   146,   952,
     203,    -1,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,    -1,    -1,   276,   923,   278,   279,
      -1,   642,    -1,   644,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,    -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,    -1,   305,    -1,    -1,   308,    -1,
     198,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,    -1,     9,    10,    11,    -1,    -1,    -1,   328,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   700,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,   363,    -1,    -1,    -1,    -1,    -1,    -1,
     258,    -1,    -1,    -1,    -1,   375,    -1,   377,    -1,    -1,
     741,    -1,   382,    -1,   384,    -1,   386,   387,   388,    -1,
      42,    43,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    23,    24,
      62,   772,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,   790,
      -1,   319,    -1,    -1,    49,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   344,   818,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,    -1,   833,    -1,    -1,   127,   128,   129,   130,   131,
     132,   133,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
     490,    -1,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   866,    -1,    -1,    -1,   870,
      -1,    -1,    -1,    -1,    -1,   876,    -1,    -1,    -1,    -1,
      -1,   409,    -1,    -1,    -1,   525,    -1,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   543,    -1,    -1,   434,   547,   436,    -1,
     550,   551,    -1,    -1,    -1,   170,   556,    -1,   919,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   456,   457,
     458,    -1,    -1,    -1,    -1,   190,     9,    10,    11,    -1,
      -1,    -1,    -1,   198,   199,   200,    -1,    -1,    -1,   477,
      -1,    -1,    25,   208,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   503,    49,    -1,   618,   619,
     508,    -1,    -1,    -1,    -1,    -1,   626,   627,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   529,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   655,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   552,   553,   554,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,   563,    -1,   677,    -1,    -1,
      -1,    -1,    -1,   571,    -1,    -1,    -1,   575,    25,   577,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,
      -1,    -1,   620,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   631,    -1,    -1,    -1,    -1,    -1,   749,
     750,    -1,    -1,   368,   642,    -1,   644,    -1,    -1,    -1,
     760,    -1,    -1,    -1,    -1,   653,    -1,    -1,   768,    -1,
      -1,    -1,    -1,    -1,   662,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   409,    49,    -1,    -1,    -1,    -1,
     800,    -1,    -1,    -1,    -1,   805,   806,   422,   696,    -1,
      -1,    -1,   700,    -1,    -1,    -1,   153,    -1,    -1,   434,
      -1,   436,    -1,    -1,    -1,   440,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   842,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   741,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   879,
      49,   496,    -1,   883,   772,    -1,    -1,    -1,   503,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   790,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   923,    49,    -1,    -1,    -1,    -1,    -1,
     818,    -1,    -1,    -1,    -1,    -1,    -1,   552,   553,    -1,
      -1,    -1,    -1,    -1,    -1,   833,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     575,    -1,   577,    -1,    -1,    -1,    -1,    -1,    -1,   584,
      -1,    -1,    -1,    -1,    -1,    -1,   591,    -1,   866,    -1,
      -1,    -1,   870,    -1,    -1,    -1,    -1,    -1,   876,    -1,
      -1,    -1,    -1,   608,   609,    -1,    -1,    -1,    -1,   614,
     615,    -1,    -1,    -1,    -1,   620,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   631,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   919,    -1,    -1,    -1,    -1,    -1,    -1,   653,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,   662,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    25,    12,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,   696,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    76,    -1,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    -1,    87,   748,    89,    -1,    -1,    92,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,   102,    -1,   104,
     105,    -1,   107,    -1,    -1,    -1,   111,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,     3,
       4,     5,     6,     7,   153,   140,    -1,    -1,    12,    -1,
     145,   146,   147,   148,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    76,    -1,    -1,    -1,    80,    81,    82,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    -1,    92,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,   101,   102,    -1,
     104,    -1,    -1,   107,    -1,    -1,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
      -1,    -1,   126,   127,   128,   129,   130,   131,   132,   133,
      -1,     3,     4,     5,     6,     7,   140,    -1,    -1,    -1,
      12,   145,   146,   147,   148,   149,    -1,   151,   152,    -1,
     154,    -1,   156,   157,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    76,    -1,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    89,    -1,    -1,
      92,    -1,    -1,    -1,    96,    97,    98,    99,    -1,   101,
     102,    -1,   104,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,    -1,     3,     4,     5,     6,     7,   140,    -1,
      -1,    -1,    12,   145,   146,   147,   148,   149,    -1,   151,
     152,    -1,   154,    -1,   156,   157,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    76,    -1,    -1,    -1,
      80,    81,    82,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    -1,    92,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,   101,   102,    -1,   104,    -1,    -1,   107,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,
     130,   131,   132,   133,    -1,     3,     4,     5,     6,     7,
     140,    -1,    -1,    -1,    12,   145,   146,   147,   148,   149,
      -1,   151,   152,    -1,   154,    -1,   156,   157,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    76,    -1,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    -1,    87,
      -1,    89,    -1,    -1,    92,    -1,    -1,    -1,    96,    97,
      98,    99,    -1,   101,   102,    -1,   104,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
     128,   129,   130,   131,   132,   133,    -1,     3,     4,     5,
       6,     7,   140,    -1,    -1,    -1,    12,   145,   146,   147,
     148,   149,    -1,   151,   152,    -1,   154,    -1,   156,   157,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      76,    -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    -1,    92,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,   101,   102,    -1,   104,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,   127,   128,   129,   130,   131,   132,   133,     3,     4,
       5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,
     146,   147,   148,   149,    -1,   151,   152,    -1,   154,    -1,
     156,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    76,    -1,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    -1,    92,    -1,    -1,
      -1,    96,    97,    98,    99,    -1,   101,   102,    -1,   104,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,     3,
       4,     5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,
     145,   146,   147,   148,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    80,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    99,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,   127,   128,   129,   130,   131,   132,   133,
       3,     4,     5,     6,     7,    -1,   140,    -1,    -1,    12,
      -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    99,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,     3,     4,     5,     6,     7,    -1,   140,    -1,    -1,
      12,    -1,   145,   146,   147,   148,   149,    -1,   151,    -1,
      -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,     3,     4,     5,     6,     7,    -1,   140,    -1,
      -1,    12,    -1,   145,   146,   147,   148,   149,    -1,   151,
      -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,   117,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,   149,    -1,
     151,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,
     130,   131,   132,   133,     3,     4,     5,     6,     7,    -1,
     140,    -1,    -1,    12,    -1,   145,   146,   147,   148,   149,
     150,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,     3,     4,     5,     6,     7,
      -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,   148,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
     128,   129,   130,   131,   132,   133,     3,     4,     5,     6,
       7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,
     148,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
     117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,     3,     4,     5,
       6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,
     147,   148,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,   127,   128,   129,   130,   131,   132,   133,     3,     4,
       5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,
     146,   147,   148,   149,    -1,    -1,    -1,    -1,   154,    -1,
     156,   157,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,     3,
       4,     5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,
     145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,   127,   128,   129,   130,   131,   132,   133,
       3,     4,     5,     6,     7,    -1,   140,    -1,    -1,    12,
      -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,     3,     4,     5,     6,     7,    -1,   140,    -1,    -1,
      12,    -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
       9,    10,    11,   145,   146,   147,   148,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   151,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   151,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   151,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   151,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   151,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     150,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   150,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   150,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    11,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    25,    49,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   159,   160,     0,   161,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    66,
      70,    71,    72,    73,    74,    76,    80,    81,    82,    83,
      85,    87,    89,    92,    96,    97,    98,    99,   100,   101,
     102,   104,   105,   107,   111,   112,   113,   115,   116,   117,
     118,   119,   120,   121,   126,   127,   128,   129,   130,   131,
     132,   133,   140,   145,   146,   147,   148,   149,   151,   152,
     154,   156,   157,   162,   163,   168,   172,   173,   203,   204,
     206,   208,   211,   213,   270,   284,   287,   296,   307,   310,
     314,   315,   317,   318,   328,   329,   330,   331,   333,   334,
     335,   336,   342,   352,   355,    72,   113,   145,   284,   314,
     314,   149,   314,   314,   314,   314,   314,   314,   314,   281,
     314,   314,   314,   314,   314,   314,   314,   113,   145,   148,
     162,   296,   317,   318,   330,   317,    31,   314,   346,   347,
     314,   145,   148,   162,   296,   298,   299,   330,   334,   335,
     342,   149,   304,   149,    26,   266,   314,   180,   149,   149,
     149,   190,   149,   151,   314,   151,   314,    72,    72,   151,
     270,   314,   318,   191,   314,   148,   162,   166,   167,    74,
     154,   240,   241,   119,   119,    74,   242,   284,   149,   149,
     149,   149,   149,   149,    74,    79,   141,   142,   143,   348,
     349,   148,   152,   162,   162,   314,   169,   152,    79,   305,
     348,    79,   348,   148,   149,     8,   151,    72,    72,    31,
     205,   332,   144,     9,    10,    11,    25,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    49,   151,
      59,    60,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   149,   144,    62,   124,    62,   152,
     154,   335,   205,   314,   314,   148,   162,   144,   144,   316,
     318,   125,   155,     8,   312,   148,   162,   144,   273,   144,
     124,   335,   150,   314,   314,     8,   151,   172,   178,   267,
     268,   314,   270,   318,   149,   314,   151,   151,   151,    13,
     151,   151,   152,   151,   162,    91,     8,   151,   152,   315,
     318,     8,   151,    13,     8,   151,   205,   201,   202,   318,
     318,   353,   318,   150,   271,   346,    62,   124,   141,   349,
      73,   314,   318,    79,   141,   349,   162,   165,   151,   152,
     149,   150,   153,   170,   314,   156,   157,    72,   288,    72,
     122,   212,   210,    72,   149,    62,    72,   152,   328,   335,
     341,   342,   276,   314,   277,    26,   278,   274,   275,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   298,    31,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   295,    72,   328,   341,   314,   337,   319,   337,
     314,   150,   162,    72,    31,   314,    31,   314,   162,   328,
     149,   306,   328,   300,   150,   150,   314,    83,   314,   151,
       8,    91,    91,    72,   222,   150,    42,    43,    62,   127,
     140,   145,   148,   162,   296,   307,   308,   309,   169,    91,
      72,   167,   314,   241,   308,    74,   149,     8,   150,     8,
     150,   150,   151,   126,   318,   343,   344,   150,   350,    72,
      62,   153,   153,   149,   160,   164,   290,   118,   171,   172,
     203,   204,   153,    31,   238,   239,   270,   318,    13,   145,
     148,   162,   297,   209,   122,   214,   207,   282,   337,   314,
     149,   149,   335,   314,   314,   280,   314,   314,   314,    64,
     318,   238,   149,   149,   155,   328,   338,   340,   341,   155,
     153,   316,   316,   125,   238,   338,    26,   174,   149,   150,
     182,   269,   188,   186,    13,     8,   150,   185,   308,   308,
     308,   311,   313,   149,    79,   148,   162,   144,   153,    72,
     153,    13,   283,   202,   151,   354,   149,     8,   150,    72,
      74,    75,   351,   314,   289,   153,   160,   238,   149,   316,
     150,     8,   308,   148,   162,   123,   215,   216,   297,   152,
     149,   127,   235,   236,   237,   297,   155,   153,   292,   291,
     314,    26,   298,   150,   294,   293,   339,   320,    62,   152,
      31,   314,   150,   301,   176,   172,   181,   179,   267,   314,
     318,    31,   218,   318,   308,    72,    26,   172,   221,    26,
     152,   223,   125,   155,     8,   312,   311,   162,    72,   103,
     308,   235,   318,   345,   344,    13,   155,   155,   238,   153,
     150,   150,    31,   270,   318,   162,   216,   152,     8,   243,
     235,   150,     8,    31,    74,   238,   238,   279,   272,   238,
     238,   149,   324,   325,   327,   337,   314,   316,   302,   169,
     175,   314,    26,   172,   228,   151,   125,   217,   318,   217,
      13,   169,   151,   224,   151,   224,   308,   308,   150,   149,
     150,   343,   314,   153,   150,   151,   316,   243,   297,   100,
     105,   108,   109,   110,   111,   112,   113,   114,   153,   244,
     247,   260,   261,   262,   263,   265,   150,   105,   285,   237,
      74,    13,   150,   150,   314,   306,   150,   150,   326,    62,
      62,   321,   155,   153,   124,   303,   177,   229,   150,   169,
     183,   218,   150,   150,   308,    90,   224,    93,    94,    95,
     224,   153,   125,   192,   285,   150,   153,    72,   248,   297,
     245,   284,   263,     8,   151,   152,   149,   152,    31,    74,
      13,   308,   238,   337,   337,   124,   322,   338,   231,    67,
      68,   233,   151,    84,   267,   189,   187,   151,    93,   151,
     314,    26,   151,   227,   153,   308,   297,   152,    13,     8,
     151,   152,   249,    74,   264,   205,    72,   169,    31,    74,
     286,   169,    74,    13,   308,   150,   155,   155,   338,    67,
      68,   234,   149,   172,   151,   150,    26,   172,   220,   220,
     151,   227,   226,   193,   169,   308,   297,    72,   250,   251,
     252,   253,   255,   256,   257,   297,    13,     8,   151,    72,
      13,   153,    74,     8,   150,   153,    13,   308,   323,   149,
      26,    69,   314,   184,   169,   225,   169,    74,   153,   153,
     252,   151,    91,   106,   151,   144,   308,    74,   246,   308,
      31,    74,   308,   327,   314,   169,   151,   150,    26,   172,
     219,    88,   169,   150,   258,   263,   254,   297,    72,    13,
     149,    74,   150,   230,   169,   151,   194,    72,     8,   308,
     235,    26,   172,    86,   152,   297,   150,   232,   151,   169,
     151,   152,   259,   169,   153,   169,   195,   153,   103,   196,
     197,   198,   149,   198,   297,   199,    74,   150,   200,   152,
     169,   153
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

    { HANDLE_INTERACTIVE(); }
    break;

  case 6:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:

    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:

    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:

    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:

    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:

    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:

    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:

    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:

    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:

    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 21:

    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 22:

    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 23:

    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 24:

    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 25:

    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 26:

    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 27:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 28:

    { HANDLE_INTERACTIVE(); }
    break;

  case 33:

    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 34:

    { DO_TICKS(); }
    break;

  case 35:

    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 37:

    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 38:

    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 39:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 40:

    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 41:

    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 42:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 43:

    { (yyvsp[(1) - (2)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 44:

    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 45:

    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 46:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 47:

    { (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 48:

    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 49:

    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:

    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 51:

    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 52:

    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 53:

    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 54:

    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 55:

    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 56:

    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 57:

    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 58:

    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:

    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 60:

    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 61:

    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 65:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 66:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 68:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 69:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 70:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 71:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 72:

    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 73:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 74:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 75:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 77:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 78:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 79:

    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 80:

    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 81:

    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 82:

    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 83:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 84:

    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 85:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 86:

    { (yyval).u.op.opline_num = -1; }
    break;

  case 87:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 88:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 89:

    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 90:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 91:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 94:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 95:

    { DO_TICKS(); }
    break;

  case 96:

    { DO_TICKS(); }
    break;

  case 97:

    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 98:

    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 99:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 100:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 101:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 102:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) TSRMLS_CC); }
    break;

  case 103:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 104:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 105:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 106:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 107:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 108:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 109:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 110:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 111:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 116:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 117:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 118:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 119:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 120:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 121:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 128:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 129:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 130:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 131:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 132:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 133:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 134:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 135:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 136:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 137:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 138:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 144:

    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 145:

    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 147:

    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 148:

    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 155:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 156:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 157:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 158:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 159:

    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 160:

    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 161:

    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 162:

    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 163:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 164:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_NULL; }
    break;

  case 165:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 166:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 167:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 168:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 169:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 170:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 171:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 172:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 173:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 174:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 175:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 176:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 177:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 178:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 179:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 180:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 181:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 182:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 185:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 189:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 190:

    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 192:

    { zend_do_implements_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 193:

    { zend_do_implements_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 200:

    { zend_add_trait_precedence(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 201:

    { zend_add_trait_alias(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 202:

    { zend_prepare_trait_precedence(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 203:

    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 204:

    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 205:

    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 206:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 207:

    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 208:

    { zend_prepare_trait_alias(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 209:

    { zend_prepare_trait_alias(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 210:

    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 211:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 212:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 213:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 214:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 215:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 216:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 217:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 218:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 219:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 220:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 221:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 222:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 223:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 224:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 225:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 226:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 227:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 228:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 229:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 230:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 231:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 232:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 233:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 234:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 235:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 236:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 237:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 238:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 239:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 240:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 241:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 242:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 243:

    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 244:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 245:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 246:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 247:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 248:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 249:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 250:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 251:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 252:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 253:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 254:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 255:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 256:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 257:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 258:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 259:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 260:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 261:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 262:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 263:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 264:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 265:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 266:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 267:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 268:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 269:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 270:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 271:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 272:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 273:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 274:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 275:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 276:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 277:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 278:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 279:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 280:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 281:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 282:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 283:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 284:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 285:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 286:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 287:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 288:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 291:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 293:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 294:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 295:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 296:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 297:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 298:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 299:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 300:

    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 301:

    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 302:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 303:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 304:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 305:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 306:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 307:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 308:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 309:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 310:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 311:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 312:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 313:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 314:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 315:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 316:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 317:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 318:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type, 0 TSRMLS_CC); }
    break;

  case 319:

    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 320:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]).op_type, 1 TSRMLS_CC); }
    break;

  case 321:

    {  zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(5) - (11)]); }
    break;

  case 322:

    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 325:

    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 326:

    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 327:

    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 328:

    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 329:

    { (yyvsp[(2) - (2)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 330:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 331:

    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 332:

    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, (yyvsp[(4) - (7)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 333:

    { (yyvsp[(3) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 334:

    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, (yyvsp[(3) - (6)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 335:

    { (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 336:

    { zend_do_end_function_call((yyvsp[(4) - (7)]).u.op.opline_num?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), (yyvsp[(4) - (7)]).u.op.opline_num, (yyvsp[(4) - (7)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 337:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 338:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 339:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 340:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 341:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 342:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 343:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 344:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 345:

    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 346:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 347:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 348:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 349:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 350:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 351:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 352:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 353:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 354:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 355:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 356:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 357:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 360:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 361:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 362:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 363:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 364:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 365:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 366:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 367:

    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 368:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 369:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 370:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 371:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 372:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 373:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 374:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 375:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 376:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 377:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 378:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 379:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 380:

    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 381:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 382:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 383:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 384:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 385:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 386:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 387:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 388:

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 389:

    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 390:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 391:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 392:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 393:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 394:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 395:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 396:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 397:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 398:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 399:

    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 400:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 401:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 404:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 405:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 406:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 407:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 408:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 409:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 410:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 411:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 412:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 413:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 414:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 415:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 416:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 417:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 418:

    { (yyval).EA = 0; }
    break;

  case 419:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 420:

    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 421:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 422:

    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 423:

    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 424:

    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 425:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 426:

    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 427:

    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 428:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 429:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 430:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 431:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 432:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 433:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 434:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 435:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 436:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 437:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 438:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 439:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 440:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 441:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 442:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 443:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 444:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 445:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 446:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 447:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 448:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 449:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 450:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 451:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 452:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 453:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 454:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 455:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 456:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 457:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 458:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 461:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 462:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 463:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 464:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 465:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 466:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 467:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 468:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 469:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 470:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 471:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 472:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 473:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 474:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 475:

    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 476:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 477:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 478:

    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 479:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 480:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 481:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 482:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 483:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 484:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 485:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 486:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 487:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 488:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 489:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 490:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 491:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 492:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 493:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 494:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 495:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 496:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 497:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 498:

    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 499:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 500:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;


/* Line 1267 of yacc.c.  */

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	if (!yyres) {
		return yystrlen(yystr);
	}
	{
		TSRMLS_FETCH();
		if (CG(parse_error) == 0) {
			char buffer[120];
			const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
			unsigned int len = 0, toklen = 0, yystr_len;
			
			CG(parse_error) = 1;

			if (LANG_SCNG(yy_text)[0] == 0 &&
				LANG_SCNG(yy_leng) == 1 &&
				memcmp(yystr, ZEND_STRL("\"end of file\"")) == 0) {
				yystpcpy(yyres, "end of file");
				return sizeof("end of file")-1;
			}
			
			str = LANG_SCNG(yy_text);
			end = memchr(str, '\n', LANG_SCNG(yy_leng));
			yystr_len = yystrlen(yystr);
			
			if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
				&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
				toklen = (tok2 - tok1) + 1;
			} else {
				tok1 = tok2 = NULL;
				toklen = 0;
			}
			
			if (end == NULL) {
				len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
			} else {
				len = (end - str) > 30 ? 30 : (end - str);
			}
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
			return len + (toklen ? toklen + 1 : 0) + 2;
		}		
	}	
	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

