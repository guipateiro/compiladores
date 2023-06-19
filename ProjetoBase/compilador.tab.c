/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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


enum tipo_dado{
    t_int,
    t_bool
};



#line 110 "compilador.tab.c"

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

#include "compilador.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROGRAM = 3,                    /* PROGRAM  */
  YYSYMBOL_ABRE_PARENTESES = 4,            /* ABRE_PARENTESES  */
  YYSYMBOL_FECHA_PARENTESES = 5,           /* FECHA_PARENTESES  */
  YYSYMBOL_VIRGULA = 6,                    /* VIRGULA  */
  YYSYMBOL_PONTO_E_VIRGULA = 7,            /* PONTO_E_VIRGULA  */
  YYSYMBOL_DOIS_PONTOS = 8,                /* DOIS_PONTOS  */
  YYSYMBOL_PONTO = 9,                      /* PONTO  */
  YYSYMBOL_T_BEGIN = 10,                   /* T_BEGIN  */
  YYSYMBOL_T_END = 11,                     /* T_END  */
  YYSYMBOL_VAR = 12,                       /* VAR  */
  YYSYMBOL_IDENT = 13,                     /* IDENT  */
  YYSYMBOL_ATRIBUICAO = 14,                /* ATRIBUICAO  */
  YYSYMBOL_LABEL = 15,                     /* LABEL  */
  YYSYMBOL_TYPE = 16,                      /* TYPE  */
  YYSYMBOL_PROCEDURE = 17,                 /* PROCEDURE  */
  YYSYMBOL_FUNCTION = 18,                  /* FUNCTION  */
  YYSYMBOL_GOTO = 19,                      /* GOTO  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_THEN = 21,                      /* THEN  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_DO = 24,                        /* DO  */
  YYSYMBOL_ARRAY = 25,                     /* ARRAY  */
  YYSYMBOL_OF = 26,                        /* OF  */
  YYSYMBOL_ABRE_CONCHETES = 27,            /* ABRE_CONCHETES  */
  YYSYMBOL_FECHA_CONCHETES = 28,           /* FECHA_CONCHETES  */
  YYSYMBOL_DIV = 29,                       /* DIV  */
  YYSYMBOL_AND = 30,                       /* AND  */
  YYSYMBOL_NOT = 31,                       /* NOT  */
  YYSYMBOL_OR = 32,                        /* OR  */
  YYSYMBOL_TIPO = 33,                      /* TIPO  */
  YYSYMBOL_VALOR_BOOL = 34,                /* VALOR_BOOL  */
  YYSYMBOL_NUMERO = 35,                    /* NUMERO  */
  YYSYMBOL_MAIOR = 36,                     /* MAIOR  */
  YYSYMBOL_MENOR = 37,                     /* MENOR  */
  YYSYMBOL_IGUAL = 38,                     /* IGUAL  */
  YYSYMBOL_MENOR_IGUAL = 39,               /* MENOR_IGUAL  */
  YYSYMBOL_MAIOR_IGUAL = 40,               /* MAIOR_IGUAL  */
  YYSYMBOL_DIFERENTE = 41,                 /* DIFERENTE  */
  YYSYMBOL_MAIS = 42,                      /* MAIS  */
  YYSYMBOL_MENOS = 43,                     /* MENOS  */
  YYSYMBOL_VEZES = 44,                     /* VEZES  */
  YYSYMBOL_READ = 45,                      /* READ  */
  YYSYMBOL_WRITE = 46,                     /* WRITE  */
  YYSYMBOL_LOWER_THAN_ELSE = 47,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_programa = 49,                  /* programa  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_input_idents = 51,              /* input_idents  */
  YYSYMBOL_bloco = 52,                     /* bloco  */
  YYSYMBOL_53_2 = 53,                      /* $@2  */
  YYSYMBOL_54_3 = 54,                      /* $@3  */
  YYSYMBOL_parte_declara_vars = 55,        /* parte_declara_vars  */
  YYSYMBOL_56_4 = 56,                      /* $@4  */
  YYSYMBOL_declaracao_de_vars = 57,        /* declaracao_de_vars  */
  YYSYMBOL_declaracao_de_var = 58,         /* declaracao_de_var  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_tipo = 60,                      /* tipo  */
  YYSYMBOL_lista_idents = 61,              /* lista_idents  */
  YYSYMBOL_comando_composto = 62,          /* comando_composto  */
  YYSYMBOL_parte_declara_sub_rotinas = 63, /* parte_declara_sub_rotinas  */
  YYSYMBOL_declara_procedimento = 64,      /* declara_procedimento  */
  YYSYMBOL_65_6 = 65,                      /* $@6  */
  YYSYMBOL_66_7 = 66,                      /* $@7  */
  YYSYMBOL_67_8 = 67,                      /* $@8  */
  YYSYMBOL_parametros_formais_ou_nada = 68, /* parametros_formais_ou_nada  */
  YYSYMBOL_declara_function = 69,          /* declara_function  */
  YYSYMBOL_lista_paramentro_formais = 70,  /* lista_paramentro_formais  */
  YYSYMBOL_parametro = 71,                 /* parametro  */
  YYSYMBOL_comandos = 72,                  /* comandos  */
  YYSYMBOL_comando = 73,                   /* comando  */
  YYSYMBOL_atribui_ou_func = 74,           /* atribui_ou_func  */
  YYSYMBOL_75_9 = 75,                      /* $@9  */
  YYSYMBOL_continua_atibui_ou_func = 76,   /* continua_atibui_ou_func  */
  YYSYMBOL_atribui_contiunuacao = 77,      /* atribui_contiunuacao  */
  YYSYMBOL_78_10 = 78,                     /* $@10  */
  YYSYMBOL_funcao_ou_ident = 79,           /* funcao_ou_ident  */
  YYSYMBOL_80_11 = 80,                     /* $@11  */
  YYSYMBOL_parametros_ou_nada = 81,        /* parametros_ou_nada  */
  YYSYMBOL_comando_condicional = 82,       /* comando_condicional  */
  YYSYMBOL_if_then = 83,                   /* if_then  */
  YYSYMBOL_84_13 = 84,                     /* $@13  */
  YYSYMBOL_cond_else = 85,                 /* cond_else  */
  YYSYMBOL_else_ou_nada = 86,              /* else_ou_nada  */
  YYSYMBOL_87_14 = 87,                     /* $@14  */
  YYSYMBOL_comando_repetitivo = 88,        /* comando_repetitivo  */
  YYSYMBOL_89_15 = 89,                     /* $@15  */
  YYSYMBOL_while_resto = 90,               /* while_resto  */
  YYSYMBOL_91_16 = 91,                     /* $@16  */
  YYSYMBOL_expressao = 92,                 /* expressao  */
  YYSYMBOL_relacao = 93,                   /* relacao  */
  YYSYMBOL_expressao_simples = 94,         /* expressao_simples  */
  YYSYMBOL_termo = 95,                     /* termo  */
  YYSYMBOL_fator = 96,                     /* fator  */
  YYSYMBOL_leitura = 97,                   /* leitura  */
  YYSYMBOL_parametros_de_leitura = 98,     /* parametros_de_leitura  */
  YYSYMBOL_parametro_leitura = 99,         /* parametro_leitura  */
  YYSYMBOL_escrita = 100,                  /* escrita  */
  YYSYMBOL_parametros_de_escrita = 101,    /* parametros_de_escrita  */
  YYSYMBOL_parametro_escrita = 102         /* parametro_escrita  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   135

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
       0,    84,    84,    84,   100,   106,   114,   105,   127,   127,
     136,   140,   141,   143,   143,   150,   162,   171,   183,   187,
     188,   189,   193,   197,   225,   193,   233,   234,   238,   239,
     244,   245,   249,   250,   255,   256,   257,   262,   263,   264,
     265,   266,   267,   273,   273,   287,   288,   292,   292,   324,
     324,   370,   390,   394,   394,   411,   420,   420,   425,   425,
     432,   432,   453,   462,   469,   470,   471,   472,   473,   474,
     479,   482,   490,   499,   508,   517,   529,   532,   541,   550,
     562,   565,   570,   578,   581,   595,   599,   600,   604,   620,
     624,   625,   629
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PROGRAM",
  "ABRE_PARENTESES", "FECHA_PARENTESES", "VIRGULA", "PONTO_E_VIRGULA",
  "DOIS_PONTOS", "PONTO", "T_BEGIN", "T_END", "VAR", "IDENT", "ATRIBUICAO",
  "LABEL", "TYPE", "PROCEDURE", "FUNCTION", "GOTO", "IF", "THEN", "ELSE",
  "WHILE", "DO", "ARRAY", "OF", "ABRE_CONCHETES", "FECHA_CONCHETES", "DIV",
  "AND", "NOT", "OR", "TIPO", "VALOR_BOOL", "NUMERO", "MAIOR", "MENOR",
  "IGUAL", "MENOR_IGUAL", "MAIOR_IGUAL", "DIFERENTE", "MAIS", "MENOS",
  "VEZES", "READ", "WRITE", "LOWER_THAN_ELSE", "$accept", "programa",
  "$@1", "input_idents", "bloco", "$@2", "$@3", "parte_declara_vars",
  "$@4", "declaracao_de_vars", "declaracao_de_var", "$@5", "tipo",
  "lista_idents", "comando_composto", "parte_declara_sub_rotinas",
  "declara_procedimento", "$@6", "$@7", "$@8",
  "parametros_formais_ou_nada", "declara_function",
  "lista_paramentro_formais", "parametro", "comandos", "comando",
  "atribui_ou_func", "$@9", "continua_atibui_ou_func",
  "atribui_contiunuacao", "$@10", "funcao_ou_ident", "$@11",
  "parametros_ou_nada", "comando_condicional", "if_then", "$@13",
  "cond_else", "else_ou_nada", "$@14", "comando_repetitivo", "$@15",
  "while_resto", "$@16", "expressao", "relacao", "expressao_simples",
  "termo", "fator", "leitura", "parametros_de_leitura",
  "parametro_leitura", "escrita", "parametros_de_escrita",
  "parametro_escrita", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
#endif

#define YYPACT_NINF (-91)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-59)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -91,    12,    20,   -91,    15,    13,    28,    19,    40,    48,
      26,   -91,    51,    60,   -91,    69,   -91,   -91,   -91,    21,
      81,   -91,    83,    84,    86,    88,   -91,   -91,   -91,   -91,
      10,   -91,     6,    14,   -91,    87,    62,    97,    54,    70,
     -91,    22,    98,   100,   -91,     4,   -91,   -91,   -91,    89,
     -91,    90,   -91,   -91,   -91,   -91,    99,    54,   -91,    92,
     101,    78,   -91,   103,    93,    22,   -91,    58,   -91,   -91,
      58,    58,   -91,   -91,    36,   -23,   -91,    95,    22,     9,
     -91,   -91,   -91,   -91,    22,   -91,    80,   105,   106,    91,
     107,    54,    51,   -91,   -91,   -91,     0,   -91,   -91,   -23,
     -23,    96,    58,   -91,   -91,   -91,   -91,   -91,   -91,    58,
      58,    22,    58,    58,    58,   -91,    82,   -91,   -12,    85,
     -91,   -91,     9,   -91,   -91,   -91,    51,    94,   -91,   102,
     -91,   109,   -91,    22,   -91,   -91,     9,   -23,   -23,   -23,
     -12,   -91,   -91,   -91,   -91,    95,   -91,    22,   -91,   104,
     -91,   -91,   111,   -91,   -91,   -91,   -91,   -91,     9,   112,
      51,   -91,   -91,   113,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     4,    10,     0,     5,     0,     3,    21,    13,     6,
       9,    12,     0,     0,     0,     0,    19,    20,    11,    17,
       0,    22,     0,    36,     7,     0,     0,    27,     0,     0,
      43,     0,     0,     0,    38,     0,    35,    37,    39,     0,
      40,     0,    41,    42,    16,    15,     0,     0,    23,     0,
       0,     0,    31,     0,    51,     0,    49,     0,    82,    81,
       0,     0,    80,    53,    63,    70,    76,     0,     0,    58,
      18,    56,    52,    55,     0,    14,     0,     0,     0,     0,
       0,     0,    10,    47,    44,    46,     0,    51,    84,    71,
      72,     0,     0,    66,    65,    64,    68,    67,    69,     0,
       0,     0,     0,     0,     0,    88,     0,    87,    92,     0,
      91,    34,    58,    59,    60,    26,    10,     0,    33,     0,
      30,     0,    45,     0,    83,    50,    58,    75,    73,    74,
      62,    77,    79,    78,    85,     0,    89,     0,    57,     0,
      24,    32,     0,    29,    48,    54,    86,    90,    58,     0,
      10,    61,    25,     0,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -91,   -91,   -90,   -91,   -91,   -91,   -91,   -91,
     110,   -91,   -91,   -91,   108,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,    64,    31,   -91,   -78,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,    29,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -81,   -91,   -65,   -62,   -63,   -91,
     -91,   -22,   -91,   -91,   -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     8,    13,    17,    25,    14,    15,    20,
      21,    22,    56,    30,    44,    19,    26,    37,    87,   159,
      58,    27,    61,    62,    45,    46,    47,    64,    94,   132,
     133,    72,    97,    95,    48,    49,   101,    82,    83,   122,
      50,    51,   123,   149,    73,   111,    74,    75,    76,    52,
     116,   117,    53,   119,   120
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      96,   121,   131,   124,    98,   134,   112,   113,    99,   100,
      38,    79,     3,   118,    39,    80,    35,     6,    36,    33,
     102,   114,    40,     4,    33,     9,    65,    40,     5,    41,
     109,   110,   102,    12,    41,    66,   150,   -58,    23,    24,
     137,     7,   109,   110,   148,    10,   140,   138,   139,   141,
     142,   143,   154,    67,    42,    43,    68,    69,   155,    42,
      43,    11,    65,    -8,    70,    71,    59,    60,   102,    16,
     163,    66,   103,   104,   105,   106,   107,   108,   109,   110,
     161,    18,   118,    90,    91,   125,    91,   144,   145,    67,
     146,   147,    68,    69,   -13,    55,    29,    31,    33,    32,
      54,    57,    77,    63,    78,    88,    85,    93,   115,    89,
      92,    81,   126,    84,   127,   129,   153,   136,   160,   162,
     164,    86,   130,   156,   128,     0,   135,   151,   158,   157,
      28,     0,     0,    34,     0,   152
};

static const yytype_int16 yycheck[] =
{
      65,    79,    92,    84,    67,     5,    29,    30,    70,    71,
       4,     7,     0,    78,     8,    11,     6,     4,     8,    10,
      32,    44,    13,     3,    10,     6,     4,    13,    13,    20,
      42,    43,    32,     7,    20,    13,   126,    23,    17,    18,
     102,    13,    42,    43,   122,     5,   111,   109,   110,   112,
     113,   114,   133,    31,    45,    46,    34,    35,   136,    45,
      46,    13,     4,    12,    42,    43,    12,    13,    32,     9,
     160,    13,    36,    37,    38,    39,    40,    41,    42,    43,
     158,    12,   147,     5,     6,     5,     6,     5,     6,    31,
       5,     6,    34,    35,    13,    33,    13,    13,    10,    13,
      13,     4,     4,    33,     4,    13,     7,    14,    13,     8,
       7,    22,     7,    23,     8,     8,     7,    21,     7,     7,
       7,    57,    91,   145,    33,    -1,    97,    33,    24,   147,
      20,    -1,    -1,    25,    -1,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     3,    13,     4,    13,    51,     6,
       5,    13,     7,    52,    55,    56,     9,    53,    12,    63,
      57,    58,    59,    17,    18,    54,    64,    69,    58,    13,
      61,    13,    13,    10,    62,     6,     8,    65,     4,     8,
      13,    20,    45,    46,    62,    72,    73,    74,    82,    83,
      88,    89,    97,   100,    13,    33,    60,     4,    68,    12,
      13,    70,    71,    33,    75,     4,    13,    31,    34,    35,
      42,    43,    79,    92,    94,    95,    96,     4,     4,     7,
      11,    22,    85,    86,    23,     7,    70,    66,    13,     8,
       5,     6,     7,    14,    76,    81,    94,    80,    96,    95,
      95,    84,    32,    36,    37,    38,    39,    40,    41,    42,
      43,    93,    29,    30,    44,    13,    98,    99,    94,   101,
     102,    73,    87,    90,    92,     5,     7,     8,    33,     8,
      71,    52,    77,    78,     5,    81,    21,    95,    95,    95,
      94,    96,    96,    96,     5,     6,     5,     6,    73,    91,
      52,    33,    33,     7,    92,    73,    99,   102,    24,    67,
       7,    73,     7,    52,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    51,    53,    54,    52,    56,    55,
      55,    57,    57,    59,    58,    60,    61,    61,    62,    63,
      63,    63,    65,    66,    67,    64,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    73,    73,    73,
      73,    73,    73,    75,    74,    76,    76,    78,    77,    80,
      79,    81,    82,    84,    83,    85,    87,    86,    89,    88,
      91,    90,    92,    92,    93,    93,    93,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    98,    98,    99,   100,
     101,   101,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     3,     0,     0,     5,     0,     3,
       0,     2,     1,     0,     5,     1,     3,     1,     3,     2,
       2,     0,     0,     0,     0,     9,     3,     0,    10,     7,
       3,     1,     4,     3,     3,     1,     0,     1,     1,     1,
       1,     1,     1,     0,     3,     2,     1,     0,     2,     0,
       3,     0,     2,     0,     5,     1,     0,     3,     0,     3,
       0,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     1,     3,     3,     3,
       1,     1,     1,     3,     2,     4,     3,     1,     1,     4,
       3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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
  case 2: /* $@1: %empty  */
#line 84 "compilador.y"
             {
             geraCodigo (NULL, "INPP");
             tabela = inicializa();
             p_rotulos = inicializa_rotulos();
             nivel_lexico = 0;
             }
#line 1337 "compilador.tab.c"
    break;

  case 3: /* programa: $@1 PROGRAM IDENT ABRE_PARENTESES input_idents FECHA_PARENTESES PONTO_E_VIRGULA bloco PONTO  */
#line 92 "compilador.y"
                         {
             sprintf (mepa_buf, "DMEM %d", num_vars_por_nivel[0]);
             geraCodigo (NULL, mepa_buf);
             geraCodigo (NULL, "PARA");
             }
#line 1347 "compilador.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 106 "compilador.y"
            {
            fprintf(stderr,"COISA DE TESTE \n");
            rotulo_a = gerarrotulo(&p_rotulos);
            sprintf(mepa_buf, "DSVS %s", rotulo_a.rotulo);
            geraCodigo (NULL, mepa_buf);
            nivel_lexico++;
            }
#line 1359 "compilador.tab.c"
    break;

  case 6: /* $@3: %empty  */
#line 114 "compilador.y"
            {
            nivel_lexico --;
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA");
            }
#line 1369 "compilador.tab.c"
    break;

  case 7: /* bloco: parte_declara_vars $@2 parte_declara_sub_rotinas $@3 comando_composto  */
#line 120 "compilador.y"
            {
            }
#line 1376 "compilador.tab.c"
    break;

  case 8: /* $@4: %empty  */
#line 127 "compilador.y"
                    {num_vars = 0;

                  }
#line 1384 "compilador.tab.c"
    break;

  case 9: /* parte_declara_vars: $@4 VAR declaracao_de_vars  */
#line 130 "compilador.y"
                                                               {
					   sprintf(mepa_buf, "AMEM %d", num_vars);
					   geraCodigo(NULL,mepa_buf);
					   }
#line 1393 "compilador.tab.c"
    break;

  case 13: /* $@5: %empty  */
#line 143 "compilador.y"
                   {
                     num_carrega_tipo = 0;
                  }
#line 1401 "compilador.tab.c"
    break;

  case 15: /* tipo: TIPO  */
#line 150 "compilador.y"
                   {
                     if (!strcmp(token, "integer"))
                        coloca_tipo(&tabela, pas_integer, num_carrega_tipo);
                     else if (!strcmp(token, "boolean"))
                        coloca_tipo(&tabela, pas_boolean, num_carrega_tipo);
                     else
                        perror("TIPO ERRADO, CORRIGE, TA ERRADO");
                     }
#line 1414 "compilador.tab.c"
    break;

  case 16: /* lista_idents: lista_idents VIRGULA IDENT  */
#line 162 "compilador.y"
                                         {
               cc.var.deslocamento = num_vars;
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1428 "compilador.tab.c"
    break;

  case 17: /* lista_idents: IDENT  */
#line 171 "compilador.y"
                    {
               cc.var.deslocamento = num_vars;
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1442 "compilador.tab.c"
    break;

  case 22: /* $@6: %empty  */
#line 193 "compilador.y"
                                     {
                        strcpy(proc_name, token);
                        num_params = 0;
                     }
#line 1451 "compilador.tab.c"
    break;

  case 23: /* $@7: %empty  */
#line 197 "compilador.y"
                                                {
                        rotulo_a = gerarrotulo(&p_rotulos);
                        sprintf(mepa_buf, "ENPR %d", nivel_lexico);
                        geraCodigo(rotulo_a.rotulo, mepa_buf);

                        conteudo.proc.rotulo = rotulo_a.rotulo;
                        conteudo.proc.qtd_parametros = num_params;

                        memcpy(conteudo.proc.lista, lista_parametros, sizeof(struct parametro)*num_params);
                        
                        // for(int i = 0; i < num_params; ++i){
                        //    printf("proc.lista[%d] tem tipo %d e passado por %d \n", i, ti.proc.lista[i].tipo, ti.proc.lista[i].passagem);
                        // }
                        printf("nome: %s nivel: %d desloca: %d\n",proc_name, nivel_lexico, conteudo.var.deslocamento);

                        s = cria_simbolo(proc_name, procedimento, nivel_lexico, conteudo);

                        adicionar(&tabela, s);

                        // atribui o deslocamento correto e coloca na pilha os símbolos
                        for(int i = num_params-1; i >= 0; --i){
                           lista_simbolos[i].conteudo.param.deslocamento = -4 + (i - (num_params-1)); 
                           printf(">>>>>>>>> Parametro %s tem deslocamento %d\n", lista_simbolos[i].identificador, lista_simbolos[i].conteudo.param.deslocamento);
                           adicionar(&tabela, lista_simbolos[i]);
                        }
                       // rot_num++; // para o desvio de procedures dentro dessa procedure
                        //pilha_int_empilhar(&pilha_amem, num_params);

                     }
#line 1485 "compilador.tab.c"
    break;

  case 24: /* $@8: %empty  */
#line 225 "compilador.y"
                                            {
                           sprintf(mepa_buf, "RTPR %d, %d", nivel_lexico, 9999); //numero de varaiveis que devem e desalocadas
                           geraCodigo(NULL, mepa_buf);
                           rotulo_a = pegarrotulo(&p_rotulos);
                     }
#line 1495 "compilador.tab.c"
    break;

  case 37: /* comando: atribui_ou_func  */
#line 262 "compilador.y"
                          {printf("ATRIBUICAO/FUNCAO ESCOLHIDA \n");}
#line 1501 "compilador.tab.c"
    break;

  case 43: /* $@9: %empty  */
#line 273 "compilador.y"
               {
            if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
               printf("ERRO: identificador {%s} nao encontrado/nao declarado", token );
               exit(1);
            }
            esquerdo_recursao_func++;
            printf("INDO PARA O ATRIBUI OU PARAMETROS\n");
         }
#line 1514 "compilador.tab.c"
    break;

  case 44: /* atribui_ou_func: IDENT $@9 continua_atibui_ou_func  */
#line 281 "compilador.y"
                                {
            esquerdo_recursao_func--;
         }
#line 1522 "compilador.tab.c"
    break;

  case 45: /* continua_atibui_ou_func: ATRIBUICAO atribui_contiunuacao  */
#line 287 "compilador.y"
                                                  {printf("ATRIBUICAO ESCOLHIDA \n");}
#line 1528 "compilador.tab.c"
    break;

  case 46: /* continua_atibui_ou_func: parametros_ou_nada  */
#line 288 "compilador.y"
                                       {printf("FUNCAO ESCOLHIDA \n");}
#line 1534 "compilador.tab.c"
    break;

  case 47: /* $@10: %empty  */
#line 292 "compilador.y"
                      { printf("ATRIBUICAO ESCOLHIDA - continuacao\n");}
#line 1540 "compilador.tab.c"
    break;

  case 48: /* atribui_contiunuacao: $@10 expressao  */
#line 293 "compilador.y"
                            {
                     
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == variavel){
                        if((yyvsp[0].int_val) == esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.tipo){
                           sprintf(mepa_buf, "ARMZ %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.deslocamento );
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           printf ("erro: expresao entre tipos incompativeis \n");
                           exit(1);
                        }
                     }else if (esquerdo_func[esquerdo_recursao_func-1]->categoria == parametro){
                        if((yyvsp[0].int_val) == esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo){
                           if (esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_copia ){
                              sprintf(mepa_buf, "ARMZ %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.deslocamento );
                              geraCodigo(NULL, mepa_buf);
                           }else if (esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_ref){
                              sprintf(mepa_buf, "ARMI %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.deslocamento );
                              geraCodigo(NULL, mepa_buf);
                           }
                        }else {
                           printf ("erro: expresao entre tipos incompativeis \n");
                           exit(1);
                        }
                     } 
                  }
#line 1570 "compilador.tab.c"
    break;

  case 49: /* $@11: %empty  */
#line 324 "compilador.y"
                     {
                  if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
                        printf("falha ao procurar token %s\n", token);
                     exit(1);
                  }
                  esquerdo_recursao_func++;  //evita de esquerdo_func se sobrescrito dentro de uma chamada recursiva de funcao_ou_ident
               }
#line 1582 "compilador.tab.c"
    break;

  case 50: /* funcao_ou_ident: IDENT $@11 parametros_ou_nada  */
#line 331 "compilador.y"
                                 {
                  if (esquerdo_func[esquerdo_recursao_func-1]->categoria == variavel){
                     sprintf(mepa_buf, "CRVL %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.deslocamento );
                     geraCodigo(NULL, mepa_buf);
                     (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.tipo;
                  }else if (esquerdo_func[esquerdo_recursao_func-1]->categoria == parametro){
                     if(esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_copia){
                        sprintf(mepa_buf, "CRVL %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.deslocamento );
                        geraCodigo(NULL, mepa_buf);
                        (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }else if(esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_ref){
                        sprintf(mepa_buf, "CRVI %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.deslocamento );
                        geraCodigo(NULL, mepa_buf);
                        (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                  }
                  esquerdo_recursao_func--;
               }
#line 1605 "compilador.tab.c"
    break;

  case 51: /* parametros_ou_nada: %empty  */
#line 370 "compilador.y"
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
#line 1621 "compilador.tab.c"
    break;

  case 53: /* $@13: %empty  */
#line 394 "compilador.y"
                      {
            if((yyvsp[0].int_val) == pas_boolean){
               rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
               sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
               geraCodigo(NULL, mepa_buf);
            }else{
               exit(1);
            }
         }
#line 1635 "compilador.tab.c"
    break;

  case 54: /* if_then: IF expressao $@13 THEN comando  */
#line 403 "compilador.y"
                      {
            rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
            sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
            geraCodigo(NULL, mepa_buf);
            rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
            geraCodigo (rotulo_a.rotulo, "NADA"); 
         }
#line 1647 "compilador.tab.c"
    break;

  case 55: /* cond_else: else_ou_nada  */
#line 411 "compilador.y"
                              {
                        fprintf(stderr, "TERMONOU O BHUR \n");
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-1];
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                        remove_n(&p_rotulos, 2);
                  }
#line 1658 "compilador.tab.c"
    break;

  case 56: /* $@14: %empty  */
#line 420 "compilador.y"
                    { fprintf(stderr, "TERMONOU o BRUH2 \n"); }
#line 1664 "compilador.tab.c"
    break;

  case 58: /* $@15: %empty  */
#line 425 "compilador.y"
                   {
                        rotulo_a = gerarrotulo(&p_rotulos); //cria um rotulo mas esse e o proximo rotulo vai ser usado como fila e nao como pilha
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                     }
#line 1673 "compilador.tab.c"
    break;

  case 60: /* $@16: %empty  */
#line 432 "compilador.y"
                               {
                        if((yyvsp[0].int_val) == pas_boolean){
                           rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                           sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           exit(1);
                        }   
                     }
#line 1687 "compilador.tab.c"
    break;

  case 61: /* while_resto: expressao $@16 DO comando  */
#line 441 "compilador.y"
                               {
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
                        sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
                        geraCodigo(NULL, mepa_buf);
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-1];
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                        remove_n(&p_rotulos, 2);
                     }
#line 1700 "compilador.tab.c"
    break;

  case 62: /* expressao: expressao_simples relacao expressao_simples  */
#line 453 "compilador.y"
                                                       {
               geraCodigo(NULL, (yyvsp[-1].str));
               if ((yyvsp[-2].int_val) == (yyvsp[0].int_val))
                  (yyval.int_val) = pas_boolean;
               else{
                  printf ("erro: expresao entre tipos incompativeis \n");
                  exit(1);
               }
            }
#line 1714 "compilador.tab.c"
    break;

  case 63: /* expressao: expressao_simples  */
#line 462 "compilador.y"
                                {
               (yyval.int_val) = (yyvsp[0].int_val);
            }
#line 1722 "compilador.tab.c"
    break;

  case 64: /* relacao: IGUAL  */
#line 469 "compilador.y"
                        { (yyval.str) = "CMIG"; }
#line 1728 "compilador.tab.c"
    break;

  case 65: /* relacao: MENOR  */
#line 470 "compilador.y"
                        { (yyval.str) = "CMME"; }
#line 1734 "compilador.tab.c"
    break;

  case 66: /* relacao: MAIOR  */
#line 471 "compilador.y"
                        { (yyval.str) = "CMMA"; }
#line 1740 "compilador.tab.c"
    break;

  case 67: /* relacao: MAIOR_IGUAL  */
#line 472 "compilador.y"
                        { (yyval.str) = "CMAG"; }
#line 1746 "compilador.tab.c"
    break;

  case 68: /* relacao: MENOR_IGUAL  */
#line 473 "compilador.y"
                        { (yyval.str) = "CMEG"; }
#line 1752 "compilador.tab.c"
    break;

  case 69: /* relacao: DIFERENTE  */
#line 474 "compilador.y"
                        { (yyval.str) = "CMDG"; }
#line 1758 "compilador.tab.c"
    break;

  case 70: /* expressao_simples: termo  */
#line 479 "compilador.y"
                     {
                  (yyval.int_val) = (yyvsp[0].int_val);
               }
#line 1766 "compilador.tab.c"
    break;

  case 71: /* expressao_simples: MAIS termo  */
#line 482 "compilador.y"
                            {
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1779 "compilador.tab.c"
    break;

  case 72: /* expressao_simples: MENOS termo  */
#line 490 "compilador.y"
                             {
                  geraCodigo(NULL, "INVR");
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1793 "compilador.tab.c"
    break;

  case 73: /* expressao_simples: expressao_simples MAIS termo  */
#line 499 "compilador.y"
                                               {
                  geraCodigo( NULL, "SOMA");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1807 "compilador.tab.c"
    break;

  case 74: /* expressao_simples: expressao_simples MENOS termo  */
#line 508 "compilador.y"
                                               {
                  geraCodigo( NULL, "SUBT");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1821 "compilador.tab.c"
    break;

  case 75: /* expressao_simples: expressao_simples OR termo  */
#line 517 "compilador.y"
                                            {
                  geraCodigo( NULL, "DISJ");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1835 "compilador.tab.c"
    break;

  case 76: /* termo: fator  */
#line 529 "compilador.y"
             {
         (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 1843 "compilador.tab.c"
    break;

  case 77: /* termo: termo DIV fator  */
#line 532 "compilador.y"
                         {
         geraCodigo( NULL, "DIVI");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("erro: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 1857 "compilador.tab.c"
    break;

  case 78: /* termo: termo VEZES fator  */
#line 541 "compilador.y"
                           {
         geraCodigo( NULL, "MULT");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("erro: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 1871 "compilador.tab.c"
    break;

  case 79: /* termo: termo AND fator  */
#line 550 "compilador.y"
                         {
          geraCodigo( NULL, "CONJ");
          if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
            (yyval.int_val) = (yyvsp[0].int_val);
          else{
            printf ("erro: expresao entre tipos incompativeis \n");
            exit(1);
          }
      }
#line 1885 "compilador.tab.c"
    break;

  case 80: /* fator: funcao_ou_ident  */
#line 562 "compilador.y"
                      {
        (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 1893 "compilador.tab.c"
    break;

  case 81: /* fator: NUMERO  */
#line 565 "compilador.y"
               {
         sprintf (mepa_buf, "CRCT %d", atoi(token));
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_integer;
      }
#line 1903 "compilador.tab.c"
    break;

  case 82: /* fator: VALOR_BOOL  */
#line 570 "compilador.y"
                   {
         if(strcmp(token, "True") == 0)
            sprintf (mepa_buf, "CRCT %d", 1);
         else
            sprintf (mepa_buf, "CRCT %d", 0);
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_boolean;
      }
#line 1916 "compilador.tab.c"
    break;

  case 83: /* fator: ABRE_PARENTESES expressao_simples FECHA_PARENTESES  */
#line 578 "compilador.y"
                                                          {
         (yyval.int_val) = (yyvsp[-1].int_val);
      }
#line 1924 "compilador.tab.c"
    break;

  case 84: /* fator: NOT fator  */
#line 581 "compilador.y"
                 {
         if((yyvsp[0].int_val) == pas_boolean){
            geraCodigo(NULL, "NEGA");
            (yyval.int_val) = (yyvsp[0].int_val);
         }   
         else
            exit(1);   
      }
#line 1937 "compilador.tab.c"
    break;

  case 88: /* parametro_leitura: IDENT  */
#line 604 "compilador.y"
                       {
                     geraCodigo(NULL, "LEIT");
                     printf("buscando token %s\n", token);
                     if((ps = busca(&tabela, token)) != NULL){
                        sprintf(mepa_buf, "ARMZ %d, %d",ps->nivel , ps->conteudo.var.deslocamento );
                        geraCodigo(NULL, mepa_buf);
                     }else{
                        printf("falha ao procurar token %s\n", token);
                        exit(1);
                     }
                  }
#line 1953 "compilador.tab.c"
    break;

  case 92: /* parametro_escrita: expressao_simples  */
#line 629 "compilador.y"
                                    {
                     if ((yyvsp[0].int_val) != undefined_type)
                        geraCodigo(NULL, "IMPR");
                     else {
                        printf("parametro incompativel\n");
                     }   
                  }
#line 1965 "compilador.tab.c"
    break;


#line 1969 "compilador.tab.c"

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
      yyerror (YY_("syntax error"));
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 641 "compilador.y"


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
