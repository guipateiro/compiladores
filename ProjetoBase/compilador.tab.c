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
char pilha_proc_name[100][128];
int pilha_proc = 0;
int ponteiro_pilha_num_vars = 0;


enum tipo_dado{
    t_int,
    t_bool
};



#line 114 "compilador.tab.c"

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
  YYSYMBOL_lista_params_formais = 75,      /* lista_params_formais  */
  YYSYMBOL_parametro = 76,                 /* parametro  */
  YYSYMBOL_77_14 = 77,                     /* $@14  */
  YYSYMBOL_78_15 = 78,                     /* $@15  */
  YYSYMBOL_comandos = 79,                  /* comandos  */
  YYSYMBOL_comando = 80,                   /* comando  */
  YYSYMBOL_atribui_ou_func = 81,           /* atribui_ou_func  */
  YYSYMBOL_82_16 = 82,                     /* $@16  */
  YYSYMBOL_continua_atibui_ou_func = 83,   /* continua_atibui_ou_func  */
  YYSYMBOL_atribui_contiunuacao = 84,      /* atribui_contiunuacao  */
  YYSYMBOL_85_17 = 85,                     /* $@17  */
  YYSYMBOL_funcao_ou_ident = 86,           /* funcao_ou_ident  */
  YYSYMBOL_87_18 = 87,                     /* $@18  */
  YYSYMBOL_parametros_ou_nada = 88,        /* parametros_ou_nada  */
  YYSYMBOL_89_19 = 89,                     /* $@19  */
  YYSYMBOL_empilha_retorno = 90,           /* empilha_retorno  */
  YYSYMBOL_lista_params = 91,              /* lista_params  */
  YYSYMBOL_92_20 = 92,                     /* $@20  */
  YYSYMBOL_comando_condicional = 93,       /* comando_condicional  */
  YYSYMBOL_if_then = 94,                   /* if_then  */
  YYSYMBOL_95_21 = 95,                     /* $@21  */
  YYSYMBOL_cond_else = 96,                 /* cond_else  */
  YYSYMBOL_comando_repetitivo = 97,        /* comando_repetitivo  */
  YYSYMBOL_98_22 = 98,                     /* $@22  */
  YYSYMBOL_while_resto = 99,               /* while_resto  */
  YYSYMBOL_100_23 = 100,                   /* $@23  */
  YYSYMBOL_expressao = 101,                /* expressao  */
  YYSYMBOL_relacao = 102,                  /* relacao  */
  YYSYMBOL_expressao_simples = 103,        /* expressao_simples  */
  YYSYMBOL_termo = 104,                    /* termo  */
  YYSYMBOL_fator = 105,                    /* fator  */
  YYSYMBOL_leitura = 106,                  /* leitura  */
  YYSYMBOL_parametros_de_leitura = 107,    /* parametros_de_leitura  */
  YYSYMBOL_parametro_leitura = 108,        /* parametro_leitura  */
  YYSYMBOL_escrita = 109,                  /* escrita  */
  YYSYMBOL_parametros_de_escrita = 110,    /* parametros_de_escrita  */
  YYSYMBOL_parametro_escrita = 111         /* parametro_escrita  */
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
#define YYLAST   150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

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
       0,    91,    91,    91,   107,   113,   121,   112,   134,   134,
     145,   149,   150,   152,   152,   159,   171,   179,   190,   194,
     195,   196,   200,   205,   233,   233,   200,   250,   250,   251,
     255,   258,   285,   255,   293,   294,   298,   298,   313,   313,
     334,   335,   336,   341,   342,   343,   344,   345,   346,   352,
     352,   368,   369,   373,   373,   405,   405,   434,   434,   449,
     462,   471,   472,   472,   477,   485,   485,   505,   506,   510,
     510,   517,   517,   538,   547,   554,   555,   556,   557,   558,
     559,   564,   567,   575,   584,   593,   602,   614,   617,   626,
     635,   647,   650,   655,   663,   666,   680,   684,   685,   689,
     705,   709,   710,   714
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
  "$@13", "lista_params_formais", "parametro", "$@14", "$@15", "comandos",
  "comando", "atribui_ou_func", "$@16", "continua_atibui_ou_func",
  "atribui_contiunuacao", "$@17", "funcao_ou_ident", "$@18",
  "parametros_ou_nada", "$@19", "empilha_retorno", "lista_params", "$@20",
  "comando_condicional", "if_then", "$@21", "cond_else",
  "comando_repetitivo", "$@22", "while_resto", "$@23", "expressao",
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

#define YYPACT_NINF (-142)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -142,    17,    27,  -142,    43,    16,    50,    38,    63,    75,
      82,  -142,    79,    81,  -142,    80,  -142,  -142,  -142,    -8,
      83,  -142,    84,    85,    86,    90,  -142,  -142,  -142,  -142,
      19,  -142,  -142,     8,  -142,    88,    61,    89,    89,  -142,
      -2,    91,    98,  -142,    31,  -142,  -142,  -142,    87,  -142,
      92,  -142,  -142,  -142,  -142,    96,  -142,  -142,  -142,    93,
      -2,  -142,    51,  -142,  -142,    51,    51,  -142,  -142,    35,
     -22,  -142,    95,    -2,     6,  -142,     6,  -142,    -2,  -142,
      24,    97,   102,  -142,  -142,  -142,   101,     7,  -142,  -142,
     -22,   -22,    99,    51,  -142,  -142,  -142,  -142,  -142,  -142,
      51,    51,    -2,    51,    51,    51,  -142,    53,  -142,   -19,
      55,  -142,  -142,  -142,  -142,  -142,   100,  -142,    60,  -142,
    -142,    73,  -142,    -2,  -142,  -142,  -142,     6,   -22,   -22,
     -22,   -19,  -142,  -142,  -142,  -142,    95,  -142,    -2,    94,
    -142,   103,  -142,    24,    79,   105,  -142,  -142,  -142,  -142,
    -142,     6,   106,   104,  -142,  -142,    79,    78,    -2,  -142,
     107,  -142,   109,  -142,  -142,    -2,  -142,  -142,  -142,   110,
    -142,  -142
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
       0,     0,     0,    44,     0,    41,    43,    45,    68,    46,
       0,    47,    48,    16,    15,     0,    27,    23,    31,    60,
       0,    55,     0,    93,    92,     0,     0,    91,    65,    74,
      81,    87,     0,     0,    69,    18,    69,    64,     0,    14,
       0,     0,     0,    53,    50,    52,    59,     0,    60,    95,
      82,    83,     0,     0,    77,    76,    75,    79,    78,    80,
       0,     0,     0,     0,     0,     0,    99,     0,    98,   103,
       0,   102,    40,    67,    70,    71,     0,    38,     0,    35,
      24,     0,    51,     0,    57,    94,    56,    69,    86,    84,
      85,    73,    88,    90,    89,    96,     0,   100,     0,     0,
      36,     0,    28,     0,    10,     0,    54,    62,    66,    97,
     101,    69,     0,     0,    34,    25,    10,     0,     0,    72,
       0,    39,     0,    32,    58,     0,    63,    37,    26,     0,
      61,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,  -142,  -141,  -142,  -142,  -142,  -142,  -142,
     108,  -142,  -142,  -142,   111,  -142,  -142,  -142,  -142,  -142,
    -142,   112,  -142,  -142,  -142,  -142,  -142,  -142,   -24,  -142,
    -142,  -142,   -70,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
      33,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,   -78,  -142,   -59,   -31,   -57,  -142,  -142,
     -14,  -142,  -142,   -15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     8,    13,    17,    25,    14,    15,    20,
      21,    22,    55,    30,    43,    19,    26,    37,    81,   144,
     162,    57,    80,    27,    38,    82,   169,   118,   119,   152,
     141,    44,    45,    46,    59,    84,   122,   123,    67,    88,
      85,   147,    86,   157,   158,    47,    48,    92,    77,    49,
      50,   114,   139,    68,   102,    69,    70,    71,    51,   107,
     108,    52,   110,   111
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     115,    87,    60,   155,   112,    89,   113,   103,   104,    23,
      24,    61,   125,    93,   109,   163,    33,     3,    33,    39,
       6,    39,   105,   100,   101,    35,    40,    36,    40,    62,
       4,   -69,    63,    64,    90,    91,   116,   117,    74,    93,
      65,    66,    75,   131,     9,   146,   132,   133,   134,   100,
     101,    41,    42,    41,    42,    60,     5,   148,   135,   136,
     137,   138,   128,     7,    61,   142,   143,    93,    10,   129,
     130,    94,    95,    96,    97,    98,    99,   100,   101,   109,
     166,   159,    62,   164,   165,    63,    64,   170,    11,    12,
      16,    -8,    18,    56,    54,    72,   -13,    29,    31,    32,
      33,    53,    73,    79,   120,   124,   145,    83,   106,    76,
     121,   153,   156,   140,   160,    78,   168,   171,   151,   154,
     127,   126,   149,   150,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,    34,   161,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58
};

static const yytype_int16 yycheck[] =
{
      78,    60,     4,   144,    74,    62,    76,    29,    30,    17,
      18,    13,     5,    32,    73,   156,    10,     0,    10,    13,
       4,    13,    44,    42,    43,     6,    20,     8,    20,    31,
       3,    23,    34,    35,    65,    66,    12,    13,     7,    32,
      42,    43,    11,   102,     6,   123,   103,   104,   105,    42,
      43,    45,    46,    45,    46,     4,    13,   127,     5,     6,
       5,     6,    93,    13,    13,     5,     6,    32,     5,   100,
     101,    36,    37,    38,    39,    40,    41,    42,    43,   138,
     158,   151,    31,     5,     6,    34,    35,   165,    13,     7,
       9,    12,    12,     4,    33,     4,    13,    13,    13,    13,
      10,    13,     4,     7,     7,     4,    33,    14,    13,    22,
       8,     8,     7,    13,     8,    23,     7,     7,    24,   143,
      21,    88,   136,   138,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    33,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     3,    13,     4,    13,    51,     6,
       5,    13,     7,    52,    55,    56,     9,    53,    12,    63,
      57,    58,    59,    17,    18,    54,    64,    71,    58,    13,
      61,    13,    13,    10,    62,     6,     8,    65,    72,    13,
      20,    45,    46,    62,    79,    80,    81,    93,    94,    97,
      98,   106,   109,    13,    33,    60,     4,    69,    69,    82,
       4,    13,    31,    34,    35,    42,    43,    86,   101,   103,
     104,   105,     4,     4,     7,    11,    22,    96,    23,     7,
      70,    66,    73,    14,    83,    88,    90,   103,    87,   105,
     104,   104,    95,    32,    36,    37,    38,    39,    40,    41,
      42,    43,   102,    29,    30,    44,    13,   107,   108,   103,
     110,   111,    80,    80,    99,   101,    12,    13,    75,    76,
       7,     8,    84,    85,     4,     5,    88,    21,   104,   104,
     104,   103,   105,   105,   105,     5,     6,     5,     6,   100,
      13,    78,     5,     6,    67,    33,   101,    89,    80,   108,
     111,    24,    77,     8,    76,    52,     7,    91,    92,    80,
       8,    33,    68,    52,     5,     6,   101,    33,     7,    74,
     101,     7
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    51,    53,    54,    52,    56,    55,
      55,    57,    57,    59,    58,    60,    61,    61,    62,    63,
      63,    63,    65,    66,    67,    68,    64,    70,    69,    69,
      72,    73,    74,    71,    75,    75,    77,    76,    78,    76,
      79,    79,    79,    80,    80,    80,    80,    80,    80,    82,
      81,    83,    83,    85,    84,    87,    86,    89,    88,    88,
      90,    91,    92,    91,    93,    95,    94,    96,    96,    98,
      97,   100,    99,   101,   101,   102,   102,   102,   102,   102,
     102,   103,   103,   103,   103,   103,   103,   104,   104,   104,
     104,   105,   105,   105,   105,   105,   106,   107,   107,   108,
     109,   110,   110,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     3,     0,     0,     5,     0,     3,
       0,     2,     1,     0,     5,     1,     3,     1,     3,     2,
       2,     0,     0,     0,     0,     0,    10,     0,     4,     0,
       0,     0,     0,    11,     3,     1,     0,     5,     0,     4,
       3,     1,     0,     1,     1,     1,     1,     1,     1,     0,
       3,     2,     1,     0,     2,     0,     3,     0,     5,     1,
       0,     3,     0,     2,     2,     0,     5,     2,     0,     0,
       3,     0,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     3,     3,     1,     3,     3,
       3,     1,     1,     1,     3,     2,     4,     3,     1,     1,
       4,     3,     1,     1
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
#line 91 "compilador.y"
             {
             geraCodigo (NULL, "INPP");
             tabela = inicializa();
             p_rotulos = inicializa_rotulos();
             nivel_lexico = 0;
             }
#line 1351 "compilador.tab.c"
    break;

  case 3: /* programa: $@1 PROGRAM IDENT ABRE_PARENTESES input_idents FECHA_PARENTESES PONTO_E_VIRGULA bloco PONTO  */
#line 99 "compilador.y"
                         {
             sprintf (mepa_buf, "DMEM %d", num_vars_por_nivel[0]);
             geraCodigo (NULL, mepa_buf);
             geraCodigo (NULL, "PARA");
             }
#line 1361 "compilador.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 113 "compilador.y"
            {
            //fprintf(stderr,"COISA DE TESTE \n");
            rotulo_a = gerarrotulo(&p_rotulos);
            sprintf(mepa_buf, "DSVS %s", rotulo_a.rotulo);
            geraCodigo (NULL, mepa_buf);
            nivel_lexico++;
            }
#line 1373 "compilador.tab.c"
    break;

  case 6: /* $@3: %empty  */
#line 121 "compilador.y"
            {
            nivel_lexico --;
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA");
            }
#line 1383 "compilador.tab.c"
    break;

  case 7: /* bloco: parte_declara_vars $@2 parte_declara_sub_rotinas $@3 comando_composto  */
#line 127 "compilador.y"
            {
            }
#line 1390 "compilador.tab.c"
    break;

  case 8: /* $@4: %empty  */
#line 134 "compilador.y"
                    {num_vars = 0;

                  }
#line 1398 "compilador.tab.c"
    break;

  case 9: /* parte_declara_vars: $@4 VAR declaracao_de_vars  */
#line 137 "compilador.y"
                                                               {
					   sprintf(mepa_buf, "AMEM %d", num_vars);
                  ponteiro_pilha_num_vars++;
                  pilha_num_vars[ponteiro_pilha_num_vars] = num_vars;
					   geraCodigo(NULL,mepa_buf);
					   }
#line 1409 "compilador.tab.c"
    break;

  case 13: /* $@5: %empty  */
#line 152 "compilador.y"
                   {
                     num_carrega_tipo = 0;
                  }
#line 1417 "compilador.tab.c"
    break;

  case 15: /* tipo: TIPO  */
#line 159 "compilador.y"
                   {
                     if (!strcmp(token, "integer"))
                        coloca_tipo(&tabela, pas_integer, num_carrega_tipo);
                     else if (!strcmp(token, "boolean"))
                        coloca_tipo(&tabela, pas_boolean, num_carrega_tipo);
                     else
                        perror("TIPO ERRADO, CORRIGE, TA ERRADO");
                     }
#line 1430 "compilador.tab.c"
    break;

  case 16: /* lista_idents: lista_idents VIRGULA IDENT  */
#line 171 "compilador.y"
                                         {
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc, num_vars);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1443 "compilador.tab.c"
    break;

  case 17: /* lista_idents: IDENT  */
#line 179 "compilador.y"
                    {
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc, num_vars);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1456 "compilador.tab.c"
    break;

  case 22: /* $@6: %empty  */
#line 200 "compilador.y"
                                     {
                        strcpy(pilha_proc_name[pilha_proc], token);
                        pilha_proc++;
                        num_params = 0;
                     }
#line 1466 "compilador.tab.c"
    break;

  case 23: /* $@7: %empty  */
#line 205 "compilador.y"
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

                        s = cria_simbolo(pilha_proc_name[pilha_proc-1], procedimento, nivel_lexico, conteudo, 0);

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
#line 1500 "compilador.tab.c"
    break;

  case 24: /* $@8: %empty  */
#line 233 "compilador.y"
                                       {imprime_tabela(&tabela);}
#line 1506 "compilador.tab.c"
    break;

  case 25: /* $@9: %empty  */
#line 233 "compilador.y"
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
#line 1525 "compilador.tab.c"
    break;

  case 27: /* $@10: %empty  */
#line 250 "compilador.y"
                               {num_params = 0;}
#line 1531 "compilador.tab.c"
    break;

  case 30: /* $@11: %empty  */
#line 255 "compilador.y"
                              {
                  strcpy(proc_name, token);
                  num_params = 0;
               }
#line 1540 "compilador.tab.c"
    break;

  case 31: /* $@12: %empty  */
#line 258 "compilador.y"
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
#line 1573 "compilador.tab.c"
    break;

  case 32: /* $@13: %empty  */
#line 285 "compilador.y"
                                                        {
                  sprintf(mepa_buf, "RTPR %d, %d", nivel_lexico, 9999);
                  geraCodigo(NULL, mepa_buf);
               }
#line 1582 "compilador.tab.c"
    break;

  case 34: /* lista_params_formais: lista_params_formais VIRGULA parametro  */
#line 293 "compilador.y"
                                                               {num_params++;}
#line 1588 "compilador.tab.c"
    break;

  case 35: /* lista_params_formais: parametro  */
#line 294 "compilador.y"
                                    {num_params++;}
#line 1594 "compilador.tab.c"
    break;

  case 36: /* $@14: %empty  */
#line 298 "compilador.y"
                   {
            cc.param.passagem = parametro_ref;
            printf("adicionado token [%s]\n", token);
            s = cria_simbolo(token, parametro, nivel_lexico, cc, -4 - num_params);
         }
#line 1604 "compilador.tab.c"
    break;

  case 37: /* parametro: VAR IDENT $@14 DOIS_PONTOS TIPO  */
#line 302 "compilador.y"
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
#line 1620 "compilador.tab.c"
    break;

  case 38: /* $@15: %empty  */
#line 313 "compilador.y"
                  {
            cc.param.passagem = parametro_copia;
            printf("adicionado token [%s]\n", token);
            s = cria_simbolo(token, parametro, nivel_lexico, cc, -4 - num_params);
            printf("OI %d\n\n\n", num_params);
            printf("TCHAU %d\n\n\n", s.deslocamento);
         }
#line 1632 "compilador.tab.c"
    break;

  case 39: /* parametro: IDENT $@15 DOIS_PONTOS TIPO  */
#line 319 "compilador.y"
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
#line 1648 "compilador.tab.c"
    break;

  case 43: /* comando: atribui_ou_func  */
#line 341 "compilador.y"
                          {printf("ATRIBUICAO/FUNCAO ESCOLHIDA \n");}
#line 1654 "compilador.tab.c"
    break;

  case 49: /* $@16: %empty  */
#line 352 "compilador.y"
               {
            if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
               printf("ERRO: identificador {%s} nao encontrado/nao declarado", token );
               exit(1);
            }
            esquerdo_recursao_func++;
            printf("INDO PARA O ATRIBUI OU PARAMETROS\n");
            printf("identificador achado = %s\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
         }
#line 1668 "compilador.tab.c"
    break;

  case 50: /* atribui_ou_func: IDENT $@16 continua_atibui_ou_func  */
#line 361 "compilador.y"
                                {
            if ((yyvsp[0].int_val) == 1 )
                esquerdo_recursao_func--;
         }
#line 1677 "compilador.tab.c"
    break;

  case 51: /* continua_atibui_ou_func: ATRIBUICAO atribui_contiunuacao  */
#line 368 "compilador.y"
                                                  {(yyval.int_val) = 1; printf("ATRIBUICAO ESCOLHIDA \n");}
#line 1683 "compilador.tab.c"
    break;

  case 52: /* continua_atibui_ou_func: parametros_ou_nada  */
#line 369 "compilador.y"
                                       {(yyval.int_val) = 2; printf( "FUNCAO ESCOLHIDA \n");}
#line 1689 "compilador.tab.c"
    break;

  case 53: /* $@17: %empty  */
#line 373 "compilador.y"
                      { printf("ATRIBUICAO ESCOLHIDA - continuacao\n");}
#line 1695 "compilador.tab.c"
    break;

  case 54: /* atribui_contiunuacao: $@17 expressao  */
#line 374 "compilador.y"
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
#line 1725 "compilador.tab.c"
    break;

  case 55: /* $@18: %empty  */
#line 405 "compilador.y"
                     {
                  if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
                        printf("falha ao procurar token %s\n", token);
                     exit(1);
                  }
                  esquerdo_recursao_func++;  //evita de esquerdo_func se sobrescrito dentro de uma chamada recursiva de funcao_ou_ident
                  printf("identificador achado = %s\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
               }
#line 1738 "compilador.tab.c"
    break;

  case 56: /* funcao_ou_ident: IDENT $@18 parametros_ou_nada  */
#line 413 "compilador.y"
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
#line 1761 "compilador.tab.c"
    break;

  case 57: /* $@19: %empty  */
#line 434 "compilador.y"
                                                 {num_params = 0;}
#line 1767 "compilador.tab.c"
    break;

  case 58: /* parametros_ou_nada: empilha_retorno ABRE_PARENTESES $@19 lista_params FECHA_PARENTESES  */
#line 434 "compilador.y"
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
#line 1787 "compilador.tab.c"
    break;

  case 59: /* parametros_ou_nada: empilha_retorno  */
#line 449 "compilador.y"
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
#line 1803 "compilador.tab.c"
    break;

  case 60: /* empilha_retorno: %empty  */
#line 462 "compilador.y"
                  {
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao){
                        geraCodigo(NULL, "AMEM 1");
                        (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                  }
#line 1814 "compilador.tab.c"
    break;

  case 61: /* lista_params: lista_params VIRGULA expressao  */
#line 471 "compilador.y"
                                              {num_params++; printf("%dAMAMA\n",num_params);}
#line 1820 "compilador.tab.c"
    break;

  case 62: /* $@20: %empty  */
#line 472 "compilador.y"
                 {printf("%d\n",num_params); }
#line 1826 "compilador.tab.c"
    break;

  case 63: /* lista_params: $@20 expressao  */
#line 472 "compilador.y"
                                                        {num_params++; printf("%dSUGA\n",num_params);}
#line 1832 "compilador.tab.c"
    break;

  case 64: /* comando_condicional: if_then cond_else  */
#line 477 "compilador.y"
                                    {
                        //fprintf(stderr, "TERMONOU O BHUR \n");
                        rotulo_a = pegarrotulo(&p_rotulos);
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                  }
#line 1842 "compilador.tab.c"
    break;

  case 65: /* $@21: %empty  */
#line 485 "compilador.y"
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
#line 1857 "compilador.tab.c"
    break;

  case 66: /* if_then: IF expressao $@21 THEN comando  */
#line 495 "compilador.y"
                      {
            rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
            sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
            geraCodigo(NULL, mepa_buf);
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA"); 
         }
#line 1869 "compilador.tab.c"
    break;

  case 69: /* $@22: %empty  */
#line 510 "compilador.y"
                   {
                        rotulo_a = gerarrotulo(&p_rotulos); //cria um rotulo mas esse e o proximo rotulo vai ser usado como fila e nao como pilha
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                     }
#line 1878 "compilador.tab.c"
    break;

  case 71: /* $@23: %empty  */
#line 517 "compilador.y"
                               {
                        if((yyvsp[0].int_val) == pas_boolean){
                           rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                           sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           exit(1);
                        }   
                     }
#line 1892 "compilador.tab.c"
    break;

  case 72: /* while_resto: expressao $@23 DO comando  */
#line 526 "compilador.y"
                               {
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
                        sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
                        geraCodigo(NULL, mepa_buf);
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-1];
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                        remove_n(&p_rotulos, 2);
                     }
#line 1905 "compilador.tab.c"
    break;

  case 73: /* expressao: expressao_simples relacao expressao_simples  */
#line 538 "compilador.y"
                                                       {
               geraCodigo(NULL, (yyvsp[-1].str));
               if ((yyvsp[-2].int_val) == (yyvsp[0].int_val))
                  (yyval.int_val) = pas_boolean;
               else{
                  printf ("ERRO: expressao entre tipos incompativeis \n");
                  exit(1);
               }
            }
#line 1919 "compilador.tab.c"
    break;

  case 74: /* expressao: expressao_simples  */
#line 547 "compilador.y"
                                {
               (yyval.int_val) = (yyvsp[0].int_val);
            }
#line 1927 "compilador.tab.c"
    break;

  case 75: /* relacao: IGUAL  */
#line 554 "compilador.y"
                        { (yyval.str) = "CMIG"; }
#line 1933 "compilador.tab.c"
    break;

  case 76: /* relacao: MENOR  */
#line 555 "compilador.y"
                        { (yyval.str) = "CMME"; }
#line 1939 "compilador.tab.c"
    break;

  case 77: /* relacao: MAIOR  */
#line 556 "compilador.y"
                        { (yyval.str) = "CMMA"; }
#line 1945 "compilador.tab.c"
    break;

  case 78: /* relacao: MAIOR_IGUAL  */
#line 557 "compilador.y"
                        { (yyval.str) = "CMAG"; }
#line 1951 "compilador.tab.c"
    break;

  case 79: /* relacao: MENOR_IGUAL  */
#line 558 "compilador.y"
                        { (yyval.str) = "CMEG"; }
#line 1957 "compilador.tab.c"
    break;

  case 80: /* relacao: DIFERENTE  */
#line 559 "compilador.y"
                        { (yyval.str) = "CMDG"; }
#line 1963 "compilador.tab.c"
    break;

  case 81: /* expressao_simples: termo  */
#line 564 "compilador.y"
                     {
                  (yyval.int_val) = (yyvsp[0].int_val);
               }
#line 1971 "compilador.tab.c"
    break;

  case 82: /* expressao_simples: MAIS termo  */
#line 567 "compilador.y"
                            {
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1984 "compilador.tab.c"
    break;

  case 83: /* expressao_simples: MENOS termo  */
#line 575 "compilador.y"
                             {
                  geraCodigo(NULL, "INVR");
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1998 "compilador.tab.c"
    break;

  case 84: /* expressao_simples: expressao_simples MAIS termo  */
#line 584 "compilador.y"
                                               {
                  geraCodigo( NULL, "SOMA");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2012 "compilador.tab.c"
    break;

  case 85: /* expressao_simples: expressao_simples MENOS termo  */
#line 593 "compilador.y"
                                               {
                  geraCodigo( NULL, "SUBT");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2026 "compilador.tab.c"
    break;

  case 86: /* expressao_simples: expressao_simples OR termo  */
#line 602 "compilador.y"
                                            {
                  geraCodigo( NULL, "DISJ");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 2040 "compilador.tab.c"
    break;

  case 87: /* termo: fator  */
#line 614 "compilador.y"
             {
         (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 2048 "compilador.tab.c"
    break;

  case 88: /* termo: termo DIV fator  */
#line 617 "compilador.y"
                         {
         geraCodigo( NULL, "DIVI");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 2062 "compilador.tab.c"
    break;

  case 89: /* termo: termo VEZES fator  */
#line 626 "compilador.y"
                           {
         geraCodigo( NULL, "MULT");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 2076 "compilador.tab.c"
    break;

  case 90: /* termo: termo AND fator  */
#line 635 "compilador.y"
                         {
          geraCodigo( NULL, "CONJ");
          if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
            (yyval.int_val) = (yyvsp[0].int_val);
          else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
          }
      }
#line 2090 "compilador.tab.c"
    break;

  case 91: /* fator: funcao_ou_ident  */
#line 647 "compilador.y"
                      {
        (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 2098 "compilador.tab.c"
    break;

  case 92: /* fator: NUMERO  */
#line 650 "compilador.y"
               {
         sprintf (mepa_buf, "CRCT %d", atoi(token));
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_integer;
      }
#line 2108 "compilador.tab.c"
    break;

  case 93: /* fator: VALOR_BOOL  */
#line 655 "compilador.y"
                   {
         if(strcmp(token, "True") == 0)
            sprintf (mepa_buf, "CRCT %d", 1);
         else
            sprintf (mepa_buf, "CRCT %d", 0);
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_boolean;
      }
#line 2121 "compilador.tab.c"
    break;

  case 94: /* fator: ABRE_PARENTESES expressao_simples FECHA_PARENTESES  */
#line 663 "compilador.y"
                                                          {
         (yyval.int_val) = (yyvsp[-1].int_val);
      }
#line 2129 "compilador.tab.c"
    break;

  case 95: /* fator: NOT fator  */
#line 666 "compilador.y"
                 {
         if((yyvsp[0].int_val) == pas_boolean){
            geraCodigo(NULL, "NEGA");
            (yyval.int_val) = (yyvsp[0].int_val);
         }   
         else
            exit(1);   
      }
#line 2142 "compilador.tab.c"
    break;

  case 99: /* parametro_leitura: IDENT  */
#line 689 "compilador.y"
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
#line 2158 "compilador.tab.c"
    break;

  case 103: /* parametro_escrita: expressao_simples  */
#line 714 "compilador.y"
                                    {
                     if ((yyvsp[0].int_val) != undefined_type)
                        geraCodigo(NULL, "IMPR");
                     else {
                        printf("parametro incompativel\n");
                     }   
                  }
#line 2170 "compilador.tab.c"
    break;


#line 2174 "compilador.tab.c"

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

#line 726 "compilador.y"


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
