/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "compilador.y"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "compilador.h"
#include "tabela_simb/tabela_simb.h"
#include "tabela_simb/simbolo.h"
#include "gerador_rotulos/gerador_rotulos.h"


int num_vars;
int desloc_num_vars;
char mepa_buf[128];
int nivel_lexico;
int num_carrega_tipo;
struct cat_conteudo cc;
struct tab_simb *tabela;
struct tab_simb *tabela_label;
struct simbolo s ,lista_simbolos[128];
struct parametro lista_parametros[128];
struct parametro param_aux;
struct simbolo *ps;
struct simbolo *esquerdo;
int esquerdo_recursao_func = 0;
struct simbolo *esquerdo_func[100];
int num_vars_por_nivel[10];
struct pilha_rotulos *p_rotulos;
struct rotulo rotulo_a;
int num_params;
char proc_name[128];
struct cat_conteudo conteudo;
int pilha_num_vars[1000];
char pilha_proc_name[100][128];
int pilha_proc = 0;
int ponteiro_pilha_num_vars = 0;
int em_chamada_de_funcao = 0;
struct simbolo *ps2;
int rolo_chamada_proc;


enum tipo_dado{
    t_int,
    t_bool
};



#line 119 "compilador.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_COMPILADOR_TAB_H_INCLUDED
# define YY_YY_COMPILADOR_TAB_H_INCLUDED
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
    PROGRAM = 258,
    ABRE_PARENTESES = 259,
    FECHA_PARENTESES = 260,
    VIRGULA = 261,
    PONTO_E_VIRGULA = 262,
    DOIS_PONTOS = 263,
    PONTO = 264,
    T_BEGIN = 265,
    T_END = 266,
    VAR = 267,
    IDENT = 268,
    ATRIBUICAO = 269,
    LABEL = 270,
    TYPE = 271,
    PROCEDURE = 272,
    FUNCTION = 273,
    GOTO = 274,
    IF = 275,
    THEN = 276,
    ELSE = 277,
    WHILE = 278,
    DO = 279,
    ARRAY = 280,
    OF = 281,
    ABRE_CONCHETES = 282,
    FECHA_CONCHETES = 283,
    DIV = 284,
    AND = 285,
    NOT = 286,
    OR = 287,
    TIPO = 288,
    VALOR_BOOL = 289,
    NUMERO = 290,
    MAIOR = 291,
    MENOR = 292,
    IGUAL = 293,
    MENOR_IGUAL = 294,
    MAIOR_IGUAL = 295,
    DIFERENTE = 296,
    MAIS = 297,
    MENOS = 298,
    VEZES = 299,
    READ = 300,
    WRITE = 301,
    LOWER_THAN_ELSE = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 66 "compilador.y"

   char * str;  // define o tipo str
   int int_val; // define o tipo int_val
   struct simbolo *simb;

#line 225 "compilador.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILADOR_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

#define YYUNDEFTOK  2
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    98,    98,    98,   115,   121,   125,   133,   120,   144,
     145,   148,   154,   164,   164,   173,   177,   178,   180,   180,
     193,   210,   219,   231,   235,   236,   237,   241,   246,   266,
     266,   241,   283,   283,   284,   288,   292,   312,   314,   288,
     333,   334,   337,   337,   350,   351,   356,   365,   380,   381,
     383,   388,   389,   390,   391,   392,   393,   394,   395,   395,
     404,   408,   426,   426,   442,   443,   447,   447,   488,   488,
     559,   559,   559,   574,   587,   596,   597,   597,   602,   610,
     610,   630,   631,   635,   635,   642,   642,   663,   672,   679,
     680,   681,   682,   683,   684,   689,   692,   700,   709,   718,
     727,   739,   742,   751,   760,   772,   775,   780,   788,   791,
     805,   809,   810,   814,   830,   834,   835,   839
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "ABRE_PARENTESES",
  "FECHA_PARENTESES", "VIRGULA", "PONTO_E_VIRGULA", "DOIS_PONTOS", "PONTO",
  "T_BEGIN", "T_END", "VAR", "IDENT", "ATRIBUICAO", "LABEL", "TYPE",
  "PROCEDURE", "FUNCTION", "GOTO", "IF", "THEN", "ELSE", "WHILE", "DO",
  "ARRAY", "OF", "ABRE_CONCHETES", "FECHA_CONCHETES", "DIV", "AND", "NOT",
  "OR", "TIPO", "VALOR_BOOL", "NUMERO", "MAIOR", "MENOR", "IGUAL",
  "MENOR_IGUAL", "MAIOR_IGUAL", "DIFERENTE", "MAIS", "MENOS", "VEZES",
  "READ", "WRITE", "LOWER_THAN_ELSE", "$accept", "programa", "$@1",
  "input_idents", "bloco", "$@2", "$@3", "$@4", "parte_declara_rotulos",
  "declaracao_de_rotulos", "parte_declara_vars", "$@5",
  "declaracao_de_vars", "declaracao_de_var", "$@6", "tipo", "lista_idents",
  "comando_composto", "parte_declara_sub_rotinas", "declara_procedimento",
  "$@7", "$@8", "$@9", "$@10", "parametros_formais_ou_nada", "$@11",
  "declara_function", "$@12", "$@13", "$@14", "$@15", "declaracao_params",
  "declaracao_param", "$@16", "lista_params_formais", "parametro",
  "comandos", "comando", "$@17", "desvio", "atribui_ou_func", "$@18",
  "continua_atibui_ou_func", "atribui_contiunuacao", "$@19",
  "funcao_ou_ident", "$@20", "parametros_ou_nada", "$@21", "$@22",
  "empilha_retorno", "lista_params", "$@23", "comando_condicional",
  "if_then", "$@24", "cond_else", "comando_repetitivo", "$@25",
  "while_resto", "$@26", "expressao", "relacao", "expressao_simples",
  "termo", "fator", "leitura", "parametros_de_leitura",
  "parametro_leitura", "escrita", "parametros_de_escrita",
  "parametro_escrita", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF (-155)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-84)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -155,    16,    19,  -155,    14,    34,    31,    47,    50,    53,
      63,  -155,    45,    56,    73,  -155,  -155,    30,  -155,    60,
      57,  -155,  -155,    83,  -155,  -155,  -155,    29,    84,  -155,
      85,    86,    87,    91,  -155,  -155,  -155,  -155,     6,  -155,
    -155,    48,  -155,    89,    70,    92,    92,  -155,    69,     0,
    -155,   101,   102,  -155,     4,  -155,  -155,  -155,  -155,    88,
    -155,    90,  -155,  -155,  -155,  -155,   100,  -155,  -155,  -155,
      94,  -155,     0,  -155,    28,  -155,  -155,    28,    28,  -155,
    -155,    37,   -20,  -155,   103,    96,     0,    48,  -155,    48,
    -155,     0,  -155,  -155,   105,   106,  -155,  -155,  -155,   111,
      -3,  -155,  -155,   -20,   -20,    95,    28,  -155,  -155,  -155,
    -155,  -155,  -155,    28,    28,     0,    28,    28,    28,    48,
    -155,    59,  -155,   -25,    81,  -155,  -155,  -155,  -155,  -155,
      18,  -155,    76,  -155,    93,  -155,     0,  -155,  -155,  -155,
      48,   -20,   -20,   -20,   -25,  -155,  -155,  -155,  -155,  -155,
      96,  -155,     0,    97,  -155,  -155,   104,  -155,    22,  -155,
      45,  -155,  -155,  -155,  -155,  -155,  -155,    48,  -155,  -155,
      76,    70,  -155,   112,   114,     0,  -155,  -155,  -155,   115,
      45,     0,   113,  -155,  -155,  -155,  -155,  -155,   116,  -155
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     4,    10,     0,     0,     5,    12,     0,     3,    15,
       0,     9,     6,     0,    11,    26,    18,     7,    14,    17,
       0,     0,     0,     0,    24,    25,    16,    22,     0,    27,
      35,    50,     8,     0,     0,    34,    34,    62,     0,     0,
      58,     0,     0,    52,     0,    49,    57,    51,    53,    82,
      54,     0,    55,    56,    21,    20,     0,    32,    28,    36,
      74,    61,     0,    68,     0,   107,   106,     0,     0,   105,
      79,    88,    95,   101,     0,     0,     0,    60,    23,    60,
      78,     0,    19,    42,     0,     0,    66,    63,    65,    73,
       0,    74,   109,    96,    97,     0,     0,    91,    90,    89,
      93,    92,    94,     0,     0,     0,     0,     0,     0,    60,
     113,     0,   112,   117,     0,   116,    48,    81,    84,    85,
       0,    41,     0,    29,     0,    64,     0,    70,   108,    69,
      60,   100,    98,    99,    87,   102,   104,   103,    59,   110,
       0,   114,     0,     0,    33,    42,     0,    47,     0,    45,
      10,    37,    67,    76,    80,   111,   115,    60,    40,    46,
       0,     0,    30,     0,    71,     0,    86,    44,    43,     0,
      10,     0,     0,    77,    31,    38,    75,    72,     0,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,  -155,  -155,  -154,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,    99,  -155,   -47,  -155,    98,  -155,  -155,
    -155,  -155,  -155,  -155,    79,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,   -27,  -155,  -155,   -41,  -155,   -86,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,    32,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,   -91,  -155,   -67,   -57,   -66,  -155,  -155,   -18,  -155,
    -155,   -22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     8,    14,    19,    25,    33,    15,    17,
      22,    23,    28,    29,    30,    66,    38,    53,    27,    34,
      45,    94,   160,   179,    68,    93,    35,    46,    95,   173,
     188,   130,   131,   132,   158,   159,    54,    55,    84,    56,
      57,    70,    97,   135,   136,    79,   101,    98,   163,   182,
      99,   174,   175,    58,    59,   105,    90,    60,    61,   128,
     153,    80,   115,    81,    82,    83,    62,   121,   122,    63,
     124,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     129,   126,   138,   127,    72,   100,   172,   106,   102,   116,
     117,    87,    43,    73,    44,    88,     3,   113,   114,   123,
     103,   104,     4,   154,   118,   155,   185,     5,   170,   106,
     171,    74,    72,   148,    75,    76,    20,    21,     6,   113,
     114,    73,    77,    78,     7,   162,    31,    32,   144,   141,
     145,   146,   147,     9,   164,    10,   142,   143,    41,    74,
      13,    47,    75,    76,   149,   150,    11,    48,    49,   106,
      12,   -83,   -13,   107,   108,   109,   110,   111,   112,   113,
     114,   176,    18,    50,   183,   123,   151,   152,   156,   157,
     186,    16,    24,    51,    52,    26,    67,   -18,    37,    39,
      40,    41,    64,    65,    71,    85,    86,    92,    96,   120,
      89,   119,   133,    91,   134,   137,   140,   169,   187,   180,
     181,   167,   184,   189,   178,    69,   161,    36,   168,   177,
     166,    42,   165,   139
};

static const yytype_uint8 yycheck[] =
{
      91,    87,     5,    89,     4,    72,   160,    32,    74,    29,
      30,     7,     6,    13,     8,    11,     0,    42,    43,    86,
      77,    78,     3,     5,    44,     7,   180,    13,     6,    32,
       8,    31,     4,   119,    34,    35,     6,     7,     4,    42,
      43,    13,    42,    43,    13,   136,    17,    18,   115,   106,
     116,   117,   118,     6,   140,     5,   113,   114,    10,    31,
      15,    13,    34,    35,     5,     6,    13,    19,    20,    32,
       7,    23,    12,    36,    37,    38,    39,    40,    41,    42,
      43,   167,     9,    35,   175,   152,     5,     6,    12,    13,
     181,    35,    35,    45,    46,    12,     4,    13,    13,    13,
      13,    10,    13,    33,    35,     4,     4,     7,    14,    13,
      22,     8,     7,    23,     8,     4,    21,    13,     5,     7,
       6,    24,     7,     7,   171,    46,    33,    28,   155,   170,
     152,    33,   150,   101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     3,    13,     4,    13,    51,     6,
       5,    13,     7,    15,    52,    56,    35,    57,     9,    53,
       6,     7,    58,    59,    35,    54,    12,    66,    60,    61,
      62,    17,    18,    55,    67,    74,    61,    13,    64,    13,
      13,    10,    65,     6,     8,    68,    75,    13,    19,    20,
      35,    45,    46,    65,    84,    85,    87,    88,   101,   102,
     105,   106,   114,   117,    13,    33,    63,     4,    72,    72,
      89,    35,     4,    13,    31,    34,    35,    42,    43,    93,
     109,   111,   112,   113,    86,     4,     4,     7,    11,    22,
     104,    23,     7,    73,    69,    76,    14,    90,    95,    98,
     111,    94,   113,   112,   112,   103,    32,    36,    37,    38,
      39,    40,    41,    42,    43,   110,    29,    30,    44,     8,
      13,   115,   116,   111,   118,   119,    85,    85,   107,   109,
      79,    80,    81,     7,     8,    91,    92,     4,     5,    95,
      21,   112,   112,   112,   111,   113,   113,   113,    85,     5,
       6,     5,     6,   108,     5,     7,    12,    13,    82,    83,
      70,    33,   109,    96,    85,   116,   119,    24,    80,    13,
       6,     8,    52,    77,    99,   100,    85,    83,    63,    71,
       7,     6,    97,   109,     7,    52,   109,     5,    78,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    51,    53,    54,    55,    52,    56,
      56,    57,    57,    59,    58,    58,    60,    60,    62,    61,
      63,    64,    64,    65,    66,    66,    66,    68,    69,    70,
      71,    67,    73,    72,    72,    75,    76,    77,    78,    74,
      79,    79,    81,    80,    82,    82,    83,    83,    84,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    86,    85,
      85,    87,    89,    88,    90,    90,    92,    91,    94,    93,
      96,    97,    95,    95,    98,    99,   100,    99,   101,   103,
     102,   104,   104,   106,   105,   108,   107,   109,   109,   110,
     110,   110,   110,   110,   110,   111,   111,   111,   111,   111,
     111,   112,   112,   112,   112,   113,   113,   113,   113,   113,
     114,   115,   115,   116,   117,   118,   118,   119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     3,     0,     0,     0,     7,     3,
       0,     3,     1,     0,     3,     0,     2,     1,     0,     5,
       1,     3,     1,     3,     2,     2,     0,     0,     0,     0,
       0,    10,     0,     4,     0,     0,     0,     0,     0,    12,
       3,     1,     0,     4,     3,     1,     2,     1,     3,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       0,     2,     0,     3,     2,     1,     0,     2,     0,     3,
       0,     0,     6,     1,     0,     3,     0,     2,     2,     0,
       5,     2,     0,     0,     3,     0,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     3,
       3,     1,     3,     3,     3,     1,     1,     1,     3,     2,
       4,     3,     1,     1,     4,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 98 "compilador.y"
             {
             geraCodigo (NULL, "INPP");
             tabela = inicializa();
             tabela_label = inicializa();
             p_rotulos = inicializa_rotulos();
             nivel_lexico = 0;
             }
#line 1551 "compilador.tab.c"
    break;

  case 3:
#line 107 "compilador.y"
                         {
             sprintf (mepa_buf, "DMEM %d", num_vars_por_nivel[0]);
             geraCodigo (NULL, mepa_buf);
             geraCodigo (NULL, "PARA");
             }
#line 1561 "compilador.tab.c"
    break;

  case 5:
#line 121 "compilador.y"
            {
            
            }
#line 1569 "compilador.tab.c"
    break;

  case 6:
#line 125 "compilador.y"
            {
            //fprintf(stderr,"COISA DE TESTE \n");
            rotulo_a = gerarrotulo(&p_rotulos);
            sprintf(mepa_buf, "DSVS %s", rotulo_a.rotulo);
            geraCodigo (NULL, mepa_buf);
            nivel_lexico++;
            }
#line 1581 "compilador.tab.c"
    break;

  case 7:
#line 133 "compilador.y"
            {
            nivel_lexico --;
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA");
            }
#line 1591 "compilador.tab.c"
    break;

  case 8:
#line 139 "compilador.y"
            {
            }
#line 1598 "compilador.tab.c"
    break;

  case 11:
#line 148 "compilador.y"
                                                            {
                           rotulo_a = gerarrotulosp(&p_rotulos);
                           strcpy(conteudo.proc.rotulo, rotulo_a.rotulo);
                           s = cria_simbolo(token, label, nivel_lexico, conteudo, 0);
                           adicionar(&tabela, s);
                           }
#line 1609 "compilador.tab.c"
    break;

  case 12:
#line 154 "compilador.y"
                              {
                        rotulo_a = gerarrotulosp(&p_rotulos);
                        strcpy(conteudo.proc.rotulo, rotulo_a.rotulo);
                           printf("OI\n");
                        s = cria_simbolo(token, label, nivel_lexico, conteudo, 0);
                        adicionar(&tabela, s);
                     }
#line 1621 "compilador.tab.c"
    break;

  case 13:
#line 164 "compilador.y"
                    {desloc_num_vars = 0;}
#line 1627 "compilador.tab.c"
    break;

  case 18:
#line 180 "compilador.y"
                   {
                     num_carrega_tipo = 0;
                     num_vars = 0;
                  }
#line 1636 "compilador.tab.c"
    break;

  case 19:
#line 184 "compilador.y"
                                                               {
                     sprintf(mepa_buf, "AMEM %d", num_vars);
                     ponteiro_pilha_num_vars++;
                     pilha_num_vars[ponteiro_pilha_num_vars] = num_vars;
                     geraCodigo(NULL,mepa_buf);
					   }
#line 1647 "compilador.tab.c"
    break;

  case 20:
#line 193 "compilador.y"
                   {
                     if (!strcmp(token, "integer")){
                        coloca_tipo(&tabela, pas_integer, num_carrega_tipo);
                        (yyval.int_val) = pas_integer;
                     }   
                     else if (!strcmp(token, "boolean")){   
                        coloca_tipo(&tabela, pas_boolean, num_carrega_tipo);
                        (yyval.int_val) = pas_boolean;
                     }
                     else

                        perror("TIPO ERRADO, CORRIGE, TA ERRADO");
                     }
#line 1665 "compilador.tab.c"
    break;

  case 21:
#line 210 "compilador.y"
                                         {
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc, desloc_num_vars);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               desloc_num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1679 "compilador.tab.c"
    break;

  case 22:
#line 219 "compilador.y"
                    {
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc, desloc_num_vars);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               desloc_num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1693 "compilador.tab.c"
    break;

  case 27:
#line 241 "compilador.y"
                                     {
                        strcpy(pilha_proc_name[pilha_proc], token);
                        pilha_proc++;
                        num_params = 0;
                     }
#line 1703 "compilador.tab.c"
    break;

  case 28:
#line 246 "compilador.y"
                                                {
                        rotulo_a = gerarrotulo(&p_rotulos);
                        sprintf(mepa_buf, "ENPR %d", nivel_lexico);
                        geraCodigo(rotulo_a.rotulo, mepa_buf);

                        strcpy(conteudo.proc.rotulo, rotulo_a.rotulo);
                        conteudo.proc.qtd_parametros = num_params;
                     
                        memcpy(conteudo.proc.lista, lista_parametros, sizeof(struct parametro)*num_params);
                        
                        // for(int i = 0; i < num_params; ++i){
                        //    printf("proc.lista[%d] tem tipo %d e passado por %d \n", i, ti.proc.lista[i].tipo, ti.proc.lista[i].passagem);
                        // }
                        //printf("nome: %s nivel: %d desloca: %d\n",proc_name, nivel_lexico, deslocamento);
                        coloca_deslocamento(&tabela, num_params);

                        s = cria_simbolo(pilha_proc_name[pilha_proc-1], procedimento, nivel_lexico, conteudo, 0);

                        adicionar(&tabela, s);

                     }
#line 1729 "compilador.tab.c"
    break;

  case 29:
#line 266 "compilador.y"
                                       {imprime_tabela(&tabela);}
#line 1735 "compilador.tab.c"
    break;

  case 30:
#line 266 "compilador.y"
                                                                       {

                           sprintf(mepa_buf, "DMEM %d", pilha_num_vars[ponteiro_pilha_num_vars]);
                           geraCodigo(NULL, mepa_buf);
                           ponteiro_pilha_num_vars--;
                           sprintf(mepa_buf, "RTPR %d, %d", nivel_lexico, num_params);
                           geraCodigo(NULL, mepa_buf);
                           rotulo_a = pegarrotulo(&p_rotulos);
                           pilha_proc--;
                           remover_ate(&tabela,pilha_proc_name[pilha_proc]);


                           //falta remover os simbolos da tabela de simbolos
                     }
#line 1754 "compilador.tab.c"
    break;

  case 32:
#line 283 "compilador.y"
                               {num_params = 0;}
#line 1760 "compilador.tab.c"
    break;

  case 35:
#line 288 "compilador.y"
                              {
                  strcpy(pilha_proc_name[pilha_proc], token);
                  pilha_proc++;
                  num_params = 0;
               }
#line 1770 "compilador.tab.c"
    break;

  case 36:
#line 292 "compilador.y"
                                           {
                  rotulo_a = gerarrotulo(&p_rotulos);
                  sprintf(mepa_buf, "ENPR %d", nivel_lexico);
                  geraCodigo(rotulo_a.rotulo, mepa_buf);

                  strcpy(conteudo.proc.rotulo, rotulo_a.rotulo);
                  conteudo.proc.qtd_parametros = num_params;
               
                  memcpy(conteudo.proc.lista, lista_parametros, sizeof(struct parametro)*num_params);
                  
                  // for(int i = 0; i < num_params; ++i){
                  //    printf("proc.lista[%d] tem tipo %d e passado por %d \n", i, ti.proc.lista[i].tipo, ti.proc.lista[i].passagem);
                  // }
                  //printf("nome: %s nivel: %d desloca: %d\n",proc_name, nivel_lexico, deslocamento);
                  coloca_deslocamento(&tabela, num_params);

                  s = cria_simbolo(pilha_proc_name[pilha_proc-1], funcao, nivel_lexico, conteudo, -(4 + num_params));

                  adicionar(&tabela, s);

               }
#line 1796 "compilador.tab.c"
    break;

  case 37:
#line 312 "compilador.y"
                                 {
                  coloca_tipo(&tabela, pas_integer, 1);
               }
#line 1804 "compilador.tab.c"
    break;

  case 38:
#line 314 "compilador.y"
                                       {

                     sprintf(mepa_buf, "DMEM %d", pilha_num_vars[ponteiro_pilha_num_vars]);
                     geraCodigo(NULL, mepa_buf);
                     ponteiro_pilha_num_vars--;
                     sprintf(mepa_buf, "RTPR %d, %d", nivel_lexico, num_params);
                     geraCodigo(NULL, mepa_buf);
                     rotulo_a = pegarrotulo(&p_rotulos);
                     pilha_proc--;
                     remover_ate(&tabela,pilha_proc_name[pilha_proc]);

               }
#line 1821 "compilador.tab.c"
    break;

  case 42:
#line 337 "compilador.y"
                  {
                     num_carrega_tipo = 0;
                  }
#line 1829 "compilador.tab.c"
    break;

  case 43:
#line 340 "compilador.y"
                                                         {
                     for(int i = num_params; i > num_params - num_carrega_tipo; i--){
                        lista_parametros[i-1].tipo = (yyvsp[0].int_val);
                     }
                     num_carrega_tipo++;
                   }
#line 1840 "compilador.tab.c"
    break;

  case 44:
#line 350 "compilador.y"
                                                               {num_params++;}
#line 1846 "compilador.tab.c"
    break;

  case 45:
#line 351 "compilador.y"
                                    {num_params++;}
#line 1852 "compilador.tab.c"
    break;

  case 46:
#line 356 "compilador.y"
                   {
            cc.param.passagem = parametro_ref;
            param_aux.passagem = parametro_ref;
            lista_parametros[num_params] = param_aux;
            printf("adicionado token [%s]\n", token);
            s = cria_simbolo(token, parametro, nivel_lexico, cc, -1);
            adicionar(&tabela, s);
            num_carrega_tipo++;
         }
#line 1866 "compilador.tab.c"
    break;

  case 47:
#line 365 "compilador.y"
                  {
            cc.param.passagem = parametro_copia;
            param_aux.passagem = parametro_copia;
            lista_parametros[num_params] = param_aux;
            printf("adicionado token [%s]\n", token);
            s = cria_simbolo(token, parametro, nivel_lexico, cc, -1);
            printf("OI %d\n\n\n", num_params);
            printf("TCHAU %d\n\n\n", s.deslocamento);
            adicionar(&tabela, s);
            num_carrega_tipo++;
         }
#line 1882 "compilador.tab.c"
    break;

  case 51:
#line 388 "compilador.y"
                          {printf("ATRIBUICAO/FUNCAO ESCOLHIDA \n");}
#line 1888 "compilador.tab.c"
    break;

  case 58:
#line 395 "compilador.y"
                  {
            printf("OY\n");
            ps = busca(&tabela, token);
            geraCodigo(ps->conteudo.proc.rotulo,"NADA");
            }
#line 1898 "compilador.tab.c"
    break;

  case 59:
#line 399 "compilador.y"
                                  {
               if(rolo_chamada_proc){

               }
            }
#line 1908 "compilador.tab.c"
    break;

  case 61:
#line 408 "compilador.y"
                     {
            ps = busca(&tabela, token);
            if (ps == NULL){
               printf("LABEL NAO ENCONTRADO\n");
               exit(1);
            }
            if (0){
               
            }
            else{
               sprintf(mepa_buf,"DSVR %s, %d, %d",ps->conteudo.proc.rotulo, ps->nivel, nivel_lexico);
               geraCodigo(NULL, mepa_buf);
            }
         }
#line 1927 "compilador.tab.c"
    break;

  case 62:
#line 426 "compilador.y"
               {
            if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
               printf("ERRO: identificador {%s} nao encontrado/nao declarado", token );
               exit(1);
            }
            esquerdo_recursao_func++;
            printf("INDO PARA O ATRIBUI OU PARAMETROS\n");
            printf("identificador achado = %s\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
         }
#line 1941 "compilador.tab.c"
    break;

  case 63:
#line 435 "compilador.y"
                                {
            if ((yyvsp[0].int_val) == 1 )
                esquerdo_recursao_func--;
         }
#line 1950 "compilador.tab.c"
    break;

  case 64:
#line 442 "compilador.y"
                                                  {(yyval.int_val) = 1; printf("ATRIBUICAO ESCOLHIDA \n");}
#line 1956 "compilador.tab.c"
    break;

  case 65:
#line 443 "compilador.y"
                                       {(yyval.int_val) = 2; printf( "FUNCAO ESCOLHIDA \n");}
#line 1962 "compilador.tab.c"
    break;

  case 66:
#line 447 "compilador.y"
                      { printf("ATRIBUICAO ESCOLHIDA - continuacao\n");}
#line 1968 "compilador.tab.c"
    break;

  case 67:
#line 448 "compilador.y"
                            {
                     
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == variavel){
                        if((yyvsp[0].int_val) == esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.tipo){
                           sprintf(mepa_buf, "ARMZ %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           printf ("ERRO: expresao entre tipos incompativeis \n");
                           exit(1);
                        }
                     }else if (esquerdo_func[esquerdo_recursao_func-1]->categoria == parametro){
                        if((yyvsp[0].int_val) == esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo){
                           if (esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_copia ){
                              sprintf(mepa_buf, "ARMZ %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                              geraCodigo(NULL, mepa_buf);
                           }else if (esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_ref){
                              sprintf(mepa_buf, "ARMI %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                              geraCodigo(NULL, mepa_buf);
                           }
                        }else {
                           printf ("ERRO: expresao entre tipos incompativeis \n");
                           exit(1);
                        }
                     } 
                     else if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao){
                         if((yyvsp[0].int_val) == esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.tipo){
                           sprintf(mepa_buf, "ARMZ %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           printf ("ERRO: expresao entre tipos incompativeis \n");
                           exit(1);
                        } 
                     }
                  }
#line 2007 "compilador.tab.c"
    break;

  case 68:
#line 488 "compilador.y"
                     {
                  if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
                        printf("falha ao procurar token %s\n", token);
                     exit(1);
                  }
                  esquerdo_recursao_func++;  //evita de esquerdo_func se sobrescrito dentro de uma chamada recursiva de funcao_ou_ident
                  printf("identificador achado = %s\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
               }
#line 2020 "compilador.tab.c"
    break;

  case 69:
#line 496 "compilador.y"
                                 {
                  if (em_chamada_de_funcao){
                     printf("EM CHAMADA DE FUNCAO AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n");
                     printf("token sendo pesquisado %s, numero atual = %i\n", esquerdo_func[esquerdo_recursao_func-2]->identificador, num_params);
                     printf("por referencia? %i\n", esquerdo_func[esquerdo_recursao_func-2]->conteudo.proc.lista[num_params].tipo);
                     if (esquerdo_func[esquerdo_recursao_func-2]->conteudo.proc.lista[num_params].passagem == parametro_ref){
                        printf("EH UMA REFERENCIA BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB\n");
                        if (esquerdo_func[esquerdo_recursao_func-1]->categoria == variavel){
                           printf("EH UMA VARAIVEL CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC\n");
                           sprintf(mepa_buf, "CREN %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                           geraCodigo(NULL, mepa_buf);
                           (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.tipo;
                        }else if (esquerdo_func[esquerdo_recursao_func-1]->categoria == parametro){
                            printf("EH UMA PARAMETRO DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD\n");
                           if(esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_copia){
                              sprintf(mepa_buf, "CREM %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                              geraCodigo(NULL, mepa_buf);
                              (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                           }else if(esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_ref){
                              sprintf(mepa_buf, "CRVL %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                              geraCodigo(NULL, mepa_buf);
                              (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                           }
                        }
                     }else {
                        if (esquerdo_func[esquerdo_recursao_func-1]->categoria == variavel){
                           sprintf(mepa_buf, "CRVL %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                           geraCodigo(NULL, mepa_buf);
                           (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.tipo;
                        }else if (esquerdo_func[esquerdo_recursao_func-1]->categoria == parametro){
                           if(esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_copia){
                              sprintf(mepa_buf, "CRVL %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                              geraCodigo(NULL, mepa_buf);
                              (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                           }else if(esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_ref){
                              sprintf(mepa_buf, "CRVI %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                              geraCodigo(NULL, mepa_buf);
                              (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                           }
                        }
                     }
                  }else{
                     if (esquerdo_func[esquerdo_recursao_func-1]->categoria == variavel){
                        sprintf(mepa_buf, "CRVL %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                        geraCodigo(NULL, mepa_buf);
                        (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.tipo;
                     }else if (esquerdo_func[esquerdo_recursao_func-1]->categoria == parametro){
                        if(esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_copia){
                           sprintf(mepa_buf, "CRVL %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                           geraCodigo(NULL, mepa_buf);
                           (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                        }else if(esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_ref){
                           sprintf(mepa_buf, "CRVI %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                           geraCodigo(NULL, mepa_buf);
                           (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                        }
                     }
                  }
                  esquerdo_recursao_func--;
               }
#line 2085 "compilador.tab.c"
    break;

  case 70:
#line 559 "compilador.y"
                                                 {num_params = 0; em_chamada_de_funcao = 1;}
#line 2091 "compilador.tab.c"
    break;

  case 71:
#line 559 "compilador.y"
                                                                                                         {em_chamada_de_funcao = 0;}
#line 2097 "compilador.tab.c"
    break;

  case 72:
#line 559 "compilador.y"
                                                                                                                                                      {
                 if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao || esquerdo_func[esquerdo_recursao_func-1]->categoria == procedimento){
                     (yyval.int_val) = undefined_type; //caso seja procedure
                     if (esquerdo_func[esquerdo_recursao_func-1]->conteudo.proc.qtd_parametros != num_params){
                        printf("%d %d\n", esquerdo_func[esquerdo_recursao_func-1]->conteudo.proc.qtd_parametros, num_params);
                        printf("ERRO: numero errado de parametros\n");
                        exit(1);
                     }
                     sprintf(mepa_buf, "CHPR %s, %d", esquerdo_func[esquerdo_recursao_func-1]->conteudo.proc.rotulo , nivel_lexico );
                     geraCodigo(NULL, mepa_buf);
                  }else{
                     printf("ERRO: {%s} nao eh funcao ou procedimento\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
                     exit(1);
                  }
                }
#line 2117 "compilador.tab.c"
    break;

  case 73:
#line 574 "compilador.y"
                                  {
                  if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao || esquerdo_func[esquerdo_recursao_func-1]->categoria == procedimento){
                     (yyval.int_val) = undefined_type; //caso seja procedure
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao){
                        geraCodigo(NULL, "AMEM 1");
                        (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                     sprintf(mepa_buf, "CHPR %s, %d", esquerdo_func[esquerdo_recursao_func-1]->conteudo.proc.rotulo , nivel_lexico );
                     geraCodigo(NULL, mepa_buf);
                  }
                }
#line 2133 "compilador.tab.c"
    break;

  case 74:
#line 587 "compilador.y"
                  {
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao){
                        geraCodigo(NULL, "AMEM 1");
                        (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                  }
#line 2144 "compilador.tab.c"
    break;

  case 75:
#line 596 "compilador.y"
                                              {num_params++; }
#line 2150 "compilador.tab.c"
    break;

  case 76:
#line 597 "compilador.y"
                 {printf("%d\n",num_params); }
#line 2156 "compilador.tab.c"
    break;

  case 77:
#line 597 "compilador.y"
                                                        {num_params++;}
#line 2162 "compilador.tab.c"
    break;

  case 78:
#line 602 "compilador.y"
                                    {
                        //fprintf(stderr, "TERMONOU O BHUR \n");
                        rotulo_a = pegarrotulo(&p_rotulos);
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                  }
#line 2172 "compilador.tab.c"
    break;

  case 79:
#line 610 "compilador.y"
                      {
            if((yyvsp[0].int_val) == pas_boolean){
               rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
               sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
               geraCodigo(NULL, mepa_buf);
            }else{
               exit(1);
            }
         }
#line 2187 "compilador.tab.c"
    break;

  case 80:
#line 620 "compilador.y"
                      {
            rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
            sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
            geraCodigo(NULL, mepa_buf);
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA"); 
         }
#line 2199 "compilador.tab.c"
    break;

  case 83:
#line 635 "compilador.y"
                   {
                        rotulo_a = gerarrotulo(&p_rotulos); //cria um rotulo mas esse e o proximo rotulo vai ser usado como fila e nao como pilha
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                     }
#line 2208 "compilador.tab.c"
    break;

  case 85:
#line 642 "compilador.y"
                               {
                        if((yyvsp[0].int_val) == pas_boolean){
                           rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                           sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           exit(1);
                        }   
                     }
#line 2222 "compilador.tab.c"
    break;

  case 86:
#line 651 "compilador.y"
                               {
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
                        sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
                        geraCodigo(NULL, mepa_buf);
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-1];
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                        remove_n(&p_rotulos, 2);
                     }
#line 2235 "compilador.tab.c"
    break;

  case 87:
#line 663 "compilador.y"
                                                       {
               geraCodigo(NULL, (yyvsp[-1].str));
               if ((yyvsp[-2].int_val) == (yyvsp[0].int_val))
                  (yyval.int_val) = pas_boolean;
               else{
                  printf ("ERRO: expressao entre tipos incompativeis \n");
                  exit(1);
               }
            }
#line 2249 "compilador.tab.c"
    break;

  case 88:
#line 672 "compilador.y"
                                {
               (yyval.int_val) = (yyvsp[0].int_val);
            }
#line 2257 "compilador.tab.c"
    break;

  case 89:
#line 679 "compilador.y"
                        { (yyval.str) = "CMIG"; }
#line 2263 "compilador.tab.c"
    break;

  case 90:
#line 680 "compilador.y"
                        { (yyval.str) = "CMME"; }
#line 2269 "compilador.tab.c"
    break;

  case 91:
#line 681 "compilador.y"
                        { (yyval.str) = "CMMA"; }
#line 2275 "compilador.tab.c"
    break;

  case 92:
#line 682 "compilador.y"
                        { (yyval.str) = "CMAG"; }
#line 2281 "compilador.tab.c"
    break;

  case 93:
#line 683 "compilador.y"
                        { (yyval.str) = "CMEG"; }
#line 2287 "compilador.tab.c"
    break;

  case 94:
#line 684 "compilador.y"
                        { (yyval.str) = "CMDG"; }
#line 2293 "compilador.tab.c"
    break;

  case 95:
#line 689 "compilador.y"
                     {
                  (yyval.int_val) = (yyvsp[0].int_val);
               }
#line 2301 "compilador.tab.c"
    break;

  case 96:
#line 692 "compilador.y"
                            {
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2314 "compilador.tab.c"
    break;

  case 97:
#line 700 "compilador.y"
                             {
                  geraCodigo(NULL, "INVR");
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2328 "compilador.tab.c"
    break;

  case 98:
#line 709 "compilador.y"
                                               {
                  geraCodigo( NULL, "SOMA");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2342 "compilador.tab.c"
    break;

  case 99:
#line 718 "compilador.y"
                                               {
                  geraCodigo( NULL, "SUBT");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2356 "compilador.tab.c"
    break;

  case 100:
#line 727 "compilador.y"
                                            {
                  geraCodigo( NULL, "DISJ");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2370 "compilador.tab.c"
    break;

  case 101:
#line 739 "compilador.y"
             {
         (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 2378 "compilador.tab.c"
    break;

  case 102:
#line 742 "compilador.y"
                         {
         geraCodigo( NULL, "DIVI");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 2392 "compilador.tab.c"
    break;

  case 103:
#line 751 "compilador.y"
                           {
         geraCodigo( NULL, "MULT");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 2406 "compilador.tab.c"
    break;

  case 104:
#line 760 "compilador.y"
                         {
          geraCodigo( NULL, "CONJ");
          if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
            (yyval.int_val) = (yyvsp[0].int_val);
          else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
          }
      }
#line 2420 "compilador.tab.c"
    break;

  case 105:
#line 772 "compilador.y"
                      {
        (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 2428 "compilador.tab.c"
    break;

  case 106:
#line 775 "compilador.y"
               {
         sprintf (mepa_buf, "CRCT %d", atoi(token));
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_integer;
      }
#line 2438 "compilador.tab.c"
    break;

  case 107:
#line 780 "compilador.y"
                   {
         if(strcmp(token, "True") == 0)
            sprintf (mepa_buf, "CRCT %d", 1);
         else
            sprintf (mepa_buf, "CRCT %d", 0);
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_boolean;
      }
#line 2451 "compilador.tab.c"
    break;

  case 108:
#line 788 "compilador.y"
                                                          {
         (yyval.int_val) = (yyvsp[-1].int_val);
      }
#line 2459 "compilador.tab.c"
    break;

  case 109:
#line 791 "compilador.y"
                 {
         if((yyvsp[0].int_val) == pas_boolean){
            geraCodigo(NULL, "NEGA");
            (yyval.int_val) = (yyvsp[0].int_val);
         }   
         else
            exit(1);   
      }
#line 2472 "compilador.tab.c"
    break;

  case 113:
#line 814 "compilador.y"
                       {
                     geraCodigo(NULL, "LEIT");
                     printf("buscando token %s\n", token);
                     if((ps = busca(&tabela, token)) != NULL){
                        sprintf(mepa_buf, "ARMZ %d, %d",ps->nivel , ps->deslocamento );
                        geraCodigo(NULL, mepa_buf);
                     }else{
                        printf("falha ao procurar token %s\n", token);
                        exit(1);
                     }
                  }
#line 2488 "compilador.tab.c"
    break;

  case 117:
#line 839 "compilador.y"
                                    {
                     if ((yyvsp[0].int_val) != undefined_type)
                        geraCodigo(NULL, "IMPR");
                     else {
                        printf("parametro incompativel\n");
                     }   
                  }
#line 2500 "compilador.tab.c"
    break;


#line 2504 "compilador.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 851 "compilador.y"


int main (int argc, char** argv) {
   FILE* fp;
   extern FILE* yyin;

   if (argc<2 || argc>2) {
         printf("usage compilador <arq>a %d\n", argc);
         return(-1);
      }

   fp=fopen (argv[1], "r");
   if (fp == NULL) {
      printf("usage compilador <arq>b\n");
      return(-1);
   }


/* -------------------------------------------------------------------
 *  Inicia a Tabela de S�mbolos
 * ------------------------------------------------------------------- */



   yyin=fp;
   yyparse();

   imprime_tabela(&tabela);

   return 0;
}
