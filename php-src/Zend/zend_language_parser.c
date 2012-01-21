
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yylval          zendlval
#define yychar          zendchar
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"

/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2012 Zend Technologies Ltd. (http://www.zend.com) |
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

/* $Id: zend_language_parser.y 322378 2012-01-17 08:09:13Z dmitry $ */

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




/* Line 189 of yacc.c  */
#line 133 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.c"

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
     T_YORI_OOKII = 284,
     T_YORI_TIISAI = 285,
     T_IS_GREATER_OR_EQUAL = 286,
     T_IS_SMALLER_OR_EQUAL = 287,
     T_SR = 288,
     T_SL = 289,
     T_INSTANCEOF = 290,
     T_UNSET_CAST = 291,
     T_BOOL_CAST = 292,
     T_OBJECT_CAST = 293,
     T_ARRAY_CAST = 294,
     T_STRING_CAST = 295,
     T_DOUBLE_CAST = 296,
     T_INT_CAST = 297,
     T_DEC = 298,
     T_INC = 299,
     T_CLONE = 300,
     T_NEW = 301,
     T_EXIT = 302,
     T_IF = 303,
     T_ELSEIF = 304,
     T_ELSE = 305,
     T_ENDIF = 306,
     T_LNUMBER = 307,
     T_DNUMBER = 308,
     T_STRING = 309,
     T_STRING_VARNAME = 310,
     T_VARIABLE = 311,
     T_NUM_STRING = 312,
     T_INLINE_HTML = 313,
     T_CHARACTER = 314,
     T_BAD_CHARACTER = 315,
     T_ENCAPSED_AND_WHITESPACE = 316,
     T_CONSTANT_ENCAPSED_STRING = 317,
     T_ECHO = 318,
     T_DO = 319,
     T_WHILE = 320,
     T_ENDWHILE = 321,
     T_FOR = 322,
     T_ENDFOR = 323,
     T_FOREACH = 324,
     T_ENDFOREACH = 325,
     T_DECLARE = 326,
     T_ENDDECLARE = 327,
     T_AS = 328,
     T_SWITCH = 329,
     T_ENDSWITCH = 330,
     T_CASE = 331,
     T_DEFAULT = 332,
     T_BREAK = 333,
     T_CONTINUE = 334,
     T_GOTO = 335,
     T_FUNCTION = 336,
     T_CONST = 337,
     T_RETURN = 338,
     T_TRY = 339,
     T_CATCH = 340,
     T_THROW = 341,
     T_USE = 342,
     T_INSTEADOF = 343,
     T_GLOBAL = 344,
     T_PUBLIC = 345,
     T_PROTECTED = 346,
     T_PRIVATE = 347,
     T_FINAL = 348,
     T_ABSTRACT = 349,
     T_STATIC = 350,
     T_VAR = 351,
     T_UNSET = 352,
     T_ISSET = 353,
     T_EMPTY = 354,
     T_HALT_COMPILER = 355,
     T_CLASS = 356,
     T_TRAIT = 357,
     T_INTERFACE = 358,
     T_EXTENDS = 359,
     T_IMPLEMENTS = 360,
     T_OBJECT_OPERATOR = 361,
     T_DOUBLE_ARROW = 362,
     T_LIST = 363,
     T_ARRAY = 364,
     T_CALLABLE = 365,
     T_CLASS_C = 366,
     T_TRAIT_C = 367,
     T_METHOD_C = 368,
     T_FUNC_C = 369,
     T_LINE = 370,
     T_FILE = 371,
     T_COMMENT = 372,
     T_DOC_COMMENT = 373,
     T_OPEN_TAG = 374,
     T_OPEN_TAG_WITH_ECHO = 375,
     T_CLOSE_TAG = 376,
     T_WHITESPACE = 377,
     T_START_HEREDOC = 378,
     T_END_HEREDOC = 379,
     T_DOLLAR_OPEN_CURLY_BRACES = 380,
     T_CURLY_OPEN = 381,
     T_PAAMAYIM_NEKUDOTAYIM = 382,
     T_NAMESPACE = 383,
     T_NS_C = 384,
     T_DIR = 385,
     T_NS_SEPARATOR = 386,
     T_WO = 387,
     T_JA_MOD = 388,
     T_JA_DIV = 389,
     T_JA_MULT = 390,
     T_JA_MINUS = 391,
     T_JA_PLUS = 392,
     T_GA = 393,
     T_OP_NE = 394,
     T_OP_EQ = 395,
     T_OPEN_OUTPUT = 396,
     T_CLOSE_OUTPUT = 397,
     T_JA_IF = 398,
     T_JA_ELSE = 399,
     T_OWARI = 400,
     T_NARABA = 401,
     T_HA = 402,
     T_DESU = 403,
     T_NI = 404,
     T_DAINYU = 405,
     T_KURIKAESI = 406,
     T_AIDA = 407,
     T_HENSU = 408
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
#define T_YORI_OOKII 284
#define T_YORI_TIISAI 285
#define T_IS_GREATER_OR_EQUAL 286
#define T_IS_SMALLER_OR_EQUAL 287
#define T_SR 288
#define T_SL 289
#define T_INSTANCEOF 290
#define T_UNSET_CAST 291
#define T_BOOL_CAST 292
#define T_OBJECT_CAST 293
#define T_ARRAY_CAST 294
#define T_STRING_CAST 295
#define T_DOUBLE_CAST 296
#define T_INT_CAST 297
#define T_DEC 298
#define T_INC 299
#define T_CLONE 300
#define T_NEW 301
#define T_EXIT 302
#define T_IF 303
#define T_ELSEIF 304
#define T_ELSE 305
#define T_ENDIF 306
#define T_LNUMBER 307
#define T_DNUMBER 308
#define T_STRING 309
#define T_STRING_VARNAME 310
#define T_VARIABLE 311
#define T_NUM_STRING 312
#define T_INLINE_HTML 313
#define T_CHARACTER 314
#define T_BAD_CHARACTER 315
#define T_ENCAPSED_AND_WHITESPACE 316
#define T_CONSTANT_ENCAPSED_STRING 317
#define T_ECHO 318
#define T_DO 319
#define T_WHILE 320
#define T_ENDWHILE 321
#define T_FOR 322
#define T_ENDFOR 323
#define T_FOREACH 324
#define T_ENDFOREACH 325
#define T_DECLARE 326
#define T_ENDDECLARE 327
#define T_AS 328
#define T_SWITCH 329
#define T_ENDSWITCH 330
#define T_CASE 331
#define T_DEFAULT 332
#define T_BREAK 333
#define T_CONTINUE 334
#define T_GOTO 335
#define T_FUNCTION 336
#define T_CONST 337
#define T_RETURN 338
#define T_TRY 339
#define T_CATCH 340
#define T_THROW 341
#define T_USE 342
#define T_INSTEADOF 343
#define T_GLOBAL 344
#define T_PUBLIC 345
#define T_PROTECTED 346
#define T_PRIVATE 347
#define T_FINAL 348
#define T_ABSTRACT 349
#define T_STATIC 350
#define T_VAR 351
#define T_UNSET 352
#define T_ISSET 353
#define T_EMPTY 354
#define T_HALT_COMPILER 355
#define T_CLASS 356
#define T_TRAIT 357
#define T_INTERFACE 358
#define T_EXTENDS 359
#define T_IMPLEMENTS 360
#define T_OBJECT_OPERATOR 361
#define T_DOUBLE_ARROW 362
#define T_LIST 363
#define T_ARRAY 364
#define T_CALLABLE 365
#define T_CLASS_C 366
#define T_TRAIT_C 367
#define T_METHOD_C 368
#define T_FUNC_C 369
#define T_LINE 370
#define T_FILE 371
#define T_COMMENT 372
#define T_DOC_COMMENT 373
#define T_OPEN_TAG 374
#define T_OPEN_TAG_WITH_ECHO 375
#define T_CLOSE_TAG 376
#define T_WHITESPACE 377
#define T_START_HEREDOC 378
#define T_END_HEREDOC 379
#define T_DOLLAR_OPEN_CURLY_BRACES 380
#define T_CURLY_OPEN 381
#define T_PAAMAYIM_NEKUDOTAYIM 382
#define T_NAMESPACE 383
#define T_NS_C 384
#define T_DIR 385
#define T_NS_SEPARATOR 386
#define T_WO 387
#define T_JA_MOD 388
#define T_JA_DIV 389
#define T_JA_MULT 390
#define T_JA_MINUS 391
#define T_JA_PLUS 392
#define T_GA 393
#define T_OP_NE 394
#define T_OP_EQ 395
#define T_OPEN_OUTPUT 396
#define T_CLOSE_OUTPUT 397
#define T_JA_IF 398
#define T_JA_ELSE 399
#define T_OWARI 400
#define T_NARABA 401
#define T_HA 402
#define T_DESU 403
#define T_NI 404
#define T_DAINYU 405
#define T_KURIKAESI 406
#define T_AIDA 407
#define T_HENSU 408




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 483 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6735

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  182
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  211
/* YYNRULES -- Number of rules.  */
#define YYNRULES  543
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1037

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   408

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,   181,     2,   178,    49,    31,     2,
     173,   174,    47,    44,     8,    45,    46,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   175,
      36,    13,    37,    25,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,   179,    30,     2,   180,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   176,    29,   177,    52,     2,     2,     2,
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
      32,    33,    34,    35,    38,    39,    40,    41,    42,    43,
      51,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172
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
     123,   124,   125,   138,   139,   140,   149,   150,   151,   159,
     160,   161,   168,   169,   170,   180,   181,   182,   183,   196,
     197,   204,   207,   211,   214,   218,   221,   225,   229,   233,
     237,   241,   245,   247,   250,   256,   257,   258,   269,   270,
     271,   282,   283,   290,   292,   293,   294,   295,   296,   297,
     316,   320,   324,   326,   327,   329,   332,   333,   334,   345,
     347,   351,   353,   355,   357,   358,   360,   361,   372,   373,
     382,   383,   391,   393,   396,   398,   401,   402,   405,   407,
     408,   411,   412,   415,   417,   421,   422,   425,   427,   430,
     432,   437,   439,   444,   446,   451,   455,   461,   465,   470,
     475,   481,   482,   483,   490,   491,   497,   499,   501,   503,
     508,   509,   510,   518,   519,   520,   529,   530,   533,   534,
     537,   538,   542,   544,   545,   548,   552,   558,   563,   568,
     574,   582,   589,   590,   592,   594,   596,   598,   599,   601,
     603,   606,   610,   614,   619,   623,   625,   627,   630,   633,
     638,   643,   647,   653,   655,   659,   662,   663,   664,   669,
     672,   674,   675,   685,   689,   691,   695,   697,   701,   702,
     704,   706,   709,   712,   715,   719,   721,   725,   727,   729,
     733,   738,   742,   743,   745,   747,   751,   753,   755,   756,
     758,   760,   763,   765,   767,   769,   771,   773,   775,   779,
     785,   787,   791,   797,   802,   806,   808,   809,   811,   812,
     817,   819,   822,   824,   829,   833,   834,   838,   840,   842,
     843,   844,   847,   848,   853,   854,   862,   866,   871,   876,
     881,   882,   890,   893,   897,   901,   905,   909,   913,   917,
     921,   925,   929,   933,   937,   940,   943,   946,   949,   950,
     955,   956,   961,   962,   967,   968,   973,   977,   981,   985,
     989,   993,   997,  1001,  1005,  1009,  1013,  1017,  1021,  1025,
    1029,  1034,  1038,  1042,  1045,  1048,  1051,  1054,  1058,  1063,
    1067,  1072,  1076,  1080,  1084,  1089,  1093,  1098,  1102,  1107,
    1111,  1116,  1120,  1124,  1126,  1127,  1133,  1134,  1135,  1143,
    1144,  1150,  1152,  1155,  1158,  1161,  1164,  1167,  1170,  1173,
    1176,  1177,  1181,  1183,  1188,  1192,  1196,  1199,  1200,  1211,
    1212,  1224,  1226,  1227,  1232,  1236,  1241,  1243,  1246,  1247,
    1253,  1254,  1262,  1263,  1270,  1271,  1279,  1280,  1288,  1289,
    1297,  1298,  1306,  1307,  1313,  1315,  1317,  1321,  1324,  1326,
    1330,  1333,  1335,  1337,  1338,  1339,  1346,  1348,  1351,  1352,
    1355,  1356,  1359,  1363,  1364,  1366,  1368,  1369,  1373,  1375,
    1377,  1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,  1397,
    1400,  1402,  1404,  1408,  1411,  1414,  1417,  1422,  1426,  1428,
    1430,  1434,  1436,  1438,  1440,  1444,  1447,  1449,  1453,  1457,
    1459,  1460,  1463,  1464,  1466,  1472,  1476,  1480,  1482,  1484,
    1486,  1488,  1490,  1492,  1493,  1494,  1502,  1504,  1507,  1508,
    1509,  1514,  1519,  1524,  1525,  1530,  1532,  1534,  1535,  1537,
    1540,  1544,  1548,  1550,  1555,  1556,  1562,  1564,  1566,  1568,
    1570,  1573,  1575,  1580,  1585,  1587,  1589,  1594,  1599,  1600,
    1602,  1604,  1605,  1608,  1613,  1618,  1620,  1622,  1626,  1628,
    1630,  1633,  1636,  1640,  1642,  1644,  1645,  1651,  1652,  1653,
    1656,  1662,  1666,  1670,  1672,  1679,  1684,  1689,  1692,  1695,
    1698,  1700,  1703,  1705,  1706,  1712,  1716,  1720,  1727,  1731,
    1733,  1735,  1737,  1742,  1747,  1750,  1753,  1758,  1761,  1764,
    1766,  1767,  1772,  1776
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     183,     0,    -1,   184,    -1,    -1,   184,   185,   187,    -1,
      -1,    73,    -1,   186,   150,    73,    -1,   196,    -1,   231,
      -1,   232,    -1,   119,   173,   174,   175,    -1,   147,   186,
     175,    -1,    -1,   147,   186,   176,   188,   184,   177,    -1,
      -1,   147,   176,   189,   184,   177,    -1,   106,   190,   175,
      -1,   192,   175,    -1,   190,     8,   191,    -1,   191,    -1,
     186,    -1,   186,    92,    73,    -1,   150,   186,    -1,   150,
     186,    92,    73,    -1,   192,     8,    73,    13,   345,    -1,
     101,    73,    13,   345,    -1,    -1,   193,   194,   195,    -1,
      -1,   196,    -1,   231,    -1,   232,    -1,   119,   173,   174,
     175,    -1,   197,    -1,    73,    26,    -1,   176,   193,   177,
      -1,    -1,    -1,    67,   173,   351,   174,   198,   196,   199,
     257,   261,    -1,    -1,    -1,    67,   173,   351,   174,    26,
     200,   193,   201,   259,   263,    70,   175,    -1,    -1,    -1,
     162,   351,   165,   202,   193,   203,   262,   164,    -1,    -1,
      -1,    84,   173,   204,   351,   174,   205,   256,    -1,    -1,
      -1,   170,   206,   351,   171,   207,   256,    -1,    -1,    -1,
      83,   208,   196,    84,   173,   209,   351,   174,   175,    -1,
      -1,    -1,    -1,    86,   173,   296,   175,   210,   296,   175,
     211,   296,   174,   212,   247,    -1,    -1,    93,   173,   351,
     174,   213,   251,    -1,    97,   175,    -1,    97,   351,   175,
      -1,    98,   175,    -1,    98,   351,   175,    -1,   102,   175,
      -1,   102,   307,   175,    -1,   102,   355,   175,    -1,   108,
     269,   175,    -1,   114,   271,   175,    -1,    82,   295,   175,
      -1,   160,   295,   161,    -1,    77,    -1,   351,   175,    -1,
     116,   173,   229,   174,   175,    -1,    -1,    -1,    88,   173,
     355,    92,   214,   246,   245,   174,   215,   248,    -1,    -1,
      -1,    88,   173,   307,    92,   216,   355,   245,   174,   217,
     248,    -1,    -1,    90,   218,   173,   250,   174,   249,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,   103,   219,   176,
     193,   177,   104,   173,   220,   334,   221,    75,   174,   222,
     176,   193,   177,   223,   224,    -1,   105,   351,   175,    -1,
      99,    73,   175,    -1,   225,    -1,    -1,   226,    -1,   225,
     226,    -1,    -1,    -1,   104,   173,   334,   227,    75,   174,
     228,   176,   193,   177,    -1,   230,    -1,   229,     8,   230,
      -1,   355,    -1,   234,    -1,   236,    -1,    -1,    31,    -1,
      -1,   321,   233,    73,   235,   173,   264,   174,   176,   193,
     177,    -1,    -1,   239,    73,   240,   237,   243,   176,   272,
     177,    -1,    -1,   241,    73,   238,   242,   176,   272,   177,
      -1,   120,    -1,   113,   120,    -1,   121,    -1,   112,   120,
      -1,    -1,   123,   334,    -1,   122,    -1,    -1,   123,   244,
      -1,    -1,   124,   244,    -1,   334,    -1,   244,     8,   334,
      -1,    -1,   126,   246,    -1,   355,    -1,    31,   355,    -1,
     196,    -1,    26,   193,    87,   175,    -1,   196,    -1,    26,
     193,    89,   175,    -1,   196,    -1,    26,   193,    91,   175,
      -1,    73,    13,   345,    -1,   250,     8,    73,    13,   345,
      -1,   176,   252,   177,    -1,   176,   175,   252,   177,    -1,
      26,   252,    94,   175,    -1,    26,   175,   252,    94,   175,
      -1,    -1,    -1,   252,    95,   351,   255,   253,   193,    -1,
      -1,   252,    96,   255,   254,   193,    -1,    26,    -1,   175,
      -1,   196,    -1,    26,   193,    85,   175,    -1,    -1,    -1,
     257,    68,   173,   351,   174,   258,   196,    -1,    -1,    -1,
     259,    68,   173,   351,   174,    26,   260,   193,    -1,    -1,
      69,   196,    -1,    -1,   163,   193,    -1,    -1,    69,    26,
     193,    -1,   265,    -1,    -1,   266,    75,    -1,   266,    31,
      75,    -1,   266,    31,    75,    13,   345,    -1,   266,    75,
      13,   345,    -1,   265,     8,   266,    75,    -1,   265,     8,
     266,    31,    75,    -1,   265,     8,   266,    31,    75,    13,
     345,    -1,   265,     8,   266,    75,    13,   345,    -1,    -1,
     128,    -1,   129,    -1,   334,    -1,   268,    -1,    -1,   307,
      -1,   355,    -1,    31,   353,    -1,   268,     8,   307,    -1,
     268,     8,   355,    -1,   268,     8,    31,   353,    -1,   269,
       8,   270,    -1,   270,    -1,    75,    -1,   178,   352,    -1,
     172,   352,    -1,   178,   176,   351,   177,    -1,   172,   176,
     351,   177,    -1,   271,     8,    75,    -1,   271,     8,    75,
      13,   345,    -1,    75,    -1,    75,    13,   345,    -1,   272,
     273,    -1,    -1,    -1,   289,   274,   293,   175,    -1,   294,
     175,    -1,   276,    -1,    -1,   290,   321,   233,    73,   275,
     173,   264,   174,   288,    -1,   106,   277,   278,    -1,   334,
      -1,   277,     8,   334,    -1,   175,    -1,   176,   279,   177,
      -1,    -1,   280,    -1,   281,    -1,   280,   281,    -1,   282,
     175,    -1,   286,   175,    -1,   285,   107,   283,    -1,   334,
      -1,   283,     8,   334,    -1,    73,    -1,   285,    -1,   334,
     146,    73,    -1,   284,    92,   287,    73,    -1,   284,    92,
     292,    -1,    -1,   292,    -1,   175,    -1,   176,   193,   177,
      -1,   291,    -1,   115,    -1,    -1,   291,    -1,   292,    -1,
     291,   292,    -1,   109,    -1,   110,    -1,   111,    -1,   114,
      -1,   113,    -1,   112,    -1,   293,     8,    75,    -1,   293,
       8,    75,    13,   345,    -1,    75,    -1,    75,    13,   345,
      -1,   294,     8,    73,    13,   345,    -1,   101,    73,    13,
     345,    -1,   295,     8,   351,    -1,   351,    -1,    -1,   297,
      -1,    -1,   297,     8,   298,   351,    -1,   351,    -1,   299,
     359,    -1,   359,    -1,   300,    63,   374,   179,    -1,    63,
     374,   179,    -1,    -1,   300,   302,   299,    -1,   300,    -1,
     299,    -1,    -1,    -1,   304,   301,    -1,    -1,    65,   335,
     306,   343,    -1,    -1,   127,   173,   308,   380,   174,    13,
     351,    -1,   355,    13,   351,    -1,   355,   166,   351,   167,
      -1,   355,   168,   351,   169,    -1,   355,    13,    31,   355,
      -1,    -1,   355,    13,    31,    65,   335,   309,   343,    -1,
      64,   351,    -1,   355,    24,   351,    -1,   355,    23,   351,
      -1,   355,    22,   351,    -1,   355,    21,   351,    -1,   355,
      20,   351,    -1,   355,    19,   351,    -1,   355,    18,   351,
      -1,   355,    17,   351,    -1,   355,    16,   351,    -1,   355,
      15,   351,    -1,   355,    14,   351,    -1,   354,    62,    -1,
      62,   354,    -1,   354,    61,    -1,    61,   354,    -1,    -1,
     351,    27,   310,   351,    -1,    -1,   351,    28,   311,   351,
      -1,    -1,   351,     9,   312,   351,    -1,    -1,   351,    11,
     313,   351,    -1,   351,    10,   351,    -1,   351,    29,   351,
      -1,   351,    31,   351,    -1,   351,    30,   351,    -1,   351,
      46,   351,    -1,   351,    44,   351,    -1,   351,   156,   351,
      -1,   351,    45,   351,    -1,   351,   155,   351,    -1,   351,
      47,   351,    -1,   351,   154,   351,    -1,   351,    48,   351,
      -1,   351,   153,   351,    -1,   351,    49,   351,    -1,   351,
     151,   351,   152,    -1,   351,    43,   351,    -1,   351,    42,
     351,    -1,    44,   351,    -1,    45,   351,    -1,    50,   351,
      -1,    52,   351,    -1,   351,    33,   351,    -1,   351,   157,
     351,   159,    -1,   351,    32,   351,    -1,   351,   157,   351,
     158,    -1,   351,    35,   351,    -1,   351,    34,   351,    -1,
     351,    36,   351,    -1,   351,   157,   351,    39,    -1,   351,
      41,   351,    -1,   351,   157,   351,    41,    -1,   351,    37,
     351,    -1,   351,   157,   351,    38,    -1,   351,    40,   351,
      -1,   351,   157,   351,    40,    -1,   351,    51,   335,    -1,
     173,   351,   174,    -1,   305,    -1,    -1,   173,   305,   174,
     314,   303,    -1,    -1,    -1,   351,    25,   315,   351,    26,
     316,   351,    -1,    -1,   351,    25,    26,   317,   351,    -1,
     389,    -1,    60,   351,    -1,    59,   351,    -1,    58,   351,
      -1,    57,   351,    -1,    56,   351,    -1,    55,   351,    -1,
      54,   351,    -1,    66,   341,    -1,    -1,    53,   318,   351,
      -1,   347,    -1,   128,   173,   383,   174,    -1,    63,   383,
     179,    -1,   180,   342,   180,    -1,    12,   351,    -1,    -1,
     321,   233,   173,   319,   264,   174,   322,   176,   193,   177,
      -1,    -1,   114,   321,   233,   173,   320,   264,   174,   322,
     176,   193,   177,    -1,   100,    -1,    -1,   106,   173,   323,
     174,    -1,   323,     8,    75,    -1,   323,     8,    31,    75,
      -1,    75,    -1,    31,    75,    -1,    -1,   186,   173,   325,
     267,   174,    -1,    -1,   147,   150,   186,   173,   326,   267,
     174,    -1,    -1,   150,   186,   173,   327,   267,   174,    -1,
      -1,   333,   146,   378,   173,   328,   267,   174,    -1,    -1,
     333,   146,   365,   173,   329,   267,   174,    -1,    -1,   367,
     146,   378,   173,   330,   267,   174,    -1,    -1,   367,   146,
     365,   173,   331,   267,   174,    -1,    -1,   365,   173,   332,
     267,   174,    -1,   114,    -1,   186,    -1,   147,   150,   186,
      -1,   150,   186,    -1,   186,    -1,   147,   150,   186,    -1,
     150,   186,    -1,   333,    -1,   336,    -1,    -1,    -1,   371,
     125,   337,   375,   338,   339,    -1,   371,    -1,   339,   340,
      -1,    -1,   125,   375,    -1,    -1,   173,   174,    -1,   173,
     351,   174,    -1,    -1,    80,    -1,   385,    -1,    -1,   173,
     267,   174,    -1,    71,    -1,    72,    -1,    81,    -1,   134,
      -1,   135,    -1,   149,    -1,   131,    -1,   132,    -1,   133,
      -1,   148,    -1,   142,    80,   143,    -1,   142,   143,    -1,
     344,    -1,   186,    -1,   147,   150,   186,    -1,   150,   186,
      -1,    44,   345,    -1,    45,   345,    -1,   128,   173,   348,
     174,    -1,    63,   348,   179,    -1,   346,    -1,   130,    -1,
     333,   146,    73,    -1,    74,    -1,   392,    -1,   186,    -1,
     147,   150,   186,    -1,   150,   186,    -1,   344,    -1,   181,
     385,   181,    -1,   142,   385,   143,    -1,   130,    -1,    -1,
     350,   349,    -1,    -1,     8,    -1,   350,     8,   345,   126,
     345,    -1,   350,     8,   345,    -1,   345,   126,   345,    -1,
     345,    -1,   352,    -1,   307,    -1,   355,    -1,   355,    -1,
     355,    -1,    -1,    -1,   370,   125,   356,   375,   357,   364,
     358,    -1,   370,    -1,   358,   359,    -1,    -1,    -1,   125,
     375,   360,   364,    -1,   361,    63,   374,   179,    -1,   362,
      63,   374,   179,    -1,    -1,   173,   363,   267,   174,    -1,
     362,    -1,   361,    -1,    -1,   372,    -1,   379,   372,    -1,
     333,   146,   365,    -1,   367,   146,   365,    -1,   372,    -1,
     368,    63,   374,   179,    -1,    -1,   324,   369,    63,   374,
     179,    -1,   371,    -1,   368,    -1,   324,    -1,   372,    -1,
     379,   372,    -1,   366,    -1,   372,    63,   374,   179,    -1,
     372,   176,   351,   177,    -1,   373,    -1,    75,    -1,   178,
     176,   351,   177,    -1,   172,   176,   351,   177,    -1,    -1,
     351,    -1,   377,    -1,    -1,   365,   376,    -1,   377,    63,
     374,   179,    -1,   377,   176,   351,   177,    -1,   378,    -1,
      73,    -1,   176,   351,   177,    -1,   178,    -1,   172,    -1,
     379,   178,    -1,   379,   172,    -1,   380,     8,   381,    -1,
     381,    -1,   355,    -1,    -1,   127,   173,   382,   380,   174,
      -1,    -1,    -1,   384,   349,    -1,   384,     8,   351,   126,
     351,    -1,   384,     8,   351,    -1,   351,   126,   351,    -1,
     351,    -1,   384,     8,   351,   126,    31,   353,    -1,   384,
       8,    31,   353,    -1,   351,   126,    31,   353,    -1,    31,
     353,    -1,   385,   386,    -1,   385,    80,    -1,   386,    -1,
      80,   386,    -1,    75,    -1,    -1,    75,    63,   387,   388,
     179,    -1,    75,   125,    73,    -1,   144,   351,   177,    -1,
     144,    74,    63,   351,   179,   177,    -1,   145,   355,   177,
      -1,    73,    -1,    76,    -1,    75,    -1,   117,   173,   390,
     174,    -1,   118,   173,   355,   174,    -1,     7,   351,    -1,
       6,   351,    -1,     5,   173,   351,   174,    -1,     4,   351,
      -1,     3,   351,    -1,   355,    -1,    -1,   390,     8,   391,
     355,    -1,   333,   146,    73,    -1,   367,   146,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   253,   253,   257,   257,   258,   262,   263,   267,   268,
     269,   270,   271,   272,   272,   274,   274,   276,   277,   281,
     282,   286,   287,   288,   289,   293,   294,   298,   298,   299,
     304,   305,   306,   307,   312,   313,   317,   318,   318,   318,
     319,   319,   319,   320,   320,   320,   321,   321,   321,   322,
     322,   322,   323,   323,   323,   327,   329,   331,   324,   333,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   349,   350,   348,   353,   354,
     352,   356,   356,   357,   358,   359,   360,   361,   362,   358,
     364,   365,   370,   371,   375,   376,   381,   381,   381,   386,
     387,   391,   395,   399,   404,   405,   410,   410,   416,   415,
     422,   421,   431,   432,   433,   434,   438,   439,   443,   446,
     448,   451,   453,   457,   458,   462,   463,   468,   469,   473,
     474,   479,   480,   485,   486,   491,   492,   497,   498,   499,
     500,   505,   506,   506,   507,   507,   512,   513,   518,   519,
     524,   526,   526,   530,   532,   532,   536,   538,   541,   543,
     547,   549,   554,   555,   560,   561,   562,   563,   564,   565,
     566,   567,   572,   573,   574,   575,   580,   581,   586,   587,
     588,   589,   590,   591,   595,   596,   601,   602,   603,   604,
     605,   610,   611,   612,   613,   619,   620,   625,   625,   626,
     627,   628,   628,   633,   637,   638,   642,   643,   646,   648,
     652,   653,   657,   658,   662,   666,   667,   671,   672,   676,
     680,   681,   685,   686,   690,   691,   695,   696,   700,   701,
     705,   706,   710,   711,   712,   713,   714,   715,   719,   720,
     721,   722,   726,   727,   731,   732,   737,   738,   742,   742,
     743,   747,   748,   752,   753,   757,   757,   758,   759,   763,
     764,   764,   769,   769,   773,   773,   774,   775,   776,   777,
     778,   778,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   795,
     796,   796,   797,   797,   798,   798,   799,   800,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,   812,
     813,   814,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
     833,   834,   835,   836,   837,   837,   838,   839,   838,   841,
     841,   843,   844,   845,   846,   847,   848,   849,   850,   851,
     852,   852,   853,   854,   855,   856,   857,   858,   858,   860,
     860,   865,   868,   870,   874,   875,   876,   877,   881,   881,
     884,   884,   887,   887,   890,   890,   893,   893,   896,   896,
     899,   899,   902,   902,   908,   909,   910,   911,   915,   916,
     917,   923,   924,   929,   930,   929,   932,   937,   938,   943,
     947,   948,   949,   953,   954,   955,   960,   961,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     982,   983,   984,   985,   986,   987,   988,   989,   990,   991,
     995,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,
    1012,  1013,  1016,  1018,  1022,  1023,  1024,  1025,  1029,  1030,
    1035,  1040,  1045,  1050,  1051,  1050,  1053,  1057,  1058,  1063,
    1063,  1067,  1068,  1072,  1072,  1078,  1079,  1080,  1084,  1085,
    1089,  1090,  1095,  1099,  1100,  1100,  1105,  1106,  1107,  1112,
    1113,  1114,  1118,  1119,  1120,  1125,  1126,  1127,  1131,  1132,
    1137,  1138,  1138,  1142,  1143,  1144,  1148,  1149,  1153,  1154,
    1155,  1156,  1160,  1161,  1166,  1167,  1167,  1168,  1173,  1174,
    1178,  1179,  1180,  1181,  1182,  1183,  1184,  1185,  1189,  1190,
    1191,  1192,  1198,  1199,  1199,  1200,  1201,  1202,  1203,  1208,
    1209,  1210,  1215,  1216,  1217,  1218,  1219,  1220,  1221,  1225,
    1226,  1226,  1230,  1231
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
  "\"> (T_YORI_OOKII)\"", "\"< (T_YORI_TIISAI)\"",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<= (T_IS_SMALLER_OR_EQUAL)\"",
  "\">> (T_SR)\"", "\"<< (T_SL)\"", "'+'", "'-'", "'.'", "'*'", "'/'",
  "'%'", "'!'", "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"", "'['",
  "\"clone (T_CLONE)\"", "\"new (T_NEW)\"", "\"exit (T_EXIT)\"",
  "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"integer number (T_LNUMBER)\"",
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
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"__DIR__ (T_DIR)\"",
  "\"\\\\ (T_NS_SEPARATOR)\"", "\"T_WO\"", "\"%\"", "\"/\"", "\"*\"",
  "\"-\"", "\"+\"", "\"T_GA\"", "\"NE\"", "\"EQ\"", "T_OPEN_OUTPUT",
  "T_CLOSE_OUTPUT", "T_JA_IF", "T_JA_ELSE", "T_OWARI", "T_NARABA",
  "\"T_HA\"", "T_DESU", "\"T_NI\"", "T_DAINYU", "T_KURIKAESI", "T_AIDA",
  "T_HENSU", "'('", "')'", "';'", "'{'", "'}'", "'$'", "']'", "'`'",
  "'\"'", "$accept", "start", "top_statement_list", "$@1",
  "namespace_name", "top_statement", "$@2", "$@3", "use_declarations",
  "use_declaration", "constant_declaration", "inner_statement_list", "$@4",
  "inner_statement", "statement", "unticked_statement", "$@5", "$@6",
  "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "@31", "$@32",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@33",
  "unticked_class_declaration_statement", "$@34", "$@35",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@36", "$@37", "case_separator",
  "while_statement", "elseif_list", "$@38", "new_elseif_list", "$@39",
  "else_single", "ja_else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@40", "$@41",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@42",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "$@43", "instance_call", "$@44", "new_expr",
  "$@45", "expr_without_variable", "$@46", "$@47", "$@48", "$@49", "$@50",
  "$@51", "@52", "$@53", "$@54", "$@55", "$@56", "@57", "@58", "function",
  "lexical_vars", "lexical_var_list", "function_call", "$@59", "$@60",
  "$@61", "$@62", "$@63", "$@64", "$@65", "$@66", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@67", "$@68",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@69", "$@70",
  "variable_properties", "variable_property", "$@71",
  "array_method_dereference", "method", "$@72", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@73",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@74", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@75", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@76",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@77", "class_constant", 0
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
     286,   287,   288,   289,    43,    45,    46,    42,    47,    37,
      33,   290,   126,    64,   291,   292,   293,   294,   295,   296,
     297,   298,   299,    91,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,    40,    41,    59,   123,   125,    36,    93,
      96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   182,   183,   185,   184,   184,   186,   186,   187,   187,
     187,   187,   187,   188,   187,   189,   187,   187,   187,   190,
     190,   191,   191,   191,   191,   192,   192,   194,   193,   193,
     195,   195,   195,   195,   196,   196,   197,   198,   199,   197,
     200,   201,   197,   202,   203,   197,   204,   205,   197,   206,
     207,   197,   208,   209,   197,   210,   211,   212,   197,   213,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   214,   215,   197,   216,   217,
     197,   218,   197,   197,   219,   220,   221,   222,   223,   197,
     197,   197,   224,   224,   225,   225,   227,   228,   226,   229,
     229,   230,   231,   232,   233,   233,   235,   234,   237,   236,
     238,   236,   239,   239,   239,   239,   240,   240,   241,   242,
     242,   243,   243,   244,   244,   245,   245,   246,   246,   247,
     247,   248,   248,   249,   249,   250,   250,   251,   251,   251,
     251,   252,   253,   252,   254,   252,   255,   255,   256,   256,
     257,   258,   257,   259,   260,   259,   261,   261,   262,   262,
     263,   263,   264,   264,   265,   265,   265,   265,   265,   265,
     265,   265,   266,   266,   266,   266,   267,   267,   268,   268,
     268,   268,   268,   268,   269,   269,   270,   270,   270,   270,
     270,   271,   271,   271,   271,   272,   272,   274,   273,   273,
     273,   275,   273,   276,   277,   277,   278,   278,   279,   279,
     280,   280,   281,   281,   282,   283,   283,   284,   284,   285,
     286,   286,   287,   287,   288,   288,   289,   289,   290,   290,
     291,   291,   292,   292,   292,   292,   292,   292,   293,   293,
     293,   293,   294,   294,   295,   295,   296,   296,   298,   297,
     297,   299,   299,   300,   300,   302,   301,   301,   301,   303,
     304,   303,   306,   305,   308,   307,   307,   307,   307,   307,
     309,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   310,   307,
     311,   307,   312,   307,   313,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   314,   307,   315,   316,   307,   317,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     318,   307,   307,   307,   307,   307,   307,   319,   307,   320,
     307,   321,   322,   322,   323,   323,   323,   323,   325,   324,
     326,   324,   327,   324,   328,   324,   329,   324,   330,   324,
     331,   324,   332,   324,   333,   333,   333,   333,   334,   334,
     334,   335,   335,   337,   338,   336,   336,   339,   339,   340,
     341,   341,   341,   342,   342,   342,   343,   343,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     346,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     348,   348,   349,   349,   350,   350,   350,   350,   351,   351,
     352,   353,   354,   356,   357,   355,   355,   358,   358,   360,
     359,   361,   361,   363,   362,   364,   364,   364,   365,   365,
     366,   366,   367,   368,   369,   368,   370,   370,   370,   371,
     371,   371,   372,   372,   372,   373,   373,   373,   374,   374,
     375,   376,   375,   377,   377,   377,   378,   378,   379,   379,
     379,   379,   380,   380,   381,   382,   381,   381,   383,   383,
     384,   384,   384,   384,   384,   384,   384,   384,   385,   385,
     385,   385,   386,   387,   386,   386,   386,   386,   386,   388,
     388,   388,   389,   389,   389,   389,   389,   389,   389,   390,
     391,   390,   392,   392
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     3,
       1,     1,     3,     2,     4,     5,     4,     0,     3,     0,
       1,     1,     1,     4,     1,     2,     3,     0,     0,     9,
       0,     0,    12,     0,     0,     8,     0,     0,     7,     0,
       0,     6,     0,     0,     9,     0,     0,     0,    12,     0,
       6,     2,     3,     2,     3,     2,     3,     3,     3,     3,
       3,     3,     1,     2,     5,     0,     0,    10,     0,     0,
      10,     0,     6,     1,     0,     0,     0,     0,     0,    18,
       3,     3,     1,     0,     1,     2,     0,     0,    10,     1,
       3,     1,     1,     1,     0,     1,     0,    10,     0,     8,
       0,     7,     1,     2,     1,     2,     0,     2,     1,     0,
       2,     0,     2,     1,     3,     0,     2,     1,     2,     1,
       4,     1,     4,     1,     4,     3,     5,     3,     4,     4,
       5,     0,     0,     6,     0,     5,     1,     1,     1,     4,
       0,     0,     7,     0,     0,     8,     0,     2,     0,     2,
       0,     3,     1,     0,     2,     3,     5,     4,     4,     5,
       7,     6,     0,     1,     1,     1,     1,     0,     1,     1,
       2,     3,     3,     4,     3,     1,     1,     2,     2,     4,
       4,     3,     5,     1,     3,     2,     0,     0,     4,     2,
       1,     0,     9,     3,     1,     3,     1,     3,     0,     1,
       1,     2,     2,     2,     3,     1,     3,     1,     1,     3,
       4,     3,     0,     1,     1,     3,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     5,
       1,     3,     5,     4,     3,     1,     0,     1,     0,     4,
       1,     2,     1,     4,     3,     0,     3,     1,     1,     0,
       0,     2,     0,     4,     0,     7,     3,     4,     4,     4,
       0,     7,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     2,     2,     2,     2,     3,     4,     3,
       4,     3,     3,     3,     4,     3,     4,     3,     4,     3,
       4,     3,     3,     1,     0,     5,     0,     0,     7,     0,
       5,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     3,     1,     4,     3,     3,     2,     0,    10,     0,
      11,     1,     0,     4,     3,     4,     1,     2,     0,     5,
       0,     7,     0,     6,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     5,     1,     1,     3,     2,     1,     3,
       2,     1,     1,     0,     0,     6,     1,     2,     0,     2,
       0,     2,     3,     0,     1,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     2,     2,     2,     4,     3,     1,     1,
       3,     1,     1,     1,     3,     2,     1,     3,     3,     1,
       0,     2,     0,     1,     5,     3,     3,     1,     1,     1,
       1,     1,     1,     0,     0,     7,     1,     2,     0,     0,
       4,     4,     4,     0,     4,     1,     1,     0,     1,     2,
       3,     3,     1,     4,     0,     5,     1,     1,     1,     1,
       2,     1,     4,     4,     1,     1,     4,     4,     0,     1,
       1,     0,     2,     4,     4,     1,     1,     3,     1,     1,
       2,     2,     3,     1,     1,     0,     5,     0,     0,     2,
       5,     3,     3,     1,     6,     4,     4,     2,     2,     2,
       1,     2,     1,     0,     5,     3,     3,     6,     3,     1,
       1,     1,     4,     4,     2,     2,     4,     2,     2,     1,
       0,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   508,     0,     0,   400,     0,
     408,   409,     6,   431,   485,    72,   410,     0,    52,     0,
       0,     0,    81,     0,     0,     0,     0,   361,     0,     0,
      84,     0,     0,     0,     0,     0,   384,     0,     0,     0,
       0,   112,   114,   118,     0,     0,   439,   414,   415,   416,
     411,   412,     0,     0,   417,   413,     0,     0,     0,    49,
     499,     0,    83,    29,   498,   403,     0,   433,     4,     0,
       8,    34,     9,    10,   102,   103,     0,     0,   333,   449,
     104,   478,     0,   436,   352,     0,   448,     0,   450,     0,
     481,     0,   477,   456,   476,   479,   484,     0,   341,   432,
       6,   384,     0,   104,   538,   537,     0,   535,   534,   356,
     313,   314,   315,   316,     0,   348,   347,   346,   345,   344,
     343,   342,   384,     0,     0,   385,     0,   287,   452,     0,
     285,     0,   513,     0,   442,   272,     0,     0,   385,   391,
     262,   392,     0,   396,   479,     0,     0,   349,     0,    35,
       0,   245,     0,    46,   246,     0,     0,     0,    61,     0,
      63,     0,     0,     0,    65,   449,     0,   450,     0,     0,
       0,    21,     0,    20,   186,     0,     0,     0,   185,   115,
     113,   193,     0,   104,     0,     0,     0,     0,   264,   508,
     522,     0,   419,     0,     0,     0,   520,     0,    15,     0,
     435,     0,     0,     0,     0,   333,     0,    27,     0,   404,
       0,   405,     0,     0,     0,   368,     0,    18,   116,   110,
     105,     0,     0,     0,   292,     0,   294,   336,   288,   290,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,   286,   284,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   382,     0,   488,   453,   488,     0,   501,
     500,   480,     0,     0,   351,     0,   387,     0,     0,   517,
     451,     0,   354,   443,   509,     0,   387,     0,   406,     0,
     393,   480,   401,     0,     0,     0,    70,     0,     0,     0,
     247,   250,   449,   450,     0,     0,    62,    64,    91,     0,
      66,    67,    29,    90,    23,     0,     0,    17,     0,   188,
     450,     0,   187,     0,    68,     0,     0,    69,     0,     0,
      99,   101,   539,     0,     0,     0,   507,     0,   523,     0,
     418,   521,   431,     0,     0,   519,   438,   518,   434,     5,
      12,    13,   372,    71,    43,     0,     0,   334,   332,    36,
       0,     0,   355,   437,     7,   177,     0,     0,   108,   119,
     106,   357,   488,   542,     0,   470,   468,     0,     0,     0,
     296,     0,   339,     0,     0,     0,   297,   299,   298,   319,
     317,   322,   321,   323,   327,   329,   325,   312,   311,   301,
     303,   300,   305,   307,   309,   331,     0,   308,   306,   304,
     302,     0,     0,   266,   283,   282,   281,   280,   279,   278,
     277,   276,   275,   274,   273,     0,     0,   177,   543,   471,
       0,   489,     0,     0,     0,     0,   536,   386,   496,     0,
     512,     0,   511,   386,   470,   177,   263,   471,     0,   402,
      37,   244,     0,     0,    55,   248,    78,    75,     0,     0,
      59,     0,     0,   440,     0,   429,     0,     0,     0,   421,
       0,   420,    26,   428,    27,     0,    22,    19,     0,     0,
     184,   194,   191,   359,     0,     0,   540,   532,   533,    11,
       0,   504,     0,   503,   353,     0,   525,     0,   526,   528,
     370,     3,     5,   177,    29,    50,   487,   259,     0,    28,
      30,    31,    32,   486,     0,     0,   176,   449,   450,     0,
       0,     0,   388,   117,   121,     0,     0,     0,   172,     0,
       0,   376,   374,   469,   293,   295,     0,     0,   289,   291,
     310,   328,   324,   330,   326,   320,   318,     0,   269,   267,
     268,     0,   380,   378,   473,   491,   454,   490,   495,   482,
     483,   516,   515,     0,     0,   394,    40,     0,    53,    47,
     246,     0,     0,     0,     0,     0,     0,     0,   424,   425,
     447,     0,   442,   440,     0,     0,   423,     0,     0,    24,
     190,   189,     0,   172,   100,    74,     0,   505,   507,     0,
     529,   531,   530,     0,     0,   177,    16,     3,     0,    27,
       0,   335,     0,     0,   180,   369,     0,    25,     0,   390,
       0,     0,   120,   123,   196,   172,   173,   174,     0,   162,
       0,   175,   475,   497,   177,   177,   340,   337,   270,   383,
     177,   177,   492,   467,   488,     0,     0,   510,   407,   398,
      29,    38,     0,     0,     0,   249,   125,     0,   125,   127,
     135,     0,    29,   133,    82,   141,   141,    60,     0,   427,
     443,   441,     0,   422,   430,     0,   192,     0,   541,   507,
     502,     0,   524,     0,     0,    14,   373,   158,    29,   148,
      51,   488,     0,   258,   257,   261,   252,     0,     0,   449,
     450,   389,   122,   196,     0,   228,     0,   362,   172,     0,
     164,     0,     0,     0,   406,     0,     0,   463,   466,   465,
     458,     0,     0,   514,   395,    27,   150,     0,    48,    56,
       0,     0,   128,     0,     0,    27,   141,     0,   141,     0,
     446,   445,   426,    85,   362,     0,   265,   527,   371,    29,
       0,    27,     0,   459,   251,   488,     0,    33,   183,   228,
     124,     0,     0,   232,   233,   234,   237,   236,   235,   227,
     111,   195,   200,   197,     0,   226,   230,     0,     0,     0,
       0,     0,   165,     0,   377,   375,   338,   271,   381,   379,
     177,   488,   488,   455,   493,   494,     0,   397,   153,   156,
       0,   246,   126,    79,    76,   136,     0,     0,     0,     0,
       0,     0,   137,     0,     0,     0,   506,    27,    45,     0,
     254,   467,     0,   256,   109,     0,     0,   204,     0,   104,
     231,     0,   199,    29,     0,    29,     0,   168,     0,   167,
       0,     0,     0,   457,   399,   160,     0,     0,    39,    54,
       0,     0,     0,   134,     0,   139,     0,   146,   147,   144,
     138,   444,    86,    29,   149,   460,   253,     0,     0,   206,
     208,   203,   240,     0,     0,     0,    27,     0,   366,     0,
      27,   169,     0,   166,   464,   461,   462,     0,     0,     0,
       0,   157,    57,    29,   131,    80,    77,   140,   142,    29,
       0,    27,   243,   205,     6,     0,   209,   210,     0,     0,
     218,     0,     0,     0,     0,   198,   201,     0,   107,   367,
       0,   363,   358,     0,   171,     0,    29,     0,     0,     0,
      27,    29,    27,     0,   360,   207,   211,   212,   222,     0,
     213,     0,   241,   238,     0,   242,     0,   364,   170,     0,
      27,    42,   151,    29,   129,    58,     0,    27,    87,     0,
     221,   214,   215,   219,     0,   172,   365,     0,     0,    27,
     132,     0,   220,     0,   239,     0,   154,   152,     0,    29,
     216,     0,    29,   130,    27,   224,    29,   202,    27,    88,
      27,    93,   225,     0,    89,    92,    94,     0,    95,    96,
       0,     0,    97,     0,    29,    27,    98
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    87,    88,   532,   379,   192,   193,
      89,   227,   390,   539,   719,    91,   597,   756,   680,   828,
     534,   717,   328,   683,   223,   640,   172,   682,   600,   831,
     959,   607,   603,   882,   602,   881,   176,   188,   844,   930,
    1001,  1021,  1024,  1025,  1026,  1030,  1033,   359,   360,    92,
      93,   241,    94,   557,    95,   554,   399,    96,   398,    97,
     556,   651,   652,   761,   688,   985,   925,   694,   489,   697,
     767,   961,   929,   889,   720,   829,   998,   875,  1012,   878,
     780,   919,   658,   659,   660,   545,   546,   197,   198,   202,
     735,   801,   858,   974,   802,   856,   901,   935,   936,   937,
     938,   991,   939,   940,   941,   989,  1017,   803,   804,   805,
     806,   903,   807,   170,   329,   330,   601,   723,   724,   725,
     786,   641,   642,    98,   318,    99,   366,   744,   414,   415,
     409,   411,   537,   413,   743,   566,   134,   558,   623,   123,
     810,   909,   101,   395,   635,   533,   665,   664,   671,   670,
     457,   102,   661,   160,   161,   478,   679,   754,   827,   167,
     230,   476,   103,   610,   503,   104,   611,   314,   612,   186,
     106,   309,   107,   108,   463,   673,   823,   726,   851,   748,
     749,   820,   750,   109,   110,   111,   112,   242,   113,   114,
     115,   116,   462,   586,   672,   587,   588,   117,   522,   523,
     709,   153,   154,   215,   216,   525,   633,   118,   363,   626,
     119
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -790
static const yytype_int16 yypact[] =
{
    -790,    86,    92,  -790,  1732,  4413,  4413,   -95,  4413,  4413,
    4413,  4413,  4413,  4413,  4413,  -790,  4413,  4413,  4413,  4413,
    4413,  4413,  4413,   359,   359,  2785,  4413,   512,   -68,   -24,
    -790,  -790,   115,  -790,  -790,  -790,  -790,  4413,  -790,    -3,
      33,    46,  -790,    61,  2933,  3081,   176,  -790,   184,  3229,
    -790,  4413,   -14,   -12,   154,   171,   152,   165,   185,   193,
     195,  -790,  -790,  -790,   199,   208,  -790,  -790,  -790,  -790,
    -790,  -790,   282,   -32,  -790,  -790,   271,  4413,  4413,  -790,
     213,  4413,  -790,  -790,   224,    51,   408,   -77,  -790,    26,
    -790,  -790,  -790,  -790,  -790,  -790,   334,   337,  -790,  -790,
     389,   365,   287,  -790,  -790,  5132,  -790,   314,  1181,   264,
    -790,   297,   384,   329,  -790,    -8,  -790,    99,  -790,  -790,
    -790,   358,   312,   389,  6431,  6431,  4413,  6431,  6431,  4622,
     542,   542,   173,   542,  4413,   542,   542,   542,   542,   542,
     542,   542,  -790,   316,   271,   -80,   326,  -790,  -790,   332,
    -790,   359,  6211,   295,   489,   542,   349,   271,   357,   374,
    -790,  -790,   376,   399,    -7,    99,  3377,  -790,  4413,  -790,
      27,  6431,  2634,  -790,  4413,  4413,   350,  4413,  -790,  5175,
    -790,  5229,   352,   517,  -790,   366,  6431,   289,   364,  5311,
     271,   181,    28,  -790,  -790,   223,   386,    29,  -790,  -790,
    -790,   521,    30,   389,   359,   359,   359,   351,  -790,  2785,
      21,   279,  -790,  4561,   359,   307,  -790,   271,  -790,   -86,
     -46,    16,  6072,  4413,  4413,   377,  5365,   380,  4413,   219,
     381,   421,   219,    72,   487,  -790,   490,  -790,   444,  -790,
    -790,   -16,   506,    78,  -790,  4413,  -790,   546,  -790,  -790,
    4413,  4413,  4413,  4413,  4413,  4413,  4413,  4413,  4413,  4413,
    4413,  4413,  4413,  4413,  4413,  4413,  4413,  4413,  4413,   512,
    4413,  4413,  4413,  4413,  4413,  4413,  -790,  -790,  -790,  3525,
    4413,  4413,  4413,  4413,  4413,  4413,  4413,  4413,  4413,  4413,
    4413,  4413,  4413,  -790,   164,  4413,  -790,  4413,  4413,   213,
     224,   -36,   404,  5408,   542,   271,   -79,   189,   189,  -790,
    -790,  3673,  -790,  3821,  -790,   271,   357,   143,   405,   143,
    -790,    -1,  -790,  5460,  5543,  4413,  -790,   498,  4413,   409,
     578,  6431,   496,   835,   520,  5595,  -790,  -790,  -790,  1247,
    -790,  -790,  -790,  -790,   191,   522,   -14,  -790,  4413,  -790,
    -790,  4413,  -790,   -12,  -790,  1247,   519,  -790,   429,     6,
    -790,  -790,  -790,    14,   430,   433,   501,   435,  -790,   539,
    -790,  -790,   550,  4718,   440,  -790,  -790,  -790,    95,  -790,
    -790,  -790,  -790,  -790,  -790,  5871,  4761,  -790,  -790,  -790,
    1881,  4804,  -790,  -790,  -790,  3969,   610,   -15,  -790,   507,
    -790,  -790,  4413,   456,  4413,   460,    -1,   472,    99,  4413,
    6520,  4413,  -790,  4413,  4413,  4413,  6298,  1457,  6557,  6578,
    6578,  6578,  6578,  1170,  1170,  1170,  1170,   592,   592,   391,
     391,   391,   173,   173,   173,  -790,  6254,   493,   493,   493,
     493,  6153,   167,  4622,  4622,  4622,  4622,  4622,  4622,  4622,
    4622,  4622,  4622,  4622,  4622,  6004,  5923,  3969,   456,   473,
     474,  6431,   475,   189,   477,  4856,  -790,   -71,  -790,   359,
    6431,   359,  6344,   357,  -790,  3969,  -790,  -790,   189,  -790,
     626,  6431,   484,  5638,  -790,  -790,  -790,  -790,   645,    23,
    -790,  1247,  1247,  1247,   495,  -790,   -20,   513,   271,   119,
     523,  -790,  -790,  -790,   494,   599,  -790,  -790,  4899,  4942,
    -790,  -790,   661,  -790,   359,   505,  -790,  -790,  -790,  -790,
     503,  -790,    36,  -790,  -790,   317,  -790,  4413,  -790,  -790,
    -790,   508,  -790,  3969,  -790,  -790,  -790,    59,   510,  -790,
    -790,  -790,  -790,  -790,   359,   514,   681,    38,    93,  1247,
     541,   271,   357,  -790,   577,   -15,   530,   534,   206,   529,
    4994,  -790,  -790,    -1,  6477,  4622,  4413,  6387,  1422,  1501,
    -790,  -790,  -790,  4413,  4413,  -790,  -790,   512,  -790,  -790,
    -790,   536,  -790,  -790,  -790,  -790,  -790,     2,  -790,  -790,
    -790,  -790,  -790,  4117,   538,  -790,  -790,  2634,  -790,  -790,
    4413,  4413,   359,   205,  1247,   640,  2032,    35,  -790,  -790,
     588,   537,   709,  1247,   576,   271,   120,   647,   620,  -790,
    -790,  -790,  1247,   206,  -790,  -790,   359,  -790,   501,   708,
    -790,  -790,  -790,   554,  1118,  3969,  -790,   548,   560,   221,
    2183,  -790,   163,   562,  -790,  -790,  4265,  -790,   271,   357,
     -15,   564,   736,  -790,  -790,   206,  -790,  -790,   579,   742,
      49,  -790,  -790,  -790,  3969,  3969,  5500,  -790,  -790,  -790,
    3969,  3969,  -790,   582,  4413,  4413,   359,  6431,  -790,  -790,
    -790,  -790,  4413,  2183,   581,  6431,   625,   359,   625,  -790,
    -790,   744,  -790,  -790,  -790,   584,   593,  -790,  1247,  -790,
    1247,  -790,   607,   172,  -790,   594,  -790,   615,  -790,   501,
    -790,  4413,  -790,   596,   619,  -790,  -790,   638,  -790,  -790,
    -790,  4413,   189,   680,   175,  -790,  -790,   631,   359,    39,
     936,   357,   736,  -790,   -15,   302,   641,   706,   348,   739,
     805,   648,   649,  4413,   405,   650,   654,  -790,   756,   763,
    -790,   653,  5037,  -790,   710,   328,  -790,  5693,  -790,  -790,
     205,   659,  -790,   660,  1247,   745,  -790,   398,  -790,   -44,
    -790,   712,  -790,  -790,   706,    40,  4622,  -790,  -790,  -790,
     675,   755,   663,  -790,  -790,  4413,   680,  -790,  -790,   617,
    -790,   773,   -15,  -790,  -790,  -790,  -790,  -790,  -790,  -790,
    -790,  -790,  -790,  -790,   358,   652,  -790,    32,   684,   688,
     687,    50,   851,  1247,  -790,  -790,  5500,  -790,  -790,  -790,
    3969,  4413,  4413,   680,  -790,  -790,   189,  -790,  -790,   336,
     690,  4413,  -790,  -790,  -790,  -790,   691,   416,   692,  4413,
      17,   -29,  -790,  1247,   -15,   693,  -790,   704,  -790,   695,
    -790,   582,   694,   680,  -790,   858,    11,  -790,   797,   389,
    -790,   803,  -790,  -790,    54,  -790,   804,   865,  1247,  -790,
     713,   701,   703,  -790,  -790,   362,   711,  2634,  -790,  -790,
     714,  2334,  2334,  -790,   715,  -790,  5080,  -790,  -790,  -790,
    -790,  -790,  -790,  -790,  -790,  -790,  -790,  1247,   -15,  -790,
       9,  -790,   870,    34,   820,   881,   718,   823,  -790,    41,
     722,   888,  1247,  -790,  -790,  -790,  -790,   729,   877,   834,
    4413,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,
     830,   730,  -790,  -790,   816,   732,     9,  -790,   735,   819,
     807,   737,   769,  1247,   843,  -790,  -790,  1247,  -790,  -790,
      67,  -790,  -790,  1247,  -790,  4413,  -790,   746,  5773,  2485,
     833,  -790,   -19,   749,  -790,  -790,  -790,  -790,   686,   -15,
    -790,   846,  -790,   912,   753,  -790,   853,  -790,  -790,  5828,
     859,  -790,  -790,  -790,  -790,  -790,   758,   252,  -790,   862,
     863,   923,  -790,  -790,  1247,   206,  -790,   913,  2634,   861,
    -790,   785,  -790,   -15,  -790,   771,  -790,  -790,   787,  -790,
    -790,   340,  -790,  -790,   788,  -790,  -790,  -790,   412,  -790,
     789,   860,  -790,   794,  -790,   860,  -790,   -15,  -790,  -790,
     894,   796,  -790,   792,  -790,   799,  -790
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -790,  -790,  -347,  -790,   -23,  -790,  -790,  -790,  -790,   627,
    -790,  -274,  -790,  -790,     4,  -790,  -790,  -790,  -790,  -790,
    -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,
    -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,
    -790,  -790,  -790,  -790,   -51,  -790,  -790,  -790,   467,   595,
     597,  -120,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,
    -790,  -790,   333,   296,   222,  -790,   104,  -790,  -790,  -790,
    -535,  -790,  -790,   105,   309,  -790,  -790,  -790,  -790,  -790,
    -790,  -790,  -616,  -790,   255,  -442,  -790,  -790,   642,  -790,
     263,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,    63,
    -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,
    -789,  -790,  -790,   928,  -587,  -790,  -790,   214,  -790,  -790,
    -790,  -790,  -790,   925,  -790,    -4,  -790,  -790,  -790,  -790,
    -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,    -2,
     233,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,  -790,
    -790,    -6,  -325,  -257,  -790,  -790,  -790,  -790,  -790,  -790,
    -790,   265,  -329,   486,  -790,  -790,   395,   400,  -790,   766,
     294,  -441,   480,   893,  -790,  -790,  -790,  -703,  -790,  -790,
    -790,  -790,   159,  -220,  -790,  1042,  -790,  -790,  -790,   -21,
     -22,  -790,  -272,  -467,  -790,  -790,   327,   -18,   304,   387,
    -790,   850,  -790,   432,   598,  -790,  -790,  -790,  -790,  -790,
    -790
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -497
static const yytype_int16 yytable[] =
{
     145,   145,   100,   302,   158,   164,   163,   707,    90,   165,
     501,   595,   435,   684,   514,   581,   860,   146,   146,   898,
     784,   159,   516,   405,   325,   464,   501,   297,   591,   191,
     592,   605,   531,   594,   236,   325,   346,   353,   356,   736,
     861,   120,   944,   887,   628,   185,  -178,  -181,   628,   950,
     219,   839,   840,   220,   203,   297,   297,   400,   120,   120,
     614,   695,   297,   194,   234,   674,   839,   840,   504,  -385,
     234,   234,   553,   234,   459,  -145,  -145,  -145,   126,   234,
     739,   866,   934,   358,   368,   907,     3,   405,   459,   380,
     381,   638,    -2,   235,   382,   301,   235,   474,   976,   477,
    -387,  -179,   530,   644,   234,   166,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   217,   203,
     873,   306,  -260,   212,   740,   867,   210,   382,   145,   908,
     559,   229,   550,   842,   316,   551,   190,  -469,  -472,  -472,
     298,   169,   977,   321,   218,   146,   369,   210,   890,   168,
     784,   403,   375,    34,  -452,  -452,   550,   401,  -145,   551,
     195,   769,   501,   501,   501,  -468,   196,   344,   298,   298,
     173,   332,   145,   145,    34,   298,   327,   383,   675,   990,
     515,   145,   145,   145,  -260,   637,   899,   900,   517,   146,
     146,   145,   888,   714,   378,   213,   214,   606,   146,   146,
     146,   237,   326,   347,   354,   357,   174,   862,   146,   945,
     629,   696,  -178,  -181,   846,   951,   213,   214,    34,   175,
     501,   406,   741,   742,   269,   408,   721,   201,   745,   746,
     653,   837,   577,   841,   177,   753,   687,   458,   785,    34,
     120,  -386,    34,   585,   880,   234,   158,   164,   163,   182,
      80,   165,    47,   393,   404,   783,    84,   183,   585,   291,
     639,   292,   468,   159,    34,  -385,  -387,  -179,   530,   234,
     234,   299,   406,   345,   199,   501,   408,   300,   120,   120,
      34,   142,   467,   505,   501,   406,   406,   788,   722,   408,
     408,   200,   473,   501,   210,   406,   120,   406,    34,   408,
    -255,   408,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   143,    80,   499,   144,  -386,   142,
     668,    84,   234,   191,   270,   653,   271,   272,   273,   274,
     275,   234,   499,   500,   656,   657,    80,   142,   204,    80,
     404,   234,    84,   145,   120,    84,  -143,  -143,  -143,   500,
    -452,  -452,   143,   550,   210,   144,   551,   210,   205,   874,
     146,    80,   211,   213,   214,   404,   206,    84,   207,   501,
     143,   501,   208,   144,   552,   277,   278,    80,   870,  1005,
    -163,   209,   210,    84,   -44,   -44,   563,   375,   100,   224,
     630,   547,   631,   632,   540,    80,   -41,   -41,   -41,   348,
     228,    84,   751,   791,   876,   877,   755,   238,   792,   790,
     239,   793,   794,   795,   796,   797,   798,   799,   765,   145,
     240,   120,   370,   213,   214,   212,   213,   214,  -474,  -143,
     917,   918,   120,   243,    34,   501,   146,   293,   266,   267,
     268,   406,   269,   294,   781,   408,   145,   295,   145,   782,
     376,   213,   214,   547,   296,   291,   406,   292,    47,   120,
     408,    34,   217,   146,   341,   146,   305,   857,   499,   499,
     499,   547,   307,   142,   312,   616,   656,   657,   308,   800,
    -155,  -155,  -155,   210,   501,   500,   500,   500,   232,   349,
     352,   145,   838,   839,   840,   550,   210,   313,   551,   315,
     142,   375,   585,   147,   150,   847,   143,   234,   146,   144,
     884,   839,   840,   852,   501,  1015,  1016,   231,   233,   892,
     317,   145,   319,   334,   320,   365,   499,   338,   649,   547,
     339,    80,   552,   143,   355,   552,   144,    84,   146,   501,
     342,   340,   270,   500,   271,   272,   273,   274,   275,   871,
     872,   387,   213,   214,   158,   164,   163,   389,    80,   165,
     394,   392,   351,   396,    84,   213,   214,   397,   501,   402,
     407,   159,   412,   933,   120,   942,    34,   401,   475,   145,
     145,   499,   482,   501,   484,   120,   485,    34,   486,   906,
     499,   910,   703,   488,   512,   506,   146,   146,   500,   499,
     552,   681,   513,   145,   518,   145,   585,   500,   519,   524,
     693,   942,   526,   527,   501,   142,   500,   529,   501,   931,
     146,   460,   146,   549,   501,   731,   142,   552,   520,  -496,
     555,   547,   552,   561,   407,   460,   263,   264,   265,   266,
     267,   268,   729,   269,   992,   562,   582,   583,   143,   960,
     275,   144,   596,   145,   584,   962,   589,   598,   604,   156,
     547,   547,   157,   615,   145,   501,   547,   547,   613,   617,
     146,   618,   619,    80,   622,   499,   627,   499,  1010,    84,
     625,   146,   980,   643,    80,   636,   145,   987,   645,   646,
      84,   648,   500,   270,   500,   271,   272,   273,   274,   275,
     406,   650,  1029,   146,   408,   145,   654,   655,   662,   999,
     669,   552,   678,   691,   698,   552,   699,   700,   791,   370,
     704,   711,   146,   792,   705,   715,   793,   794,   795,   796,
     797,   798,   799,   712,   716,  1014,   727,   145,  1018,   904,
     733,   499,  1020,   270,   734,   271,   272,   273,   274,   275,
     738,   760,  -229,   737,   146,   747,   759,   764,   500,   766,
    1035,   793,   794,   795,   796,   797,   798,   773,   768,   552,
     105,   124,   125,   777,   127,   128,   129,   130,   131,   132,
     133,   772,   135,   136,   137,   138,   139,   140,   141,   774,
     499,   152,   155,   778,   854,   793,   794,   795,   796,   797,
     798,   779,   859,   171,   406,   722,   787,   500,   408,   371,
     179,   181,   809,   377,   812,   808,   547,   189,   813,   821,
     499,   552,   814,   815,   818,   502,   822,   371,   819,   377,
     371,   377,   824,   833,   834,   826,   836,   500,   843,   848,
     849,   511,   850,   171,   222,   499,   855,   226,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     863,   864,   500,   865,   868,   879,   883,   885,  -159,   893,
     894,   897,   902,   896,   499,   552,   905,   552,   912,   911,
     915,   921,   916,   943,   920,   924,   924,   914,   922,   499,
     927,   500,   303,   946,   947,   948,  -452,  -452,   949,   952,
     304,   953,   955,   956,   957,   963,   500,   964,  -217,   965,
     967,   968,   970,   552,   969,   971,   148,   148,   973,   993,
     499,   981,   986,   988,   499,   994,   995,   487,   996,  -161,
     499,  1003,   323,  1000,   324,  1002,  -223,   500,   105,  1006,
     331,   500,   187,   335,  -182,  1011,   552,   500,  1008,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,  1009,  1013,   984,  1023,  1019,  1022,  1027,  1034,  1031,
    1032,   499,   552,   507,  1028,   152,  1036,   608,   609,   373,
     552,   624,   832,   732,   763,   541,   926,   542,   500,   385,
     386,   928,   758,   811,   391,   510,   789,  -452,  -452,   966,
     853,   291,  1007,   292,   552,   221,   225,   845,   702,   817,
     895,   410,   701,   775,     0,   710,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   647,   436,   437,   438,   439,
     440,   441,     0,     0,   310,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   367,
       0,   461,     0,   461,   465,   149,   149,     0,   333,   162,
       0,     0,     0,     0,     0,     0,     0,   470,     0,   472,
       0,     0,     0,     0,     0,     0,     0,     0,   350,   350,
     690,   481,     0,     0,   483,     0,     0,   361,   362,   364,
       0,     0,   291,     0,   292,     0,     0,   374,   706,     0,
    -182,     0,     0,     0,   508,     0,     0,   509,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   105,     0,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   461,   269,
     560,     0,     0,     0,     0,   564,     0,   565,     0,   567,
     568,   569,     0,     0,   770,     0,   771,     0,     0,     0,
       0,     0,     0,   149,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,  -497,  -497,     0,     0,
    -497,  -497,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   149,   149,     0,
       0,     0,  -452,  -452,     0,     0,   149,   149,   149,     0,
     835,     0,     0,     0,     0,     0,   149,     0,     0,   521,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,   271,   272,   273,   274,   275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   548,     0,
       0,   491,   492,   634,     0,     0,     0,   713,     0,   869,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     493,   162,     0,     0,     0,     0,     0,     0,    30,    31,
     120,   270,     0,   271,   272,   273,   274,   275,    36,   891,
       0,     0,   666,     0,     0,   578,     0,     0,     0,   425,
     426,     0,     0,     0,     0,     0,     0,   291,     0,   292,
     548,     0,     0,     0,   913,     0,     0,     0,     0,   677,
       0,   142,   310,   105,   310,     0,   331,   685,   548,     0,
       0,     0,   105,     0,     0,   494,     0,   495,    67,    68,
      69,    70,    71,   932,     0,     0,     0,     0,     0,   496,
       0,     0,     0,     0,   497,    74,    75,   498,   954,     0,
       0,     0,     0,     0,     0,     0,   105,   361,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   548,     0,     0,   972,
       0,     0,     0,   975,     0,     0,     0,   310,     0,   978,
     461,   752,     0,     0,     0,     0,     0,     0,   757,   105,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,   776,     0,     0,
    1004,     0,     0,     0,   149,     0,     0,   461,   252,   253,
     254,   255,   256,   257,   258,   686,   689,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   816,
       0,   149,     0,   149,     0,     0,     0,     0,     0,   708,
       0,   521,     0,     0,     0,     0,     0,     0,   548,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   730,
       0,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   461,   269,     0,     0,     0,   149,   548,   548,     0,
       0,     0,     0,   548,   548,     0,     0,     0,     0,   310,
       0,     0,     0,   270,     0,   271,   272,   273,   274,   275,
     762,     0,     0,     0,     0,     0,   149,   461,   461,     0,
       0,     0,     0,     0,     0,     0,     0,   331,     0,     0,
       0,     0,   521,     0,     0,   886,     0,     0,   270,     0,
     271,   272,   273,   274,   275,     0,     0,     0,     0,   162,
       0,   310,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   149,   149,     0,   105,   105,     0,
       0,     0,   270,   689,   271,   272,   273,   274,   275,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   149,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   958,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   548,     0,     0,     0,     0,   149,     0,
       0,   979,     0,     0,     0,   105,     0,     0,     0,   149,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,   149,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,     0,     0,     0,     0,     0,
     149,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,   149,    30,    31,    32,    33,    34,     0,    35,
       0,     0,     0,    36,    37,    38,    39,     0,    40,     0,
      41,     0,    42,     0,     0,    43,     0,     0,     0,    44,
      45,    46,    47,    48,    49,    50,     0,    51,    52,     0,
      53,     0,     0,     0,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,    73,
      74,    75,    76,     0,     5,     6,     7,     8,     9,     0,
       0,     0,    77,    10,    78,     0,     0,     0,     0,     0,
       0,     0,    79,     0,    80,    81,     0,    82,    83,     0,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,    30,    31,    32,    33,    34,     0,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    40,     0,    41,
       0,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,     0,    49,    50,     0,    51,     0,     0,    53,
       0,     0,     0,    54,    55,    56,     0,    57,    58,    59,
     538,    61,    62,    63,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   122,    74,
      75,    76,     0,     0,     0,     5,     6,     7,     8,     9,
       0,    77,     0,    78,    10,     0,     0,     0,     0,     0,
       0,    79,     0,    80,    81,     0,    82,    83,   692,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,    30,    31,    32,    33,    34,     0,    35,
       0,     0,     0,    36,    37,    38,    39,     0,    40,     0,
      41,     0,    42,     0,     0,    43,     0,     0,     0,    44,
      45,    46,    47,     0,    49,    50,     0,    51,     0,     0,
      53,     0,     0,     0,     0,     0,    56,     0,    57,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,   122,
      74,    75,    76,     0,     0,     0,     5,     6,     7,     8,
       9,     0,    77,     0,    78,    10,     0,     0,     0,     0,
       0,     0,    79,     0,    80,    81,     0,    82,    83,   718,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,    30,    31,    32,    33,    34,     0,
      35,     0,     0,     0,    36,    37,    38,    39,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,     0,     0,
      44,    45,    46,    47,     0,    49,    50,     0,    51,     0,
       0,    53,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
     122,    74,    75,    76,     0,     0,     0,     5,     6,     7,
       8,     9,     0,    77,     0,    78,    10,     0,     0,     0,
       0,     0,     0,    79,     0,    80,    81,     0,    82,    83,
     923,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,    30,    31,    32,    33,    34,
       0,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      40,     0,    41,     0,    42,     0,     0,    43,     0,     0,
       0,    44,    45,    46,    47,     0,    49,    50,     0,    51,
       0,     0,    53,     0,     0,     0,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,     0,    72,     0,     0,     0,
       0,   122,    74,    75,    76,     0,     0,     0,     5,     6,
       7,     8,     9,     0,    77,     0,    78,    10,     0,     0,
       0,     0,     0,     0,    79,     0,    80,    81,     0,    82,
      83,   983,    84,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,    33,
      34,     0,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,     0,    49,    50,     0,
      51,     0,     0,    53,     0,     0,     0,     0,     0,    56,
       0,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,   122,    74,    75,    76,     0,     5,     6,     7,
       8,     9,     0,     0,     0,    77,    10,    78,     0,     0,
       0,     0,     0,     0,     0,    79,     0,    80,    81,     0,
      82,    83,     0,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,    30,    31,    32,    33,    34,
       0,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      40,     0,    41,     0,    42,     0,     0,    43,     0,     0,
       0,    44,    45,    46,    47,     0,    49,    50,     0,    51,
       0,     0,    53,     0,     0,     0,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,     0,    72,     0,     0,     0,
       0,   122,    74,    75,    76,     0,     0,     0,     5,     6,
       7,     8,     9,     0,    77,     0,    78,    10,     0,     0,
       0,     0,     0,     0,    79,     0,    80,    81,     0,    82,
      83,     0,    84,     0,    85,    86,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   120,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,   122,    74,    75,    76,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,     0,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   120,    33,    34,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
     122,    74,    75,    76,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,     0,   178,     0,
       0,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   120,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   122,    74,
      75,    76,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,     0,   180,     0,     0,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   120,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,   122,    74,    75,    76,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81,     0,   184,     0,     0,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     120,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,   122,    74,    75,    76,     5,     6,
       7,     8,     9,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,   322,     0,     0,     0,    84,   442,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   120,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,   122,    74,    75,    76,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,     0,    84,   469,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   120,    33,    34,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
     122,    74,    75,    76,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
       0,    84,   471,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   120,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   122,    74,
      75,    76,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,     0,    84,
     544,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   120,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,   122,    74,    75,    76,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81,     0,     0,     0,     0,    84,   676,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     120,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,   122,    74,    75,    76,     5,     6,
       7,     8,     9,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,     0,    84,   728,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   120,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,   122,    74,    75,    76,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,     0,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   120,    33,    34,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
     122,    74,    75,    76,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
       0,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   120,   372,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,   247,     0,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,    47,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,   121,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   122,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,   245,   246,
       0,     0,     0,    80,    81,     0,     0,     0,     0,    84,
       0,    85,    86,   247,     0,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,     0,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
     244,   245,   246,   270,     0,   271,   272,   273,   274,   275,
       0,     0,     0,     0,     0,     0,   247,     0,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   244,   245,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   245,   246,     0,   270,
       0,   271,   272,   273,   274,   275,     0,     0,     0,     0,
       0,   247,     0,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   528,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,     0,   269,   244,   245,
     246,     0,   270,     0,   271,   272,   273,   274,   275,     0,
       0,     0,     0,     0,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   536,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,   244,   245,   246,     0,   270,     0,   271,   272,   273,
     274,   275,     0,     0,     0,     0,     0,   247,     0,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   543,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   244,   245,   246,     0,   270,     0,   271,
     272,   273,   274,   275,     0,     0,     0,     0,     0,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   590,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,   244,   245,   246,     0,
     270,     0,   271,   272,   273,   274,   275,     0,     0,     0,
       0,     0,   247,     0,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   620,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,   244,
     245,   246,     0,   270,     0,   271,   272,   273,   274,   275,
       0,     0,     0,     0,     0,   247,   887,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   621,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   245,   246,     0,   270,     0,   271,   272,   273,
     274,   275,     0,     0,     0,     0,     0,   247,     0,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   663,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,   244,   245,   246,     0,   270,     0,
     271,   272,   273,   274,   275,     0,     0,     0,     0,     0,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   825,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,     0,     0,     0,
       0,   270,     0,   271,   272,   273,   274,   275,   244,   245,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,   888,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,     0,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,     0,
     269,     0,     0,   270,     0,   271,   272,   273,   274,   275,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   245,   246,     0,     0,     0,   270,     0,   271,   272,
     273,   274,   275,     0,     0,     0,   247,     0,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     336,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,   245,   246,     0,     0,     0,
     270,     0,   271,   272,   273,   274,   275,     0,     0,     0,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   337,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,   244,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,     0,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,   270,     0,   271,   272,   273,   274,   275,   244,
     245,   246,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   247,   343,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,     0,     0,     0,   270,     0,   271,   272,
     273,   274,   275,     0,     0,     0,     0,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   388,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,   244,   245,   246,     0,     0,     0,     0,   270,
       0,   271,   272,   273,   274,   275,     0,     0,   247,     0,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   466,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,   245,   246,     0,     0,     0,
       0,   270,     0,   271,   272,   273,   274,   275,     0,     0,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   479,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,     0,   269,   244,   245,   246,
       0,   270,     0,   271,   272,   273,   274,   275,     0,     0,
       0,     0,     0,   247,     0,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,     0,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,     0,     0,   270,     0,   271,   272,   273,   274,
     275,     0,   244,   245,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   480,   247,     0,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,     0,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,   270,     0,   271,   272,
     273,   274,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   490,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   244,   245,   246,     0,     0,     0,     0,   270,
       0,   271,   272,   273,   274,   275,     0,     0,   247,     0,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   599,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   244,   245,   246,
       0,     0,     0,     0,   270,     0,   271,   272,   273,   274,
     275,     0,     0,   247,     0,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   830,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
     244,   245,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   247,     0,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,   270,     0,   271,   272,   273,   274,
     275,     0,   244,   245,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   982,   247,     0,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,     0,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,   270,
       0,   271,   272,   273,   274,   275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   997,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   244,   245,   246,     0,     0,     0,     0,
       0,     0,   270,     0,   271,   272,   273,   274,   275,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   535,     0,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   270,     0,   271,   272,   273,   274,
     275,   244,   245,   246,     0,     0,     0,     0,     0,     0,
       0,     0,   580,     0,     0,     0,     0,   247,     0,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,     0,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,     0,   269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   270,     0,   271,   272,   273,
     274,   275,   244,   245,   246,     0,     0,     0,     0,     0,
       0,   579,     0,     0,     0,     0,     0,     0,   247,     0,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   571,   572,   573,   574,   261,   262,   263,   264,   265,
     266,   267,   268,     0,   269,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   245,   246,   270,     0,   271,   272,   273,   274,   275,
       0,     0,     0,     0,     0,     0,   247,   384,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
       0,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,   244,   245,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   270,   269,   271,   272,   273,   274,
     275,   575,   576,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   311,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,     0,   269,
       0,     0,     0,   244,   245,   246,     0,     0,     0,     0,
       0,     0,   270,     0,   271,   272,   273,   274,   275,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,     0,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,     0,   269,   244,   245,   246,     0,
       0,     0,     0,     0,     0,   270,   570,   271,   272,   273,
     274,   275,   247,   667,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,     0,
     244,   245,   246,     0,     0,     0,     0,     0,     0,   270,
       0,   271,   272,   273,   274,   275,   247,     0,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     593,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,     0,   269,     0,     0,     0,     0,   245,   246,     0,
       0,     0,     0,     0,     0,   270,     0,   271,   272,   273,
     274,   275,   247,     0,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,     0,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,     0,
       0,   246,     0,     0,     0,     0,     0,     0,   270,     0,
     271,   272,   273,   274,   275,   247,     0,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,     0,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
       0,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   270,     0,   271,   272,   273,   274,   275,   253,
     254,   255,   256,   257,   258,     0,     0,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,     0,   269,     0,
    -497,  -497,  -497,  -497,   257,   258,     0,     0,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   270,   269,
     271,   272,   273,   274,   275,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   270,     0,   271,   272,   273,   274,   275,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   270,     0,
     271,   272,   273,   274,   275,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,   271,   272,   273,   274,   275
};

static const yytype_int16 yycheck[] =
{
      23,    24,     4,   123,    27,    27,    27,   623,     4,    27,
     339,   478,   269,   600,     8,   457,   805,    23,    24,     8,
     723,    27,     8,   243,     8,   297,   355,    63,   469,    52,
     471,     8,   379,   475,     8,     8,     8,     8,     8,   655,
       8,    73,     8,    26,     8,    49,     8,     8,     8,     8,
      73,    95,    96,    76,    56,    63,    63,    73,    73,    73,
      80,    26,    63,    75,   150,    63,    95,    96,   342,   146,
     150,   150,   397,   150,   294,    94,    95,    96,   173,   150,
      31,    31,    73,   203,    63,    31,     0,   307,   308,   175,
     176,   533,     0,   173,   173,   117,   173,   317,    31,   319,
     146,     8,   173,   544,   150,   173,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   150,   121,
     823,   144,    63,   143,    75,    75,    75,   173,   151,    75,
     402,    80,   147,   177,   157,   150,   150,   173,   146,   146,
     176,    26,    75,   165,   176,   151,   125,    75,   177,   173,
     853,    73,    80,    75,    61,    62,   147,   173,   177,   150,
     172,   696,   491,   492,   493,   173,   178,   190,   176,   176,
     173,   175,   195,   196,    75,   176,   172,   161,   176,   968,
     174,   204,   205,   206,   125,   532,   175,   176,   174,   195,
     196,   214,   175,   635,   217,   144,   145,   174,   204,   205,
     206,   175,   175,   175,   175,   175,   173,   175,   214,   175,
     174,   176,   174,   174,   174,   174,   144,   145,    75,   173,
     549,   243,   664,   665,    51,   243,    63,    75,   670,   671,
     555,   766,    65,   768,   173,   676,    31,    73,    63,    75,
      73,   146,    75,   463,   831,   150,   269,   269,   269,    73,
     172,   269,   100,   181,   176,   722,   178,    73,   478,   166,
     534,   168,    73,   269,    75,   146,   146,   174,   173,   150,
     150,   172,   294,    92,   120,   604,   294,   178,    73,    73,
      75,   114,   305,    92,   613,   307,   308,   728,   125,   307,
     308,   120,   315,   622,    75,   317,    73,   319,    75,   317,
     125,   319,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   147,   172,   339,   150,   146,   114,
     577,   178,   150,   346,   151,   650,   153,   154,   155,   156,
     157,   150,   355,   339,   128,   129,   172,   114,   173,   172,
     176,   150,   178,   366,    73,   178,    94,    95,    96,   355,
      61,    62,   147,   147,    75,   150,   150,    75,   173,   826,
     366,   172,    80,   144,   145,   176,   173,   178,   173,   698,
     147,   700,   173,   150,   397,    61,    62,   172,   820,   995,
     174,   173,    75,   178,   163,   164,   408,    80,   390,   176,
      73,   395,    75,    76,   390,   172,    68,    69,    70,   176,
     176,   178,   674,   101,    68,    69,   680,    73,   106,   734,
      73,   109,   110,   111,   112,   113,   114,   115,   692,   442,
      31,    73,   143,   144,   145,   143,   144,   145,    63,   177,
      68,    69,    73,   146,    75,   764,   442,   173,    47,    48,
      49,   463,    51,   146,   718,   463,   469,    63,   471,   721,
     143,   144,   145,   457,   125,   166,   478,   168,   100,    73,
     478,    75,   150,   469,   175,   471,   150,   792,   491,   492,
     493,   475,   146,   114,   179,   498,   128,   129,   146,   177,
      68,    69,    70,    75,   813,   491,   492,   493,    80,   195,
     196,   514,    94,    95,    96,   147,    75,     8,   150,   150,
     114,    80,   722,    23,    24,   779,   147,   150,   514,   150,
      94,    95,    96,   785,   843,   175,   176,    85,    86,   844,
     146,   544,   146,   173,   125,   174,   549,   175,   551,   533,
      13,   172,   555,   147,    13,   558,   150,   178,   544,   868,
     176,   175,   151,   549,   153,   154,   155,   156,   157,   821,
     822,   174,   144,   145,   577,   577,   577,   177,   172,   577,
      73,   180,   176,    73,   178,   144,   145,   123,   897,    63,
     243,   577,    26,   898,    73,   900,    75,   173,   173,   602,
     603,   604,    84,   912,   175,    73,     8,    75,    92,   863,
     613,   865,   615,    73,    75,    73,   602,   603,   604,   622,
     623,   597,   173,   626,   174,   628,   826,   613,   175,   174,
     606,   936,    73,    63,   943,   114,   622,   177,   947,   893,
     626,   294,   628,    13,   953,   648,   114,   650,   127,   173,
     123,   635,   655,   173,   307,   308,    44,    45,    46,    47,
      48,    49,   646,    51,   969,   173,   173,   173,   147,   923,
     157,   150,    26,   676,   179,   929,   179,   173,    13,   147,
     664,   665,   150,   150,   687,   994,   670,   671,   173,   146,
     676,   177,    73,   172,    13,   698,   173,   700,  1003,   178,
     175,   687,   956,   173,   172,   177,   709,   961,   174,     8,
     178,   150,   698,   151,   700,   153,   154,   155,   156,   157,
     722,   124,  1027,   709,   722,   728,   176,   173,   179,   983,
     174,   734,   174,    73,   126,   738,   179,     8,   101,   143,
      73,    13,   728,   106,   104,   177,   109,   110,   111,   112,
     113,   114,   115,   179,   174,  1009,   174,   760,  1012,   859,
     176,   764,  1016,   151,     8,   153,   154,   155,   156,   157,
       8,   126,   100,   174,   760,   173,   175,    13,   764,   175,
    1034,   109,   110,   111,   112,   113,   114,   173,   175,   792,
       4,     5,     6,   177,     8,     9,    10,    11,    12,    13,
      14,   174,    16,    17,    18,    19,    20,    21,    22,   174,
     813,    25,    26,   174,   177,   109,   110,   111,   112,   113,
     114,   163,   804,    37,   826,   125,   175,   813,   826,   211,
      44,    45,   106,   215,    75,   174,   820,    51,    13,    63,
     843,   844,   174,   174,   174,   339,    63,   229,   174,   231,
     232,   233,   179,   174,   174,   125,    91,   843,   126,   164,
      85,   355,   179,    77,    78,   868,    73,    81,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     176,   173,   868,   176,    13,   175,   175,   175,   164,   176,
     175,    13,    75,   179,   897,   898,    73,   900,    13,    75,
     179,   877,   179,    13,   173,   881,   882,   174,   174,   912,
     175,   897,   126,    73,    13,   177,    61,    62,    75,   177,
     134,    13,   173,    26,    70,    75,   912,   177,    92,   177,
     175,    92,   175,   936,   107,   146,    23,    24,    75,    73,
     943,   175,    89,   174,   947,    13,   173,    92,    75,    70,
     953,     8,   166,   175,   168,    73,    73,   943,   172,    26,
     174,   947,    49,   177,     8,   174,   969,   953,    87,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   176,   175,   959,   104,   177,   177,   173,   176,    75,
     174,   994,   995,   346,  1025,   209,   177,   491,   492,   213,
    1003,   514,   760,   650,   688,   390,   882,   390,   994,   223,
     224,   886,   683,   738,   228,   353,   733,    61,    62,   936,
     786,   166,   998,   168,  1027,    77,    81,   774,   613,   744,
     851,   245,   612,   709,    -1,   628,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   549,   270,   271,   272,   273,
     274,   275,    -1,    -1,   151,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   209,
      -1,   295,    -1,   297,   298,    23,    24,    -1,   175,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,   313,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,   196,
     604,   325,    -1,    -1,   328,    -1,    -1,   204,   205,   206,
      -1,    -1,   166,    -1,   168,    -1,    -1,   214,   622,    -1,
     174,    -1,    -1,    -1,   348,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,   390,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   402,    51,
     404,    -1,    -1,    -1,    -1,   409,    -1,   411,    -1,   413,
     414,   415,    -1,    -1,   698,    -1,   700,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    36,    37,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,   196,    -1,
      -1,    -1,    61,    62,    -1,    -1,   204,   205,   206,    -1,
     764,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,   366,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,   156,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,
      -1,    44,    45,   527,    -1,    -1,    -1,   179,    -1,   813,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,   269,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,   151,    -1,   153,   154,   155,   156,   157,    81,   843,
      -1,    -1,   566,    -1,    -1,   442,    -1,    -1,    -1,   573,
     574,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,   168,
     457,    -1,    -1,    -1,   868,    -1,    -1,    -1,    -1,   593,
      -1,   114,   469,   597,   471,    -1,   600,   601,   475,    -1,
      -1,    -1,   606,    -1,    -1,   128,    -1,   130,   131,   132,
     133,   134,   135,   897,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,   147,   148,   149,   150,   912,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   640,   514,   366,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   533,    -1,    -1,   943,
      -1,    -1,    -1,   947,    -1,    -1,    -1,   544,    -1,   953,
     674,   675,    -1,    -1,    -1,    -1,    -1,    -1,   682,   683,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,   711,    -1,    -1,
     994,    -1,    -1,    -1,   442,    -1,    -1,   721,    31,    32,
      33,    34,    35,    36,    37,   602,   603,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,   743,
      -1,   469,    -1,   471,    -1,    -1,    -1,    -1,    -1,   626,
      -1,   628,    -1,    -1,    -1,    -1,    -1,    -1,   635,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,   646,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   785,    51,    -1,    -1,    -1,   514,   664,   665,    -1,
      -1,    -1,    -1,   670,   671,    -1,    -1,    -1,    -1,   676,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,   157,
     687,    -1,    -1,    -1,    -1,    -1,   544,   821,   822,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   831,    -1,    -1,
      -1,    -1,   709,    -1,    -1,   839,    -1,    -1,   151,    -1,
     153,   154,   155,   156,   157,    -1,    -1,    -1,    -1,   577,
      -1,   728,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   877,   602,   603,    -1,   881,   882,    -1,
      -1,    -1,   151,   760,   153,   154,   155,   156,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   626,    -1,
     628,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   920,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   820,    -1,    -1,    -1,    -1,   676,    -1,
      -1,   955,    -1,    -1,    -1,   959,    -1,    -1,    -1,   687,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,   709,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   998,    -1,    -1,    -1,    -1,    -1,
     728,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,   760,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,   105,   106,    -1,
     108,    -1,    -1,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,   160,    12,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   172,   173,    -1,   175,   176,    -1,
     178,    -1,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    77,    -1,
      -1,    -1,    81,    82,    83,    84,    -1,    86,    -1,    88,
      -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,   102,   103,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,   112,   113,   114,    -1,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,   160,    -1,   162,    12,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,   173,    -1,   175,   176,    26,   178,
      -1,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,    -1,   102,   103,    -1,   105,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,   160,    -1,   162,    12,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   172,   173,    -1,   175,   176,    26,
     178,    -1,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      77,    -1,    -1,    -1,    81,    82,    83,    84,    -1,    86,
      -1,    88,    -1,    90,    -1,    -1,    93,    -1,    -1,    -1,
      97,    98,    99,   100,    -1,   102,   103,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,   160,    -1,   162,    12,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,   173,    -1,   175,   176,
      26,   178,    -1,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    -1,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    90,    -1,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,    -1,   102,   103,    -1,   105,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,   160,    -1,   162,    12,    -1,    -1,
      -1,    -1,    -1,    -1,   170,    -1,   172,   173,    -1,   175,
     176,    26,   178,    -1,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    77,    -1,    -1,    -1,    81,    82,    83,    84,
      -1,    86,    -1,    88,    -1,    90,    -1,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,    -1,   102,   103,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,
      -1,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,   160,    12,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,    -1,
     175,   176,    -1,   178,    -1,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    -1,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    90,    -1,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,    -1,   102,   103,    -1,   105,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,   160,    -1,   162,    12,    -1,    -1,
      -1,    -1,    -1,    -1,   170,    -1,   172,   173,    -1,   175,
     176,    -1,   178,    -1,   180,   181,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
      -1,    -1,    -1,   178,    -1,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,   173,    -1,   175,    -1,
      -1,   178,    -1,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   172,   173,    -1,   175,    -1,    -1,   178,
      -1,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,   173,    -1,   175,    -1,    -1,   178,    -1,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,   147,   148,   149,   150,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
     173,   174,    -1,    -1,    -1,   178,    31,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
      -1,    -1,    -1,   178,    31,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,
      -1,   178,    31,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,   178,
      31,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,   173,    -1,    -1,    -1,    -1,   178,    31,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,   147,   148,   149,   150,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
     173,    -1,    -1,    -1,    -1,   178,    31,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
      -1,    -1,    -1,   178,    -1,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,
      -1,   178,    -1,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,   100,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,   172,   173,    -1,    -1,    -1,    -1,   178,
      -1,   180,   181,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
       9,    10,    11,   151,    -1,   153,   154,   155,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,   151,
      -1,   153,   154,   155,   156,   157,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,   177,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,     9,    10,
      11,    -1,   151,    -1,   153,   154,   155,   156,   157,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,   177,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,     9,    10,    11,    -1,   151,    -1,   153,   154,   155,
     156,   157,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,   177,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,   151,    -1,   153,
     154,   155,   156,   157,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,   177,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,     9,    10,    11,    -1,
     151,    -1,   153,   154,   155,   156,   157,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,   177,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,     9,
      10,    11,    -1,   151,    -1,   153,   154,   155,   156,   157,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,   177,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,   151,    -1,   153,   154,   155,
     156,   157,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,   177,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,     9,    10,    11,    -1,   151,    -1,
     153,   154,   155,   156,   157,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,   177,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,
      -1,   151,    -1,   153,   154,   155,   156,   157,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   175,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    -1,    -1,   151,    -1,   153,   154,   155,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,   151,    -1,   153,   154,
     155,   156,   157,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
     175,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
     151,    -1,   153,   154,   155,   156,   157,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,   175,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,   151,    -1,   153,   154,   155,   156,   157,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   175,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,
     155,   156,   157,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,   174,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,   156,   157,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,   174,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,   151,    -1,   153,   154,   155,   156,   157,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,   174,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,     9,    10,    11,
      -1,   151,    -1,   153,   154,   155,   156,   157,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,
     157,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,   151,    -1,   153,   154,
     155,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,   156,   157,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,   174,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,
     157,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,   174,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,   151,    -1,   153,   154,   155,   156,
     157,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,   156,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,   153,   154,   155,   156,   157,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,   171,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,
     157,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   169,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
     156,   157,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,   151,    -1,   153,   154,   155,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   165,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,   151,    51,   153,   154,   155,   156,
     157,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,   126,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,   153,   154,   155,   156,   157,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   151,   152,   153,   154,   155,
     156,   157,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,   156,   157,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
     126,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,
     156,   157,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
     153,   154,   155,   156,   157,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,   153,   154,   155,   156,   157,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   151,    51,
     153,   154,   155,   156,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,    -1,   153,   154,   155,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,
     153,   154,   155,   156,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,   156,   157
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   183,   184,     0,   185,     3,     4,     5,     6,     7,
      12,    44,    45,    50,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      71,    72,    73,    74,    75,    77,    81,    82,    83,    84,
      86,    88,    90,    93,    97,    98,    99,   100,   101,   102,
     103,   105,   106,   108,   112,   113,   114,   116,   117,   118,
     119,   120,   121,   122,   127,   128,   130,   131,   132,   133,
     134,   135,   142,   147,   148,   149,   150,   160,   162,   170,
     172,   173,   175,   176,   178,   180,   181,   186,   187,   192,
     196,   197,   231,   232,   234,   236,   239,   241,   305,   307,
     321,   324,   333,   344,   347,   351,   352,   354,   355,   365,
     366,   367,   368,   370,   371,   372,   373,   379,   389,   392,
      73,   114,   147,   321,   351,   351,   173,   351,   351,   351,
     351,   351,   351,   351,   318,   351,   351,   351,   351,   351,
     351,   351,   114,   147,   150,   186,   333,   354,   355,   367,
     354,    31,   351,   383,   384,   351,   147,   150,   186,   333,
     335,   336,   367,   371,   372,   379,   173,   341,   173,    26,
     295,   351,   208,   173,   173,   173,   218,   173,   175,   351,
     175,   351,    73,    73,   175,   307,   351,   355,   219,   351,
     150,   186,   190,   191,    75,   172,   178,   269,   270,   120,
     120,    75,   271,   321,   173,   173,   173,   173,   173,   173,
      75,    80,   143,   144,   145,   385,   386,   150,   176,   186,
     186,   295,   351,   206,   176,   305,   351,   193,   176,    80,
     342,   385,    80,   385,   150,   173,     8,   175,    73,    73,
      31,   233,   369,   146,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    51,
     151,   153,   154,   155,   156,   157,   175,    61,    62,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   166,   168,   173,   146,    63,   125,    63,   176,   172,
     178,   372,   233,   351,   351,   150,   186,   146,   146,   353,
     355,   126,   179,     8,   349,   150,   186,   146,   306,   146,
     125,   372,   174,   351,   351,     8,   175,   196,   204,   296,
     297,   351,   307,   355,   173,   351,   175,   175,   175,    13,
     175,   175,   176,   175,   186,    92,     8,   175,   176,   352,
     355,   176,   352,     8,   175,    13,     8,   175,   233,   229,
     230,   355,   355,   390,   355,   174,   308,   383,    63,   125,
     143,   386,    74,   351,   355,    80,   143,   386,   186,   189,
     175,   176,   173,   161,   165,   351,   351,   174,   174,   177,
     194,   351,   180,   181,    73,   325,    73,   123,   240,   238,
      73,   173,    63,    73,   176,   365,   372,   378,   379,   312,
     351,   313,    26,   315,   310,   311,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   335,   351,   351,   351,   351,
     351,   351,    31,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   332,    73,   365,
     378,   351,   374,   356,   374,   351,   174,   186,    73,    31,
     351,    31,   351,   186,   365,   173,   343,   365,   337,   174,
     174,   351,    84,   351,   175,     8,    92,    92,    73,   250,
     174,    44,    45,    63,   128,   130,   142,   147,   150,   186,
     333,   344,   345,   346,   193,    92,    73,   191,   351,   351,
     270,   345,    75,   173,     8,   174,     8,   174,   174,   175,
     127,   355,   380,   381,   174,   387,    73,    63,   177,   177,
     173,   184,   188,   327,   202,   171,   177,   314,   119,   195,
     196,   231,   232,   177,    31,   267,   268,   307,   355,    13,
     147,   150,   186,   334,   237,   123,   242,   235,   319,   374,
     351,   173,   173,   372,   351,   351,   317,   351,   351,   351,
     152,    38,    39,    40,    41,   158,   159,    65,   355,   167,
     169,   267,   173,   173,   179,   365,   375,   377,   378,   179,
     177,   353,   353,   126,   267,   375,    26,   198,   173,   174,
     210,   298,   216,   214,    13,     8,   174,   213,   345,   345,
     345,   348,   350,   173,    80,   150,   186,   146,   177,    73,
     177,   177,    13,   320,   230,   175,   391,   173,     8,   174,
      73,    75,    76,   388,   351,   326,   177,   184,   267,   193,
     207,   303,   304,   173,   353,   174,     8,   345,   150,   186,
     124,   243,   244,   334,   176,   173,   128,   129,   264,   265,
     266,   334,   179,   177,   329,   328,   351,    26,   335,   174,
     331,   330,   376,   357,    63,   176,    31,   351,   174,   338,
     200,   196,   209,   205,   296,   351,   355,    31,   246,   355,
     345,    73,    26,   196,   249,    26,   176,   251,   126,   179,
       8,   349,   348,   186,    73,   104,   345,   264,   355,   382,
     381,    13,   179,   179,   267,   177,   174,   203,    26,   196,
     256,    63,   125,   299,   300,   301,   359,   174,    31,   307,
     355,   186,   244,   176,     8,   272,   264,   174,     8,    31,
      75,   267,   267,   316,   309,   267,   267,   173,   361,   362,
     364,   374,   351,   353,   339,   193,   199,   351,   256,   175,
     126,   245,   355,   245,    13,   193,   175,   252,   175,   252,
     345,   345,   174,   173,   174,   380,   351,   177,   174,   163,
     262,   193,   374,   375,   359,    63,   302,   175,   353,   272,
     334,   101,   106,   109,   110,   111,   112,   113,   114,   115,
     177,   273,   276,   289,   290,   291,   292,   294,   174,   106,
     322,   266,    75,    13,   174,   174,   351,   343,   174,   174,
     363,    63,    63,   358,   179,   177,   125,   340,   201,   257,
     174,   211,   246,   174,   174,   345,    91,   252,    94,    95,
      96,   252,   177,   126,   220,   322,   174,   193,   164,    85,
     179,   360,   374,   299,   177,    73,   277,   334,   274,   321,
     292,     8,   175,   176,   173,   176,    31,    75,    13,   345,
     267,   374,   374,   359,   375,   259,    68,    69,   261,   175,
     296,   217,   215,   175,    94,   175,   351,    26,   175,   255,
     177,   345,   334,   176,   175,   364,   179,    13,     8,   175,
     176,   278,    75,   293,   233,    73,   193,    31,    75,   323,
     193,    75,    13,   345,   174,   179,   179,    68,    69,   263,
     173,   196,   174,    26,   196,   248,   248,   175,   255,   254,
     221,   193,   345,   334,    73,   279,   280,   281,   282,   284,
     285,   286,   334,    13,     8,   175,    73,    13,   177,    75,
       8,   174,   177,    13,   345,   173,    26,    70,   351,   212,
     193,   253,   193,    75,   177,   177,   281,   175,    92,   107,
     175,   146,   345,    75,   275,   345,    31,    75,   345,   351,
     193,   175,   174,    26,   196,   247,    89,   193,   174,   287,
     292,   283,   334,    73,    13,   173,    75,   174,   258,   193,
     175,   222,    73,     8,   345,   264,    26,   196,    87,   176,
     334,   174,   260,   175,   193,   175,   176,   288,   193,   177,
     193,   223,   177,   104,   224,   225,   226,   173,   226,   334,
     227,    75,   174,   228,   176,   193,   177
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 253 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 257 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 257 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 262 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 263 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 267 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 268 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 269 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 270 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 271 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 272 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 273 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 274 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 275 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 276 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 277 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 286 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 287 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 288 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 289 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 293 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 294 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 298 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 298 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 307 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 312 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 313 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 318 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 318 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 318 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 319 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 319 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 319 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 320 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 320 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 320 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 321 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (2)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 321 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 321 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 322 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 322 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 322 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 323 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 323 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 323 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 327 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 329 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 331 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 332 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 333 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 333 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 334 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 335 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 336 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 337 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 338 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 339 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 340 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 345 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 346 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 349 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 350 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 351 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 353 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 354 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 355 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 356 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 356 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 358 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 359 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 360 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 361 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 362 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 363 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 364 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 365 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 370 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 371 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = -1; }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 375 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 376 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 381 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 381 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 381 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 391 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 395 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 399 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 404 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 405 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 410 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 411 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 416 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 420 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) TSRMLS_CC); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 422 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 426 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 431 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 432 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 433 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 434 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 438 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 439 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 443 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 457 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 458 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 462 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 463 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 468 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 469 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 491 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 492 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 497 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 498 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 499 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 500 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 505 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 506 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 506 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 507 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 507 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 526 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 526 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 532 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 532 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 560 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 561 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 562 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 563 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 564 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 565 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 566 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 567 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 572 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 573 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 574 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 575 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 580 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 581 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 586 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 587 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 588 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 589 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 590 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 591 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 595 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 596 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 601 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 602 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 603 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 604 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 605 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 610 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 611 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 612 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 613 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 625 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 628 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 629 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 637 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_implements_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 638 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_implements_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 657 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 658 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 662 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_prepare_trait_precedence(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 666 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 667 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 671 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 672 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 676 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 680 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_prepare_trait_alias(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 681 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_prepare_trait_alias(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 685 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 686 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 690 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 691 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 695 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 696 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 700 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 701 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 705 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 706 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 710 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 711 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 712 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 713 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 714 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 715 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 719 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 720 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 721 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 722 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 726 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 727 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 731 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 732 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 737 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 738 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 742 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 742 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 743 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 747 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 748 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 752 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 753 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 757 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 757 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 758 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 759 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 763 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 764 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 765 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 769 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 769 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 773 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 773 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 774 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 775 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 776 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 777 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 778 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 778 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 779 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 780 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 781 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 782 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 783 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 784 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 785 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 786 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 787 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 788 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 789 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 790 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 791 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 792 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 793 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 794 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 795 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 795 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 796 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 796 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 797 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 797 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 798 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 798 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 799 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 800 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 801 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 802 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 803 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 804 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 805 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 806 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 807 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 808 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 809 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 810 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 811 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 812 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 813 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 814 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 815 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 816 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 817 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 818 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 819 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 820 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 821 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 822 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 823 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 824 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 825 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 826 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 827 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 828 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 829 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 830 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 831 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 832 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 833 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 834 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 835 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 836 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 837 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 837 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 838 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 839 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 840 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 841 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 842 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 843 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 844 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 845 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 846 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 847 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 848 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 849 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 850 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 851 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 852 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 852 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 853 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 854 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 855 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 856 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 857 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 858 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type, 0 TSRMLS_CC); }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 859 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 860 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]).op_type, 1 TSRMLS_CC); }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 861 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(5) - (11)]); }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 865 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 874 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 875 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 876 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 877 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 881 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(2) - (2)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 883 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 884 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 886 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, (yyvsp[(4) - (7)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 887 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(3) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 889 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, (yyvsp[(3) - (6)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 890 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 892 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call((yyvsp[(4) - (7)]).u.op.opline_num?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), (yyvsp[(4) - (7)]).u.op.opline_num, (yyvsp[(4) - (7)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 893 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 895 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 896 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 898 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 899 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 901 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 902 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 904 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 908 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 909 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 910 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 911 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 915 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 916 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 917 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 923 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 924 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 929 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 930 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 931 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 932 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 943 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 947 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 948 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 949 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 953 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 954 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 955 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 960 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 961 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 966 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 967 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 968 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 969 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 970 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 971 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 972 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 973 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 974 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 975 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 976 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 977 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 982 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 983 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 984 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 985 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 986 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 987 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 988 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 989 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 990 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 991 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 995 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 999 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1000 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1001 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1002 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1003 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1004 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1005 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1006 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1007 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1012 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1013 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1022 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1023 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1024 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1025 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1029 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1030 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1035 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1040 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1045 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1050 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1051 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1052 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1053 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1057 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1058 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1063 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1063 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1067 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1068 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1072 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1074 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 1078 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 1079 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 1080 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 1084 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 1085 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 1089 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 1090 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 1095 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 1099 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 1100 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 1101 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 1105 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 1106 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 1107 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 1112 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 1113 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 1114 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 1118 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 1119 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 1120 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 1125 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 1126 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 1127 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 1131 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 1132 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 1137 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 1138 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 1138 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 1142 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 1143 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 1144 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 1148 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 1149 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 1153 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 1154 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 1155 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 1156 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 1166 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 1167 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 1167 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 1168 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 1173 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 1174 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 1178 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 1179 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 1180 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 1181 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 1182 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 1183 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 1184 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 1185 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 1189 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 1190 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 1191 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 1192 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 1198 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 1199 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 1199 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 1200 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 1201 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 1202 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 1203 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 1208 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 1209 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 1210 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 1215 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 1216 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 1217 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 1218 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 1219 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 1220 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 1221 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 1225 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 1226 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 1226 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 1230 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 1231 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;



/* Line 1455 of yacc.c  */
#line 7280 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.c"
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
		      yytoken, &yylval);
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 1234 "/home/do_aki/petipeti/php-src/Zend/zend_language_parser.y"


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

