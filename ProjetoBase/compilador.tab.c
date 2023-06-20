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
char mepa_buf[128];
int nivel_lexico;
int num_carrega_tipo;
struct cat_conteudo cc;
struct tab_simb *tabela;
struct simbolo s ,lista_simbolos[128];
struct parametro lista_parametros[128];
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
int ponteiro_pilha_num_vars = 0;


enum tipo_dado{
    t_int,
    t_bool
};



#line 111 "compilador.tab.c"

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
#line 58 "compilador.y"

   char * str;  // define o tipo str
   int int_val; // define o tipo int_val
   struct simbolo *simb;

#line 217 "compilador.tab.c"

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
#define YYLAST   131

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  174

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
       0,    89,    89,    89,   105,   111,   119,   110,   132,   132,
     143,   147,   148,   150,   150,   157,   169,   177,   188,   192,
     193,   194,   198,   202,   230,   230,   198,   246,   246,   247,
     251,   254,   281,   251,   289,   290,   294,   294,   309,   309,
     330,   331,   332,   337,   338,   339,   340,   341,   342,   348,
     348,   364,   365,   369,   369,   401,   401,   430,   430,   445,
     458,   467,   468,   468,   473,   477,   477,   495,   503,   503,
     509,   509,   516,   516,   537,   546,   553,   554,   555,   556,
     557,   558,   563,   566,   574,   583,   592,   601,   613,   616,
     625,   634,   646,   649,   654,   662,   665,   679,   683,   684,
     688,   704,   708,   709,   713
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
  "input_idents", "bloco", "$@2", "$@3", "parte_declara_vars", "$@4",
  "declaracao_de_vars", "declaracao_de_var", "$@5", "tipo", "lista_idents",
  "comando_composto", "parte_declara_sub_rotinas", "declara_procedimento",
  "$@6", "$@7", "$@8", "$@9", "parametros_formais_ou_nada", "$@10",
  "declara_function", "$@11", "$@12", "$@13", "lista_params_formais",
  "parametro", "$@14", "$@15", "comandos", "comando", "atribui_ou_func",
  "$@16", "continua_atibui_ou_func", "atribui_contiunuacao", "$@17",
  "funcao_ou_ident", "$@18", "parametros_ou_nada", "$@19",
  "empilha_retorno", "lista_params", "$@20", "comando_condicional",
  "if_then", "$@21", "cond_else", "else_ou_nada", "$@22",
  "comando_repetitivo", "$@23", "while_resto", "$@24", "expressao",
  "relacao", "expressao_simples", "termo", "fator", "leitura",
  "parametros_de_leitura", "parametro_leitura", "escrita",
  "parametros_de_escrita", "parametro_escrita", YY_NULLPTR
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

#define YYPACT_NINF (-140)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -140,     5,     8,  -140,    31,    10,    43,    12,    16,    48,
      21,  -140,    51,    57,  -140,    58,  -140,  -140,  -140,    15,
      66,  -140,    74,    82,    83,    87,  -140,  -140,  -140,  -140,
      54,  -140,  -140,     7,  -140,    85,    67,    95,    95,  -140,
       0,    97,    98,  -140,     1,  -140,  -140,  -140,    81,  -140,
      84,  -140,  -140,  -140,  -140,    99,  -140,  -140,  -140,    90,
       0,  -140,    34,  -140,  -140,    34,    34,  -140,  -140,    35,
     -20,  -140,    92,     0,    44,  -140,  -140,  -140,  -140,     0,
    -140,    24,   101,   102,  -140,  -140,  -140,   105,    -3,  -140,
    -140,   -20,   -20,    91,    34,  -140,  -140,  -140,  -140,  -140,
    -140,    34,    34,     0,    34,    34,    34,  -140,    78,  -140,
     -17,    80,  -140,  -140,    44,  -140,  -140,   100,  -140,    86,
    -140,  -140,    89,  -140,     0,  -140,  -140,  -140,    44,   -20,
     -20,   -20,   -17,  -140,  -140,  -140,  -140,    92,  -140,     0,
    -140,    93,  -140,   103,  -140,    24,    51,   107,  -140,  -140,
    -140,  -140,  -140,    44,   108,    94,  -140,  -140,    51,    88,
       0,  -140,    96,  -140,   111,  -140,  -140,     0,  -140,  -140,
    -140,   112,  -140,  -140
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     4,    10,     0,     5,     0,     3,    21,    13,     6,
       9,    12,     0,     0,     0,     0,    19,    20,    11,    17,
       0,    22,    30,    42,     7,     0,     0,    29,    29,    49,
       0,     0,     0,    44,     0,    41,    43,    45,     0,    46,
       0,    47,    48,    16,    15,     0,    27,    23,    31,    60,
       0,    55,     0,    94,    93,     0,     0,    92,    65,    75,
      82,    88,     0,     0,    70,    18,    68,    64,    67,     0,
      14,     0,     0,     0,    53,    50,    52,    59,     0,    60,
      96,    83,    84,     0,     0,    78,    77,    76,    80,    79,
      81,     0,     0,     0,     0,     0,     0,   100,     0,    99,
     104,     0,   103,    40,    70,    71,    72,     0,    38,     0,
      35,    24,     0,    51,     0,    57,    95,    56,    70,    87,
      85,    86,    74,    89,    91,    90,    97,     0,   101,     0,
      69,     0,    36,     0,    28,     0,    10,     0,    54,    62,
      66,    98,   102,    70,     0,     0,    34,    25,    10,     0,
       0,    73,     0,    39,     0,    32,    58,     0,    63,    37,
      26,     0,    61,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,  -139,  -140,  -140,  -140,  -140,  -140,
     104,  -140,  -140,  -140,   106,  -140,  -140,  -140,  -140,  -140,
    -140,    77,  -140,  -140,  -140,  -140,  -140,  -140,   -25,  -140,
    -140,  -140,   -73,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
      32,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,   -79,  -140,   -57,   -43,   -56,
    -140,  -140,   -14,  -140,  -140,   -13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     8,    13,    17,    25,    14,    15,    20,
      21,    22,    55,    30,    43,    19,    26,    37,    82,   146,
     164,    57,    81,    27,    38,    83,   171,   119,   120,   154,
     143,    44,    45,    46,    59,    85,   123,   124,    67,    89,
      86,   149,    87,   159,   160,    47,    48,    93,    77,    78,
     114,    49,    50,   115,   141,    68,   103,    69,    70,    71,
      51,   108,   109,    52,   111,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     116,   113,   126,    88,    60,     3,    90,   157,    74,   104,
     105,     4,    75,    61,     6,    94,   110,    33,     9,   165,
      39,    10,    91,    92,   106,   101,   102,    40,    12,    94,
     -70,    62,    23,    24,    63,    64,   117,   118,    60,   101,
     102,   140,    65,    66,     5,   148,   132,    61,   133,   134,
     135,   129,    41,    42,    33,   150,     7,    39,   130,   131,
      35,    11,    36,    -8,    40,    62,    16,    94,    63,    64,
      18,    95,    96,    97,    98,    99,   100,   101,   102,   -13,
     161,   168,   110,   136,   137,   138,   139,    29,   172,    41,
      42,   144,   145,   166,   167,    31,    32,    33,    53,    56,
      54,    72,    73,    76,    84,   107,    80,    79,   121,   125,
     122,   155,   128,   142,   158,    58,   162,   153,   170,   173,
     156,   127,   147,   151,    28,     0,   152,   163,     0,   169,
       0,    34
};

static const yytype_int16 yycheck[] =
{
      79,    74,     5,    60,     4,     0,    62,   146,     7,    29,
      30,     3,    11,    13,     4,    32,    73,    10,     6,   158,
      13,     5,    65,    66,    44,    42,    43,    20,     7,    32,
      23,    31,    17,    18,    34,    35,    12,    13,     4,    42,
      43,   114,    42,    43,    13,   124,   103,    13,   104,   105,
     106,    94,    45,    46,    10,   128,    13,    13,   101,   102,
       6,    13,     8,    12,    20,    31,     9,    32,    34,    35,
      12,    36,    37,    38,    39,    40,    41,    42,    43,    13,
     153,   160,   139,     5,     6,     5,     6,    13,   167,    45,
      46,     5,     6,     5,     6,    13,    13,    10,    13,     4,
      33,     4,     4,    22,    14,    13,     7,    23,     7,     4,
       8,     8,    21,    13,     7,    38,     8,    24,     7,     7,
     145,    89,    33,   137,    20,    -1,   139,    33,    -1,    33,
      -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     3,    13,     4,    13,    51,     6,
       5,    13,     7,    52,    55,    56,     9,    53,    12,    63,
      57,    58,    59,    17,    18,    54,    64,    71,    58,    13,
      61,    13,    13,    10,    62,     6,     8,    65,    72,    13,
      20,    45,    46,    62,    79,    80,    81,    93,    94,    99,
     100,   108,   111,    13,    33,    60,     4,    69,    69,    82,
       4,    13,    31,    34,    35,    42,    43,    86,   103,   105,
     106,   107,     4,     4,     7,    11,    22,    96,    97,    23,
       7,    70,    66,    73,    14,    83,    88,    90,   105,    87,
     107,   106,   106,    95,    32,    36,    37,    38,    39,    40,
      41,    42,    43,   104,    29,    30,    44,    13,   109,   110,
     105,   112,   113,    80,    98,   101,   103,    12,    13,    75,
      76,     7,     8,    84,    85,     4,     5,    88,    21,   106,
     106,   106,   105,   107,   107,   107,     5,     6,     5,     6,
      80,   102,    13,    78,     5,     6,    67,    33,   103,    89,
      80,   110,   113,    24,    77,     8,    76,    52,     7,    91,
      92,    80,     8,    33,    68,    52,     5,     6,   103,    33,
       7,    74,   103,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    51,    53,    54,    52,    56,    55,
      55,    57,    57,    59,    58,    60,    61,    61,    62,    63,
      63,    63,    65,    66,    67,    68,    64,    70,    69,    69,
      72,    73,    74,    71,    75,    75,    77,    76,    78,    76,
      79,    79,    79,    80,    80,    80,    80,    80,    80,    82,
      81,    83,    83,    85,    84,    87,    86,    89,    88,    88,
      90,    91,    92,    91,    93,    95,    94,    96,    98,    97,
     100,    99,   102,   101,   103,   103,   104,   104,   104,   104,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   108,   109,   109,
     110,   111,   112,   112,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     3,     0,     0,     5,     0,     3,
       0,     2,     1,     0,     5,     1,     3,     1,     3,     2,
       2,     0,     0,     0,     0,     0,    10,     0,     4,     0,
       0,     0,     0,    11,     3,     1,     0,     5,     0,     4,
       3,     1,     0,     1,     1,     1,     1,     1,     1,     0,
       3,     2,     1,     0,     2,     0,     3,     0,     5,     1,
       0,     3,     0,     2,     2,     0,     5,     1,     0,     3,
       0,     3,     0,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     3,     1,     3,
       3,     3,     1,     1,     1,     3,     2,     4,     3,     1,
       1,     4,     3,     1,     1
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
#line 89 "compilador.y"
             {
             geraCodigo (NULL, "INPP");
             tabela = inicializa();
             p_rotulos = inicializa_rotulos();
             nivel_lexico = 0;
             }
#line 1532 "compilador.tab.c"
    break;

  case 3:
#line 97 "compilador.y"
                         {
             sprintf (mepa_buf, "DMEM %d", num_vars_por_nivel[0]);
             geraCodigo (NULL, mepa_buf);
             geraCodigo (NULL, "PARA");
             }
#line 1542 "compilador.tab.c"
    break;

  case 5:
#line 111 "compilador.y"
            {
            //fprintf(stderr,"COISA DE TESTE \n");
            rotulo_a = gerarrotulo(&p_rotulos);
            sprintf(mepa_buf, "DSVS %s", rotulo_a.rotulo);
            geraCodigo (NULL, mepa_buf);
            nivel_lexico++;
            }
#line 1554 "compilador.tab.c"
    break;

  case 6:
#line 119 "compilador.y"
            {
            nivel_lexico --;
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA");
            }
#line 1564 "compilador.tab.c"
    break;

  case 7:
#line 125 "compilador.y"
            {
            }
#line 1571 "compilador.tab.c"
    break;

  case 8:
#line 132 "compilador.y"
                    {num_vars = 0;

                  }
#line 1579 "compilador.tab.c"
    break;

  case 9:
#line 135 "compilador.y"
                                                               {
					   sprintf(mepa_buf, "AMEM %d", num_vars);
                  ponteiro_pilha_num_vars++;
                  pilha_num_vars[ponteiro_pilha_num_vars] = num_vars;
					   geraCodigo(NULL,mepa_buf);
					   }
#line 1590 "compilador.tab.c"
    break;

  case 13:
#line 150 "compilador.y"
                   {
                     num_carrega_tipo = 0;
                  }
#line 1598 "compilador.tab.c"
    break;

  case 15:
#line 157 "compilador.y"
                   {
                     if (!strcmp(token, "integer"))
                        coloca_tipo(&tabela, pas_integer, num_carrega_tipo);
                     else if (!strcmp(token, "boolean"))
                        coloca_tipo(&tabela, pas_boolean, num_carrega_tipo);
                     else
                        perror("TIPO ERRADO, CORRIGE, TA ERRADO");
                     }
#line 1611 "compilador.tab.c"
    break;

  case 16:
#line 169 "compilador.y"
                                         {
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc, num_vars);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1624 "compilador.tab.c"
    break;

  case 17:
#line 177 "compilador.y"
                    {
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc, num_vars);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1637 "compilador.tab.c"
    break;

  case 22:
#line 198 "compilador.y"
                                     {
                        strcpy(proc_name, token);
                        num_params = 0;
                     }
#line 1646 "compilador.tab.c"
    break;

  case 23:
#line 202 "compilador.y"
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

                        s = cria_simbolo(proc_name, procedimento, nivel_lexico, conteudo, 0);

                        adicionar(&tabela, s);

                        // atribui o deslocamento correto e coloca na pilha os símbolos
                        //for(int i = num_params-1; i >= 0; --i){
                           //lista_simbolos[i].conteudo.param.deslocamento = -4 + (i - (num_params-1)); 
                           //printf(">>>>>>>>> Parametro %s tem deslocamento %d\n", lista_simbolos[i].identificador, lista_simbolos[i].conteudo.param.deslocamento);
                           //adicionar(&tabela, lista_simbolos[i]);
                        //}
                       // rot_num++; // para o desvio de procedures dentro dessa procedure
                        //pilha_int_empilhar(&pilha_amem, num_params);

                     }
#line 1680 "compilador.tab.c"
    break;

  case 24:
#line 230 "compilador.y"
                                       {imprime_tabela(&tabela);}
#line 1686 "compilador.tab.c"
    break;

  case 25:
#line 230 "compilador.y"
                                                                       {

                           sprintf(mepa_buf, "DMEM %d", pilha_num_vars[ponteiro_pilha_num_vars]);
                           geraCodigo(NULL, mepa_buf);
                           ponteiro_pilha_num_vars--;
                           sprintf(mepa_buf, "RTPR %d, %d", nivel_lexico, num_params);
                           geraCodigo(NULL, mepa_buf);
                           rotulo_a = pegarrotulo(&p_rotulos);
                           remover_ate(&tabela,proc_name);


                           //falta remover os simbolos da tabela de simbolos
                     }
#line 1704 "compilador.tab.c"
    break;

  case 27:
#line 246 "compilador.y"
                               {num_params = 0;}
#line 1710 "compilador.tab.c"
    break;

  case 30:
#line 251 "compilador.y"
                              {
                  strcpy(proc_name, token);
                  num_params = 0;
               }
#line 1719 "compilador.tab.c"
    break;

  case 31:
#line 254 "compilador.y"
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

                  s = cria_simbolo(proc_name, procedimento, nivel_lexico, conteudo, 0);

                  adicionar(&tabela, s);

                  // atribui o deslocamento correto e coloca na pilha os símbolos
                  for(int i = num_params-1; i >= -1; --i){
                     lista_simbolos[i].deslocamento = -4 + (i - (num_params-1)); 
                     printf(">>>>>>>>> Parametro %s tem deslocamento %d\n", lista_simbolos[i].identificador, lista_simbolos[i].deslocamento);
                     adicionar(&tabela, lista_simbolos[i]);
                  }
                  // rot_num++; // para o desvio de procedures dentro dessa procedure
                  //pilha_int_empilhar(&pilha_amem, num_params);
               }
#line 1752 "compilador.tab.c"
    break;

  case 32:
#line 281 "compilador.y"
                                                        {
                  sprintf(mepa_buf, "RTPR %d, %d", nivel_lexico, 9999);
                  geraCodigo(NULL, mepa_buf);
               }
#line 1761 "compilador.tab.c"
    break;

  case 34:
#line 289 "compilador.y"
                                                               {num_params++;}
#line 1767 "compilador.tab.c"
    break;

  case 35:
#line 290 "compilador.y"
                                    {num_params++;}
#line 1773 "compilador.tab.c"
    break;

  case 36:
#line 294 "compilador.y"
                   {
            cc.param.passagem = parametro_ref;
            printf("adicionado token [%s]\n", token);
            s = cria_simbolo(token, parametro, nivel_lexico, cc, -4 - num_params);
         }
#line 1783 "compilador.tab.c"
    break;

  case 37:
#line 298 "compilador.y"
                            {
            if (!strcmp(token, "integer"))
               s.conteudo.param.tipo = pas_integer;
            else if (!strcmp(token, "boolean"))
               s.conteudo.param.tipo = pas_boolean;
            else {
               //fprintf(stderr, "Tipo do parametro formal invalido\n");
               exit(1);
            }
            adicionar(&tabela, s);
         }
#line 1799 "compilador.tab.c"
    break;

  case 38:
#line 309 "compilador.y"
                  {
            cc.param.passagem = parametro_copia;
            printf("adicionado token [%s]\n", token);
            s = cria_simbolo(token, parametro, nivel_lexico, cc, -4 - num_params);
            printf("OI %d\n\n\n", num_params);
            printf("TCHAU %d\n\n\n", s.deslocamento);
         }
#line 1811 "compilador.tab.c"
    break;

  case 39:
#line 315 "compilador.y"
                            {
            if (!strcmp(token, "integer"))
               s.conteudo.param.tipo = pas_integer;
            else if (!strcmp(token, "boolean"))
               s.conteudo.param.tipo = pas_boolean;
            else {
               //fprintf(stderr, "Tipo do parametro formal invalido\n");
               exit(1);
            }
            adicionar(&tabela, s);
         }
#line 1827 "compilador.tab.c"
    break;

  case 43:
#line 337 "compilador.y"
                          {printf("ATRIBUICAO/FUNCAO ESCOLHIDA \n");}
#line 1833 "compilador.tab.c"
    break;

  case 49:
#line 348 "compilador.y"
               {
            if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
               printf("ERRO: identificador {%s} nao encontrado/nao declarado", token );
               exit(1);
            }
            esquerdo_recursao_func++;
            printf("INDO PARA O ATRIBUI OU PARAMETROS\n");
            printf("identificador achado = %s\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
         }
#line 1847 "compilador.tab.c"
    break;

  case 50:
#line 357 "compilador.y"
                                {
            if ((yyvsp[0].int_val) == 1 )
                esquerdo_recursao_func--;
         }
#line 1856 "compilador.tab.c"
    break;

  case 51:
#line 364 "compilador.y"
                                                  {(yyval.int_val) = 1; printf("ATRIBUICAO ESCOLHIDA \n");}
#line 1862 "compilador.tab.c"
    break;

  case 52:
#line 365 "compilador.y"
                                       {(yyval.int_val) = 2; printf( "FUNCAO ESCOLHIDA \n");}
#line 1868 "compilador.tab.c"
    break;

  case 53:
#line 369 "compilador.y"
                      { printf("ATRIBUICAO ESCOLHIDA - continuacao\n");}
#line 1874 "compilador.tab.c"
    break;

  case 54:
#line 370 "compilador.y"
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
                  }
#line 1904 "compilador.tab.c"
    break;

  case 55:
#line 401 "compilador.y"
                     {
                  if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
                        printf("falha ao procurar token %s\n", token);
                     exit(1);
                  }
                  esquerdo_recursao_func++;  //evita de esquerdo_func se sobrescrito dentro de uma chamada recursiva de funcao_ou_ident
                  printf("identificador achado = %s\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
               }
#line 1917 "compilador.tab.c"
    break;

  case 56:
#line 409 "compilador.y"
                                 {
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
                  esquerdo_recursao_func--;
               }
#line 1940 "compilador.tab.c"
    break;

  case 57:
#line 430 "compilador.y"
                                                 {num_params = 0;}
#line 1946 "compilador.tab.c"
    break;

  case 58:
#line 430 "compilador.y"
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
#line 1966 "compilador.tab.c"
    break;

  case 59:
#line 445 "compilador.y"
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
#line 1982 "compilador.tab.c"
    break;

  case 60:
#line 458 "compilador.y"
                  {
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao){
                        geraCodigo(NULL, "AMEM 1");
                        (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                  }
#line 1993 "compilador.tab.c"
    break;

  case 61:
#line 467 "compilador.y"
                                              {num_params++; printf("%dAMAMA\n",num_params);}
#line 1999 "compilador.tab.c"
    break;

  case 62:
#line 468 "compilador.y"
                 {printf("%d\n",num_params); }
#line 2005 "compilador.tab.c"
    break;

  case 63:
#line 468 "compilador.y"
                                                        {num_params++; printf("%dSUGA\n",num_params);}
#line 2011 "compilador.tab.c"
    break;

  case 65:
#line 477 "compilador.y"
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
#line 2026 "compilador.tab.c"
    break;

  case 66:
#line 487 "compilador.y"
                      {
            rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
            sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
            geraCodigo(NULL, mepa_buf);
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA"); 
         }
#line 2038 "compilador.tab.c"
    break;

  case 67:
#line 495 "compilador.y"
                              {
                        //fprintf(stderr, "TERMONOU O BHUR \n");
                        rotulo_a = pegarrotulo(&p_rotulos);
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                  }
#line 2048 "compilador.tab.c"
    break;

  case 68:
#line 503 "compilador.y"
                    { //fprintf(stderr, "TERMONOU o BRUH2 \n"); 
               }
#line 2055 "compilador.tab.c"
    break;

  case 70:
#line 509 "compilador.y"
                   {
                        rotulo_a = gerarrotulo(&p_rotulos); //cria um rotulo mas esse e o proximo rotulo vai ser usado como fila e nao como pilha
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                     }
#line 2064 "compilador.tab.c"
    break;

  case 72:
#line 516 "compilador.y"
                               {
                        if((yyvsp[0].int_val) == pas_boolean){
                           rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                           sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           exit(1);
                        }   
                     }
#line 2078 "compilador.tab.c"
    break;

  case 73:
#line 525 "compilador.y"
                               {
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
                        sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
                        geraCodigo(NULL, mepa_buf);
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-1];
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                        remove_n(&p_rotulos, 2);
                     }
#line 2091 "compilador.tab.c"
    break;

  case 74:
#line 537 "compilador.y"
                                                       {
               geraCodigo(NULL, (yyvsp[-1].str));
               if ((yyvsp[-2].int_val) == (yyvsp[0].int_val))
                  (yyval.int_val) = pas_boolean;
               else{
                  printf ("ERRO: expressao entre tipos incompativeis \n");
                  exit(1);
               }
            }
#line 2105 "compilador.tab.c"
    break;

  case 75:
#line 546 "compilador.y"
                                {
               (yyval.int_val) = (yyvsp[0].int_val);
            }
#line 2113 "compilador.tab.c"
    break;

  case 76:
#line 553 "compilador.y"
                        { (yyval.str) = "CMIG"; }
#line 2119 "compilador.tab.c"
    break;

  case 77:
#line 554 "compilador.y"
                        { (yyval.str) = "CMME"; }
#line 2125 "compilador.tab.c"
    break;

  case 78:
#line 555 "compilador.y"
                        { (yyval.str) = "CMMA"; }
#line 2131 "compilador.tab.c"
    break;

  case 79:
#line 556 "compilador.y"
                        { (yyval.str) = "CMAG"; }
#line 2137 "compilador.tab.c"
    break;

  case 80:
#line 557 "compilador.y"
                        { (yyval.str) = "CMEG"; }
#line 2143 "compilador.tab.c"
    break;

  case 81:
#line 558 "compilador.y"
                        { (yyval.str) = "CMDG"; }
#line 2149 "compilador.tab.c"
    break;

  case 82:
#line 563 "compilador.y"
                     {
                  (yyval.int_val) = (yyvsp[0].int_val);
               }
#line 2157 "compilador.tab.c"
    break;

  case 83:
#line 566 "compilador.y"
                            {
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2170 "compilador.tab.c"
    break;

  case 84:
#line 574 "compilador.y"
                             {
                  geraCodigo(NULL, "INVR");
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2184 "compilador.tab.c"
    break;

  case 85:
#line 583 "compilador.y"
                                               {
                  geraCodigo( NULL, "SOMA");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2198 "compilador.tab.c"
    break;

  case 86:
#line 592 "compilador.y"
                                               {
                  geraCodigo( NULL, "SUBT");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2212 "compilador.tab.c"
    break;

  case 87:
#line 601 "compilador.y"
                                            {
                  geraCodigo( NULL, "DISJ");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2226 "compilador.tab.c"
    break;

  case 88:
#line 613 "compilador.y"
             {
         (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 2234 "compilador.tab.c"
    break;

  case 89:
#line 616 "compilador.y"
                         {
         geraCodigo( NULL, "DIVI");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 2248 "compilador.tab.c"
    break;

  case 90:
#line 625 "compilador.y"
                           {
         geraCodigo( NULL, "MULT");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 2262 "compilador.tab.c"
    break;

  case 91:
#line 634 "compilador.y"
                         {
          geraCodigo( NULL, "CONJ");
          if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
            (yyval.int_val) = (yyvsp[0].int_val);
          else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
          }
      }
#line 2276 "compilador.tab.c"
    break;

  case 92:
#line 646 "compilador.y"
                      {
        (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 2284 "compilador.tab.c"
    break;

  case 93:
#line 649 "compilador.y"
               {
         sprintf (mepa_buf, "CRCT %d", atoi(token));
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_integer;
      }
#line 2294 "compilador.tab.c"
    break;

  case 94:
#line 654 "compilador.y"
                   {
         if(strcmp(token, "True") == 0)
            sprintf (mepa_buf, "CRCT %d", 1);
         else
            sprintf (mepa_buf, "CRCT %d", 0);
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_boolean;
      }
#line 2307 "compilador.tab.c"
    break;

  case 95:
#line 662 "compilador.y"
                                                          {
         (yyval.int_val) = (yyvsp[-1].int_val);
      }
#line 2315 "compilador.tab.c"
    break;

  case 96:
#line 665 "compilador.y"
                 {
         if((yyvsp[0].int_val) == pas_boolean){
            geraCodigo(NULL, "NEGA");
            (yyval.int_val) = (yyvsp[0].int_val);
         }   
         else
            exit(1);   
      }
#line 2328 "compilador.tab.c"
    break;

  case 100:
#line 688 "compilador.y"
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
#line 2344 "compilador.tab.c"
    break;

  case 104:
#line 713 "compilador.y"
                                    {
                     if ((yyvsp[0].int_val) != undefined_type)
                        geraCodigo(NULL, "IMPR");
                     else {
                        printf("parametro incompativel\n");
                     }   
                  }
#line 2356 "compilador.tab.c"
    break;


#line 2360 "compilador.tab.c"

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
#line 725 "compilador.y"


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
