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
struct simbolo s;
struct simbolo *ps;
struct simbolo *esquerdo;
int esquerdo_recursao_func = 0;
struct simbolo *esquerdo_func[10];
int num_vars_por_nivel[10];
struct pilha_rotulos *p_rotulos;
struct rotulo rotulo_a;


enum tipo_dado{
    t_int,
    t_bool
};



#line 106 "compilador.tab.c"

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
  YYSYMBOL_47_lower_then_else_ = 47,       /* "lower_then_else"  */
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
  YYSYMBOL_declara_function = 65,          /* declara_function  */
  YYSYMBOL_lista_paramentro_formais = 66,  /* lista_paramentro_formais  */
  YYSYMBOL_parametro = 67,                 /* parametro  */
  YYSYMBOL_comandos = 68,                  /* comandos  */
  YYSYMBOL_comando = 69,                   /* comando  */
  YYSYMBOL_atribui = 70,                   /* atribui  */
  YYSYMBOL_71_6 = 71,                      /* $@6  */
  YYSYMBOL_atribui_contiunuacao = 72,      /* atribui_contiunuacao  */
  YYSYMBOL_funcao_ou_ident = 73,           /* funcao_ou_ident  */
  YYSYMBOL_74_7 = 74,                      /* $@7  */
  YYSYMBOL_parametros_ou_nada = 75,        /* parametros_ou_nada  */
  YYSYMBOL_lista_params = 76,              /* lista_params  */
  YYSYMBOL_comando_condicional = 77,       /* comando_condicional  */
  YYSYMBOL_78_8 = 78,                      /* $@8  */
  YYSYMBOL_79_9 = 79,                      /* $@9  */
  YYSYMBOL_else_ou_nada = 80,              /* else_ou_nada  */
  YYSYMBOL_comando_repetitivo = 81,        /* comando_repetitivo  */
  YYSYMBOL_82_10 = 82,                     /* $@10  */
  YYSYMBOL_while_resto = 83,               /* while_resto  */
  YYSYMBOL_84_11 = 84,                     /* $@11  */
  YYSYMBOL_expressao = 85,                 /* expressao  */
  YYSYMBOL_relacao = 86,                   /* relacao  */
  YYSYMBOL_expressao_simples = 87,         /* expressao_simples  */
  YYSYMBOL_termo = 88,                     /* termo  */
  YYSYMBOL_fator = 89,                     /* fator  */
  YYSYMBOL_leitura = 90,                   /* leitura  */
  YYSYMBOL_parametros_de_leitura = 91,     /* parametros_de_leitura  */
  YYSYMBOL_parametro_leitura = 92,         /* parametro_leitura  */
  YYSYMBOL_escrita = 93,                   /* escrita  */
  YYSYMBOL_parametros_de_escrita = 94,     /* parametros_de_escrita  */
  YYSYMBOL_parametro_escrita = 95          /* parametro_escrita  */
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
#define YYLAST   141

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

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
       0,    81,    81,    81,    97,   103,   110,   102,   122,   122,
     131,   135,   136,   138,   138,   145,   157,   166,   178,   182,
     183,   184,   188,   189,   193,   194,   199,   200,   204,   205,
     210,   211,   212,   217,   218,   224,   225,   226,   227,   228,
     234,   234,   244,   272,   272,   300,   314,   328,   329,   372,
     381,   372,   396,   397,   401,   401,   408,   408,   429,   438,
     445,   446,   447,   448,   449,   450,   455,   458,   466,   475,
     484,   493,   505,   508,   517,   526,   538,   541,   546,   554,
     557,   571,   575,   576,   580,   596,   600,   601,   605
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
  "VEZES", "READ", "WRITE", "\"lower_then_else\"", "$accept", "programa",
  "$@1", "input_idents", "bloco", "$@2", "$@3", "parte_declara_vars",
  "$@4", "declaracao_de_vars", "declaracao_de_var", "$@5", "tipo",
  "lista_idents", "comando_composto", "parte_declara_sub_rotinas",
  "declara_procedimento", "declara_function", "lista_paramentro_formais",
  "parametro", "comandos", "comando", "atribui", "$@6",
  "atribui_contiunuacao", "funcao_ou_ident", "$@7", "parametros_ou_nada",
  "lista_params", "comando_condicional", "$@8", "$@9", "else_ou_nada",
  "comando_repetitivo", "$@10", "while_resto", "$@11", "expressao",
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

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-55)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -79,    12,    26,   -79,     6,    28,    31,    35,    48,    51,
      69,   -79,    74,    80,   -79,    81,   -79,   -79,   -79,   -12,
      82,   -79,    83,    85,    86,    84,   -79,   -79,   -79,   -79,
      16,    10,    57,    17,   -79,    96,    45,    55,    74,    55,
      78,    98,     0,    88,   106,   -79,    59,   -79,   -79,   -79,
     -79,   -79,    90,   -79,   -79,   -79,   -79,   107,   102,   108,
      66,   -79,   110,    68,   111,   105,   117,     0,   -79,    56,
     -79,   -79,    56,    56,   -79,   -79,    65,   -19,   -79,   112,
       0,    13,   -79,     0,   -79,   115,    91,   119,    55,   -79,
     120,    74,     0,   -79,     0,   -79,     4,   -79,   -19,   -19,
     109,    56,   -79,   -79,   -79,   -79,   -79,   -79,    56,    56,
       0,    56,    56,    56,   -79,    75,   -79,    -4,    77,   -79,
     -79,   -79,   -79,    94,   -79,    74,   -79,    99,   122,   -79,
      79,   -79,   -79,    13,   -19,   -19,   -19,    -4,   -79,   -79,
     -79,   -79,   112,   -79,     0,   113,   -79,   124,   126,   -79,
     -79,     0,   -79,   -79,   -79,    13,   -79,    74,   -79,   -79,
     -79,   127,   -79,   -79
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     4,    10,     0,     5,     0,     3,    21,    13,     6,
       9,    12,     0,     0,     0,     0,    19,    20,    11,    17,
       0,     0,     0,    32,     7,     0,     0,     0,    10,     0,
       0,    43,     0,     0,     0,    35,     0,    31,    33,    34,
      36,    37,     0,    38,    39,    16,    15,     0,     0,     0,
       0,    27,     0,     0,     0,     0,    46,     0,    43,     0,
      78,    77,     0,     0,    76,    49,    59,    66,    72,     0,
       0,    54,    18,     0,    14,     0,     0,     0,     0,    23,
       0,    10,     0,    41,     0,    44,     0,    80,    67,    68,
       0,     0,    62,    61,    60,    64,    63,    65,     0,     0,
       0,     0,     0,     0,    84,     0,    83,    88,     0,    87,
      30,    55,    56,     0,    29,    10,    26,     0,     0,    42,
       0,    48,    79,    54,    71,    69,    70,    58,    73,    75,
      74,    81,     0,    85,     0,     0,    28,     0,     0,    25,
      45,     0,    50,    82,    86,    54,    22,    10,    47,    53,
      57,     0,    51,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -79,   -79,   -79,   -79,   -37,   -79,   -79,   -79,   -79,   -79,
     116,   -79,   -79,   -79,   114,   -79,   -79,   -79,   101,    47,
     -79,   -78,   -79,   -79,   -79,   -33,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -76,   -79,   -65,
     -52,   -61,   -79,   -79,    -1,   -79,   -79,    -6
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     8,    13,    17,    25,    14,    15,    20,
      21,    22,    57,    30,    45,    19,    26,    27,    60,    61,
      46,    47,    48,    65,    93,    74,    66,    95,   130,    50,
     100,   159,   162,    51,    52,   121,   145,    75,   110,    76,
      77,    78,    53,   115,   116,    54,   118,   119
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    62,    96,   120,    67,    23,    24,   122,    97,   132,
     111,   112,     3,    68,    37,   117,   129,    38,   131,     5,
      98,    99,    35,    33,    36,   113,    41,    33,   101,     4,
      41,    69,     6,    42,    70,    71,   101,    42,   108,   109,
     -54,     9,    72,    73,     7,   137,   108,   109,    49,   134,
     138,   139,   140,    10,   128,   152,   135,   136,    43,    44,
      67,    39,    43,    44,    11,    40,    81,    58,    59,    68,
      82,    87,    88,    90,    88,   158,    12,   160,    56,   117,
     141,   142,   143,   144,   150,   151,    -8,    69,   147,    16,
      70,    71,    79,    18,    33,   -13,    29,   101,    31,    32,
      49,   102,   103,   104,   105,   106,   107,   108,   109,    55,
      80,    64,   -40,    83,    84,    85,    86,    89,    91,    92,
     161,    94,    49,   123,   124,   114,   125,   146,   127,   149,
     133,   156,   148,   157,   163,   126,    28,   155,   154,    34,
      63,   153
};

static const yytype_uint8 yycheck[] =
{
      33,    38,    67,    81,     4,    17,    18,    83,    69,     5,
      29,    30,     0,    13,     4,    80,    92,     7,    94,    13,
      72,    73,     6,    10,     8,    44,    13,    10,    32,     3,
      13,    31,     4,    20,    34,    35,    32,    20,    42,    43,
      23,     6,    42,    43,    13,   110,    42,    43,    81,   101,
     111,   112,   113,     5,    91,   133,   108,   109,    45,    46,
       4,     4,    45,    46,    13,     8,     7,    12,    13,    13,
      11,     5,     6,     5,     6,   151,     7,   155,    33,   144,
       5,     6,     5,     6,     5,     6,    12,    31,   125,     9,
      34,    35,     4,    12,    10,    13,    13,    32,    13,    13,
     133,    36,    37,    38,    39,    40,    41,    42,    43,    13,
       4,    33,    14,    23,     7,    13,     8,     7,     7,    14,
     157,     4,   155,     8,    33,    13,     7,    33,     8,     7,
      21,     7,    33,     7,     7,    88,    20,    24,   144,    25,
      39,   142
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    50,     0,     3,    13,     4,    13,    51,     6,
       5,    13,     7,    52,    55,    56,     9,    53,    12,    63,
      57,    58,    59,    17,    18,    54,    64,    65,    58,    13,
      61,    13,    13,    10,    62,     6,     8,     4,     7,     4,
       8,    13,    20,    45,    46,    62,    68,    69,    70,    73,
      77,    81,    82,    90,    93,    13,    33,    60,    12,    13,
      66,    67,    52,    66,    33,    71,    74,     4,    13,    31,
      34,    35,    42,    43,    73,    85,    87,    88,    89,     4,
       4,     7,    11,    23,     7,    13,     8,     5,     6,     7,
       5,     7,    14,    72,     4,    75,    87,    89,    88,    88,
      78,    32,    36,    37,    38,    39,    40,    41,    42,    43,
      86,    29,    30,    44,    13,    91,    92,    87,    94,    95,
      69,    83,    85,     8,    33,     7,    67,     8,    52,    85,
      76,    85,     5,    21,    88,    88,    88,    87,    89,    89,
      89,     5,     6,     5,     6,    84,    33,    52,    33,     7,
       5,     6,    69,    92,    95,    24,     7,     7,    85,    79,
      69,    52,    80,     7
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    51,    53,    54,    52,    56,    55,
      55,    57,    57,    59,    58,    60,    61,    61,    62,    63,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      71,    70,    72,    74,    73,    75,    75,    76,    76,    78,
      79,    77,    80,    80,    82,    81,    84,    83,    85,    85,
      86,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    90,    91,    91,    92,    93,    94,    94,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     3,     0,     0,     5,     0,     3,
       0,     2,     1,     0,     5,     1,     3,     1,     3,     2,
       2,     0,     8,     5,    10,     7,     3,     1,     4,     3,
       3,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     2,     0,     3,     3,     0,     3,     1,     0,
       0,     7,     2,     0,     0,     3,     0,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     1,     3,     3,     3,     1,     1,     1,     3,
       2,     4,     3,     1,     1,     4,     3,     1,     1
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
#line 81 "compilador.y"
             {
             geraCodigo (NULL, "INPP");
             tabela = inicializa();
             p_rotulos = inicializa_rotulos();
             nivel_lexico = 0;
             }
#line 1309 "compilador.tab.c"
    break;

  case 3: /* programa: $@1 PROGRAM IDENT ABRE_PARENTESES input_idents FECHA_PARENTESES PONTO_E_VIRGULA bloco PONTO  */
#line 89 "compilador.y"
                         {
             sprintf (mepa_buf, "DMEM %d", num_vars_por_nivel[0]);
             geraCodigo (NULL, mepa_buf);
             geraCodigo (NULL, "PARA");
             }
#line 1319 "compilador.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 103 "compilador.y"
            {
            printf("COISA DE TESTE \n");
            rotulo_a = gerarrotulo(&p_rotulos);
            sprintf(mepa_buf, "DSVS %s", rotulo_a.rotulo);
            geraCodigo (NULL, mepa_buf);
            }
#line 1330 "compilador.tab.c"
    break;

  case 6: /* $@3: %empty  */
#line 110 "compilador.y"
            {
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA");
            }
#line 1339 "compilador.tab.c"
    break;

  case 7: /* bloco: parte_declara_vars $@2 parte_declara_sub_rotinas $@3 comando_composto  */
#line 115 "compilador.y"
            {
            }
#line 1346 "compilador.tab.c"
    break;

  case 8: /* $@4: %empty  */
#line 122 "compilador.y"
                    {num_vars = 0;

                  }
#line 1354 "compilador.tab.c"
    break;

  case 9: /* parte_declara_vars: $@4 VAR declaracao_de_vars  */
#line 125 "compilador.y"
                                                               {
					   sprintf(mepa_buf, "AMEM %d", num_vars);
					   geraCodigo(NULL,mepa_buf);
					   }
#line 1363 "compilador.tab.c"
    break;

  case 13: /* $@5: %empty  */
#line 138 "compilador.y"
                   {
                     num_carrega_tipo = 0;
                  }
#line 1371 "compilador.tab.c"
    break;

  case 15: /* tipo: TIPO  */
#line 145 "compilador.y"
                   {
                     if (!strcmp(token, "integer"))
                        coloca_tipo(&tabela, pas_integer, num_carrega_tipo);
                     else if (!strcmp(token, "boolean"))
                        coloca_tipo(&tabela, pas_boolean, num_carrega_tipo);
                     else
                        perror("TIPO ERRADO, CORRIGE, TA ERRADO");
                     }
#line 1384 "compilador.tab.c"
    break;

  case 16: /* lista_idents: lista_idents VIRGULA IDENT  */
#line 157 "compilador.y"
                                         {
               cc.var.deslocamento = num_vars;
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1398 "compilador.tab.c"
    break;

  case 17: /* lista_idents: IDENT  */
#line 166 "compilador.y"
                    {
               cc.var.deslocamento = num_vars;
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
#line 1412 "compilador.tab.c"
    break;

  case 33: /* comando: atribui  */
#line 217 "compilador.y"
                  {printf("ATRIBUICAO ESCOLHIDA \n");}
#line 1418 "compilador.tab.c"
    break;

  case 34: /* comando: funcao_ou_ident  */
#line 218 "compilador.y"
                           {
            if (esquerdo_func[esquerdo_recursao_func+1]->categoria == parametro || esquerdo_func[esquerdo_recursao_func+1]->categoria == variavel){
               printf("ERRO: variavel sendo usada como funcao\n");
               exit(1);
            }
         }
#line 1429 "compilador.tab.c"
    break;

  case 40: /* $@6: %empty  */
#line 234 "compilador.y"
               {
            if((esquerdo = busca(&tabela, token)) == NULL){
               printf("ERRO: identificador {%s} nao encontrado/nao declarado", token );
               exit(1);
            }
         }
#line 1440 "compilador.tab.c"
    break;

  case 42: /* atribui_contiunuacao: ATRIBUICAO expressao  */
#line 244 "compilador.y"
                                      {
                     if(esquerdo->categoria == variavel){
                        if((yyvsp[0].int_val) == esquerdo->conteudo.var.tipo){
                           sprintf(mepa_buf, "ARMZ %d, %d",esquerdo->nivel , esquerdo->conteudo.var.deslocamento );
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           printf ("erro: expresao entre tipos incompativeis \n");
                           exit(1);
                        }
                     }else if (esquerdo->categoria == parametro){
                        if((yyvsp[0].int_val) == esquerdo->conteudo.param.tipo){
                           if (esquerdo->conteudo.param.passagem == parametro_copia ){
                              sprintf(mepa_buf, "ARMZ %d, %d",esquerdo->nivel , esquerdo->conteudo.param.deslocamento );
                              geraCodigo(NULL, mepa_buf);
                           }else if (esquerdo->conteudo.param.passagem == parametro_ref){
                              sprintf(mepa_buf, "ARMI %d, %d",esquerdo->nivel , esquerdo->conteudo.param.deslocamento );
                              geraCodigo(NULL, mepa_buf);
                           }
                        }else {
                           printf ("erro: expresao entre tipos incompativeis \n");
                           exit(1);
                        }
                     } 
                  }
#line 1469 "compilador.tab.c"
    break;

  case 43: /* $@7: %empty  */
#line 272 "compilador.y"
                     {
                  if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
                        printf("falha ao procurar token %s\n", token);
                     exit(1);
                  }
                  esquerdo_recursao_func++;  //evita de esquerdo_func se sobrescrito dentro de uma chamada recursiva de funcao_ou_ident
               }
#line 1481 "compilador.tab.c"
    break;

  case 44: /* funcao_ou_ident: IDENT $@7 parametros_ou_nada  */
#line 279 "compilador.y"
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
#line 1504 "compilador.tab.c"
    break;

  case 45: /* parametros_ou_nada: ABRE_PARENTESES lista_params FECHA_PARENTESES  */
#line 300 "compilador.y"
                                                               {
                 if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao || esquerdo_func[esquerdo_recursao_func-1]->categoria == procedimento){
                     (yyval.int_val) = undefined_type; //caso seja procedure
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao){
                        geraCodigo(NULL, "AMEM 1");
                        (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                     sprintf(mepa_buf, "CHPR R%02d, %d", esquerdo_func[esquerdo_recursao_func-1]->conteudo.proc.rotulo , nivel_lexico );
                     geraCodigo(NULL, mepa_buf);
                  }else{
                     printf("ERRO: {%s} nao eh funcao ou procedimento\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
                     exit(1);
                  }
                }
#line 1523 "compilador.tab.c"
    break;

  case 46: /* parametros_ou_nada: %empty  */
#line 314 "compilador.y"
                  {
                  if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao || esquerdo_func[esquerdo_recursao_func-1]->categoria == procedimento){
                     (yyval.int_val) = undefined_type; //caso seja procedure
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao){
                        geraCodigo(NULL, "AMEM 1");
                        (yyval.int_val) = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                     sprintf(mepa_buf, "CHPR R%02d, %d", esquerdo_func[esquerdo_recursao_func-1]->conteudo.proc.rotulo , nivel_lexico );
                     geraCodigo(NULL, mepa_buf);
                  }
                }
#line 1539 "compilador.tab.c"
    break;

  case 49: /* $@8: %empty  */
#line 372 "compilador.y"
                               {
                     if((yyvsp[0].int_val) == pas_boolean){
                        rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                        sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
                        geraCodigo(NULL, mepa_buf);
                     }else{
                        exit(1);
                     }
                  }
#line 1553 "compilador.tab.c"
    break;

  case 50: /* $@9: %empty  */
#line 381 "compilador.y"
                               {
                     rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                     sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
                     geraCodigo(NULL, mepa_buf);
                     rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
                     geraCodigo (rotulo_a.rotulo, "NADA"); 
                  }
#line 1565 "compilador.tab.c"
    break;

  case 51: /* comando_condicional: IF expressao $@8 THEN comando $@9 else_ou_nada  */
#line 388 "compilador.y"
                              {
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-1];
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                        remove_n(&p_rotulos, 2);
                  }
#line 1575 "compilador.tab.c"
    break;

  case 54: /* $@10: %empty  */
#line 401 "compilador.y"
                   {
                        rotulo_a = gerarrotulo(&p_rotulos); //cria um rotulo mas esse e o proximo rotulo vai ser usado como fila e nao como pilha
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                     }
#line 1584 "compilador.tab.c"
    break;

  case 56: /* $@11: %empty  */
#line 408 "compilador.y"
                               {
                        if((yyvsp[0].int_val) == pas_boolean){
                           rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                           sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           exit(1);
                        }   
                     }
#line 1598 "compilador.tab.c"
    break;

  case 57: /* while_resto: expressao $@11 DO comando  */
#line 417 "compilador.y"
                               {
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
                        sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
                        geraCodigo(NULL, mepa_buf);
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-1];
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                        remove_n(&p_rotulos, 2);
                     }
#line 1611 "compilador.tab.c"
    break;

  case 58: /* expressao: expressao_simples relacao expressao_simples  */
#line 429 "compilador.y"
                                                       {
               geraCodigo(NULL, (yyvsp[-1].str));
               if ((yyvsp[-2].int_val) == (yyvsp[0].int_val))
                  (yyval.int_val) = pas_boolean;
               else{
                  printf ("erro: expresao entre tipos incompativeis \n");
                  exit(1);
               }
            }
#line 1625 "compilador.tab.c"
    break;

  case 59: /* expressao: expressao_simples  */
#line 438 "compilador.y"
                                {
               (yyval.int_val) = (yyvsp[0].int_val);
            }
#line 1633 "compilador.tab.c"
    break;

  case 60: /* relacao: IGUAL  */
#line 445 "compilador.y"
                        { (yyval.str) = "CMIG"; }
#line 1639 "compilador.tab.c"
    break;

  case 61: /* relacao: MENOR  */
#line 446 "compilador.y"
                        { (yyval.str) = "CMME"; }
#line 1645 "compilador.tab.c"
    break;

  case 62: /* relacao: MAIOR  */
#line 447 "compilador.y"
                        { (yyval.str) = "CMMA"; }
#line 1651 "compilador.tab.c"
    break;

  case 63: /* relacao: MAIOR_IGUAL  */
#line 448 "compilador.y"
                        { (yyval.str) = "CMAG"; }
#line 1657 "compilador.tab.c"
    break;

  case 64: /* relacao: MENOR_IGUAL  */
#line 449 "compilador.y"
                        { (yyval.str) = "CMEG"; }
#line 1663 "compilador.tab.c"
    break;

  case 65: /* relacao: DIFERENTE  */
#line 450 "compilador.y"
                        { (yyval.str) = "CMDG"; }
#line 1669 "compilador.tab.c"
    break;

  case 66: /* expressao_simples: termo  */
#line 455 "compilador.y"
                     {
                  (yyval.int_val) = (yyvsp[0].int_val);
               }
#line 1677 "compilador.tab.c"
    break;

  case 67: /* expressao_simples: MAIS termo  */
#line 458 "compilador.y"
                            {
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1690 "compilador.tab.c"
    break;

  case 68: /* expressao_simples: MENOS termo  */
#line 466 "compilador.y"
                             {
                  geraCodigo(NULL, "INVR");
                  if ((yyvsp[0].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1704 "compilador.tab.c"
    break;

  case 69: /* expressao_simples: expressao_simples MAIS termo  */
#line 475 "compilador.y"
                                               {
                  geraCodigo( NULL, "SOMA");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1718 "compilador.tab.c"
    break;

  case 70: /* expressao_simples: expressao_simples MENOS termo  */
#line 484 "compilador.y"
                                               {
                  geraCodigo( NULL, "SUBT");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1732 "compilador.tab.c"
    break;

  case 71: /* expressao_simples: expressao_simples OR termo  */
#line 493 "compilador.y"
                                            {
                  geraCodigo( NULL, "DISJ");
                  if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
                     (yyval.int_val) = (yyvsp[0].int_val);
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
#line 1746 "compilador.tab.c"
    break;

  case 72: /* termo: fator  */
#line 505 "compilador.y"
             {
         (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 1754 "compilador.tab.c"
    break;

  case 73: /* termo: termo DIV fator  */
#line 508 "compilador.y"
                         {
         geraCodigo( NULL, "DIVI");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("erro: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 1768 "compilador.tab.c"
    break;

  case 74: /* termo: termo VEZES fator  */
#line 517 "compilador.y"
                           {
         geraCodigo( NULL, "MULT");
         if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_integer)
            (yyval.int_val) = (yyvsp[0].int_val);
         else{
            printf ("erro: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
#line 1782 "compilador.tab.c"
    break;

  case 75: /* termo: termo AND fator  */
#line 526 "compilador.y"
                         {
          geraCodigo( NULL, "CONJ");
          if ((yyvsp[-2].int_val) == (yyvsp[0].int_val) && (yyvsp[-2].int_val) == pas_boolean)
            (yyval.int_val) = (yyvsp[0].int_val);
          else{
            printf ("erro: expresao entre tipos incompativeis \n");
            exit(1);
          }
      }
#line 1796 "compilador.tab.c"
    break;

  case 76: /* fator: funcao_ou_ident  */
#line 538 "compilador.y"
                      {
        (yyval.int_val) = (yyvsp[0].int_val);
      }
#line 1804 "compilador.tab.c"
    break;

  case 77: /* fator: NUMERO  */
#line 541 "compilador.y"
               {
         sprintf (mepa_buf, "CRCT %d", atoi(token));
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_integer;
      }
#line 1814 "compilador.tab.c"
    break;

  case 78: /* fator: VALOR_BOOL  */
#line 546 "compilador.y"
                   {
         if(strcmp(token, "True") == 0)
            sprintf (mepa_buf, "CRCT %d", 1);
         else
            sprintf (mepa_buf, "CRCT %d", 0);
         geraCodigo(NULL, mepa_buf);
         (yyval.int_val) = pas_boolean;
      }
#line 1827 "compilador.tab.c"
    break;

  case 79: /* fator: ABRE_PARENTESES expressao_simples FECHA_PARENTESES  */
#line 554 "compilador.y"
                                                          {
         (yyval.int_val) = (yyvsp[-1].int_val);
      }
#line 1835 "compilador.tab.c"
    break;

  case 80: /* fator: NOT fator  */
#line 557 "compilador.y"
                 {
         if((yyvsp[0].int_val) == pas_boolean){
            geraCodigo(NULL, "NEGA");
            (yyval.int_val) = (yyvsp[0].int_val);
         }   
         else
            exit(1);   
      }
#line 1848 "compilador.tab.c"
    break;

  case 84: /* parametro_leitura: IDENT  */
#line 580 "compilador.y"
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
#line 1864 "compilador.tab.c"
    break;

  case 88: /* parametro_escrita: expressao_simples  */
#line 605 "compilador.y"
                                    {
                     if ((yyvsp[0].int_val) != undefined_type)
                        geraCodigo(NULL, "IMPR");
                     else {
                        printf("parametro incompativel\n");
                     }   
                  }
#line 1876 "compilador.tab.c"
    break;


#line 1880 "compilador.tab.c"

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

#line 617 "compilador.y"


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
