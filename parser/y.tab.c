
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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "yacc.y"

	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;


/* Line 189 of yacc.c  */
#line 81 "y.tab.c"

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
     int_const = 258,
     char_const = 259,
     float_const = 260,
     id = 261,
     string = 262,
     enumeration_const = 263,
     storage_const = 264,
     type_const = 265,
     qual_const = 266,
     struct_const = 267,
     enum_const = 268,
     DEFINE = 269,
     IF = 270,
     FOR = 271,
     DO = 272,
     WHILE = 273,
     BREAK = 274,
     SWITCH = 275,
     CONTINUE = 276,
     RETURN = 277,
     CASE = 278,
     DEFAULT = 279,
     GOTO = 280,
     SIZEOF = 281,
     PUNC = 282,
     or_const = 283,
     and_const = 284,
     eq_const = 285,
     shift_const = 286,
     rel_const = 287,
     inc_const = 288,
     point_const = 289,
     param_const = 290,
     ELSE = 291,
     HEADER = 292
   };
#endif
/* Tokens.  */
#define int_const 258
#define char_const 259
#define float_const 260
#define id 261
#define string 262
#define enumeration_const 263
#define storage_const 264
#define type_const 265
#define qual_const 266
#define struct_const 267
#define enum_const 268
#define DEFINE 269
#define IF 270
#define FOR 271
#define DO 272
#define WHILE 273
#define BREAK 274
#define SWITCH 275
#define CONTINUE 276
#define RETURN 277
#define CASE 278
#define DEFAULT 279
#define GOTO 280
#define SIZEOF 281
#define PUNC 282
#define or_const 283
#define and_const 284
#define eq_const 285
#define shift_const 286
#define rel_const 287
#define inc_const 288
#define point_const 289
#define param_const 290
#define ELSE 291
#define HEADER 292




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "y.tab.c"

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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1216

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  198
/* YYNRULES -- Number of states.  */
#define YYNSTATES  351

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,     2,     2,    60,    57,     2,
      49,    50,    40,    38,    46,    39,    63,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    43,
      58,    47,    59,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    53,     2,     2,     2,
       2,     2,     2,    44,    55,    45,    61,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    17,    19,    21,
      26,    30,    34,    37,    41,    44,    46,    49,    52,    54,
      57,    59,    62,    64,    66,    68,    70,    72,    74,    76,
      82,    87,    90,    92,    94,    97,    99,   103,   105,   109,
     113,   116,   118,   121,   123,   125,   129,   131,   135,   138,
     144,   149,   152,   154,   158,   160,   164,   167,   169,   171,
     175,   180,   184,   189,   194,   198,   201,   203,   207,   210,
     212,   215,   217,   221,   223,   227,   230,   233,   235,   237,
     241,   243,   247,   252,   254,   258,   261,   263,   265,   268,
     270,   274,   279,   283,   287,   290,   295,   299,   303,   306,
     308,   310,   312,   314,   316,   318,   320,   324,   329,   333,
     336,   338,   343,   347,   351,   354,   356,   359,   365,   373,
     379,   385,   393,   403,   412,   421,   429,   438,   446,   454,
     461,   465,   468,   471,   475,   478,   480,   484,   486,   490,
     492,   494,   496,   502,   504,   506,   510,   512,   516,   518,
     522,   524,   528,   530,   534,   536,   540,   542,   546,   550,
     554,   556,   560,   562,   566,   570,   572,   576,   580,   584,
     586,   591,   593,   596,   599,   602,   607,   609,   611,   613,
     615,   617,   619,   621,   626,   631,   635,   639,   643,   646,
     648,   650,   652,   656,   658,   662,   664,   666,   668
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      65,     0,    -1,    37,    65,    -1,    14,   128,    65,    -1,
      66,    -1,    67,    -1,    66,    67,    -1,    68,    -1,    69,
      -1,    71,    87,    70,   104,    -1,    87,    70,   104,    -1,
      71,    87,   104,    -1,    87,   104,    -1,    71,    78,    43,
      -1,    71,    43,    -1,    69,    -1,    70,    69,    -1,    72,
      71,    -1,    72,    -1,    73,    71,    -1,    73,    -1,    74,
      71,    -1,    74,    -1,     9,    -1,    10,    -1,    75,    -1,
      84,    -1,   100,    -1,    11,    -1,    76,     6,    44,    77,
      45,    -1,    76,    44,    77,    45,    -1,    76,     6,    -1,
      12,    -1,    80,    -1,    77,    80,    -1,    79,    -1,    78,
      46,    79,    -1,    87,    -1,    87,    47,    95,    -1,    81,
      82,    43,    -1,    73,    81,    -1,    73,    -1,    74,    81,
      -1,    74,    -1,    83,    -1,    82,    46,    83,    -1,    87,
      -1,    87,    48,   113,    -1,    48,   113,    -1,    13,     6,
      44,    85,    45,    -1,    13,    44,    85,    45,    -1,    13,
       6,    -1,    86,    -1,    85,    46,    86,    -1,     6,    -1,
       6,    47,   113,    -1,    89,    88,    -1,    88,    -1,     6,
      -1,    49,    87,    50,    -1,    88,    51,   113,    52,    -1,
      88,    51,    52,    -1,    88,    49,    91,    50,    -1,    88,
      49,    94,    50,    -1,    88,    49,    50,    -1,    40,    90,
      -1,    40,    -1,    40,    90,    89,    -1,    40,    89,    -1,
      74,    -1,    90,    74,    -1,    92,    -1,    92,    46,    35,
      -1,    93,    -1,    92,    46,    93,    -1,    71,    87,    -1,
      71,    98,    -1,    71,    -1,     6,    -1,    94,    46,     6,
      -1,   110,    -1,    44,    96,    45,    -1,    44,    96,    46,
      45,    -1,    95,    -1,    96,    46,    95,    -1,    81,    98,
      -1,    81,    -1,    89,    -1,    89,    99,    -1,    99,    -1,
      49,    98,    50,    -1,    99,    51,   113,    52,    -1,    51,
     113,    52,    -1,    99,    51,    52,    -1,    51,    52,    -1,
      99,    49,    91,    50,    -1,    49,    91,    50,    -1,    99,
      49,    50,    -1,    49,    50,    -1,    53,    -1,   102,    -1,
     103,    -1,   104,    -1,   106,    -1,   107,    -1,   108,    -1,
       6,    48,   101,    -1,    23,   113,    48,   101,    -1,    24,
      48,   101,    -1,   109,    43,    -1,    43,    -1,    44,    70,
     105,    45,    -1,    44,   105,    45,    -1,    44,    70,    45,
      -1,    44,    45,    -1,   101,    -1,   105,   101,    -1,    15,
      49,   109,    50,   101,    -1,    15,    49,   109,    50,   101,
      36,   101,    -1,    20,    49,   109,    50,   101,    -1,    18,
      49,   109,    50,   101,    -1,    17,   101,    18,    49,   109,
      50,    43,    -1,    16,    49,   109,    43,   109,    43,   109,
      50,   101,    -1,    16,    49,   109,    43,   109,    43,    50,
     101,    -1,    16,    49,   109,    43,    43,   109,    50,   101,
      -1,    16,    49,   109,    43,    43,    50,   101,    -1,    16,
      49,    43,   109,    43,   109,    50,   101,    -1,    16,    49,
      43,   109,    43,    50,   101,    -1,    16,    49,    43,    43,
     109,    50,   101,    -1,    16,    49,    43,    43,    50,   101,
      -1,    25,     6,    43,    -1,    21,    43,    -1,    19,    43,
      -1,    22,   109,    43,    -1,    22,    43,    -1,   110,    -1,
     109,    46,   110,    -1,   112,    -1,   125,   111,   110,    -1,
      27,    -1,    47,    -1,   114,    -1,   114,    54,   109,    48,
     112,    -1,   112,    -1,   115,    -1,   114,    28,   115,    -1,
     116,    -1,   115,    29,   116,    -1,   117,    -1,   116,    55,
     117,    -1,   118,    -1,   117,    56,   118,    -1,   119,    -1,
     118,    57,   119,    -1,   120,    -1,   119,    30,   120,    -1,
     121,    -1,   120,    58,   121,    -1,   120,    59,   121,    -1,
     120,    32,   121,    -1,   122,    -1,   121,    31,   122,    -1,
     123,    -1,   122,    38,   123,    -1,   122,    39,   123,    -1,
     124,    -1,   123,    40,   124,    -1,   123,    41,   124,    -1,
     123,    60,   124,    -1,   125,    -1,    49,    97,    50,   124,
      -1,   127,    -1,    33,   125,    -1,   126,   124,    -1,    26,
     125,    -1,    26,    49,    97,    50,    -1,    57,    -1,    40,
      -1,    38,    -1,    39,    -1,    61,    -1,    62,    -1,   128,
      -1,   127,    51,   109,    52,    -1,   127,    49,   129,    50,
      -1,   127,    49,    50,    -1,   127,    63,     6,    -1,   127,
      34,     6,    -1,   127,    33,    -1,     6,    -1,   130,    -1,
       7,    -1,    49,   109,    50,    -1,   110,    -1,   129,    46,
     110,    -1,     3,    -1,     4,    -1,     5,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    17,    17,    18,    19,    21,    22,    24,    25,    27,
      28,    29,    30,    32,    33,    35,    36,    38,    39,    40,
      41,    42,    43,    45,    47,    48,    49,    50,    52,    54,
      55,    56,    58,    60,    61,    63,    64,    66,    67,    69,
      71,    72,    73,    74,    76,    77,    79,    80,    81,    83,
      84,    85,    87,    88,    90,    91,    93,    94,    96,    97,
      98,    99,   100,   101,   102,   104,   105,   106,   107,   109,
     110,   112,   113,   115,   116,   118,   119,   120,   122,   123,
     125,   126,   127,   129,   130,   132,   133,   135,   136,   137,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   149,
     151,   152,   153,   154,   155,   156,   158,   159,   160,   162,
     163,   165,   166,   167,   168,   170,   171,   173,   174,   175,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     188,   189,   190,   191,   192,   194,   195,   197,   198,   200,
     201,   203,   204,   206,   208,   209,   211,   212,   214,   215,
     217,   218,   220,   221,   223,   224,   226,   227,   228,   229,
     231,   232,   234,   235,   236,   238,   239,   240,   241,   243,
     244,   246,   247,   248,   249,   250,   252,   252,   252,   252,
     252,   252,   254,   255,   256,   257,   258,   259,   260,   262,
     263,   264,   265,   267,   268,   270,   271,   272,   273
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "int_const", "char_const", "float_const",
  "id", "string", "enumeration_const", "storage_const", "type_const",
  "qual_const", "struct_const", "enum_const", "DEFINE", "IF", "FOR", "DO",
  "WHILE", "BREAK", "SWITCH", "CONTINUE", "RETURN", "CASE", "DEFAULT",
  "GOTO", "SIZEOF", "PUNC", "or_const", "and_const", "eq_const",
  "shift_const", "rel_const", "inc_const", "point_const", "param_const",
  "ELSE", "HEADER", "'+'", "'-'", "'*'", "'/'", "\"then\"", "';'", "'{'",
  "'}'", "','", "'='", "':'", "'('", "')'", "'['", "']'", "'t'", "'?'",
  "'|'", "'^'", "'&'", "'<'", "'>'", "'%'", "'~'", "'!'", "'.'", "$accept",
  "program_unit", "translation_unit", "external_decl",
  "function_definition", "decl", "decl_list", "decl_specs",
  "storage_class_spec", "type_spec", "type_qualifier",
  "struct_or_union_spec", "struct_or_union", "struct_decl_list",
  "init_declarator_list", "init_declarator", "struct_decl",
  "spec_qualifier_list", "struct_declarator_list", "struct_declarator",
  "enum_spec", "enumerator_list", "enumerator", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list", "param_type_list",
  "param_list", "param_decl", "id_list", "initializer", "initializer_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "typedef_name", "stat", "labeled_stat", "exp_stat", "compound_stat",
  "stat_list", "selection_stat", "iteration_stat", "jump_stat", "exp",
  "assignment_exp", "assignment_operator", "conditional_exp", "const_exp",
  "logical_or_exp", "logical_and_exp", "inclusive_or_exp",
  "exclusive_or_exp", "and_exp", "equality_exp", "relational_exp",
  "shift_expression", "additive_exp", "mult_exp", "cast_exp", "unary_exp",
  "unary_operator", "postfix_exp", "primary_exp", "argument_exp_list",
  "consts", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    43,    45,
      42,    47,   293,    59,   123,   125,    44,    61,    58,    40,
      41,    91,    93,   116,    63,   124,    94,    38,    60,    62,
      37,   126,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    66,    66,    67,    67,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    72,    73,    73,    73,    73,    74,    75,
      75,    75,    76,    77,    77,    78,    78,    79,    79,    80,
      81,    81,    81,    81,    82,    82,    83,    83,    83,    84,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    93,    94,    94,
      95,    95,    95,    96,    96,    97,    97,    98,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     101,   101,   101,   101,   101,   101,   102,   102,   102,   103,
     103,   104,   104,   104,   104,   105,   105,   106,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     121,   121,   122,   122,   122,   123,   123,   123,   123,   124,
     124,   125,   125,   125,   125,   125,   126,   126,   126,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   128,
     128,   128,   128,   129,   129,   130,   130,   130,   130
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     2,     1,     1,     4,
       3,     3,     2,     3,     2,     1,     2,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     2,     1,     3,     1,     3,     3,
       2,     1,     2,     1,     1,     3,     1,     3,     2,     5,
       4,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     2,     1,     3,     2,     1,
       2,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     3,     4,     1,     3,     2,     1,     1,     2,     1,
       3,     4,     3,     3,     2,     4,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       1,     4,     3,     3,     2,     1,     2,     5,     7,     5,
       5,     7,     9,     8,     8,     7,     8,     7,     7,     6,
       3,     2,     2,     3,     2,     1,     3,     1,     3,     1,
       1,     1,     5,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     1,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     3,     3,     2,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    58,    23,    24,    28,    32,     0,     0,     0,    66,
       0,    99,     0,     4,     5,     7,     8,     0,    18,    20,
      22,    25,     0,    26,     0,    57,     0,    27,    51,     0,
     195,   196,   197,   189,   191,   198,     0,     0,   190,     2,
      69,    68,    65,     0,     1,     6,    14,     0,    35,    37,
      17,    19,    21,    31,     0,     0,    15,     0,     0,    12,
       0,     0,    56,     0,    54,     0,    52,     0,     0,   178,
     179,   177,     0,   176,   180,   181,     0,   135,   137,   141,
     144,   146,   148,   150,   152,   154,   156,   160,   162,   165,
     169,     0,   171,   182,     3,    70,    67,    59,    13,     0,
       0,     0,    11,     0,    41,    43,     0,    33,     0,   189,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   114,     0,   115,   100,   101,   102,     0,   103,
     104,   105,     0,    16,    10,    37,    78,    64,    77,     0,
      71,    73,     0,    61,   143,     0,   169,     0,     0,    50,
       0,     0,   174,   172,    86,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,   140,     0,   173,   188,     0,
       0,     0,     0,    36,     0,    38,    80,     9,     0,    40,
      42,    30,    34,     0,     0,    44,    46,     0,     0,     0,
       0,     0,   132,     0,   131,   134,     0,     0,     0,     0,
     113,     0,   112,   116,   109,     0,     0,    75,    87,    76,
      89,    62,     0,     0,    63,    60,    49,    55,    53,     0,
       0,    87,    85,     0,   136,   145,     0,   147,   149,   151,
     153,   155,   159,   157,   158,   161,   163,   164,   166,   167,
     168,   138,   187,   185,   193,     0,     0,   186,    83,     0,
      29,    48,    39,     0,     0,   106,     0,     0,     0,     0,
       0,     0,   133,     0,   108,   130,   111,    98,     0,     0,
      94,     0,    88,     0,     0,    72,    74,    79,   175,   170,
       0,     0,   184,   183,    81,     0,    45,    47,     0,     0,
       0,     0,     0,     0,     0,   107,    96,    90,    92,    97,
       0,    93,     0,   142,   194,    82,    84,   117,     0,     0,
       0,     0,     0,     0,   120,   119,    95,    91,     0,   129,
       0,     0,     0,     0,     0,     0,     0,   118,   128,   127,
       0,   125,     0,     0,     0,   121,   126,   124,   123,     0,
     122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    16,    57,    58,    18,    19,
      20,    21,    22,   106,    47,    48,   107,   108,   194,   195,
      23,    65,    66,    24,    25,    26,    42,   278,   140,   141,
     142,   185,   259,   155,   279,   220,    27,   124,   125,   126,
     127,   128,   129,   130,   131,   132,    77,   176,    78,   145,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   255,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -172
static const yytype_int16 yypact[] =
{
     258,  -172,  -172,  -172,  -172,  -172,     9,    69,   258,    22,
      48,  -172,     6,   304,  -172,  -172,  -172,   115,   648,   648,
     648,  -172,    11,  -172,   159,   231,    20,  -172,    12,    60,
    -172,  -172,  -172,  -172,  -172,  -172,  1092,   258,  -172,  -172,
    -172,  -172,    22,    52,  -172,  -172,  -172,    21,  -172,   599,
    -172,  -172,  -172,    34,    31,   316,  -172,   159,   115,  -172,
     820,   677,   231,    60,    78,   -15,  -172,  1139,  1154,  -172,
    -172,  -172,   592,  -172,  -172,  -172,   176,  -172,  -172,    -8,
      81,    75,    83,    92,   148,    53,   154,   121,    97,  -172,
       1,  1092,    93,  -172,  -172,  -172,  -172,  -172,  -172,    48,
     692,   159,  -172,    31,    31,    31,   230,  -172,   134,   157,
     196,   232,   532,   239,   287,   309,   324,   739,  1092,   202,
     362,  -172,  -172,   376,  -172,  -172,  -172,  -172,   436,  -172,
    -172,  -172,   105,  -172,  -172,   323,  -172,  -172,   101,   321,
     326,  -172,   201,  -172,  -172,   322,  -172,   263,  1092,  -172,
      60,   592,  -172,  -172,   126,   325,  1092,  -172,  1092,  1092,
    1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,
    1092,  1092,  1092,  1092,  -172,  -172,  1092,  -172,  -172,   370,
     754,  1092,   384,  -172,   692,  -172,  -172,  -172,   695,  -172,
    -172,  -172,  -172,  1092,   168,  -172,   355,   532,  1092,   802,
     392,  1092,  -172,  1092,  -172,  -172,   170,   363,   532,   369,
    -172,   484,  -172,  -172,  -172,   573,   817,  -172,    19,  -172,
     296,  -172,   395,   407,  -172,  -172,  -172,  -172,  -172,   367,
    1157,   299,  -172,  1092,  -172,    81,   318,    75,    83,    92,
     148,    53,   154,   154,   154,   121,    97,    97,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,   207,    76,  -172,  -172,   306,
    -172,  -172,  -172,   134,  1092,  -172,   210,   877,   192,   373,
     227,   228,  -172,   532,  -172,  -172,  -172,  -172,   368,   374,
    -172,   371,   296,   293,   892,  -172,  -172,  -172,  -172,  -172,
    1092,  1092,  -172,  -172,  -172,   630,  -172,  -172,   532,   952,
     216,   967,  1092,   532,   532,  -172,  -172,  -172,  -172,  -172,
     377,  -172,   379,  -172,  -172,  -172,  -172,   390,   532,   241,
    1014,  1029,   233,   243,  -172,  -172,  -172,  -172,   532,  -172,
     532,   532,   244,   532,   250,  1077,   385,  -172,  -172,  -172,
     532,  -172,   532,   532,   251,  -172,  -172,  -172,  -172,   532,
    -172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,    42,  -172,   419,  -172,   -10,   132,     3,  -172,   -45,
      29,  -172,  -172,   331,  -172,   336,  -101,   -53,  -172,   173,
    -172,   382,   297,    -9,   -16,    -7,  -172,   -56,  -172,   224,
    -172,  -171,  -172,   298,   -18,   -11,  -172,   -94,  -172,  -172,
       8,   327,  -172,  -172,  -172,   -36,   -76,  -172,   -32,  -111,
    -172,   305,   307,   303,   308,   302,   313,    63,   300,   193,
     -79,    28,  -172,  -172,   459,  -172,  -172
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      76,    43,    41,    17,   139,   192,    44,   207,    49,   104,
      62,    17,   177,   258,    56,    28,    17,    53,   200,   154,
     158,    50,    51,    52,   186,     1,     1,   104,   174,   144,
     149,   150,    59,     4,   213,    96,    76,   227,    40,    56,
      17,     3,     4,     5,     6,    56,   159,   133,   175,   135,
      39,   189,   190,    29,     1,    54,    63,   102,   104,   104,
     104,   104,     9,   138,    98,   134,    64,    99,   215,    10,
     216,    95,    30,    31,    32,    33,    34,    35,   103,    94,
     234,   206,   261,   105,    11,   165,   144,   192,     9,   146,
     135,   133,   248,   249,   250,   152,   153,    10,   154,   196,
     251,   105,    97,   265,   254,   281,   104,     1,   186,   187,
     160,   166,   167,   133,   274,    76,   144,   213,    36,   146,
     219,     1,   156,   236,   316,   148,   178,   179,   293,   217,
     161,   218,   105,   105,   105,   105,   232,   171,   172,   162,
       1,     9,   180,   104,   181,   256,   146,   231,   214,   163,
     215,   156,   216,   297,   289,     9,   182,   173,    46,   169,
     170,   144,   266,   268,    10,   270,     9,   271,     2,     3,
       4,     5,     6,   312,     9,   230,   146,   216,   164,   305,
     105,   101,   193,    10,   144,   168,   146,   123,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,    62,    55,   317,   197,    43,   282,   218,   324,
     325,   262,    11,   272,   263,   314,   156,   105,   138,   186,
     282,   146,   156,   231,   329,   138,   157,   310,   242,   243,
     244,   300,   144,   138,   337,   301,   338,   339,   156,   341,
       3,     4,     5,     6,   146,   198,   346,   223,   347,   348,
     208,   224,   144,   291,   196,   350,   156,   292,   313,   320,
     298,   146,   156,   319,     1,   322,   323,     2,     3,     4,
       5,     6,     7,   156,   156,   191,   335,   303,   304,   156,
      60,   199,    61,    11,   332,   334,   138,   156,   201,   156,
     156,   330,   146,   336,   340,     8,   156,   156,     9,   344,
     342,   349,     2,     3,     4,     5,     6,    10,   226,   150,
       1,    11,   146,     2,     3,     4,     5,     6,   146,    30,
      31,    32,   109,    34,    35,     2,     3,     4,     5,     6,
     202,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    67,   309,     9,   283,    11,   284,   230,    68,
     216,   294,   295,    10,    69,    70,    71,    11,   203,   121,
      55,   122,   246,   247,   156,    72,   290,   204,   209,    11,
     100,   221,   222,    73,   225,   233,   252,    74,    75,    30,
      31,    32,   109,    34,    35,     2,     3,     4,     5,     6,
     257,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    67,   264,     2,     3,     4,     5,     6,    68,
     269,   273,   275,   287,    69,    70,    71,   288,   306,   121,
      55,   210,   302,   308,   307,    72,   328,   326,   345,    11,
     285,   327,    45,    73,   188,   183,   296,    74,    75,    30,
      31,    32,   109,    34,    35,   147,   286,   228,    11,   229,
     211,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    67,   235,   238,   240,    37,   237,   245,    68,
     239,     0,     0,     0,    69,    70,    71,   241,     0,   121,
      55,   212,     0,     0,     0,    72,     0,    30,    31,    32,
     109,    34,    35,    73,     0,     0,     0,    74,    75,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
      67,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     0,    69,    70,    71,     0,     0,   121,    55,   276,
       0,     0,     0,    72,     0,    30,    31,    32,   109,    34,
      35,    73,     0,     0,     0,    74,    75,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    67,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
      69,    70,    71,     0,     0,   121,    55,     0,     0,     1,
       0,    72,     2,     3,     4,     5,     6,     0,     0,    73,
       0,     0,     0,    74,    75,    30,    31,    32,    33,    34,
      35,     0,     3,     4,     5,     6,     0,     0,     2,     3,
       4,     5,     6,     9,     0,     0,     0,     0,    67,     0,
       0,     0,   215,   277,   216,    68,    11,     0,     0,     0,
      69,    70,    71,    30,    31,    32,    33,    34,    35,     0,
       0,    72,     0,    55,     0,    11,   100,     0,     0,    73,
       0,     0,    11,    74,    75,     0,    67,     2,     3,     4,
       5,     6,     0,    68,     0,     0,     0,     0,    69,    70,
      71,     0,     0,     0,   184,   315,     0,     0,     0,    72,
      30,    31,    32,    33,    34,    35,     0,    73,     0,     0,
       0,    74,    75,     0,     0,    30,    31,    32,    33,    34,
      35,    11,     0,    67,     0,     3,     4,     5,     6,     0,
      68,     0,     0,     0,     0,    69,    70,    71,    67,     0,
       0,     0,     0,     0,     0,    68,    72,     0,     0,   143,
      69,    70,    71,     0,    73,     0,   184,     0,    74,    75,
     260,    72,    30,    31,    32,    33,    34,    35,    11,    73,
       0,     0,     0,    74,    75,     0,     0,    30,    31,    32,
      33,    34,    35,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,     0,    69,    70,    71,
      67,     0,   205,     0,     0,     0,     0,    68,    72,     0,
       0,     0,    69,    70,    71,     0,    73,     0,     0,     0,
      74,    75,     0,    72,   253,    30,    31,    32,    33,    34,
      35,    73,     0,     0,     0,    74,    75,     0,     0,     0,
      30,    31,    32,    33,    34,    35,   136,     0,    67,     2,
       3,     4,     5,     6,     0,    68,     0,     0,     0,     0,
      69,    70,    71,    67,     0,   267,     0,     0,     0,     0,
      68,    72,     0,     0,     0,    69,    70,    71,     0,    73,
       0,     0,     0,    74,    75,     0,    72,     0,     0,   280,
     137,     0,     0,    11,    73,     0,     0,     0,    74,    75,
      30,    31,    32,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,    33,    34,
      35,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,    70,    71,    67,     0,
     299,     0,     0,     0,     0,    68,    72,     0,     0,     0,
      69,    70,    71,     0,    73,     0,     0,     0,    74,    75,
       0,    72,     0,     0,   311,     0,     0,     0,     0,    73,
       0,     0,     0,    74,    75,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,    34,    35,     0,     0,    67,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
      69,    70,    71,    67,     0,     0,     0,     0,     0,     0,
      68,    72,   318,     0,     0,    69,    70,    71,     0,    73,
     321,     0,     0,    74,    75,     0,    72,    30,    31,    32,
      33,    34,    35,     0,    73,     0,     0,     0,    74,    75,
       0,     0,    30,    31,    32,    33,    34,    35,     0,     0,
      67,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     0,    69,    70,    71,    67,     0,     0,     0,     0,
       0,     0,    68,    72,   331,     0,     0,    69,    70,    71,
       0,    73,     0,     0,     0,    74,    75,     0,    72,   333,
      30,    31,    32,    33,    34,    35,    73,     0,     0,     0,
      74,    75,     0,     0,     0,    30,    31,    32,    33,    34,
      35,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,    70,    71,    67,     0,
       0,     0,     0,     0,     0,    68,    72,   343,     0,     0,
      69,    70,    71,     0,    73,     0,     0,     0,    74,    75,
       0,    72,    30,    31,    32,    33,    34,    35,     0,    73,
       0,     0,     0,    74,    75,     0,     0,    30,    31,    32,
      33,    34,    35,     0,     0,    67,     2,     3,     4,     5,
       6,     0,    68,     0,     0,     0,     0,    69,    70,    71,
      67,     0,     0,     0,     0,     0,     0,    68,   151,     0,
       0,     0,    69,    70,    71,     0,    73,     9,     0,     0,
      74,    75,     0,    36,     0,     0,   230,   277,   216,     0,
      11,    73,     0,     0,     0,    74,    75
};

static const yytype_int16 yycheck[] =
{
      36,    10,     9,     0,    60,   106,     0,   118,    17,    54,
      26,     8,    91,   184,    24,     6,    13,     6,   112,    72,
      28,    18,    19,    20,   100,     6,     6,    72,    27,    61,
      45,    46,    24,    11,   128,    42,    72,   148,     9,    49,
      37,    10,    11,    12,    13,    55,    54,    57,    47,    58,
       8,   104,   105,    44,     6,    44,    44,    49,   103,   104,
     105,   106,    40,    60,    43,    57,     6,    46,    49,    49,
      51,    42,     3,     4,     5,     6,     7,     8,    44,    37,
     156,   117,   193,    54,    53,    32,   118,   188,    40,    61,
      99,   101,   171,   172,   173,    67,    68,    49,   151,   108,
     176,    72,    50,   197,   180,   216,   151,     6,   184,   101,
      29,    58,    59,   123,   208,   151,   148,   211,    49,    91,
     138,     6,    46,   159,   295,    47,    33,    34,    52,   138,
      55,   138,   103,   104,   105,   106,   154,    40,    41,    56,
       6,    40,    49,   188,    51,   181,   118,   154,    43,    57,
      49,    46,    51,   264,   233,    40,    63,    60,    43,    38,
      39,   193,   198,   199,    49,   201,    40,   203,     9,    10,
      11,    12,    13,   284,    40,    49,   148,    51,    30,   273,
     151,    49,    48,    49,   216,    31,   158,    55,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   218,    44,   298,    48,   215,   218,   215,   303,
     304,    43,    53,    43,    46,   291,    46,   188,   215,   295,
     231,   193,    46,   230,   318,   222,    50,   283,   165,   166,
     167,   267,   264,   230,   328,    43,   330,   331,    46,   333,
      10,    11,    12,    13,   216,    49,   340,    46,   342,   343,
      48,    50,   284,    46,   263,   349,    46,    50,   290,    43,
      50,   233,    46,   299,     6,   301,   302,     9,    10,    11,
      12,    13,    14,    46,    46,    45,    43,    50,    50,    46,
      49,    49,    51,    53,   320,   321,   283,    46,    49,    46,
      46,    50,   264,    50,    50,    37,    46,    46,    40,   335,
      50,    50,     9,    10,    11,    12,    13,    49,    45,    46,
       6,    53,   284,     9,    10,    11,    12,    13,   290,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      43,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    50,    40,    49,    53,    51,    49,    33,
      51,    45,    46,    49,    38,    39,    40,    53,    49,    43,
      44,    45,   169,   170,    46,    49,    48,    43,     6,    53,
      47,    50,    46,    57,    52,    50,     6,    61,    62,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       6,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    48,     9,    10,    11,    12,    13,    33,
      18,    48,    43,     6,    38,    39,    40,    50,    50,    43,
      44,    45,    49,    52,    50,    49,    36,    50,    43,    53,
      35,    52,    13,    57,   103,    99,   263,    61,    62,     3,
       4,     5,     6,     7,     8,    63,   222,   150,    53,   151,
     123,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   158,   161,   163,     7,   160,   168,    33,
     162,    -1,    -1,    -1,    38,    39,    40,   164,    -1,    43,
      44,    45,    -1,    -1,    -1,    49,    -1,     3,     4,     5,
       6,     7,     8,    57,    -1,    -1,    -1,    61,    62,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    43,    44,    45,
      -1,    -1,    -1,    49,    -1,     3,     4,     5,     6,     7,
       8,    57,    -1,    -1,    -1,    61,    62,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    43,    44,    -1,    -1,     6,
      -1,    49,     9,    10,    11,    12,    13,    -1,    -1,    57,
      -1,    -1,    -1,    61,    62,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    -1,    -1,     9,    10,
      11,    12,    13,    40,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    49,    50,    51,    33,    53,    -1,    -1,    -1,
      38,    39,    40,     3,     4,     5,     6,     7,     8,    -1,
      -1,    49,    -1,    44,    -1,    53,    47,    -1,    -1,    57,
      -1,    -1,    53,    61,    62,    -1,    26,     9,    10,    11,
      12,    13,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
       3,     4,     5,     6,     7,     8,    -1,    57,    -1,    -1,
      -1,    61,    62,    -1,    -1,     3,     4,     5,     6,     7,
       8,    53,    -1,    26,    -1,    10,    11,    12,    13,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    40,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    49,    -1,    -1,    52,
      38,    39,    40,    -1,    57,    -1,    44,    -1,    61,    62,
      45,    49,     3,     4,     5,     6,     7,     8,    53,    57,
      -1,    -1,    -1,    61,    62,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    40,
      26,    -1,    43,    -1,    -1,    -1,    -1,    33,    49,    -1,
      -1,    -1,    38,    39,    40,    -1,    57,    -1,    -1,    -1,
      61,    62,    -1,    49,    50,     3,     4,     5,     6,     7,
       8,    57,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     6,    -1,    26,     9,
      10,    11,    12,    13,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    40,    26,    -1,    43,    -1,    -1,    -1,    -1,
      33,    49,    -1,    -1,    -1,    38,    39,    40,    -1,    57,
      -1,    -1,    -1,    61,    62,    -1,    49,    -1,    -1,    52,
      50,    -1,    -1,    53,    57,    -1,    -1,    -1,    61,    62,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    40,    26,    -1,
      43,    -1,    -1,    -1,    -1,    33,    49,    -1,    -1,    -1,
      38,    39,    40,    -1,    57,    -1,    -1,    -1,    61,    62,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    61,    62,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    40,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    49,    50,    -1,    -1,    38,    39,    40,    -1,    57,
      43,    -1,    -1,    61,    62,    -1,    49,     3,     4,     5,
       6,     7,     8,    -1,    57,    -1,    -1,    -1,    61,    62,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    40,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    49,    50,    -1,    -1,    38,    39,    40,
      -1,    57,    -1,    -1,    -1,    61,    62,    -1,    49,    50,
       3,     4,     5,     6,     7,     8,    57,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    40,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    49,    50,    -1,    -1,
      38,    39,    40,    -1,    57,    -1,    -1,    -1,    61,    62,
      -1,    49,     3,     4,     5,     6,     7,     8,    -1,    57,
      -1,    -1,    -1,    61,    62,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    26,     9,    10,    11,    12,
      13,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    40,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    49,    -1,
      -1,    -1,    38,    39,    40,    -1,    57,    40,    -1,    -1,
      61,    62,    -1,    49,    -1,    -1,    49,    50,    51,    -1,
      53,    57,    -1,    -1,    -1,    61,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     9,    10,    11,    12,    13,    14,    37,    40,
      49,    53,    65,    66,    67,    68,    69,    71,    72,    73,
      74,    75,    76,    84,    87,    88,    89,   100,     6,    44,
       3,     4,     5,     6,     7,     8,    49,   128,   130,    65,
      74,    89,    90,    87,     0,    67,    43,    78,    79,    87,
      71,    71,    71,     6,    44,    44,    69,    70,    71,   104,
      49,    51,    88,    44,     6,    85,    86,    26,    33,    38,
      39,    40,    49,    57,    61,    62,   109,   110,   112,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    65,    74,    89,    50,    43,    46,
      47,    70,   104,    44,    73,    74,    77,    80,    81,     6,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    43,    45,    70,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    69,   104,    87,     6,    50,    71,    91,
      92,    93,    94,    52,   112,   113,   125,    85,    47,    45,
      46,    49,   125,   125,    81,    97,    46,    50,    28,    54,
      29,    55,    56,    57,    30,    32,    58,    59,    31,    38,
      39,    40,    41,    60,    27,    47,   111,   124,    33,    34,
      49,    51,    63,    79,    44,    95,   110,   104,    77,    81,
      81,    45,    80,    48,    82,    83,    87,    48,    49,    49,
     101,    49,    43,    49,    43,    43,   109,   113,    48,     6,
      45,   105,    45,   101,    43,    49,    51,    87,    89,    98,
      99,    50,    46,    46,    50,    52,    45,   113,    86,    97,
      49,    89,    98,    50,   110,   115,   109,   116,   117,   118,
     119,   120,   121,   121,   121,   122,   123,   123,   124,   124,
     124,   110,     6,    50,   110,   129,   109,     6,    95,    96,
      45,   113,    43,    46,    48,   101,   109,    43,   109,    18,
     109,   109,    43,    48,   101,    43,    45,    50,    91,    98,
      52,   113,    99,    49,    51,    35,    93,     6,    50,   124,
      48,    46,    50,    52,    45,    46,    83,   113,    50,    43,
     109,    43,    49,    50,    50,   101,    50,    50,    52,    50,
      91,    52,   113,   112,   110,    45,    95,   101,    50,   109,
      43,    43,   109,   109,   101,   101,    50,    52,    36,   101,
      50,    50,   109,    50,   109,    43,    50,   101,   101,   101,
      50,   101,    50,    50,   109,    43,   101,   101,   101,    50,
     101
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
      

/* Line 1455 of yacc.c  */
#line 1910 "y.tab.c"
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
#line 275 "yacc.y"


int main()
{
    yyparse();
    if(success)
    	printf("Parsing Successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}
