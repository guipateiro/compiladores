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


enum tipo_dado{
    t_int,
    t_bool
};



#line 117 "compilador.tab.c"

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
  YYSYMBOL_68_9 = 68,                      /* $@9  */
  YYSYMBOL_parametros_formais_ou_nada = 69, /* parametros_formais_ou_nada  */
  YYSYMBOL_70_10 = 70,                     /* $@10  */
  YYSYMBOL_declara_function = 71,          /* declara_function  */
  YYSYMBOL_72_11 = 72,                     /* $@11  */
  YYSYMBOL_73_12 = 73,                     /* $@12  */
  YYSYMBOL_74_13 = 74,                     /* $@13  */
  YYSYMBOL_75_14 = 75,                     /* $@14  */
  YYSYMBOL_declaracao_params = 76,         /* declaracao_params  */
  YYSYMBOL_declaracao_param = 77,          /* declaracao_param  */
  YYSYMBOL_78_15 = 78,                     /* $@15  */
  YYSYMBOL_lista_params_formais = 79,      /* lista_params_formais  */
  YYSYMBOL_parametro = 80,                 /* parametro  */
  YYSYMBOL_comandos = 81,                  /* comandos  */
  YYSYMBOL_comando = 82,                   /* comando  */
  YYSYMBOL_atribui_ou_func = 83,           /* atribui_ou_func  */
  YYSYMBOL_84_16 = 84,                     /* $@16  */
  YYSYMBOL_continua_atibui_ou_func = 85,   /* continua_atibui_ou_func  */
  YYSYMBOL_atribui_contiunuacao = 86,      /* atribui_contiunuacao  */
  YYSYMBOL_87_17 = 87,                     /* $@17  */
  YYSYMBOL_funcao_ou_ident = 88,           /* funcao_ou_ident  */
  YYSYMBOL_89_18 = 89,                     /* $@18  */
  YYSYMBOL_parametros_ou_nada = 90,        /* parametros_ou_nada  */
  YYSYMBOL_91_19 = 91,                     /* $@19  */
  YYSYMBOL_92_20 = 92,                     /* $@20  */
  YYSYMBOL_empilha_retorno = 93,           /* empilha_retorno  */
  YYSYMBOL_lista_params = 94,              /* lista_params  */
  YYSYMBOL_95_21 = 95,                     /* $@21  */
  YYSYMBOL_comando_condicional = 96,       /* comando_condicional  */
  YYSYMBOL_if_then = 97,                   /* if_then  */
  YYSYMBOL_98_22 = 98,                     /* $@22  */
  YYSYMBOL_cond_else = 99,                 /* cond_else  */
  YYSYMBOL_comando_repetitivo = 100,       /* comando_repetitivo  */
  YYSYMBOL_101_23 = 101,                   /* $@23  */
  YYSYMBOL_while_resto = 102,              /* while_resto  */
  YYSYMBOL_103_24 = 103,                   /* $@24  */
  YYSYMBOL_expressao = 104,                /* expressao  */
  YYSYMBOL_relacao = 105,                  /* relacao  */
  YYSYMBOL_expressao_simples = 106,        /* expressao_simples  */
  YYSYMBOL_termo = 107,                    /* termo  */
  YYSYMBOL_fator = 108,                    /* fator  */
  YYSYMBOL_leitura = 109,                  /* leitura  */
  YYSYMBOL_parametros_de_leitura = 110,    /* parametros_de_leitura  */
  YYSYMBOL_parametro_leitura = 111,        /* parametro_leitura  */
  YYSYMBOL_escrita = 112,                  /* escrita  */
  YYSYMBOL_parametros_de_escrita = 113,    /* parametros_de_escrita  */
  YYSYMBOL_parametro_escrita = 114         /* parametro_escrita  */
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
#define YYLAST   133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

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
       0,    95,    95,    95,   111,   117,   125,   116,   138,   138,
     147,   151,   152,   154,   154,   167,   184,   193,   205,   209,
     210,   211,   215,   220,   240,   240,   215,   257,   257,   258,
     262,   266,   286,   288,   262,   307,   308,   311,   311,   324,
     325,   330,   339,   354,   355,   356,   361,   362,   363,   364,
     365,   366,   372,   372,   388,   389,   393,   393,   434,   434,
     505,   505,   505,   520,   533,   542,   543,   543,   548,   556,
     556,   576,   577,   581,   581,   588,   588,   609,   618,   625,
     626,   627,   628,   629,   630,   635,   638,   646,   655,   664,
     673,   685,   688,   697,   706,   718,   721,   726,   734,   737,
     751,   755,   756,   760,   776,   780,   781,   785
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
  "declara_procedimento", "$@6", "$@7", "$@8", "$@9",
  "parametros_formais_ou_nada", "$@10", "declara_function", "$@11", "$@12",
  "$@13", "$@14", "declaracao_params", "declaracao_param", "$@15",
  "lista_params_formais", "parametro", "comandos", "comando",
  "atribui_ou_func", "$@16", "continua_atibui_ou_func",
  "atribui_contiunuacao", "$@17", "funcao_ou_ident", "$@18",
  "parametros_ou_nada", "$@19", "$@20", "empilha_retorno", "lista_params",
  "$@21", "comando_condicional", "if_then", "$@22", "cond_else",
  "comando_repetitivo", "$@23", "while_resto", "$@24", "expressao",
  "relacao", "expressao_simples", "termo", "fator", "leitura",
  "parametros_de_leitura", "parametro_leitura", "escrita",
  "parametros_de_escrita", "parametro_escrita", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-141)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -141,    28,    11,  -141,    22,    50,    34,    51,    59,    65,
      73,  -141,    75,    82,  -141,    80,  -141,  -141,  -141,    44,
      81,  -141,    83,    84,    85,    89,  -141,  -141,  -141,  -141,
       7,  -141,  -141,    14,  -141,    87,    60,    91,    91,  -141,
      -2,    97,    98,  -141,    -1,  -141,  -141,  -141,    86,  -141,
      88,  -141,  -141,  -141,  -141,    96,  -141,  -141,  -141,    90,
      -2,  -141,     8,  -141,  -141,     8,     8,  -141,  -141,    31,
     -21,  -141,    92,    -2,     6,  -141,     6,  -141,    -2,  -141,
    -141,    99,   101,  -141,  -141,  -141,   103,    13,  -141,  -141,
     -21,   -21,    93,     8,  -141,  -141,  -141,  -141,  -141,  -141,
       8,     8,    -2,     8,     8,     8,  -141,    71,  -141,    43,
      78,  -141,  -141,  -141,  -141,  -141,    15,  -141,    77,  -141,
      79,  -141,    -2,  -141,  -141,  -141,     6,   -21,   -21,   -21,
      43,  -141,  -141,  -141,  -141,    92,  -141,    -2,    94,  -141,
    -141,   100,  -141,    30,  -141,    75,  -141,  -141,  -141,  -141,
    -141,  -141,     6,  -141,  -141,    77,    60,  -141,   108,   104,
      -2,  -141,  -141,  -141,   109,    75,    -2,   112,  -141,  -141,
    -141,  -141,  -141,   113,  -141
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     4,    10,     0,     5,     0,     3,    21,    13,     6,
       9,    12,     0,     0,     0,     0,    19,    20,    11,    17,
       0,    22,    30,    45,     7,     0,     0,    29,    29,    52,
       0,     0,     0,    47,     0,    44,    46,    48,    72,    49,
       0,    50,    51,    16,    15,     0,    27,    23,    31,    64,
       0,    58,     0,    97,    96,     0,     0,    95,    69,    78,
      85,    91,     0,     0,    73,    18,    73,    68,     0,    14,
      37,     0,     0,    56,    53,    55,    63,     0,    64,    99,
      86,    87,     0,     0,    81,    80,    79,    83,    82,    84,
       0,     0,     0,     0,     0,     0,   103,     0,   102,   107,
       0,   106,    43,    71,    74,    75,     0,    36,     0,    24,
       0,    54,     0,    60,    98,    59,    73,    90,    88,    89,
      77,    92,    94,    93,   100,     0,   104,     0,     0,    28,
      37,     0,    42,     0,    40,    10,    32,    57,    66,    70,
     101,   105,    73,    35,    41,     0,     0,    25,     0,    61,
       0,    76,    39,    38,     0,    10,     0,     0,    67,    26,
      33,    65,    62,     0,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,  -141,  -140,  -141,  -141,  -141,  -141,  -141,
     102,  -141,   -37,  -141,   105,  -141,  -141,  -141,  -141,  -141,
    -141,    95,  -141,  -141,  -141,  -141,  -141,  -141,  -141,   -19,
    -141,  -141,   -32,  -141,   -73,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,    36,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,   -78,  -141,   -56,   -35,
     -55,  -141,  -141,   -10,  -141,  -141,   -11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     8,    13,    17,    25,    14,    15,    20,
      21,    22,    55,    30,    43,    19,    26,    37,    81,   145,
     164,    57,    80,    27,    38,    82,   158,   173,   116,   117,
     118,   143,   144,    44,    45,    46,    59,    84,   121,   122,
      67,    88,    85,   148,   167,    86,   159,   160,    47,    48,
      92,    77,    49,    50,   114,   138,    68,   102,    69,    70,
      71,    51,   107,   108,    52,   110,   111
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     115,   112,    60,   113,    87,   157,    74,    89,   103,   104,
      75,    61,    60,    35,     4,    36,    33,   109,   124,    39,
     139,    61,   140,   105,    33,   170,    40,    39,     3,    62,
      90,    91,    63,    64,    40,     5,   155,   -73,   156,    62,
      65,    66,    63,    64,   147,    93,   130,     7,   131,   132,
     133,    41,    42,   149,     6,   100,   101,     9,   127,    41,
      42,    23,    24,    93,    10,   128,   129,    94,    95,    96,
      97,    98,    99,   100,   101,    93,   134,   135,    11,   161,
      12,   109,   168,   136,   137,   100,   101,    -8,   171,   141,
     142,    16,    18,    54,   -13,    56,    29,    31,    32,    33,
      53,    72,    73,    79,    83,   106,   119,   123,    76,   120,
     166,    78,   146,   154,   126,   165,   169,   172,   152,   163,
     174,   153,    28,   162,   125,   150,   151,     0,     0,     0,
      34,     0,     0,    58
};

static const yytype_int16 yycheck[] =
{
      78,    74,     4,    76,    60,   145,     7,    62,    29,    30,
      11,    13,     4,     6,     3,     8,    10,    73,     5,    13,
       5,    13,     7,    44,    10,   165,    20,    13,     0,    31,
      65,    66,    34,    35,    20,    13,     6,    23,     8,    31,
      42,    43,    34,    35,   122,    32,   102,    13,   103,   104,
     105,    45,    46,   126,     4,    42,    43,     6,    93,    45,
      46,    17,    18,    32,     5,   100,   101,    36,    37,    38,
      39,    40,    41,    42,    43,    32,     5,     6,    13,   152,
       7,   137,   160,     5,     6,    42,    43,    12,   166,    12,
      13,     9,    12,    33,    13,     4,    13,    13,    13,    10,
      13,     4,     4,     7,    14,    13,     7,     4,    22,     8,
       6,    23,    33,    13,    21,     7,     7,     5,    24,   156,
       7,   140,    20,   155,    88,   135,   137,    -1,    -1,    -1,
      25,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     3,    13,     4,    13,    51,     6,
       5,    13,     7,    52,    55,    56,     9,    53,    12,    63,
      57,    58,    59,    17,    18,    54,    64,    71,    58,    13,
      61,    13,    13,    10,    62,     6,     8,    65,    72,    13,
      20,    45,    46,    62,    81,    82,    83,    96,    97,   100,
     101,   109,   112,    13,    33,    60,     4,    69,    69,    84,
       4,    13,    31,    34,    35,    42,    43,    88,   104,   106,
     107,   108,     4,     4,     7,    11,    22,    99,    23,     7,
      70,    66,    73,    14,    85,    90,    93,   106,    89,   108,
     107,   107,    98,    32,    36,    37,    38,    39,    40,    41,
      42,    43,   105,    29,    30,    44,    13,   110,   111,   106,
     113,   114,    82,    82,   102,   104,    76,    77,    78,     7,
       8,    86,    87,     4,     5,    90,    21,   107,   107,   107,
     106,   108,   108,   108,     5,     6,     5,     6,   103,     5,
       7,    12,    13,    79,    80,    67,    33,   104,    91,    82,
     111,   114,    24,    77,    13,     6,     8,    52,    74,    94,
      95,    82,    80,    60,    68,     7,     6,    92,   104,     7,
      52,   104,     5,    75,     7
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    51,    53,    54,    52,    56,    55,
      55,    57,    57,    59,    58,    60,    61,    61,    62,    63,
      63,    63,    65,    66,    67,    68,    64,    70,    69,    69,
      72,    73,    74,    75,    71,    76,    76,    78,    77,    79,
      79,    80,    80,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    84,    83,    85,    85,    87,    86,    89,    88,
      91,    92,    90,    90,    93,    94,    95,    94,    96,    98,
      97,    99,    99,   101,   100,   103,   102,   104,   104,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   106,   106,
     106,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     109,   110,   110,   111,   112,   113,   113,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     3,     0,     0,     5,     0,     3,
       0,     2,     1,     0,     5,     1,     3,     1,     3,     2,
       2,     0,     0,     0,     0,     0,    10,     0,     4,     0,
       0,     0,     0,     0,    12,     3,     1,     0,     4,     3,
       1,     2,     1,     3,     1,     0,     1,     1,     1,     1,
       1,     1,     0,     3,     2,     1,     0,     2,     0,     3,
       0,     0,     6,     1,     0,     3,     0,     2,     2,     0,
       5,     2,     0,     0,     3,     0,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     3,
       3,     1,     3,     3,     3,     1,     1,     1,     3,     2,
       4,     3,     1,     1,     4,     3,     1,     1
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
#line 95 "compilador.y"
             {
             geraCodigo (NULL, "INPP");
             tabela = inicializa();
             p_rotulos = inicializa_rotulos();
             nivel_lexico = 0;
             }
#line 1354 "compilador.tab.c"
    break;

  case 3: /* programa: $@1 PROGRAM IDENT ABRE_PARENTESES input_idents FECHA_PARENTESES PONTO_E_VIRGULA bloco PONTO  */
#line 103 "compilador.y"
                         {
             sprintf (mepa_buf, "DMEM %d", num_vars_por_nivel[0]);
             geraCodigo (NULL, mepa_buf);
             geraCodigo (NULL, "PARA");
             }
#line 1364 "compilador.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 117 "compilador.y"
            {
            //fprintf(stderr,"COISA DE TESTE \n");
            rotulo_a = gerarrotulo(&p_rotulos);
            sprintf(mepa_buf, "DSVS %s", rotulo_a.rotulo);
            geraCodigo (NULL, mepa_buf);
            nivel_lexico++;
            }
#line 1376 "compilador.tab.c"
    break;

  case 6: /* $@3: %empty  */
#line 125 "compilador.y"
            {
            nivel_lexico --;
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA");
            }
#line 1386 "compilador.tab.c"
    break;

  case 7: /* bloco: parte_declara_vars $@2 parte_declara_sub_rotinas $@3 comando_composto  */
#line 131 "compilador.y"
            {
            }
#line 1393 "compilador.tab.c"
    break;

  case 8: /* $@4: %empty  */
#line 138 "compilador.y"
                    {desloc_num_vars = 0;}
#line 1399 "compilador.tab.c"
    break;

  case 13: /* $@5: %empty  */
#line 154 "compilador.y"
                   {
                     num_carrega_tipo = 0;
                     num_vars = 0;
                  }
#line 1408 "compilador.tab.c"
    break;

  case 14: /* declaracao_de_var: $@5 lista_idents DOIS_PONTOS tipo PONTO_E_VIRGULA  */
#line 158 "compilador.y"
                                                               {
                     sprintf(mepa_buf, "AMEM %d", num_vars);
                     ponteiro_pilha_num_vars++;
                     pilha_num_vars[ponteiro_pilha_num_vars] = num_vars;
                     geraCodigo(NULL,mepa_buf);
					   }
#line 1419 "compilador.tab.c"
    break;

  case 15: /* tipo: TIPO  */
#line 167 "compilador.y"
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
#line 1437 "compilador.tab.c"
    break;

  case 16: /* lista_idents: lista_idents VIRGULA IDENT  */
#line 184 "compilador.y"
                                         {
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc, desloc_num_vars);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               desloc_num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1451 "compilador.tab.c"
    break;

  case 17: /* lista_idents: IDENT  */
#line 193 "compilador.y"
                    {
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc, desloc_num_vars);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               desloc_num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1465 "compilador.tab.c"
    break;

  case 22: /* $@6: %empty  */
#line 215 "compilador.y"
                                     {
                        strcpy(pilha_proc_name[pilha_proc], token);
                        pilha_proc++;
                        num_params = 0;
                     }
#line 1475 "compilador.tab.c"
    break;

  case 23: /* $@7: %empty  */
#line 220 "compilador.y"
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
#line 1501 "compilador.tab.c"
    break;

  case 24: /* $@8: %empty  */
#line 240 "compilador.y"
                                       {imprime_tabela(&tabela);}
#line 1507 "compilador.tab.c"
    break;

  case 25: /* $@9: %empty  */
#line 240 "compilador.y"
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
#line 1526 "compilador.tab.c"
    break;

  case 27: /* $@10: %empty  */
#line 257 "compilador.y"
                               {num_params = 0;}
#line 1532 "compilador.tab.c"
    break;

  case 30: /* $@11: %empty  */
#line 262 "compilador.y"
                              {
                  strcpy(pilha_proc_name[pilha_proc], token);
                  pilha_proc++;
                  num_params = 0;
               }
#line 1542 "compilador.tab.c"
    break;

  case 31: /* $@12: %empty  */
#line 266 "compilador.y"
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
#line 1568 "compilador.tab.c"
    break;

  case 32: /* $@13: %empty  */
#line 286 "compilador.y"
                                 {
                  coloca_tipo(&tabela, pas_integer, 1);
               }
#line 1576 "compilador.tab.c"
    break;

  case 33: /* $@14: %empty  */
#line 288 "compilador.y"
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
#line 1593 "compilador.tab.c"
    break;

  case 37: /* $@15: %empty  */
#line 311 "compilador.y"
                  {
                     num_carrega_tipo = 0;
                  }
#line 1601 "compilador.tab.c"
    break;

  case 38: /* declaracao_param: $@15 lista_params_formais DOIS_PONTOS tipo  */
#line 314 "compilador.y"
                                                         {
                     for(int i = num_params; i > num_params - num_carrega_tipo; i--){
                        lista_parametros[i-1].tipo = (yyvsp[0].int_val);
                     }
                     num_carrega_tipo++;
                   }
#line 1612 "compilador.tab.c"
    break;

  case 39: /* lista_params_formais: lista_params_formais VIRGULA parametro  */
#line 324 "compilador.y"
                                                               {num_params++;}
#line 1618 "compilador.tab.c"
    break;

  case 40: /* lista_params_formais: parametro  */
#line 325 "compilador.y"
                                    {num_params++;}
#line 1624 "compilador.tab.c"
    break;

  case 41: /* parametro: VAR IDENT  */
#line 330 "compilador.y"
                   {
            cc.param.passagem = parametro_ref;
            param_aux.passagem = parametro_ref;
            lista_parametros[num_params] = param_aux;
            printf("adicionado token [%s]\n", token);
            s = cria_simbolo(token, parametro, nivel_lexico, cc, -1);
            adicionar(&tabela, s);
            num_carrega_tipo++;
         }
#line 1638 "compilador.tab.c"
    break;

  case 42: /* parametro: IDENT  */
#line 339 "compilador.y"
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
#line 1654 "compilador.tab.c"
    break;

  case 46: /* comando: atribui_ou_func  */
#line 361 "compilador.y"
                          {printf("ATRIBUICAO/FUNCAO ESCOLHIDA \n");}
#line 1660 "compilador.tab.c"
    break;

  case 52: /* $@16: %empty  */
#line 372 "compilador.y"
               {
            if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
               printf("ERRO: identificador {%s} nao encontrado/nao declarado", token );
               exit(1);
            }
            esquerdo_recursao_func++;
            printf("INDO PARA O ATRIBUI OU PARAMETROS\n");
            printf("identificador achado = %s\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
         }
#line 1674 "compilador.tab.c"
    break;

  case 53: /* atribui_ou_func: IDENT $@16 continua_atibui_ou_func  */
#line 381 "compilador.y"
                                {
            if ((yyvsp[0].int_val) == 1 )
                esquerdo_recursao_func--;
         }
#line 1683 "compilador.tab.c"
    break;

  case 54: /* continua_atibui_ou_func: ATRIBUICAO atribui_contiunuacao  */
#line 388 "compilador.y"
                                                  {(yyval.int_val) = 1; printf("ATRIBUICAO ESCOLHIDA \n");}
#line 1689 "compilador.tab.c"
    break;

  case 55: /* continua_atibui_ou_func: parametros_ou_nada  */
#line 389 "compilador.y"
                                       {(yyval.int_val) = 2; printf( "FUNCAO ESCOLHIDA \n");}
#line 1695 "compilador.tab.c"
    break;

  case 56: /* $@17: %empty  */
#line 393 "compilador.y"
                      { printf("ATRIBUICAO ESCOLHIDA - continuacao\n");}
#line 1701 "compilador.tab.c"
    break;

  case 57: /* atribui_contiunuacao: $@17 expressao  */
#line 394 "compilador.y"
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
#line 1740 "compilador.tab.c"
    break;

  case 58: /* $@18: %empty  */
#line 434 "compilador.y"
                     {
                  if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
                        printf("falha ao procurar token %s\n", token);
                     exit(1);
                  }
                  esquerdo_recursao_func++;  //evita de esquerdo_func se sobrescrito dentro de uma chamada recursiva de funcao_ou_ident
                  printf("identificador achado = %s\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
               }
#line 1753 "compilador.tab.c"
    break;

  case 59: /* funcao_ou_ident: IDENT $@18 parametros_ou_nada  */
#line 442 "compilador.y"
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
#line 1818 "compilador.tab.c"
    break;

  case 60: /* $@19: %empty  */
#line 505 "compilador.y"
                                                 {num_params = 0; em_chamada_de_funcao = 1;}
#line 1824 "compilador.tab.c"
    break;

  case 61: /* $@20: %empty  */
#line 505 "compilador.y"
                                                                                                         {em_chamada_de_funcao = 0;}
#line 1830 "compilador.tab.c"
    break;

  case 62: /* parametros_ou_nada: empilha_retorno ABRE_PARENTESES $@19 lista_params $@20 FECHA_PARENTESES  */
#line 505 "compilador.y"
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
#line 1850 "compilador.tab.c"
    break;

  case 63: /* parametros_ou_nada: empilha_retorno  */
#line 520 "compilador.y"
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
#line 1866 "compilador.tab.c"
    break;

  case 64: /* empilha_retorno: %empty  */
#line 533 "compilador.y"
                  {
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao){
                        geraCodigo(NULL, "AMEM 1");
                        (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                  }
#line 1877 "compilador.tab.c"
    break;

  case 65: /* lista_params: lista_params VIRGULA expressao  */
#line 542 "compilador.y"
                                              {num_params++; }
#line 1883 "compilador.tab.c"
    break;

  case 66: /* $@21: %empty  */
#line 543 "compilador.y"
                 {printf("%d\n",num_params); }
#line 1889 "compilador.tab.c"
    break;

  case 67: /* lista_params: $@21 expressao  */
#line 543 "compilador.y"
                                                        {num_params++;}
#line 1895 "compilador.tab.c"
    break;

  case 68: /* comando_condicional: if_then cond_else  */
#line 548 "compilador.y"
                                    {
                        //fprintf(stderr, "TERMONOU O BHUR \n");
                        rotulo_a = pegarrotulo(&p_rotulos);
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                  }
#line 1905 "compilador.tab.c"
    break;

  case 69: /* $@22: %empty  */
#line 556 "compilador.y"
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
#line 1920 "compilador.tab.c"
    break;

  case 70: /* if_then: IF expressao $@22 THEN comando  */
#line 566 "compilador.y"
                      {
            rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
            sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
            geraCodigo(NULL, mepa_buf);
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA"); 
         }
#line 1932 "compilador.tab.c"
    break;

  case 73: /* $@23: %empty  */
#line 581 "compilador.y"
                   {
                        rotulo_a = gerarrotulo(&p_rotulos); //cria um rotulo mas esse e o proximo rotulo vai ser usado como fila e nao como pilha
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                     }
#line 1941 "compilador.tab.c"
    break;

  case 75: /* $@24: %empty  */
#line 588 "compilador.y"
                               {
                        if((yyvsp[0].int_val) == pas_boolean){
                           rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                           sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           exit(1);
                        }   
                     }
#line 1955 "compilador.tab.c"
    break;

  case 76: /* while_resto: expressao $@24 DO comando  */
#line 597 "compilador.y"
                               {
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
                        sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
                        geraCodigo(NULL, mepa_buf);
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-1];
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                        remove_n(&p_rotulos, 2);
                     }
#line 1968 "compilador.tab.c"
    break;

  case 77: /* expressao: expressao_simples relacao expressao_simples  */
#line 609 "compilador.y"
                                                       {
               geraCodigo(NULL, (yyvsp[-1].str));
               if ((yyvsp[-2].int_val) == (yyvsp[0].int_val))
                  (yyval.int_val) = pas_boolean;
               else{
                  printf ("ERRO: expressao entre tipos incompativeis \n");
                  exit(1);
               }
            }
#line 1982 "compilador.tab.c"
    break;

  case 78: /* expressao: expressao_simples  */
#line 618 "compilador.y"
                                {
               (yyval.int_val) = (yyvsp[0].int_val);
            }
#line 1990 "compilador.tab.c"
    break;

  case 79: /* relacao: IGUAL  */
#line 625 "compilador.y"
                        { (yyval.str) = "CMIG"; }
#line 1996 "compilador.tab.c"
    break;

  case 80: /* relacao: MENOR  */
#line 626 "compilador.y"
                        { (yyval.str) = "CMME"; }
#line 2002 "compilador.tab.c"
    break;

  case 81: /* relacao: MAIOR  */
#line 627 "compilador.y"
                        { (yyval.str) = "CMMA"; }
#line 2008 "compilador.tab.c"
    break;

  case 82: /* relacao: MAIOR_IGUAL  */
#line 628 "compilador.y"
                        { (yyval.str) = "CMAG"; }
#line 2014 "compilador.tab.c"
    break;

  case 83: /* relacao: MENOR_IGUAL  */
#line 629 "compilador.y"
                        { (yyval.str) = "CMEG"; }
#line 2020 "compilador.tab.c"
    break;

  case 84: /* relacao: DIFERENTE  */
#line 630 "compilador.y"
                        { (yyval.str) = "CMDG"; }
#line 2026 "compilador.tab.c"
    break;

  case 85: /* expressao_simples: termo  */
#line 635 "compilador.y"
                     {
                  (yyval.int_val) = (yyvsp[0].int_val);
               }
#line 2034 "compilador.tab.c"
    break;

  case 86: /* expressao_simples: MAIS termo  */
#line 638 "compilador.y"
                            {
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2047 "compilador.tab.c"
    break;

  case 87: /* expressao_simples: MENOS termo  */
#line 646 "compilador.y"
                             {
                  geraCodigo(NULL, "INVR");
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2061 "compilador.tab.c"
    break;

  case 88: /* expressao_simples: expressao_simples MAIS termo  */
#line 655 "compilador.y"
                                               {
                  geraCodigo( NULL, "SOMA");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2075 "compilador.tab.c"
    break;

  case 89: /* expressao_simples: expressao_simples MENOS termo  */
#line 664 "compilador.y"
                                               {
                  geraCodigo( NULL, "SUBT");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2089 "compilador.tab.c"
    break;

  case 90: /* expressao_simples: expressao_simples OR termo  */
#line 673 "compilador.y"
                                            {
                  geraCodigo( NULL, "DISJ");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2103 "compilador.tab.c"
    break;

  case 91: /* termo: fator  */
#line 685 "compilador.y"
             {
         (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 2111 "compilador.tab.c"
    break;

  case 92: /* termo: termo DIV fator  */
#line 688 "compilador.y"
                         {
         geraCodigo( NULL, "DIVI");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 2125 "compilador.tab.c"
    break;

  case 93: /* termo: termo VEZES fator  */
#line 697 "compilador.y"
                           {
         geraCodigo( NULL, "MULT");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 2139 "compilador.tab.c"
    break;

  case 94: /* termo: termo AND fator  */
#line 706 "compilador.y"
                         {
          geraCodigo( NULL, "CONJ");
          if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
            (yyval.int_val) = (yyvsp[0].int_val);
          else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
          }
      }
#line 2153 "compilador.tab.c"
    break;

  case 95: /* fator: funcao_ou_ident  */
#line 718 "compilador.y"
                      {
        (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 2161 "compilador.tab.c"
    break;

  case 96: /* fator: NUMERO  */
#line 721 "compilador.y"
               {
         sprintf (mepa_buf, "CRCT %d", atoi(token));
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_integer;
      }
#line 2171 "compilador.tab.c"
    break;

  case 97: /* fator: VALOR_BOOL  */
#line 726 "compilador.y"
                   {
         if(strcmp(token, "True") == 0)
            sprintf (mepa_buf, "CRCT %d", 1);
         else
            sprintf (mepa_buf, "CRCT %d", 0);
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_boolean;
      }
#line 2184 "compilador.tab.c"
    break;

  case 98: /* fator: ABRE_PARENTESES expressao_simples FECHA_PARENTESES  */
#line 734 "compilador.y"
                                                          {
         (yyval.int_val) = (yyvsp[-1].int_val);
      }
#line 2192 "compilador.tab.c"
    break;

  case 99: /* fator: NOT fator  */
#line 737 "compilador.y"
                 {
         if((yyvsp[0].int_val) == pas_boolean){
            geraCodigo(NULL, "NEGA");
            (yyval.int_val) = (yyvsp[0].int_val);
         }   
         else
            exit(1);   
      }
#line 2205 "compilador.tab.c"
    break;

  case 103: /* parametro_leitura: IDENT  */
#line 760 "compilador.y"
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
#line 2221 "compilador.tab.c"
    break;

  case 107: /* parametro_escrita: expressao_simples  */
#line 785 "compilador.y"
                                    {
                     if ((yyvsp[0].int_val) != undefined_type)
                        geraCodigo(NULL, "IMPR");
                     else {
                        printf("parametro incompativel\n");
                     }   
                  }
#line 2233 "compilador.tab.c"
    break;


#line 2237 "compilador.tab.c"

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

#line 797 "compilador.y"


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
