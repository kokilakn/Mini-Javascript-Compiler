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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_VAR = 258,
     T_DEF = 259,
     T_KEY = 260,
     T_ID = 261,
     T_NUM = 262,
     T_LBR = 263,
     T_RBR = 264,
     T_STR = 265,
     T_SHA = 266,
     T_LCG = 267,
     T_LOP = 268,
     T_OP1 = 269,
     T_OP2 = 270,
     T_OP3 = 271,
     T_OP4 = 272,
     T_FOR = 273,
     T_IF = 274,
     T_ELSE = 275,
     T_IN = 276,
     T_LET = 277
   };
#endif
/* Tokens.  */
#define T_VAR 258
#define T_DEF 259
#define T_KEY 260
#define T_ID 261
#define T_NUM 262
#define T_LBR 263
#define T_RBR 264
#define T_STR 265
#define T_SHA 266
#define T_LCG 267
#define T_LOP 268
#define T_OP1 269
#define T_OP2 270
#define T_OP3 271
#define T_OP4 272
#define T_FOR 273
#define T_IF 274
#define T_ELSE 275
#define T_IN 276
#define T_LET 277




/* Copy the first part of user declarations.  */


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
typedef union YYSTYPE
#line 1 "par.y"
{
struct {char *code,*ast;int next;} stt;
struct {char *code,*ast;int idn;} eq;
struct {int dt[4];} dt;
struct {int idn,off;char *code,*ast;} ls;
}
/* Line 193 of yacc.c.  */
#line 148 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 161 "y.tab.c"

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   82

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  87

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      24,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,    31,     2,     2,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
       2,    27,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    29,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    25,     2,    26,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    12,    14,    16,
      18,    20,    23,    24,    27,    30,    32,    34,    35,    36,
      43,    45,    47,    49,    51,    53,    57,    59,    63,    65,
      69,    71,    73,    76,    79,    81,    83,    87,    92,    96,
      98,    99,   102,   105,   107,   111,   115,   121,   122,   134,
     135
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      34,     0,    -1,    39,    -1,    -1,    13,    -1,    14,    -1,
      12,    -1,    15,    -1,    16,    -1,    23,    -1,    24,    -1,
      40,    39,    -1,    -1,    51,    38,    -1,    46,    38,    -1,
      53,    -1,    55,    -1,    -1,    -1,    25,    41,    39,    26,
      42,    38,    -1,    38,    -1,     6,    -1,     6,    -1,    27,
      -1,    11,    -1,    43,    45,    46,    -1,    47,    -1,    48,
      36,    47,    -1,    48,    -1,    49,    37,    48,    -1,    49,
      -1,    44,    -1,    17,    44,    -1,    44,    17,    -1,    10,
      -1,     7,    -1,    28,    50,    29,    -1,    44,    28,    46,
      29,    -1,    50,    32,    46,    -1,    46,    -1,    -1,     3,
      52,    -1,    22,    52,    -1,    43,    -1,    43,    32,    52,
      -1,    43,    27,    46,    -1,    43,    27,    46,    32,    52,
      -1,    -1,    18,    35,    54,    30,    46,    23,    46,    23,
      46,    31,    40,    -1,    -1,    19,    30,    46,    31,    35,
      56,    40,    20,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    14,    14,    20,    22,    22,    22,    24,    24,    26,
      26,    28,    29,    31,    32,    33,    34,    35,    35,    35,
      37,    39,    41,    43,    43,    45,    49,    51,    56,    58,
      63,    65,    68,    68,    69,    72,    75,    76,    80,    81,
      81,    83,    83,    85,    85,    85,    85,    89,    89,   104,
     103
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_VAR", "T_DEF", "T_KEY", "T_ID",
  "T_NUM", "T_LBR", "T_RBR", "T_STR", "T_SHA", "T_LCG", "T_LOP", "T_OP1",
  "T_OP2", "T_OP3", "T_OP4", "T_FOR", "T_IF", "T_ELSE", "T_IN", "T_LET",
  "';'", "'\\n'", "'{'", "'}'", "'='", "'['", "']'", "'('", "')'", "','",
  "$accept", "start", "edt", "anyopl", "anyoph", "adlm", "seq",
  "statement", "@1", "@2", "lhs", "lhsv", "eqb", "expr", "rhsl", "rhsh",
  "unit", "list", "defn", "vtail", "for", "@3", "if", "@4", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    59,    10,   123,   125,    61,    91,    93,
      40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    35,    36,    36,    36,    37,    37,    38,
      38,    39,    39,    40,    40,    40,    40,    41,    42,    40,
      40,    43,    44,    45,    45,    46,    46,    47,    47,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    50,    50,
      50,    51,    51,    52,    52,    52,    52,    54,    53,    56,
      55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     2,     2,     1,     1,     0,     0,     6,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     2,     1,     1,     3,     4,     3,     1,
       0,     2,     2,     1,     3,     3,     5,     0,    11,     0,
       9
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,     0,    22,    35,    34,     0,     3,     0,     0,     9,
      10,    17,    40,     0,    20,     2,    12,     0,    31,     0,
      26,    28,    30,     0,    15,    16,    21,    43,    41,    22,
      32,    47,     0,    42,    12,    39,     0,     1,    11,    24,
      23,     0,    33,     0,    14,     6,     4,     5,     0,     7,
       8,     0,    13,     0,     0,     0,     0,     0,    36,     0,
      25,     0,    27,    29,    45,    44,     0,     3,    18,    38,
      37,     0,     0,    49,     0,    46,     0,     0,    19,     0,
       0,     0,     0,     0,    50,     0,    48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    13,    31,    48,    51,    14,    15,    16,    34,    74,
      17,    18,    41,    19,    20,    21,    22,    36,    23,    28,
      24,    55,    25,    77
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -32
static const yytype_int8 yypact[] =
{
      17,    -3,    -2,   -32,   -32,    12,   -32,   -25,    -3,   -32,
     -32,   -32,     4,    38,   -32,   -32,    17,     2,   -11,    44,
     -32,    49,    57,    44,   -32,   -32,   -32,    23,   -32,   -32,
     -32,   -32,     4,   -32,    17,   -32,    28,   -32,   -32,   -32,
     -32,     4,   -32,     4,   -32,   -32,   -32,   -32,     9,   -32,
     -32,     9,   -32,     4,    -3,    14,    21,    22,   -32,     4,
     -32,    29,   -32,   -32,    33,   -32,     4,   -32,   -32,   -32,
     -32,    -3,     5,   -32,    44,   -32,     4,    17,   -32,    46,
      54,     4,    17,    45,   -32,    17,   -32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,     8,   -32,   -32,   -15,    -4,   -31,   -32,   -32,
      -1,    72,   -32,   -10,    30,    31,   -32,   -32,   -32,    -7,
     -32,   -32,   -32,   -32
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -22
static const yytype_int8 yytable[] =
{
      27,    33,    35,    26,    44,    32,    42,    27,    52,   -21,
       2,     3,    38,    39,     4,    29,     3,    43,    29,     4,
       1,     5,    56,     2,     3,   -21,     5,     4,    76,    40,
      57,    60,    12,    61,     5,     6,     7,    12,    37,     8,
       9,    10,    11,    64,    66,    12,    80,    65,    68,    69,
      53,    84,    67,    27,    86,    54,    72,    58,    70,    78,
      59,    45,    46,    47,    75,    71,    79,     9,    10,    81,
      27,    83,    49,    50,    82,    73,    85,    30,    62,     0,
       0,     0,    63
};

static const yytype_int8 yycheck[] =
{
       1,     8,    12,     6,    19,    30,    17,     8,    23,    11,
       6,     7,    16,    11,    10,     6,     7,    28,     6,    10,
       3,    17,    32,     6,     7,    27,    17,    10,    23,    27,
      34,    41,    28,    43,    17,    18,    19,    28,     0,    22,
      23,    24,    25,    53,    30,    28,    77,    54,    26,    59,
      27,    82,    31,    54,    85,    32,    66,    29,    29,    74,
      32,    12,    13,    14,    71,    32,    76,    23,    24,    23,
      71,    81,    15,    16,    20,    67,    31,     5,    48,    -1,
      -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    10,    17,    18,    19,    22,    23,
      24,    25,    28,    34,    38,    39,    40,    43,    44,    46,
      47,    48,    49,    51,    53,    55,     6,    43,    52,     6,
      44,    35,    30,    52,    41,    46,    50,     0,    39,    11,
      27,    45,    17,    28,    38,    12,    13,    14,    36,    15,
      16,    37,    38,    27,    32,    54,    46,    39,    29,    32,
      46,    46,    47,    48,    46,    52,    30,    31,    26,    46,
      29,    32,    46,    35,    42,    52,    23,    56,    38,    46,
      40,    23,    20,    46,    40,    31,    40
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
#line 14 "par.y"
    {FILE *f;f=fopen("icg.txt","w");
	printf("\n\nast generated:\n\n%s\n\ncode generated:\n\n%s",(yyvsp[(1) - (1)].stt).ast,(yyvsp[(1) - (1)].stt).code);
	fprintf(f,"%s",(yyvsp[(1) - (1)].stt).code);
	fclose(f);}
    break;

  case 4:
#line 22 "par.y"
    {(yyval.eq).code=strdup(ysign);}
    break;

  case 5:
#line 22 "par.y"
    {(yyval.eq).code=strdup(ysign);}
    break;

  case 6:
#line 22 "par.y"
    {(yyval.eq).code=strdup(ysign);}
    break;

  case 7:
#line 24 "par.y"
    {(yyval.eq).code=strdup(ysign);}
    break;

  case 8:
#line 24 "par.y"
    {(yyval.eq).code=strdup(ysign);}
    break;

  case 11:
#line 28 "par.y"
    {(yyval.stt).code=ap((yyvsp[(1) - (2)].stt).code,(yyvsp[(2) - (2)].stt).code);(yyval.stt).ast=ap3((yyvsp[(1) - (2)].stt).ast,strdup("\n"),(yyvsp[(2) - (2)].stt).ast);}
    break;

  case 12:
#line 29 "par.y"
    {(yyval.stt).code=strdup("");(yyval.stt).ast=strdup("");}
    break;

  case 13:
#line 31 "par.y"
    {(yyval.stt).code=(yyvsp[(1) - (2)].eq).code;(yyval.stt).ast=(yyvsp[(1) - (2)].eq).ast;}
    break;

  case 14:
#line 32 "par.y"
    {(yyval.stt).code=(yyvsp[(1) - (2)].eq).code;(yyval.stt).ast=(yyvsp[(1) - (2)].eq).ast;}
    break;

  case 15:
#line 33 "par.y"
    {(yyval.stt).code=(yyvsp[(1) - (1)].stt).code;(yyval.stt).ast=(yyvsp[(1) - (1)].stt).ast;}
    break;

  case 16:
#line 34 "par.y"
    {(yyval.stt).code=(yyvsp[(1) - (1)].stt).code;(yyval.stt).ast=(yyvsp[(1) - (1)].stt).ast;}
    break;

  case 17:
#line 35 "par.y"
    {scs[stop++]=sid++;}
    break;

  case 18:
#line 35 "par.y"
    {stop--;}
    break;

  case 19:
#line 36 "par.y"
    {(yyval.stt).code=(yyvsp[(3) - (6)].stt).code;(yyval.stt).ast=ap3(strdup("{"),(yyvsp[(3) - (6)].stt).ast,strdup("} "));}
    break;

  case 20:
#line 37 "par.y"
    {(yyval.stt).code=strdup("");(yyval.stt).ast=strdup("");}
    break;

  case 21:
#line 39 "par.y"
    {int v=mkentr(0,ygbl,scs[stop-1]);(yyval.dt).dt[0]=v;}
    break;

  case 22:
#line 41 "par.y"
    {int v=chkentr(ygbl);if(v==-1){printf("variable not found\n");exit(0);}(yyval.dt).dt[0]=v;}
    break;

  case 25:
#line 46 "par.y"
    {char *a;sprintf(bbuf,"mov %s t%d\n",a=getname((yyvsp[(1) - (3)].dt).dt[0]),(yyvsp[(3) - (3)].eq).idn);
	(yyval.eq).code=ap((yyvsp[(3) - (3)].eq).code,strdup(bbuf));(yyval.eq).idn=(yyvsp[(3) - (3)].eq).idn;
	sprintf(bbuf,"%s = (",a);(yyval.eq).ast=ap3(strdup(bbuf),(yyvsp[(3) - (3)].eq).ast,strdup(")"));}
    break;

  case 26:
#line 49 "par.y"
    {(yyval.eq).code=(yyvsp[(1) - (1)].eq).code;(yyval.eq).idn=(yyvsp[(1) - (1)].eq).idn;(yyval.eq).ast=(yyvsp[(1) - (1)].eq).ast;}
    break;

  case 27:
#line 52 "par.y"
    {int k=tmp++;
	sprintf(bbuf,"t%d = t%d %s t%d\n",k,(yyvsp[(1) - (3)].eq).idn,(yyvsp[(2) - (3)].eq).code,(yyvsp[(3) - (3)].eq).idn);
	(yyval.eq).code=ap3((yyvsp[(1) - (3)].eq).code,(yyvsp[(3) - (3)].eq).code,strdup(bbuf));(yyval.eq).idn=k;
	(yyval.eq).ast=ap3(ap3(strdup(" ("),(yyvsp[(1) - (3)].eq).ast,strdup(") ")),(yyvsp[(2) - (3)].eq).code,ap3(strdup(" ("),(yyvsp[(3) - (3)].eq).ast,strdup(") ")));free((yyvsp[(2) - (3)].eq).code);}
    break;

  case 28:
#line 56 "par.y"
    {(yyval.eq).code=(yyvsp[(1) - (1)].eq).code;(yyval.eq).idn=(yyvsp[(1) - (1)].eq).idn;(yyval.eq).ast=(yyvsp[(1) - (1)].eq).ast;}
    break;

  case 29:
#line 59 "par.y"
    {int k=tmp++;
	sprintf(bbuf,"t%d = t%d %s t%d\n",k,(yyvsp[(1) - (3)].eq).idn,(yyvsp[(2) - (3)].eq).code,(yyvsp[(3) - (3)].eq).idn);
	(yyval.eq).code=ap3((yyvsp[(1) - (3)].eq).code,(yyvsp[(3) - (3)].eq).code,strdup(bbuf));(yyval.eq).idn=k;
	(yyval.eq).ast=ap3(ap3(strdup(" ("),(yyvsp[(1) - (3)].eq).ast,strdup(") ")),(yyvsp[(2) - (3)].eq).code,ap3(strdup(" ("),(yyvsp[(3) - (3)].eq).ast,strdup(") ")));free((yyvsp[(2) - (3)].eq).code);}
    break;

  case 30:
#line 63 "par.y"
    {(yyval.eq).code=(yyvsp[(1) - (1)].eq).code;(yyval.eq).idn=(yyvsp[(1) - (1)].eq).idn;(yyval.eq).ast=(yyvsp[(1) - (1)].eq).ast;}
    break;

  case 31:
#line 65 "par.y"
    {char *a;int k=tmp++;
	sprintf(bbuf,"mov t%d %s\n",k,a=getname((yyvsp[(1) - (1)].dt).dt[0]));
	(yyval.eq).code=strdup(bbuf);(yyval.eq).idn=k;(yyval.eq).ast=strdup(a);}
    break;

  case 34:
#line 69 "par.y"
    {int k=tmp++;add_type_name(ygbl, 1);
	sprintf(bbuf,"mov t%d %s\n",k,yytext);
	(yyval.eq).code=strdup(bbuf);(yyval.eq).idn=k;(yyval.eq).ast=strdup(yytext);}
    break;

  case 35:
#line 72 "par.y"
    {int k=tmp++;add_type_name(ygbl, 0);
	sprintf(bbuf,"mov t%d %s\n",k,yytext);
	(yyval.eq).code=strdup(bbuf);(yyval.eq).idn=k;(yyval.eq).ast=strdup(yytext);}
    break;

  case 36:
#line 75 "par.y"
    {(yyval.eq).code=(yyvsp[(2) - (3)].ls).code;(yyval.eq).idn=(yyvsp[(2) - (3)].ls).idn;add_type_name(ygbl, 2);(yyval.eq).ast=ap3(strdup(" ["),(yyvsp[(2) - (3)].ls).ast,strdup("] "));}
    break;

  case 37:
#line 76 "par.y"
    {char *a;int k=tmp++;(yyval.eq).idn=tmp++;sprintf(bbuf,"mov t%d %s\nt%d=t%d[t%d]\n",k,a=getname((yyvsp[(1) - (4)].dt).dt[0]),(yyval.eq).idn,k,(yyvsp[(3) - (4)].eq).idn);(yyval.eq).code=ap((yyvsp[(3) - (4)].eq).code,strdup(bbuf));sprintf(bbuf," %s[",a);(yyval.eq).ast=ap3(strdup(bbuf),(yyvsp[(3) - (4)].eq).ast,strdup("] "));}
    break;

  case 38:
#line 80 "par.y"
    {sprintf(bbuf,"t%d[%d]=t%d\n",(yyvsp[(1) - (3)].ls).idn,(yyvsp[(1) - (3)].ls).off+1,(yyvsp[(3) - (3)].eq).idn);(yyval.ls).code=ap3((yyvsp[(1) - (3)].ls).code,(yyvsp[(3) - (3)].eq).code,strdup(bbuf));(yyval.ls).off=(yyvsp[(1) - (3)].ls).off+1;(yyval.ls).idn=(yyvsp[(1) - (3)].ls).idn;(yyval.ls).ast=ap3((yyvsp[(1) - (3)].ls).ast,strdup(","),(yyvsp[(3) - (3)].eq).ast);}
    break;

  case 39:
#line 81 "par.y"
    {(yyval.ls).idn=tmp++;(yyval.ls).off=0;sprintf(bbuf,"t%d[%d]=t%d\n",(yyval.ls).idn,(yyval.ls).off,(yyvsp[(1) - (1)].eq).idn);(yyval.ls).code=ap((yyvsp[(1) - (1)].eq).code,strdup(bbuf));(yyval.ls).ast=(yyvsp[(1) - (1)].eq).ast;}
    break;

  case 40:
#line 81 "par.y"
    {(yyval.ls).code=strdup("");(yyval.ls).idn=tmp++;(yyval.ls).ast=strdup("");}
    break;

  case 47:
#line 89 "par.y"
    {(yyvsp[(2) - (2)].dt).dt[0]=lbl++;(yyvsp[(2) - (2)].dt).dt[1]=lbl++;}
    break;

  case 48:
#line 90 "par.y"
    {char *a,*b,*c;
	sprintf(bbuf,"label l%d\n",(yyvsp[(2) - (11)].dt).dt[0]);
	a=ap3((yyvsp[(5) - (11)].eq).code,strdup(bbuf),(yyvsp[(7) - (11)].eq).code);
	sprintf(bbuf,"iffalse t%d goto l%d\n",(yyvsp[(7) - (11)].eq).idn,(yyvsp[(2) - (11)].dt).dt[1]);
	b=ap3(strdup(bbuf),(yyvsp[(11) - (11)].stt).code,(yyvsp[(9) - (11)].eq).code);
	sprintf(bbuf,"goto l%d\nlabel l%d\n",(yyvsp[(2) - (11)].dt).dt[0],(yyvsp[(2) - (11)].dt).dt[1]);
	(yyval.stt).code=ap3(a,b,strdup(bbuf));
	a=ap3(strdup("for ("),(yyvsp[(5) - (11)].eq).ast,strdup(";"));
	a=ap3(a,(yyvsp[(7) - (11)].eq).ast,strdup(";"));
	a=ap3(a,(yyvsp[(9) - (11)].eq).ast,strdup(")"));
	(yyval.stt).ast=ap(a,(yyvsp[(11) - (11)].stt).ast);
}
    break;

  case 49:
#line 104 "par.y"
    {(yyvsp[(5) - (5)].dt).dt[0]=lbl++;(yyvsp[(5) - (5)].dt).dt[1]=lbl++;(yyvsp[(5) - (5)].dt).dt[2]=lbl++;}
    break;

  case 50:
#line 106 "par.y"
    {char *a,*b,*c;
	sprintf(bbuf,"iftrue t%d goto l%d\ngoto l%d\nlabel l%d\n",(yyvsp[(3) - (9)].eq).idn,(yyvsp[(5) - (9)].dt).dt[0],(yyvsp[(5) - (9)].dt).dt[1],(yyvsp[(5) - (9)].dt).dt[0]);
	a=ap3((yyvsp[(3) - (9)].eq).code,strdup(bbuf),(yyvsp[(7) - (9)].stt).code);
	sprintf(bbuf,"goto l%d\nlabel l%d\n",(yyvsp[(5) - (9)].dt).dt[2],(yyvsp[(5) - (9)].dt).dt[1]);
	b=ap(strdup(bbuf),(yyvsp[(9) - (9)].stt).code);
	sprintf(bbuf,"label l%d\n",(yyvsp[(5) - (9)].dt).dt[2]);
	(yyval.stt).code=ap3(a,b,strdup(bbuf));
	a=ap3(strdup("if("),(yyvsp[(3) - (9)].eq).ast,strdup(")"));
	a=ap3(a,(yyvsp[(7) - (9)].stt).ast,strdup(" else "));
	(yyval.stt).ast=ap(a,(yyvsp[(9) - (9)].stt).ast);
}
    break;


/* Line 1267 of yacc.c.  */
#line 1646 "y.tab.c"
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


#line 118 "par.y"


