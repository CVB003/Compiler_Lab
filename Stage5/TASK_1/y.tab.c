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
#line 1 "exptree.y"

	#include <stdlib.h>
	#include <stdio.h>
	#include "exptree.h"
	#include <string.h>
	#include "exptree.c"
	int yylex(void);
	extern FILE* fp;
	extern FILE* yyin;
	extern struct Gsymbol* symbtable;
	

#line 84 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    ID = 259,                      /* ID  */
    READ = 260,                    /* READ  */
    WRITE = 261,                   /* WRITE  */
    BREAK = 262,                   /* BREAK  */
    CONTINUE = 263,                /* CONTINUE  */
    INT = 264,                     /* INT  */
    STR = 265,                     /* STR  */
    STRING = 266,                  /* STRING  */
    PLUS = 267,                    /* PLUS  */
    MINUS = 268,                   /* MINUS  */
    MUL = 269,                     /* MUL  */
    DIV = 270,                     /* DIV  */
    END = 271,                     /* END  */
    BEGN = 272,                    /* BEGN  */
    LT = 273,                      /* LT  */
    GT = 274,                      /* GT  */
    LE = 275,                      /* LE  */
    GE = 276,                      /* GE  */
    NE = 277,                      /* NE  */
    EQ = 278,                      /* EQ  */
    IF = 279,                      /* IF  */
    THEN = 280,                    /* THEN  */
    ELSE = 281,                    /* ELSE  */
    ENDIF = 282,                   /* ENDIF  */
    WHILE = 283,                   /* WHILE  */
    DO = 284,                      /* DO  */
    ENDWHILE = 285,                /* ENDWHILE  */
    DECL = 286,                    /* DECL  */
    ENDDECL = 287,                 /* ENDDECL  */
    REPEAT = 288,                  /* REPEAT  */
    UNTIL = 289,                   /* UNTIL  */
    MAIN = 290,                    /* MAIN  */
    MOD = 291                      /* MOD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define ID 259
#define READ 260
#define WRITE 261
#define BREAK 262
#define CONTINUE 263
#define INT 264
#define STR 265
#define STRING 266
#define PLUS 267
#define MINUS 268
#define MUL 269
#define DIV 270
#define END 271
#define BEGN 272
#define LT 273
#define GT 274
#define LE 275
#define GE 276
#define NE 277
#define EQ 278
#define IF 279
#define THEN 280
#define ELSE 281
#define ENDIF 282
#define WHILE 283
#define DO 284
#define ENDWHILE 285
#define DECL 286
#define ENDDECL 287
#define REPEAT 288
#define UNTIL 289
#define MAIN 290
#define MOD 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "exptree.y"

	struct tnode *no;
	

#line 214 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_READ = 5,                       /* READ  */
  YYSYMBOL_WRITE = 6,                      /* WRITE  */
  YYSYMBOL_BREAK = 7,                      /* BREAK  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_INT = 9,                        /* INT  */
  YYSYMBOL_STR = 10,                       /* STR  */
  YYSYMBOL_STRING = 11,                    /* STRING  */
  YYSYMBOL_PLUS = 12,                      /* PLUS  */
  YYSYMBOL_MINUS = 13,                     /* MINUS  */
  YYSYMBOL_MUL = 14,                       /* MUL  */
  YYSYMBOL_DIV = 15,                       /* DIV  */
  YYSYMBOL_END = 16,                       /* END  */
  YYSYMBOL_BEGN = 17,                      /* BEGN  */
  YYSYMBOL_LT = 18,                        /* LT  */
  YYSYMBOL_GT = 19,                        /* GT  */
  YYSYMBOL_LE = 20,                        /* LE  */
  YYSYMBOL_GE = 21,                        /* GE  */
  YYSYMBOL_NE = 22,                        /* NE  */
  YYSYMBOL_EQ = 23,                        /* EQ  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_THEN = 25,                      /* THEN  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_ENDIF = 27,                     /* ENDIF  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_DO = 29,                        /* DO  */
  YYSYMBOL_ENDWHILE = 30,                  /* ENDWHILE  */
  YYSYMBOL_DECL = 31,                      /* DECL  */
  YYSYMBOL_ENDDECL = 32,                   /* ENDDECL  */
  YYSYMBOL_REPEAT = 33,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 34,                     /* UNTIL  */
  YYSYMBOL_MAIN = 35,                      /* MAIN  */
  YYSYMBOL_MOD = 36,                       /* MOD  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_39_ = 39,                       /* '['  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* '='  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_Gdeclblock = 48,                /* Gdeclblock  */
  YYSYMBOL_Gdecllist = 49,                 /* Gdecllist  */
  YYSYMBOL_Gdecl = 50,                     /* Gdecl  */
  YYSYMBOL_Gidlist = 51,                   /* Gidlist  */
  YYSYMBOL_Gid = 52,                       /* Gid  */
  YYSYMBOL_Fdefblock = 53,                 /* Fdefblock  */
  YYSYMBOL_Fdef = 54,                      /* Fdef  */
  YYSYMBOL_Paramlist = 55,                 /* Paramlist  */
  YYSYMBOL_Param = 56,                     /* Param  */
  YYSYMBOL_type = 57,                      /* type  */
  YYSYMBOL_Ldeclblock = 58,                /* Ldeclblock  */
  YYSYMBOL_Ldecllist = 59,                 /* Ldecllist  */
  YYSYMBOL_Ldecl = 60,                     /* Ldecl  */
  YYSYMBOL_Idlist = 61,                    /* Idlist  */
  YYSYMBOL_Mainblock = 62,                 /* Mainblock  */
  YYSYMBOL_body = 63,                      /* body  */
  YYSYMBOL_slist = 64,                     /* slist  */
  YYSYMBOL_ifstmt = 65,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 66,                 /* whilestmt  */
  YYSYMBOL_repeatstmt = 67,                /* repeatstmt  */
  YYSYMBOL_dowhilestmt = 68,               /* dowhilestmt  */
  YYSYMBOL_stmt = 69,                      /* stmt  */
  YYSYMBOL_inputstmt = 70,                 /* inputstmt  */
  YYSYMBOL_outputstmt = 71,                /* outputstmt  */
  YYSYMBOL_assgstmt = 72,                  /* assgstmt  */
  YYSYMBOL_expr = 73,                      /* expr  */
  YYSYMBOL_Arglist = 74                    /* Arglist  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      41,    42,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    28,    28,    30,    59,    62,    63,    66,    67,    70,
      73,    74,    76,    77,    78,    79,    82,    83,    86,    87,
      90,    91,    94,    97,    98,   101,   102,   105,   106,   109,
     112,   113,   116,   119,   122,   123,   126,   127,   132,   135,
     137,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     150,   155,   165,   166,   169,   175,   180,   191,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   224,   232,   233,   236,   237
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "ID", "READ",
  "WRITE", "BREAK", "CONTINUE", "INT", "STR", "STRING", "PLUS", "MINUS",
  "MUL", "DIV", "END", "BEGN", "LT", "GT", "LE", "GE", "NE", "EQ", "IF",
  "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "DECL", "ENDDECL",
  "REPEAT", "UNTIL", "MAIN", "MOD", "';'", "','", "'['", "']'", "'('",
  "')'", "'{'", "'}'", "'='", "$accept", "program", "Gdeclblock",
  "Gdecllist", "Gdecl", "Gidlist", "Gid", "Fdefblock", "Fdef", "Paramlist",
  "Param", "type", "Ldeclblock", "Ldecllist", "Ldecl", "Idlist",
  "Mainblock", "body", "slist", "ifstmt", "whilestmt", "repeatstmt",
  "dowhilestmt", "stmt", "inputstmt", "outputstmt", "assgstmt", "expr",
  "Arglist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      72,   -31,    58,    64,    67,   -85,   -30,   -85,   -85,   -85,
      61,   -85,    16,   -85,   -31,    67,   -85,    91,   -85,    27,
     -85,   -85,   105,    80,   -85,   -85,   -85,    59,    96,   103,
      20,   -85,    16,    36,   109,   108,   -85,    18,   -85,   137,
     -85,   111,    63,    65,   149,   -85,   120,   -85,   -85,   109,
     124,   -85,   171,    70,   -85,   293,   132,   -85,   149,   109,
     -85,   139,   -85,   -85,   -32,   140,   141,   142,   146,   143,
     144,   293,   293,   250,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   134,   149,   199,    24,    22,   200,    46,
     -85,   -85,    24,    24,   299,   208,   -85,   -85,   -85,   147,
     -85,   -85,   106,    24,   321,   181,   374,    69,   177,   101,
     113,   138,   179,   180,   -85,    24,    11,   150,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,   185,
     -85,   -85,    24,   194,   196,   197,   210,   193,    24,    24,
     333,   -85,   406,   100,   -85,    74,    74,   -85,   -85,    71,
      71,    71,    71,    71,    71,   -85,    55,   362,   -85,   -85,
     -85,   293,   293,   175,   187,   -85,    24,   -85,   201,   394,
     198,   220,   256,   -13,   202,   406,   -85,   -85,   206,   293,
     213,   214,   -85,   -85,   -85,   263,   -85,   -85,   215,   -85
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     0,    23,    24,     6,
       0,     8,     0,     1,    23,     0,    17,     0,     3,     0,
       5,     7,    15,     0,    11,    16,     2,     0,     0,     0,
       0,     9,     0,     0,     0,     0,    14,     0,    21,     0,
      10,     0,     0,     0,     0,    12,     0,    13,    22,     0,
       0,    26,     0,     0,    28,     0,     0,    20,     0,     0,
      31,    29,    25,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    45,    48,    49,    35,    41,
      42,    43,    32,     0,     0,     0,     0,     0,     0,     0,
      46,    47,     0,     0,     0,     0,    33,    34,    19,     0,
      30,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    76,     0,    69,    58,    59,    60,    61,    63,
      64,    66,    65,    67,    68,    62,     0,     0,    50,    53,
      52,     0,     0,     0,     0,    72,     0,    74,     0,     0,
       0,     0,     0,     0,     0,    75,    57,    56,     0,     0,
       0,     0,    40,    39,    51,     0,    37,    38,     0,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   -85,   235,   -85,   227,   -85,   257,   232,
     229,     8,    45,   -85,   223,   -85,     2,   -11,   -70,   -85,
     -85,   -85,   -85,   -73,   -85,   -85,   -85,   -84,   -85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    10,    11,    23,    24,    15,    16,    37,
      38,    39,    44,    53,    54,    61,     5,    56,    73,    74,
      75,    76,    77,    78,    79,    80,    81,   104,   143
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      97,    94,    95,   106,     6,   109,    18,    86,   110,   111,
      12,    19,    17,    87,   101,   102,   162,    26,    12,   117,
      22,    97,    97,    17,   182,   101,   102,   101,   102,     7,
       8,   140,   142,   105,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     7,     8,    83,   157,   101,
     102,    52,   103,   141,   163,   164,    46,   108,   101,   102,
      47,    52,    36,   103,    13,   103,   168,     7,     8,    28,
       7,     8,   169,    99,     7,     8,    14,     8,    41,     7,
       8,     1,   175,   118,   119,   120,   121,   103,   120,   121,
       9,   171,   172,    20,    58,    27,   103,    51,    97,    97,
      33,    46,    62,     2,    84,    50,    35,   128,   132,   185,
     128,   133,    97,   118,   119,   120,   121,    31,    32,   122,
     123,   124,   125,   126,   127,   118,   119,   120,   121,     7,
       8,   122,   123,   124,   125,   126,   127,   128,   166,    34,
      43,    48,   167,   135,    29,   115,    30,   116,    45,   128,
     118,   119,   120,   121,    49,   136,   122,   123,   124,   125,
     126,   127,   118,   119,   120,   121,    55,    59,   122,   123,
     124,   125,   126,   127,   128,    60,    82,    85,    98,    90,
     137,    88,    89,    91,    92,    93,   128,   118,   119,   120,
     121,   114,   144,   122,   123,   124,   125,   126,   127,   118,
     119,   120,   121,   100,   107,   122,   123,   124,   125,   126,
     127,   128,    64,    65,    66,    67,    68,   173,   130,   134,
     138,   139,   162,   128,    64,    65,    66,    67,    68,   174,
     156,   158,    69,   159,   160,   161,    70,    71,   176,   183,
     178,    72,   113,   184,    69,    21,   179,   180,    70,    71,
     186,   187,   189,    72,    64,    65,    66,    67,    68,    40,
      64,    65,    66,    67,    68,    42,    96,    64,    65,    66,
      67,    68,    25,     0,    69,    57,    63,     0,    70,    71,
      69,     0,     0,    72,    70,    71,   181,    69,     0,    72,
     188,    70,    71,     0,     0,     0,    72,    64,    65,    66,
      67,    68,     0,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,    70,    71,    69,     0,     0,    72,   112,    71,     0,
       0,     0,    72,   118,   119,   120,   121,     0,     0,   122,
     123,   124,   125,   126,   127,   118,   119,   120,   121,     0,
       0,   122,   123,   124,   125,   126,   127,   128,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,   128,
       0,     0,     0,   165,   118,   119,   120,   121,     0,     0,
     122,   123,   124,   125,   126,   127,   118,   119,   120,   121,
       0,     0,   122,   123,   124,   125,   126,   127,   128,     0,
       0,     0,   170,     0,     0,     0,   118,   119,   120,   121,
     128,   131,   122,   123,   124,   125,   126,   127,   118,   119,
     120,   121,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128
};

static const yytype_int16 yycheck[] =
{
      73,    71,    72,    87,    35,    89,     4,    39,    92,    93,
       2,    41,     4,    45,     3,     4,    29,    15,    10,   103,
       4,    94,    95,    15,    37,     3,     4,     3,     4,     9,
      10,   115,   116,    11,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,     9,    10,    58,   132,     3,
       4,    43,    41,    42,   138,   139,    38,    11,     3,     4,
      42,    53,    42,    41,     0,    41,    11,     9,    10,    42,
       9,    10,   156,    84,     9,    10,     9,    10,    42,     9,
      10,     9,   166,    12,    13,    14,    15,    41,    14,    15,
      32,   161,   162,    32,    49,     4,    41,    32,   171,   172,
      41,    38,    32,    31,    59,    42,     3,    36,    39,   179,
      36,    42,   185,    12,    13,    14,    15,    37,    38,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,     9,
      10,    18,    19,    20,    21,    22,    23,    36,    38,    43,
      31,     4,    42,    42,    39,    39,    41,    41,    40,    36,
      12,    13,    14,    15,    43,    42,    18,    19,    20,    21,
      22,    23,    12,    13,    14,    15,    17,    43,    18,    19,
      20,    21,    22,    23,    36,     4,    44,    38,    44,    37,
      42,    41,    41,    37,    41,    41,    36,    12,    13,    14,
      15,    44,    42,    18,    19,    20,    21,    22,    23,    12,
      13,    14,    15,     4,     4,    18,    19,    20,    21,    22,
      23,    36,     4,     5,     6,     7,     8,    42,    37,    42,
      41,    41,    29,    36,     4,     5,     6,     7,     8,    42,
      45,    37,    24,    37,    37,    25,    28,    29,    37,    37,
      42,    33,    34,    37,    24,    10,    26,    27,    28,    29,
      37,    37,    37,    33,     4,     5,     6,     7,     8,    32,
       4,     5,     6,     7,     8,    33,    16,     4,     5,     6,
       7,     8,    15,    -1,    24,    46,    53,    -1,    28,    29,
      24,    -1,    -1,    33,    28,    29,    30,    24,    -1,    33,
      27,    28,    29,    -1,    -1,    -1,    33,     4,     5,     6,
       7,     8,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    28,    29,    24,    -1,    -1,    33,    28,    29,    -1,
      -1,    -1,    33,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    21,    22,    23,    36,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    12,    13,    14,    15,    -1,    -1,
      18,    19,    20,    21,    22,    23,    12,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    23,    36,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    12,    13,    14,    15,
      36,    37,    18,    19,    20,    21,    22,    23,    12,    13,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    23,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    31,    47,    48,    62,    35,     9,    10,    32,
      49,    50,    57,     0,     9,    53,    54,    57,    62,    41,
      32,    50,     4,    51,    52,    54,    62,     4,    42,    39,
      41,    37,    38,    41,    43,     3,    42,    55,    56,    57,
      52,    42,    55,    31,    58,    40,    38,    42,     4,    43,
      42,    32,    57,    59,    60,    17,    63,    56,    58,    43,
       4,    61,    32,    60,     4,     5,     6,     7,     8,    24,
      28,    29,    33,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    44,    63,    58,    38,    39,    45,    41,    41,
      37,    37,    41,    41,    64,    64,    16,    69,    44,    63,
       4,     3,     4,    41,    73,    11,    73,     4,    11,    73,
      73,    73,    28,    34,    44,    39,    41,    73,    12,    13,
      14,    15,    18,    19,    20,    21,    22,    23,    36,    40,
      37,    37,    39,    42,    42,    42,    42,    42,    41,    41,
      73,    42,    73,    74,    42,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    45,    73,    37,    37,
      37,    25,    29,    73,    73,    40,    38,    42,    11,    73,
      40,    64,    64,    42,    42,    73,    37,    37,    42,    26,
      27,    30,    37,    37,    37,    64,    37,    37,    27,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    47,    48,    48,    49,    49,    50,
      51,    51,    52,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    57,    57,    58,    58,    59,    59,    60,
      61,    61,    62,    63,    64,    64,    65,    65,    66,    67,
      68,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     2,     1,     3,
       3,     1,     4,     4,     3,     1,     2,     1,     9,     8,
       3,     1,     2,     1,     1,     3,     2,     2,     1,     2,
       3,     1,     8,     3,     2,     1,    10,     8,     8,     7,
       7,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       5,     8,     5,     5,     4,     4,     7,     7,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     4,     3,     4,     3,     1
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
  case 2: /* program: Gdeclblock Fdefblock Mainblock  */
#line 28 "exptree.y"
                                                {struct tnode* t=createTree(-1,notype,"",cnn,(yyvsp[-1].no),(yyvsp[0].no));
						 (yyval.no)=createTree(-1,notype,"",cnn,(yyvsp[-2].no),t);}
#line 1434 "y.tab.c"
    break;

  case 3: /* program: Gdeclblock Mainblock  */
#line 30 "exptree.y"
                                                { (yyval.no)=createTree(-1,notype,"",cnn,(yyvsp[-1].no),(yyvsp[0].no));
	 					 printf("\n Printing symbol table\n");
						  struct Gsymbol* t=symbtable;
						  while(t!=NULL){
						  	if(t->type==inttype){
						  		printf("INT ");
						  	}else{
								printf("STR ");
							}
							printf("%s ",t->name);
							printf("%d ",t->size);
							printf("%d ",t->binding);
							printf("\n Paramlist: name type\n");
							struct Paramstruct* p=t->paramlist;
							while(p!=NULL){
								printf("%s ",p->name);
								if(p->type==inttype){
						  			printf("INT ");
						  		}else{
									printf("STR ");
								}
								p=p->next;
							}
							
							t=t->next;
							
						  }
						  }
#line 1467 "y.tab.c"
    break;

  case 4: /* program: Mainblock  */
#line 59 "exptree.y"
                                                {(yyval.no)=(yyvsp[0].no);}
#line 1473 "y.tab.c"
    break;

  case 5: /* Gdeclblock: DECL Gdecllist ENDDECL  */
#line 62 "exptree.y"
                                        {(yyval.no)=createTree(-1,notype,"",gdeclblk,(yyvsp[-1].no),NULL);}
#line 1479 "y.tab.c"
    break;

  case 6: /* Gdeclblock: DECL ENDDECL  */
#line 63 "exptree.y"
                                {(yyval.no)=NULL;}
#line 1485 "y.tab.c"
    break;

  case 7: /* Gdecllist: Gdecllist Gdecl  */
#line 66 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",gdeclst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1491 "y.tab.c"
    break;

  case 8: /* Gdecllist: Gdecl  */
#line 67 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1497 "y.tab.c"
    break;

  case 9: /* Gdecl: type Gidlist ';'  */
#line 70 "exptree.y"
                                {assign_type((yyvsp[-1].no),(yyvsp[-2].no)->type);(yyval.no)=createTree(-1,notype,"",gdecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1503 "y.tab.c"
    break;

  case 10: /* Gidlist: Gidlist ',' Gid  */
#line 73 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",gidlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1509 "y.tab.c"
    break;

  case 11: /* Gidlist: Gid  */
#line 74 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1515 "y.tab.c"
    break;

  case 12: /* Gid: ID '[' NUM ']'  */
#line 76 "exptree.y"
                        {(yyval.no)=createTree(-1,notype,"",arrdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1521 "y.tab.c"
    break;

  case 13: /* Gid: ID '(' Paramlist ')'  */
#line 77 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",funcdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1527 "y.tab.c"
    break;

  case 14: /* Gid: ID '(' ')'  */
#line 78 "exptree.y"
                        {printf("seeing this?\n");(yyval.no)=createTree(-1,notype,"",funcdecl,(yyvsp[-2].no),NULL);}
#line 1533 "y.tab.c"
    break;

  case 15: /* Gid: ID  */
#line 79 "exptree.y"
                {printf("how many?\n");(yyval.no)=(yyvsp[0].no);}
#line 1539 "y.tab.c"
    break;

  case 16: /* Fdefblock: Fdefblock Fdef  */
#line 82 "exptree.y"
                                {}
#line 1545 "y.tab.c"
    break;

  case 17: /* Fdefblock: Fdef  */
#line 83 "exptree.y"
                        {}
#line 1551 "y.tab.c"
    break;

  case 18: /* Fdef: type ID '(' Paramlist ')' '{' Ldeclblock body '}'  */
#line 86 "exptree.y"
                                                                {}
#line 1557 "y.tab.c"
    break;

  case 19: /* Fdef: type ID '(' ')' '{' Ldeclblock body '}'  */
#line 87 "exptree.y"
                                                                {}
#line 1563 "y.tab.c"
    break;

  case 20: /* Paramlist: Paramlist ',' Param  */
#line 90 "exptree.y"
                                        {(yyval.no)=createTree(-1,notype,"",paramlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1569 "y.tab.c"
    break;

  case 21: /* Paramlist: Param  */
#line 91 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1575 "y.tab.c"
    break;

  case 22: /* Param: type ID  */
#line 94 "exptree.y"
                {(yyval.no)=createTree(-1,notype,"",param,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1581 "y.tab.c"
    break;

  case 23: /* type: INT  */
#line 97 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1587 "y.tab.c"
    break;

  case 24: /* type: STR  */
#line 98 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1593 "y.tab.c"
    break;

  case 25: /* Ldeclblock: DECL Ldecllist ENDDECL  */
#line 101 "exptree.y"
                                    {(yyval.no)=createTree(-1,notype,"",ldeclblk,(yyvsp[-1].no),NULL);}
#line 1599 "y.tab.c"
    break;

  case 26: /* Ldeclblock: DECL ENDDECL  */
#line 102 "exptree.y"
                                {(yyval.no)=NULL;}
#line 1605 "y.tab.c"
    break;

  case 27: /* Ldecllist: Ldecllist Ldecl  */
#line 105 "exptree.y"
                            {(yyval.no)=createTree(-1,notype,"",ldecllst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1611 "y.tab.c"
    break;

  case 28: /* Ldecllist: Ldecl  */
#line 106 "exptree.y"
                    {(yyval.no)=(yyvsp[0].no);}
#line 1617 "y.tab.c"
    break;

  case 29: /* Ldecl: type Idlist  */
#line 109 "exptree.y"
                    {printf("is this happening\n");assign_type((yyvsp[0].no),(yyvsp[-1].no)->type); (yyval.no)=createTree(-1,notype,"",ldecl,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1623 "y.tab.c"
    break;

  case 30: /* Idlist: Idlist ',' ID  */
#line 112 "exptree.y"
                       {(yyval.no)=createTree(-1,notype,"",idlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1629 "y.tab.c"
    break;

  case 31: /* Idlist: ID  */
#line 113 "exptree.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1635 "y.tab.c"
    break;

  case 32: /* Mainblock: INT MAIN '(' ')' '{' Ldeclblock body '}'  */
#line 116 "exptree.y"
                                                     {(yyval.no)=createTree(-1,notype,"",mainnd,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1641 "y.tab.c"
    break;

  case 33: /* body: BEGN slist END  */
#line 119 "exptree.y"
                      {(yyval.no)=(yyvsp[-1].no);}
#line 1647 "y.tab.c"
    break;

  case 34: /* slist: slist stmt  */
#line 122 "exptree.y"
                        {(yyval.no)=createTree(-1,notype,"",cnn,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1653 "y.tab.c"
    break;

  case 35: /* slist: stmt  */
#line 123 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1659 "y.tab.c"
    break;

  case 36: /* ifstmt: IF '(' expr ')' THEN slist ELSE slist ENDIF ';'  */
#line 126 "exptree.y"
                                                                {struct tnode* t=createTree(-1,notype,"",el,(yyvsp[-4].no),(yyvsp[-2].no));(yyval.no)=createTree(-1,notype,"",ifel,(yyvsp[-7].no),t);}
#line 1665 "y.tab.c"
    break;

  case 37: /* ifstmt: IF '(' expr ')' THEN slist ENDIF ';'  */
#line 127 "exptree.y"
                                                { struct tnode* t=createTree(-1,notype,"",el,(yyvsp[-2].no),NULL);
						  printf("exiting endif\n");
					          (yyval.no)=createTree(-1,notype,"",ifel,(yyvsp[-5].no),t);}
#line 1673 "y.tab.c"
    break;

  case 38: /* whilestmt: WHILE '(' expr ')' DO slist ENDWHILE ';'  */
#line 132 "exptree.y"
                                                        {(yyval.no)=createTree(-1,notype,"",whl,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1679 "y.tab.c"
    break;

  case 39: /* repeatstmt: REPEAT slist UNTIL '(' expr ')' ';'  */
#line 135 "exptree.y"
                                                  {(yyval.no)=createTree(-1,notype,"",rpt,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1685 "y.tab.c"
    break;

  case 40: /* dowhilestmt: DO slist WHILE '(' expr ')' ';'  */
#line 137 "exptree.y"
                                                {(yyval.no)=createTree(-1,notype,"",dow,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1691 "y.tab.c"
    break;

  case 41: /* stmt: inputstmt  */
#line 139 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1697 "y.tab.c"
    break;

  case 42: /* stmt: outputstmt  */
#line 140 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1703 "y.tab.c"
    break;

  case 43: /* stmt: assgstmt  */
#line 141 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1709 "y.tab.c"
    break;

  case 44: /* stmt: ifstmt  */
#line 142 "exptree.y"
                        {(yyval.no)= (yyvsp[0].no);}
#line 1715 "y.tab.c"
    break;

  case 45: /* stmt: whilestmt  */
#line 143 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1721 "y.tab.c"
    break;

  case 46: /* stmt: BREAK ';'  */
#line 144 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 1727 "y.tab.c"
    break;

  case 47: /* stmt: CONTINUE ';'  */
#line 145 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 1733 "y.tab.c"
    break;

  case 48: /* stmt: repeatstmt  */
#line 146 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1739 "y.tab.c"
    break;

  case 49: /* stmt: dowhilestmt  */
#line 147 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1745 "y.tab.c"
    break;

  case 50: /* inputstmt: READ '(' ID ')' ';'  */
#line 150 "exptree.y"
                                {if(lookup((yyvsp[-2].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-2].no)->varname);
	 				exit(1);
	 			 }
	 			 (yyval.no)=createTree(-1,notype,"",rd,(yyvsp[-2].no),NULL);}
#line 1755 "y.tab.c"
    break;

  case 51: /* inputstmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 155 "exptree.y"
                                             {if(lookup((yyvsp[-5].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-5].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-5].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-5].no),(yyvsp[-3].no));
	 			 	(yyval.no)=createTree(-1,notype,"",rd,temp,NULL);}
#line 1768 "y.tab.c"
    break;

  case 52: /* outputstmt: WRITE '(' expr ')' ';'  */
#line 165 "exptree.y"
                                    {(yyval.no) = createTree(-1,notype,"",wr,(yyvsp[-2].no),NULL);}
#line 1774 "y.tab.c"
    break;

  case 53: /* outputstmt: WRITE '(' STRING ')' ';'  */
#line 166 "exptree.y"
                                       {(yyval.no) = createTree(-1,notype,"",wr,(yyvsp[-2].no),NULL);}
#line 1780 "y.tab.c"
    break;

  case 54: /* assgstmt: ID '=' expr ';'  */
#line 169 "exptree.y"
                           {if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 printf("Reaching assg for id=expr\n");
	 			 (yyval.no) = createTree(-1,notype,"",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1791 "y.tab.c"
    break;

  case 55: /* assgstmt: ID '=' STRING ';'  */
#line 175 "exptree.y"
                              {if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 (yyval.no)=createTree(-1,notype,"",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1801 "y.tab.c"
    break;

  case 56: /* assgstmt: ID '[' expr ']' '=' expr ';'  */
#line 180 "exptree.y"
                                         {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			        printf("Reaching assg for id[ex]=expr\n");
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-6].no),(yyvsp[-4].no));
	 			 	(yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));
	 			 	printf("Exiting assg for id[ex]=expr\n");
	  
	  				 }
#line 1817 "y.tab.c"
    break;

  case 57: /* assgstmt: ID '[' expr ']' '=' STRING ';'  */
#line 191 "exptree.y"
                                           {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-6].no),(yyvsp[-4].no));
	 			 	(yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));
	  
	  
	  
	  				   }
#line 1834 "y.tab.c"
    break;

  case 58: /* expr: expr PLUS expr  */
#line 206 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",ps,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1840 "y.tab.c"
    break;

  case 59: /* expr: expr MINUS expr  */
#line 207 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",ms,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1846 "y.tab.c"
    break;

  case 60: /* expr: expr MUL expr  */
#line 208 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",ml,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1852 "y.tab.c"
    break;

  case 61: /* expr: expr DIV expr  */
#line 209 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",dv,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1858 "y.tab.c"
    break;

  case 62: /* expr: expr MOD expr  */
#line 210 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",mod,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1864 "y.tab.c"
    break;

  case 63: /* expr: expr LT expr  */
#line 211 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",lt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1870 "y.tab.c"
    break;

  case 64: /* expr: expr GT expr  */
#line 212 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",gt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1876 "y.tab.c"
    break;

  case 65: /* expr: expr GE expr  */
#line 213 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",ge,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1882 "y.tab.c"
    break;

  case 66: /* expr: expr LE expr  */
#line 214 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",le,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1888 "y.tab.c"
    break;

  case 67: /* expr: expr NE expr  */
#line 215 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",ne,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1894 "y.tab.c"
    break;

  case 68: /* expr: expr EQ expr  */
#line 216 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",eq,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1900 "y.tab.c"
    break;

  case 69: /* expr: '(' expr ')'  */
#line 217 "exptree.y"
                                {(yyval.no) = (yyvsp[-1].no);}
#line 1906 "y.tab.c"
    break;

  case 70: /* expr: NUM  */
#line 218 "exptree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 1912 "y.tab.c"
    break;

  case 71: /* expr: ID  */
#line 219 "exptree.y"
                                {if(lookup((yyvsp[0].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[0].no)->varname);
	 				exit(1);
	 			 }
	 			 (yyval.no) = (yyvsp[0].no);}
#line 1922 "y.tab.c"
    break;

  case 72: /* expr: ID '[' expr ']'  */
#line 224 "exptree.y"
                                {if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-3].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type,"",arrval,(yyvsp[-3].no),(yyvsp[-1].no));
	 			}
#line 1935 "y.tab.c"
    break;


#line 1939 "y.tab.c"

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

#line 240 "exptree.y"


yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(int argc,char* argv[]) {

	if(argc > 1){
		FILE *fp = fopen(argv[1], "r");
		if(fp)
	  		yyin = fp;
  	}
	yyparse();
	
	return 0;
}
