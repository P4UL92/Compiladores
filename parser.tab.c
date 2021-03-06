
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
#line 4 "parser.y"

#include <stdio.h>
/*#define YYERROR_VERBOSE*/

int errores = 0;
int line = 1;
int yylex();
int yyerror(char *s);
void Errors(char* input);
void nextline();


/* Line 189 of yacc.c  */
#line 86 "parser.tab.c"

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
     PACKAGE = 258,
     CLASS = 259,
     FUNCTION = 260,
     SUBFUNCTION = 261,
     IF = 262,
     ELSE = 263,
     DO = 264,
     WHILE = 265,
     FOR = 266,
     VERDADERO = 267,
     FALSO = 268,
     BREAKER = 269,
     BINDER = 270,
     OPERATOR = 271,
     APPEND = 272,
     ADD = 273,
     SUBSTRACT = 274,
     COMPARATOR = 275,
     ASSIGNATION = 276,
     LINKER = 277,
     OPENCLAUSE = 278,
     CLOSECLAUSE = 279,
     OPENCONTROLLER = 280,
     CLOSECONTROLLER = 281,
     STRING = 282,
     CHAR = 283,
     STARTER = 284,
     BYTE = 285,
     SHORT = 286,
     INT = 287,
     LONG = 288,
     FLOAT = 289,
     DOUBLE = 290,
     BOOLEAN = 291,
     CHARVAR = 292,
     STRINGVAR = 293,
     FLOATNUMBER = 294,
     NUMBER = 295,
     ID = 296,
     SPACE = 297,
     NEXTLINE = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 171 "parser.tab.c"

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   495

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    16,    22,    26,    33,    38,
      41,    47,    52,    57,    61,    66,    70,    73,    75,    77,
      79,    81,    83,    86,    89,    94,    96,    98,   102,   105,
     107,   109,   111,   114,   117,   120,   122,   128,   136,   146,
     155,   160,   165,   174,   183,   191,   199,   206,   213,   219,
     225,   231,   236,   239,   242,   246,   252,   257,   265,   271,
     276,   280,   287,   292,   297,   300,   305,   309,   311,   315,
     317,   319,   321,   323,   325,   327,   329,   332,   335,   338,
     341,   344,   347,   350,   353,   355,   358,   361,   365,   373,
     380,   382,   384,   392,   399,   406,   412,   419,   425,   430,
     434,   438,   441,   445,   448,   452,   454,   457,   461,   465,
     469,   473,   477,   481,   485,   489,   493
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    47,    -1,    47,    -1,     3,    41,
      17,    41,    17,    41,    14,    -1,     3,    41,    17,    41,
      14,    -1,     3,    41,    14,    -1,     3,    41,    17,    41,
      17,    41,    -1,     3,    41,    17,    41,    -1,     3,    41,
      -1,     4,    41,    23,    48,    24,    -1,     4,    41,    23,
      24,    -1,     4,    41,    23,    48,    -1,     4,    41,    23,
      -1,    29,    23,    49,    24,    -1,    29,    23,    49,    -1,
      49,    50,    -1,    50,    -1,    58,    -1,    61,    -1,    56,
      -1,    53,    -1,    55,    14,    -1,    51,    14,    -1,    41,
      21,    51,    14,    -1,    55,    -1,    51,    -1,    41,    21,
      51,    -1,    51,    52,    -1,    41,    -1,    40,    -1,    39,
      -1,    16,    41,    -1,    16,    40,    -1,    16,    39,    -1,
      16,    -1,    11,    54,    23,    49,    24,    -1,    10,    25,
      65,    26,    23,    49,    24,    -1,     9,    23,    49,    24,
      10,    25,    65,    26,    14,    -1,     9,    23,    49,    24,
      10,    25,    65,    26,    -1,    11,    54,    23,    49,    -1,
      10,    65,    23,    49,    -1,     9,    23,    49,    10,    25,
      65,    26,    14,    -1,     9,    23,    49,    24,    10,    25,
      65,    14,    -1,     9,    23,    49,    10,    25,    65,    26,
      -1,     9,    23,    49,    24,    10,    25,    65,    -1,    25,
      58,    65,    14,    55,    26,    -1,    25,    14,    65,    14,
      55,    26,    -1,    25,    14,    65,    14,    26,    -1,    25,
      58,    65,    14,    55,    -1,    25,    14,    65,    14,    55,
      -1,    25,    14,    65,    14,    -1,    41,    18,    -1,    41,
      19,    -1,     5,    57,    14,    -1,    17,     6,    25,    41,
      26,    -1,    17,     6,    25,    26,    -1,    17,     6,    25,
      27,    15,    41,    26,    -1,    17,     6,    25,    27,    26,
      -1,    17,     6,    25,    41,    -1,    17,     6,    25,    -1,
      17,     6,    25,    27,    15,    41,    -1,    17,     6,    25,
      27,    -1,    60,    21,    59,    14,    -1,    60,    14,    -1,
      41,    21,    59,    14,    -1,    60,    21,    59,    -1,    60,
      -1,    41,    21,    59,    -1,    40,    -1,    39,    -1,    27,
      -1,    28,    -1,    12,    -1,    13,    -1,    41,    -1,    30,
      41,    -1,    32,    41,    -1,    33,    41,    -1,    34,    41,
      -1,    35,    41,    -1,    36,    41,    -1,    37,    41,    -1,
      38,    41,    -1,    62,    -1,    62,    63,    -1,    62,    64,
      -1,    62,    64,    63,    -1,     8,    25,    65,    26,    23,
      49,    24,    -1,     8,    25,    65,    26,    23,    24,    -1,
      64,    -1,    63,    -1,     7,    25,    65,    26,    23,    49,
      24,    -1,     7,    25,    65,    26,    23,    24,    -1,     7,
      25,    65,    26,    23,    49,    -1,     7,    25,    65,    26,
      23,    -1,     7,    25,    65,    23,    49,    24,    -1,     7,
      25,    65,    23,    24,    -1,     8,    23,    49,    24,    -1,
       8,    23,    24,    -1,     8,    23,    49,    -1,     8,    23,
      -1,    64,     8,    62,    -1,     8,    62,    -1,    65,    22,
      66,    -1,    66,    -1,    65,    66,    -1,    41,    20,    41,
      -1,    40,    20,    40,    -1,    40,    20,    41,    -1,    40,
      20,    39,    -1,    39,    20,    40,    -1,    39,    20,    39,
      -1,    39,    20,    41,    -1,    41,    20,    40,    -1,    41,
      20,    39,    -1,    41,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    21,    21,    22,    25,    26,    27,    29,    30,    31,
      34,    35,    38,    39,    42,    44,    47,    48,    51,    52,
      53,    54,    55,    56,    57,    59,    60,    61,    64,    65,
      66,    67,    70,    71,    72,    74,    77,    78,    79,    81,
      83,    84,    86,    87,    89,    90,    93,    94,    95,    97,
      98,    99,   102,   103,   106,   109,   110,   111,   112,   114,
     115,   116,   117,   120,   121,   122,   124,   125,   126,   129,
     130,   131,   132,   133,   134,   135,   137,   138,   139,   140,
     141,   142,   143,   144,   147,   148,   149,   150,   152,   153,
     154,   155,   158,   159,   161,   162,   164,   165,   168,   169,
     171,   172,   175,   176,   179,   180,   182,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PACKAGE", "CLASS", "FUNCTION",
  "SUBFUNCTION", "IF", "ELSE", "DO", "WHILE", "FOR", "VERDADERO", "FALSO",
  "BREAKER", "BINDER", "OPERATOR", "APPEND", "ADD", "SUBSTRACT",
  "COMPARATOR", "ASSIGNATION", "LINKER", "OPENCLAUSE", "CLOSECLAUSE",
  "OPENCONTROLLER", "CLOSECONTROLLER", "STRING", "CHAR", "STARTER", "BYTE",
  "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "BOOLEAN", "CHARVAR",
  "STRINGVAR", "FLOATNUMBER", "NUMBER", "ID", "SPACE", "NEXTLINE",
  "$accept", "programa", "paquete", "clase", "punto_entrada", "sentencias",
  "sentencia", "operaciones", "operacion", "iterador", "iterador_header",
  "incrementar", "metodo", "submetodo", "asignacion", "tipo",
  "declaracion", "comparacion", "si", "caso_contrario", "si_contrario",
  "condiciones", "condicion", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    46,    46,    46,    46,
      47,    47,    47,    47,    48,    48,    49,    49,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51,
      51,    51,    52,    52,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    54,    55,    55,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    64,    64,    65,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     7,     5,     3,     6,     4,     2,
       5,     4,     4,     3,     4,     3,     2,     1,     1,     1,
       1,     1,     2,     2,     4,     1,     1,     3,     2,     1,
       1,     1,     2,     2,     2,     1,     5,     7,     9,     8,
       4,     4,     8,     8,     7,     7,     6,     6,     5,     5,
       5,     4,     2,     2,     3,     5,     4,     7,     5,     4,
       3,     6,     4,     4,     2,     4,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     3,     7,     6,
       1,     1,     7,     6,     6,     5,     6,     5,     4,     3,
       3,     2,     3,     2,     3,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     3,     9,     0,     1,     2,
       6,     0,    13,     8,    11,     0,    12,     5,     0,     0,
      10,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    30,    29,    15,
      17,    26,    21,    25,    20,    18,    67,    19,    84,    91,
      90,     4,     0,     0,     0,   101,     0,   103,     0,     0,
       0,     0,     0,     0,   105,     0,     0,    76,    77,    78,
      79,    80,    81,    82,    83,    52,    53,     0,    14,    16,
      23,    35,    28,    22,    64,     0,     0,    85,    86,     0,
       0,    54,     0,    99,   100,     0,     0,     0,     0,     0,
       0,   116,     0,     0,   106,     0,     0,     0,     0,    73,
      74,    71,    72,    31,    30,    29,    27,    68,    34,    33,
      32,    70,    69,    75,    66,     0,    87,   102,    60,     0,
       0,    98,     0,     0,     0,     0,   112,   111,   113,   110,
     108,   109,   115,   114,   107,   104,    41,     0,     0,     0,
      40,    24,    65,    63,    56,    62,    59,    97,     0,    95,
       0,     0,     0,     0,    51,     0,    36,     0,    58,    55,
      96,    93,    94,    89,     0,     0,     0,     0,    48,     0,
      50,    49,    61,    92,    88,    44,    45,    37,    47,    46,
      57,    42,    43,    39,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    16,    39,    40,    41,    82,    42,
      66,    43,    44,    53,    45,   117,    46,    47,    48,    49,
      50,    63,    64
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -63
static const yytype_int16 yypact[] =
{
      94,    -4,    12,    69,   108,   -63,    88,    93,   -63,   -63,
     -63,    99,     7,    92,   -63,   129,   146,   -63,   141,   408,
     -63,   193,   202,   195,     2,   198,   -19,   197,   182,   184,
     196,   203,   204,   205,   206,   207,   -63,   -63,    -2,    38,
     -63,   120,   -63,   229,   -63,   -63,    74,   -63,   241,   -63,
     242,   -63,   245,   238,    50,   121,    50,   -63,   408,    50,
     233,   254,   100,   428,   -63,   425,   239,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,    11,   -63,   -63,
     -63,   125,   -63,   -63,   -63,    53,     5,   -63,   267,   269,
     252,   -63,    60,   -63,   139,   448,   176,   451,   149,   152,
     155,   -63,    50,   408,   -63,    50,   257,    50,   408,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   123,   266,   -63,   -63,
     -63,   -63,   -63,   -63,   278,     5,   -63,   -63,   -12,   194,
     275,   -63,   276,   102,   290,   279,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   408,    20,    53,   442,
     231,   -63,   -63,   -63,   -63,    -8,   277,   -63,   249,   286,
     304,    50,   280,   408,   -15,   260,   -63,   263,   -63,   -63,
     -63,   -63,   341,   -63,   359,   454,    50,   396,   -63,   179,
     281,   282,   291,   -63,   -63,    18,    82,   -63,   -63,   -63,
     -63,   -63,   -63,   292,   -63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   -63,   325,   -63,   -45,   -39,   253,   -63,   -63,
     -63,     3,   -63,   270,   268,   246,   -63,   -63,   -22,   -44,
     287,   -51,   -62
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      79,   104,    57,    92,    87,    95,    59,   167,    97,    23,
      94,   178,    23,    96,   154,   155,    75,    76,   168,    77,
      60,    61,    62,   109,   110,    55,   179,    56,    55,   156,
     104,    14,   191,   104,   164,   104,    15,     6,   111,   112,
     145,   163,   102,    22,   126,    23,    24,    25,    26,    27,
     113,   114,   115,     7,   147,    79,   149,    79,   146,    60,
      61,    62,    78,   150,    57,   109,   110,   127,    28,     8,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     111,   112,   102,   129,   158,   104,   130,   104,    84,    60,
      61,    62,   121,   122,   123,    85,   192,     1,     2,    60,
      61,    62,    10,   127,   102,    11,    17,    79,   193,    18,
     175,    79,     2,   104,   172,   174,    12,    52,   177,    79,
     100,    60,    61,    62,   104,   186,    22,   161,    23,    24,
      25,    26,    27,    79,    80,    79,    81,   151,    79,    81,
      13,    60,    61,    62,    22,    93,    23,    24,    25,    26,
      27,    28,    19,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   131,   118,   119,   120,   180,   181,    28,
      20,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    22,    21,    23,    24,    25,   133,    27,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    75,    76,    22,
     134,    23,    24,    25,    26,    27,    28,    51,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   157,    52,
      54,    58,    65,    67,    28,    68,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    22,    69,    23,    24,
      25,    26,    27,    83,    70,    71,    72,    73,    74,    86,
      89,    90,    91,    98,    22,   166,    23,    24,    25,    26,
      27,    28,   108,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   170,    99,   125,    23,   128,   148,    28,
     152,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    22,   153,    23,    24,    25,    26,    27,   159,   160,
     162,   179,   163,   169,   182,   176,   194,   188,   189,    22,
     171,    23,    24,    25,    26,    27,    28,   190,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   173,     9,
     116,   124,   101,   107,    28,    88,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    22,     0,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,   183,    23,    24,    25,    26,
      27,    28,     0,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   184,     0,     0,     0,     0,     0,    28,
       0,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    22,     0,    23,    24,    25,    26,    27,     0,     0,
       0,     0,     0,    22,     0,    23,    24,    25,    26,    27,
     187,     0,     0,     0,     0,     0,    28,     0,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    28,   105,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     102,   103,     0,     0,     0,    28,   165,    29,    30,    31,
      32,    33,    34,    35,   102,     0,   106,    60,    61,    62,
     102,     0,     0,   102,   132,     0,   102,   135,     0,     0,
     185,    60,    61,    62,     0,     0,     0,    60,    61,    62,
      60,    61,    62,    60,    61,    62
};

static const yytype_int16 yycheck[] =
{
      39,    63,    24,    54,    48,    56,    25,    15,    59,     7,
      55,    26,     7,    58,    26,    27,    18,    19,    26,    21,
      39,    40,    41,    12,    13,    23,    41,    25,    23,    41,
      92,    24,    14,    95,    14,    97,    29,    41,    27,    28,
     102,    23,    22,     5,    88,     7,     8,     9,    10,    11,
      39,    40,    41,    41,   105,    94,   107,    96,   103,    39,
      40,    41,    24,   108,    86,    12,    13,    89,    30,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    22,    23,   129,   147,    26,   149,    14,    39,
      40,    41,    39,    40,    41,    21,    14,     3,     4,    39,
      40,    41,    14,   125,    22,    17,    14,   146,    26,    17,
     161,   150,     4,   175,   159,   160,    23,    17,   163,   158,
      20,    39,    40,    41,   186,   176,     5,    25,     7,     8,
       9,    10,    11,   172,    14,   174,    16,    14,   177,    16,
      41,    39,    40,    41,     5,    24,     7,     8,     9,    10,
      11,    30,    23,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    24,    39,    40,    41,   164,   165,    30,
      24,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     5,    41,     7,     8,     9,    10,    11,    39,    40,
      41,    39,    40,    41,    39,    40,    41,    18,    19,     5,
      24,     7,     8,     9,    10,    11,    30,    14,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    24,    17,
      25,    23,    25,    41,    30,    41,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     5,    41,     7,     8,
       9,    10,    11,    14,    41,    41,    41,    41,    41,     8,
       8,     6,    14,    20,     5,    24,     7,     8,     9,    10,
      11,    30,    23,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    24,    20,     8,     7,    25,    21,    30,
      14,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     5,    14,     7,     8,     9,    10,    11,    23,    23,
      10,    41,    23,    26,    41,    25,    14,    26,    26,     5,
      24,     7,     8,     9,    10,    11,    30,    26,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    24,     4,
      77,    85,    62,    65,    30,    48,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     5,    -1,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    24,     7,     8,     9,    10,
      11,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    24,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     5,    -1,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,     9,    10,    11,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    30,    14,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      22,    23,    -1,    -1,    -1,    30,    14,    32,    33,    34,
      35,    36,    37,    38,    22,    -1,    41,    39,    40,    41,
      22,    -1,    -1,    22,    26,    -1,    22,    26,    -1,    -1,
      26,    39,    40,    41,    -1,    -1,    -1,    39,    40,    41,
      39,    40,    41,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    45,    46,    47,    41,    41,     0,    47,
      14,    17,    23,    41,    24,    29,    48,    14,    17,    23,
      24,    41,     5,     7,     8,     9,    10,    11,    30,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    49,
      50,    51,    53,    55,    56,    58,    60,    61,    62,    63,
      64,    14,    17,    57,    25,    23,    25,    62,    23,    25,
      39,    40,    41,    65,    66,    25,    54,    41,    41,    41,
      41,    41,    41,    41,    41,    18,    19,    21,    24,    50,
      14,    16,    52,    14,    14,    21,     8,    63,    64,     8,
       6,    14,    65,    24,    49,    65,    49,    65,    20,    20,
      20,    57,    22,    23,    66,    14,    41,    58,    23,    12,
      13,    27,    28,    39,    40,    41,    51,    59,    39,    40,
      41,    39,    40,    41,    59,     8,    63,    62,    25,    23,
      26,    24,    26,    10,    24,    26,    39,    40,    41,    39,
      40,    41,    39,    40,    41,    66,    49,    65,    21,    65,
      49,    14,    14,    14,    26,    27,    41,    24,    49,    23,
      23,    25,    10,    23,    14,    14,    24,    15,    26,    26,
      24,    24,    49,    24,    49,    65,    25,    49,    26,    41,
      55,    55,    41,    24,    24,    26,    65,    24,    26,    26,
      26,    14,    14,    26,    14
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
        case 7:

/* Line 1455 of yacc.c  */
#line 29 "parser.y"
    {yyerror("Error, se espera ; al final de la linea\n");errores++;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 30 "parser.y"
    {yyerror("Error, se espera ; al final de la linea\n");errores++;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 31 "parser.y"
    {yyerror("Error, se espera ; al final de la linea\n");errores++;;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 38 "parser.y"
    {yyerror("Error, se espera cerradura de llaves }\n");errores++;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 39 "parser.y"
    {yyerror("Error, se espera cerradura de llaves }\n");errores++;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 44 "parser.y"
    {yyerror("Error, se espera cerradura de llaves }\n");errores++;;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    {yyerror("Error, se espera ; al final de la linea\n");errores++;;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    {yyerror("Error, se espera ; al final de la linea\n");errores++;;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    {yyerror("Error, se espera ; al final de la linea\n");errores++;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {yyerror("Error, se espera un operando \n");errores++;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    {yyerror("La sentencia: hacer - mientras{} necesita cerradura ; \n");errores++;;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    {yyerror("La sentencia: para{} se espera cierre de llaves } \n");errores++;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {yyerror("La sentencia: mientras{} se espera cierre de llaves } \n");errores++;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {yyerror("La sentencia hacer ? - mientras{} \n");errores++;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    {yyerror("La sentencia hacer - mientras{} ? \n");errores++;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {yyerror("La sentencia hacer ? - mientras{} necesita cerradura ;\n");errores++;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    {yyerror("La sentencia hacer - mientras{} ?  necesita cerradura ;\n");errores++;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {yyerror("Error, se espera cerradura de ) \n");errores++;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {yyerror("Error, se espera cerradura de ) \n");errores++;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {yyerror("Error, se espera cerradura de ) \n");errores++;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {yyerror("Error, se espera cerradura de ) \n");errores++;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {yyerror("Error, se espera cerradura de ) \n");errores++;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {yyerror("Error, se espera cerradura de ) \n");errores++;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {yyerror("Error, se espera cerradura de ) \n");errores++;;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {yyerror("Error, se espera ; al final de la linea\n");errores++;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    {yyerror("Error, se espera ; al final de la linea\n");errores++;;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {yyerror("La sentencia es valida: asig= n\n");errores++;;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {yyerror("Error, una comparación debe empezar con 'si' \n");errores++;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    {yyerror("Error, una comparación debe empezar con 'si' \n");errores++;;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    {yyerror("Error, una comparación debe empezar con 'si' \n");errores++;;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {yyerror("Error, una comparación debe empezar con 'si' \n");errores++;;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {yyerror("Error, faltan cerraduras de llaves \n");errores++;;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    {yyerror("Error, faltan cerraduras de llaves\n");errores++;;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {yyerror("Error, faltan cerraduras de parentesis\n");errores++;;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {yyerror("Error, faltan cerraduras de parentesis\n");errores++;;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {yyerror("Error, faltan cerraduras de llaves\n");errores++;;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {yyerror("Error, faltan cerraduras de llaves");errores++;;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {yyerror("Error, no se encontro conector\n");errores++;;}
    break;



/* Line 1455 of yacc.c  */
#line 1884 "parser.tab.c"
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
#line 198 "parser.y"


/* Sección CODIGO USUARIO */
FILE *yyin;
int main(int argc, char **argv) {
	yyin = fopen(argv[1],"r");
    yyparse();
    Errors(argv[1]);
    return 0;
}

int yyerror(char *s) {
    fprintf(stderr, "Error linea %d: %s\n", line, s);
    errores++;
    return 0;
}

void Errors(char* input){
    if(errores == 0){
        printf("======PROGRAMA VÁLIDO======\n");
        char run[100];
        strcpy(run, "flex traductor.l");
        int result = system(run);
        if (result == 0){
            memset(run, 0, sizeof run);
            strcpy(run, "gcc -o traductor lex.yy.c");
            result = system(run);
            if(result == 0){
                memset(run, 0, sizeof run);
                strcpy(run, "./traductor < ");
                strcat(run, input);
                system(run);
            }
        }
    }
}

void nextline() {
	line++;
}

