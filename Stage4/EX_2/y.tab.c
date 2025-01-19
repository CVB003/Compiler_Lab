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
    MOD = 290,                     /* MOD  */
    ADDR = 291                     /* ADDR  */
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
#define MOD 290
#define ADDR 291

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
  YYSYMBOL_MOD = 35,                       /* MOD  */
  YYSYMBOL_ADDR = 36,                      /* ADDR  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* '('  */
  YYSYMBOL_39_ = 39,                       /* ')'  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '='  */
  YYSYMBOL_43_ = 43,                       /* ','  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_slist = 46,                     /* slist  */
  YYSYMBOL_ifstmt = 47,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 48,                 /* whilestmt  */
  YYSYMBOL_repeatstmt = 49,                /* repeatstmt  */
  YYSYMBOL_dowhilestmt = 50,               /* dowhilestmt  */
  YYSYMBOL_stmt = 51,                      /* stmt  */
  YYSYMBOL_inputstmt = 52,                 /* inputstmt  */
  YYSYMBOL_outputstmt = 53,                /* outputstmt  */
  YYSYMBOL_assgstmt = 54,                  /* assgstmt  */
  YYSYMBOL_declarations = 55,              /* declarations  */
  YYSYMBOL_declist = 56,                   /* declist  */
  YYSYMBOL_decl = 57,                      /* decl  */
  YYSYMBOL_type = 58,                      /* type  */
  YYSYMBOL_varlist = 59,                   /* varlist  */
  YYSYMBOL_expr = 60                       /* expr  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   720

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

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
      38,    39,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,    42,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    29,    29,    53,    72,    73,    76,    77,    82,    85,
      87,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     100,   105,   113,   123,   124,   127,   133,   138,   149,   160,
     168,   180,   194,   204,   216,   217,   220,   221,   224,   226,
     227,   230,   231,   232,   233,   234,   235,   236,   237,   240,
     250,   258,   266,   274,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   295,   303,   311,   320
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
  "REPEAT", "UNTIL", "MOD", "ADDR", "';'", "'('", "')'", "'['", "']'",
  "'='", "','", "$accept", "program", "slist", "ifstmt", "whilestmt",
  "repeatstmt", "dowhilestmt", "stmt", "inputstmt", "outputstmt",
  "assgstmt", "declarations", "declist", "decl", "type", "varlist", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-37)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -22,     2,    25,    19,   -37,   -37,   -37,    63,   -37,     6,
     -37,   298,   -37,   -37,     9,    48,   -30,    51,    17,    28,
      43,    44,    75,    45,    52,    58,   382,   382,   328,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,    82,   -37,   -37,
      47,    75,    18,    96,    12,   -37,   -37,   -37,    46,    15,
      75,   122,   -37,    75,    75,   412,    97,    69,   -37,    66,
      72,   110,   140,    78,   112,   605,    -9,    81,   409,    75,
     -37,    75,   437,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    54,   465,   493,    84,    85,   -37,
      88,   121,   -37,    57,   -37,    92,   -37,   101,    75,   113,
     114,   164,   521,   -37,   -11,   -11,   -37,   -37,   134,   134,
     134,   134,   134,   134,   -37,   119,   631,   108,   136,    75,
      75,   163,   126,    75,    56,   -37,   -37,   188,   -37,   -37,
     128,   -37,   -37,   -37,   382,   382,   549,   577,   129,   131,
     212,   135,   657,    36,    75,   232,   341,    40,   137,   -37,
     170,   138,   -37,   -37,   151,    75,   254,   382,   152,   153,
     -37,   -37,   150,    60,   -37,   278,   -37,   371,   -37,   -37,
     -37,   155,   683,   154,   157,   -37,   -37,   158,   -37,   -37
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,    39,    40,    35,     0,    37,     0,
       1,     0,    34,    36,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    18,    19,     5,    11,    12,    13,     0,    47,    38,
       0,     0,     0,     0,     0,    16,    17,    61,    62,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     4,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      43,     0,    48,     0,    26,     0,    25,     0,     0,     0,
       0,     0,     0,    60,    49,    50,    51,    52,    54,    55,
      57,    56,    58,    59,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    20,     0,    24,    23,
      63,    65,    33,    32,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,    29,    27,     0,     0,     0,     0,     0,     0,
      10,     9,     0,     0,    21,     0,    64,     0,     7,     8,
      46,     0,     0,     0,     0,    30,    28,     0,     6,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -37,   -37,   -25,   -37,   -37,   -37,   -37,   -28,   -37,   -37,
     -37,   -37,   -37,   189,   -37,   -37,   -36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     3,     7,     8,     9,    16,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      58,    55,    56,    75,    76,    62,    65,    39,    68,     1,
      14,     4,     5,    40,    72,    47,    48,    85,    86,    70,
      15,    47,    48,    67,    83,    10,    49,    58,    58,    63,
      97,    98,    49,   101,     6,   102,    11,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   116,    37,
      50,    60,    38,    71,    64,    43,    50,    47,    48,    47,
      48,    61,   127,    47,    48,   115,    44,   141,    49,   135,
      49,   171,     4,     5,    49,   154,   155,   160,    47,    48,
      45,    46,    52,   136,   137,    59,    69,   140,   142,    49,
      53,    41,    50,    42,    50,    12,    54,   123,    50,   124,
      66,    17,    18,    19,    20,    21,    89,    90,   156,   145,
     146,    22,    91,    50,    92,    94,    95,    58,    58,   165,
      99,    24,   119,   120,   122,    25,    26,   172,   121,   125,
      27,    88,   167,   134,    73,    74,    75,    76,   126,    58,
      77,    78,    79,    80,    81,    82,    73,    74,    75,    76,
     128,   129,    73,    74,    75,    76,   132,    83,    77,    78,
      79,    80,    81,    82,    84,   135,   138,   139,   144,    83,
     149,   150,   152,   162,   161,    83,    73,    74,    75,    76,
     163,    93,    77,    78,    79,    80,    81,    82,   164,   168,
     169,   170,   175,   177,   178,   179,    13,     0,     0,    83,
      73,    74,    75,    76,     0,   130,    77,    78,    79,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,    73,    74,    75,    76,     0,   143,
      77,    78,    79,    80,    81,    82,    17,    18,    19,    20,
      21,     0,     0,     0,     0,     0,    22,    83,     0,     0,
       0,     0,     0,   151,     0,     0,    24,     0,   157,   158,
      25,    26,     0,     0,     0,    27,    73,    74,    75,    76,
       0,     0,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
      73,    74,    75,    76,     0,   166,    77,    78,    79,    80,
      81,    82,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,    22,    83,    23,     0,     0,     0,     0,   173,
       0,     0,    24,     0,     0,     0,    25,    26,     0,     0,
       0,    27,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,    22,     0,    57,    17,    18,    19,    20,    21,
       0,     0,    24,     0,     0,    22,    25,    26,     0,     0,
       0,    27,     0,     0,     0,    24,     0,     0,     0,    25,
      26,   159,     0,     0,    27,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,    22,    17,    18,    19,    20,
      21,     0,     0,     0,     0,    24,    22,     0,   174,    25,
      26,     0,     0,     0,    27,     0,    24,     0,     0,     0,
      25,    26,     0,     0,     0,    27,    17,    18,    19,    20,
      21,    73,    74,    75,    76,     0,    22,    77,    78,    79,
      80,    81,    82,     0,     0,     0,    24,     0,     0,     0,
      87,    26,     0,     0,    83,    27,     0,     0,   100,    73,
      74,    75,    76,     0,     0,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,   103,    73,    74,    75,
      76,     0,     0,    77,    78,    79,    80,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,   117,    73,    74,    75,    76,     0,
       0,    77,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,   118,    73,    74,    75,    76,     0,     0,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
     131,    73,    74,    75,    76,     0,     0,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,   147,    73,
      74,    75,    76,     0,     0,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,   148,    73,    74,    75,
      76,     0,     0,    77,    78,    79,    80,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,    96,    73,    74,    75,    76,     0,     0,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,   133,    73,
      74,    75,    76,     0,     0,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,   153,    73,    74,    75,    76,     0,
       0,    77,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
     176
};

static const yytype_int16 yycheck[] =
{
      28,    26,    27,    14,    15,    41,    42,    37,    44,    31,
       4,     9,    10,    43,    50,     3,     4,    53,    54,     4,
      14,     3,     4,    11,    35,     0,    14,    55,    56,    11,
      39,    40,    14,    69,    32,    71,    17,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    40,
      38,     4,     4,    38,    36,    38,    38,     3,     4,     3,
       4,    14,    98,     3,     4,    11,    38,    11,    14,    29,
      14,    11,     9,    10,    14,    39,    40,    37,     3,     4,
      37,    37,    37,   119,   120,     3,    40,   123,   124,    14,
      38,    40,    38,    42,    38,    32,    38,    40,    38,    42,
       4,     4,     5,     6,     7,     8,    37,    41,   144,   134,
     135,    14,    40,    38,     4,    37,     4,   145,   146,   155,
      39,    24,    38,    38,     3,    28,    29,   163,    40,    37,
      33,    34,   157,    25,    12,    13,    14,    15,    37,   167,
      18,    19,    20,    21,    22,    23,    12,    13,    14,    15,
      37,    37,    12,    13,    14,    15,    37,    35,    18,    19,
      20,    21,    22,    23,    42,    29,     3,    41,    40,    35,
      41,    40,    37,     3,    37,    35,    12,    13,    14,    15,
      42,    41,    18,    19,    20,    21,    22,    23,    37,    37,
      37,    41,    37,    39,    37,    37,     7,    -1,    -1,    35,
      12,    13,    14,    15,    -1,    41,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    12,    13,    14,    15,    -1,    41,
      18,    19,    20,    21,    22,    23,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    35,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    12,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      12,    13,    14,    15,    -1,    41,    18,    19,    20,    21,
      22,    23,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    35,    16,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    33,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    16,     4,     5,     6,     7,     8,
      -1,    -1,    24,    -1,    -1,    14,    28,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,
      29,    30,    -1,    -1,    33,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    24,    14,    -1,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,     4,     5,     6,     7,
       8,    12,    13,    14,    15,    -1,    14,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    35,    33,    -1,    -1,    39,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    39,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    39,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    39,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      39,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    39,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    37,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    37,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    45,    55,     9,    10,    32,    56,    57,    58,
       0,    17,    32,    57,     4,    14,    59,     4,     5,     6,
       7,     8,    14,    16,    24,    28,    29,    33,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    40,     4,    37,
      43,    40,    42,    38,    38,    37,    37,     3,     4,    14,
      38,    60,    37,    38,    38,    46,    46,    16,    51,     3,
       4,    14,    60,    11,    36,    60,     4,    11,    60,    40,
       4,    38,    60,    12,    13,    14,    15,    18,    19,    20,
      21,    22,    23,    35,    42,    60,    60,    28,    34,    37,
      41,    40,     4,    41,    37,     4,    37,    39,    40,    39,
      39,    60,    60,    39,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    11,    60,    39,    39,    38,
      38,    40,     3,    40,    42,    37,    37,    60,    37,    37,
      41,    39,    37,    37,    25,    29,    60,    60,     3,    41,
      60,    11,    60,    41,    40,    46,    46,    39,    39,    41,
      40,    41,    37,    37,    39,    40,    60,    26,    27,    30,
      37,    37,     3,    42,    37,    60,    41,    46,    37,    37,
      41,    11,    60,    41,    27,    37,    37,    39,    37,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    47,    47,    48,    49,
      50,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      52,    52,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     2,     1,    10,     8,     8,     7,
       7,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       5,     8,    11,     5,     5,     4,     4,     7,    10,     7,
      10,     5,     5,     5,     3,     2,     2,     1,     3,     1,
       1,     3,     1,     4,     7,     6,     9,     2,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     4,     7,     4,     2
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
  case 2: /* program: declarations BEGN slist END ';'  */
#line 29 "exptree.y"
                                                { (yyval.no)=createTree(-1,notype,"",cnn,(yyvsp[-4].no),(yyvsp[-2].no));
						  
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
							t=t->next;
							
						  }
						  
						  printf("\n Generating code\n");
						  before_code();
						  code_gen((yyval.no));
						  after_code();
						  exit(0);
							
						}
#line 1487 "y.tab.c"
    break;

  case 3: /* program: declarations BEGN END ';'  */
#line 53 "exptree.y"
                                        {(yyval.no)=(yyvsp[-3].no);
					 printf("Program is empty\n");
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
							t=t->next;
							
						  }
					}
#line 1509 "y.tab.c"
    break;

  case 4: /* slist: slist stmt  */
#line 72 "exptree.y"
                        {(yyval.no)=createTree(-1,notype,"",cnn,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1515 "y.tab.c"
    break;

  case 5: /* slist: stmt  */
#line 73 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1521 "y.tab.c"
    break;

  case 6: /* ifstmt: IF '(' expr ')' THEN slist ELSE slist ENDIF ';'  */
#line 76 "exptree.y"
                                                                {struct tnode* t=createTree(-1,notype,"",el,(yyvsp[-4].no),(yyvsp[-2].no));(yyval.no)=createTree(-1,notype,"",ifel,(yyvsp[-7].no),t);}
#line 1527 "y.tab.c"
    break;

  case 7: /* ifstmt: IF '(' expr ')' THEN slist ENDIF ';'  */
#line 77 "exptree.y"
                                                { struct tnode* t=createTree(-1,notype,"",el,(yyvsp[-2].no),NULL);
						  printf("exiting endif\n");
					          (yyval.no)=createTree(-1,notype,"",ifel,(yyvsp[-5].no),t);}
#line 1535 "y.tab.c"
    break;

  case 8: /* whilestmt: WHILE '(' expr ')' DO slist ENDWHILE ';'  */
#line 82 "exptree.y"
                                                        {(yyval.no)=createTree(-1,notype,"",whl,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1541 "y.tab.c"
    break;

  case 9: /* repeatstmt: REPEAT slist UNTIL '(' expr ')' ';'  */
#line 85 "exptree.y"
                                                  {(yyval.no)=createTree(-1,notype,"",rpt,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1547 "y.tab.c"
    break;

  case 10: /* dowhilestmt: DO slist WHILE '(' expr ')' ';'  */
#line 87 "exptree.y"
                                                {(yyval.no)=createTree(-1,notype,"",dow,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1553 "y.tab.c"
    break;

  case 11: /* stmt: inputstmt  */
#line 89 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1559 "y.tab.c"
    break;

  case 12: /* stmt: outputstmt  */
#line 90 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1565 "y.tab.c"
    break;

  case 13: /* stmt: assgstmt  */
#line 91 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1571 "y.tab.c"
    break;

  case 14: /* stmt: ifstmt  */
#line 92 "exptree.y"
                        {(yyval.no)= (yyvsp[0].no);}
#line 1577 "y.tab.c"
    break;

  case 15: /* stmt: whilestmt  */
#line 93 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1583 "y.tab.c"
    break;

  case 16: /* stmt: BREAK ';'  */
#line 94 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 1589 "y.tab.c"
    break;

  case 17: /* stmt: CONTINUE ';'  */
#line 95 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 1595 "y.tab.c"
    break;

  case 18: /* stmt: repeatstmt  */
#line 96 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1601 "y.tab.c"
    break;

  case 19: /* stmt: dowhilestmt  */
#line 97 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1607 "y.tab.c"
    break;

  case 20: /* inputstmt: READ '(' ID ')' ';'  */
#line 100 "exptree.y"
                                {if(lookup((yyvsp[-2].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-2].no)->varname);
	 				exit(1);
	 			 }
	 			 (yyval.no)=createTree(-1,notype,"",rd,(yyvsp[-2].no),NULL);}
#line 1617 "y.tab.c"
    break;

  case 21: /* inputstmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 105 "exptree.y"
                                             {if(lookup((yyvsp[-5].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-5].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-5].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-5].no),(yyvsp[-3].no));
	 			 	(yyval.no)=createTree(-1,notype,"",rd,temp,NULL);}
#line 1630 "y.tab.c"
    break;

  case 22: /* inputstmt: READ '(' ID '[' expr ']' '[' expr ']' ')' ';'  */
#line 113 "exptree.y"
                                                         {if(lookup((yyvsp[-8].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-8].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-8].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arr2dasg,(yyvsp[-8].no),createTree(-1,notype,"",cnn,(yyvsp[-6].no),(yyvsp[-3].no)));
	 			 	(yyval.no)=createTree(-1,notype,"",rd,temp,NULL);}
#line 1643 "y.tab.c"
    break;

  case 23: /* outputstmt: WRITE '(' expr ')' ';'  */
#line 123 "exptree.y"
                                    {(yyval.no) = createTree(-1,notype,"",wr,(yyvsp[-2].no),NULL);}
#line 1649 "y.tab.c"
    break;

  case 24: /* outputstmt: WRITE '(' STRING ')' ';'  */
#line 124 "exptree.y"
                                       {(yyval.no) = createTree(-1,notype,"",wr,(yyvsp[-2].no),NULL);}
#line 1655 "y.tab.c"
    break;

  case 25: /* assgstmt: ID '=' expr ';'  */
#line 127 "exptree.y"
                           {if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 printf("Reaching assg for id=expr\n");
	 			 (yyval.no) = createTree(-1,notype,"",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1666 "y.tab.c"
    break;

  case 26: /* assgstmt: ID '=' STRING ';'  */
#line 133 "exptree.y"
                              {if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 (yyval.no)=createTree(-1,notype,"",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1676 "y.tab.c"
    break;

  case 27: /* assgstmt: ID '[' expr ']' '=' expr ';'  */
#line 138 "exptree.y"
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
#line 1692 "y.tab.c"
    break;

  case 28: /* assgstmt: ID '[' expr ']' '[' expr ']' '=' expr ';'  */
#line 149 "exptree.y"
                                                     {if(lookup((yyvsp[-9].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-9].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-9].no)->varname);
	 			        printf("Reaching assg for id[ex]=expr\n");
	 			 	struct tnode* temp=createTree(-1,t->type,"",arr2dasg,(yyvsp[-9].no),createTree(-1,notype,"",cnn,(yyvsp[-7].no),(yyvsp[-4].no)));
	 			 	(yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));
	 			 	printf("Exiting assg for id[ex]=expr\n");
	  
	  				 }
#line 1708 "y.tab.c"
    break;

  case 29: /* assgstmt: ID '[' expr ']' '=' STRING ';'  */
#line 160 "exptree.y"
                                           {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-6].no),(yyvsp[-4].no));
	 			 	(yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));}
#line 1721 "y.tab.c"
    break;

  case 30: /* assgstmt: ID '[' expr ']' '[' expr ']' '=' STRING ';'  */
#line 168 "exptree.y"
                                                       {if(lookup((yyvsp[-9].no)->varname)==NULL){
	 							printf("Variable %s is undeclared\n",(yyvsp[-9].no)->varname);
	 							exit(1);
	 			 			}
	 			 			struct Gsymbol* t=lookup((yyvsp[-9].no)->varname);
	 			        		printf("Reaching assg for id[ex]=expr\n");
	 			 			struct tnode* temp=createTree(-1,t->type,"",arr2dasg,(yyvsp[-9].no),createTree(-1,notype,"",cnn,(yyvsp[-7].no),(yyvsp[-4].no)));
	 			 			(yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));
	 			 		printf("Exiting assg for id[ex]=expr\n");
	  
	  				 }
#line 1737 "y.tab.c"
    break;

  case 31: /* assgstmt: ID '=' ADDR ID ';'  */
#line 180 "exptree.y"
                                {
	  			printf("Here..\n");
	  			if(lookup((yyvsp[-4].no)->varname)==NULL){
	  				printf("Ptr variable undeclared\n");
	  				exit(1);
	  			}
	  			if(lookup((yyvsp[-1].no)->varname)==NULL){
	  				printf("Variable undeclared\n");
	  				exit(1);
	  			}
	  			struct tnode*temp=createTree(-1,inttype,"",addr_id,(yyvsp[-1].no),NULL);
	  			struct tnode*temp2=createTree(-1,inttype,"",addr_id,(yyvsp[-4].no),NULL);
	  			(yyval.no)=createTree(-1,notype,"",asg2,temp2,temp);
	  			}
#line 1756 "y.tab.c"
    break;

  case 32: /* assgstmt: MUL expr '=' expr ';'  */
#line 194 "exptree.y"
                                  {
	  			  struct tnode* temp=NULL;
	  			  if((yyvsp[-3].no)->type!=intptrtype ){
	  			  	printf("Type mismatch\n");
	  			  	exit(1);
	  			  }
	  			  temp=createTree(-1,inttype,"",ptrasg,(yyvsp[-3].no),NULL);
	  			  (yyval.no)=createTree(-1,notype,"",asg2,temp,(yyvsp[-1].no));
	  
	  			  }
#line 1771 "y.tab.c"
    break;

  case 33: /* assgstmt: MUL expr '=' STRING ';'  */
#line 204 "exptree.y"
                                    {struct tnode* temp=NULL;
	  			  if((yyvsp[-3].no)->type!=strptrtype ){
	  			  	printf("Type mismatch\n");
	  			  	exit(1);
	  			  }
	  			  temp=createTree(-1,strtype,"",ptrasg,(yyvsp[-3].no),NULL);
	  			  (yyval.no)=createTree(-1,notype,"",asg2,temp,(yyvsp[-1].no));}
#line 1783 "y.tab.c"
    break;

  case 34: /* declarations: DECL declist ENDDECL  */
#line 216 "exptree.y"
                                        {(yyval.no)=(yyvsp[-1].no);}
#line 1789 "y.tab.c"
    break;

  case 35: /* declarations: DECL ENDDECL  */
#line 217 "exptree.y"
                                {(yyval.no)=NULL;}
#line 1795 "y.tab.c"
    break;

  case 36: /* declist: declist decl  */
#line 220 "exptree.y"
                       {(yyval.no)=createTree(-1,notype,"",declst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1801 "y.tab.c"
    break;

  case 37: /* declist: decl  */
#line 221 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1807 "y.tab.c"
    break;

  case 38: /* decl: type varlist ';'  */
#line 224 "exptree.y"
                        {assign_type((yyvsp[-1].no),(yyvsp[-2].no)->type);(yyval.no)=createTree(-1,notype,"",decl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1813 "y.tab.c"
    break;

  case 39: /* type: INT  */
#line 226 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1819 "y.tab.c"
    break;

  case 40: /* type: STR  */
#line 227 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1825 "y.tab.c"
    break;

  case 41: /* varlist: varlist ',' ID  */
#line 230 "exptree.y"
                          {(yyval.no)=createTree(-1,notype,"",varlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1831 "y.tab.c"
    break;

  case 42: /* varlist: ID  */
#line 231 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1837 "y.tab.c"
    break;

  case 43: /* varlist: ID '[' NUM ']'  */
#line 232 "exptree.y"
                           {(yyval.no)=createTree(-1,notype,"",arrdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1843 "y.tab.c"
    break;

  case 44: /* varlist: ID '[' NUM ']' '[' NUM ']'  */
#line 233 "exptree.y"
                                       {(yyval.no)=createTree(-1,notype,"",arr2ddecl,(yyvsp[-6].no),createTree(-1,notype,"",cnn,(yyvsp[-4].no),(yyvsp[-1].no)));}
#line 1849 "y.tab.c"
    break;

  case 45: /* varlist: varlist ',' ID '[' NUM ']'  */
#line 234 "exptree.y"
                                       {(yyval.no)=createTree(-1,notype,"",varlst,(yyvsp[-5].no),createTree(-1,notype,"",arrdecl,(yyvsp[-3].no),(yyvsp[-1].no)));}
#line 1855 "y.tab.c"
    break;

  case 46: /* varlist: varlist ',' ID '[' NUM ']' '[' NUM ']'  */
#line 235 "exptree.y"
                                                   {(yyval.no)=createTree(-1,notype,"",varlst,(yyvsp[-8].no),createTree(-1,notype,"",arr2ddecl,(yyvsp[-6].no),createTree(-1,notype,"",cnn,(yyvsp[-4].no),(yyvsp[-1].no))));}
#line 1861 "y.tab.c"
    break;

  case 47: /* varlist: MUL ID  */
#line 236 "exptree.y"
                        {(yyval.no)=createTree(-1,notype,"",ptrdecl,(yyvsp[0].no),NULL);}
#line 1867 "y.tab.c"
    break;

  case 48: /* varlist: varlist ',' MUL ID  */
#line 237 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",varlst,(yyvsp[-3].no),createTree(-1,notype,"",ptrdecl,(yyvsp[0].no),NULL));}
#line 1873 "y.tab.c"
    break;

  case 49: /* expr: expr PLUS expr  */
#line 240 "exptree.y"
                                {if((yyvsp[-2].no)->type==intptrtype || (yyvsp[-2].no)->type==strptrtype){
					(yyval.no) = createTree(-1,(yyvsp[-2].no)->type,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}else if((yyvsp[0].no)->type==intptrtype || (yyvsp[0].no)->type==strptrtype){
					(yyval.no) = createTree(-1,(yyvsp[0].no)->type,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}else{
					
					(yyval.no) = createTree(-1,inttype,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}
				}
#line 1887 "y.tab.c"
    break;

  case 50: /* expr: expr MINUS expr  */
#line 250 "exptree.y"
                                {if((yyvsp[-2].no)->type==intptrtype || (yyvsp[-2].no)->type==strptrtype){
					(yyval.no) = createTree(-1,(yyvsp[-2].no)->type,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}else if((yyvsp[0].no)->type==intptrtype || (yyvsp[0].no)->type==strptrtype){
					(yyval.no) = createTree(-1,(yyvsp[0].no)->type,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}else{
					
					(yyval.no) = createTree(-1,inttype,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}}
#line 1900 "y.tab.c"
    break;

  case 51: /* expr: expr MUL expr  */
#line 258 "exptree.y"
                                {if((yyvsp[-2].no)->type==intptrtype || (yyvsp[-2].no)->type==strptrtype){
					(yyval.no) = createTree(-1,(yyvsp[-2].no)->type,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}else if((yyvsp[0].no)->type==intptrtype || (yyvsp[0].no)->type==strptrtype){
					(yyval.no) = createTree(-1,(yyvsp[0].no)->type,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}else{
					
					(yyval.no) = createTree(-1,inttype,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}}
#line 1913 "y.tab.c"
    break;

  case 52: /* expr: expr DIV expr  */
#line 266 "exptree.y"
                                {if((yyvsp[-2].no)->type==intptrtype || (yyvsp[-2].no)->type==strptrtype){
					(yyval.no) = createTree(-1,(yyvsp[-2].no)->type,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}else if((yyvsp[0].no)->type==intptrtype || (yyvsp[0].no)->type==strptrtype){
					(yyval.no) = createTree(-1,(yyvsp[0].no)->type,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}else{
					
					(yyval.no) = createTree(-1,inttype,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}}
#line 1926 "y.tab.c"
    break;

  case 53: /* expr: expr MOD expr  */
#line 274 "exptree.y"
                                {if((yyvsp[-2].no)->type==intptrtype || (yyvsp[-2].no)->type==strptrtype){
					(yyval.no) = createTree(-1,(yyvsp[-2].no)->type,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}else if((yyvsp[0].no)->type==intptrtype || (yyvsp[0].no)->type==strptrtype){
					(yyval.no) = createTree(-1,(yyvsp[0].no)->type,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}else{
					
					(yyval.no) = createTree(-1,inttype,"",ps,(yyvsp[-2].no),(yyvsp[0].no));
				}}
#line 1939 "y.tab.c"
    break;

  case 54: /* expr: expr LT expr  */
#line 282 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",lt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1945 "y.tab.c"
    break;

  case 55: /* expr: expr GT expr  */
#line 283 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",gt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1951 "y.tab.c"
    break;

  case 56: /* expr: expr GE expr  */
#line 284 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",ge,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1957 "y.tab.c"
    break;

  case 57: /* expr: expr LE expr  */
#line 285 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",le,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1963 "y.tab.c"
    break;

  case 58: /* expr: expr NE expr  */
#line 286 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",ne,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1969 "y.tab.c"
    break;

  case 59: /* expr: expr EQ expr  */
#line 287 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",eq,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1975 "y.tab.c"
    break;

  case 60: /* expr: '(' expr ')'  */
#line 288 "exptree.y"
                                {(yyval.no) = (yyvsp[-1].no);}
#line 1981 "y.tab.c"
    break;

  case 61: /* expr: NUM  */
#line 289 "exptree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 1987 "y.tab.c"
    break;

  case 62: /* expr: ID  */
#line 290 "exptree.y"
                                {if(lookup((yyvsp[0].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[0].no)->varname);
	 				exit(1);
	 			 }
	 			 (yyval.no) = (yyvsp[0].no);}
#line 1997 "y.tab.c"
    break;

  case 63: /* expr: ID '[' expr ']'  */
#line 295 "exptree.y"
                                {if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-3].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type,"",arrval,(yyvsp[-3].no),(yyvsp[-1].no));
	 			}
#line 2010 "y.tab.c"
    break;

  case 64: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 303 "exptree.y"
                                        {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type,"",arr2dval,(yyvsp[-6].no),createTree(-1,notype,"",cnn,(yyvsp[-4].no),(yyvsp[-1].no)));
	 			}
#line 2023 "y.tab.c"
    break;

  case 65: /* expr: MUL '(' expr ')'  */
#line 311 "exptree.y"
                                {if((yyvsp[-1].no)->type==intptrtype){
	 			(yyval.no)=createTree(-1,inttype,"",ptrval,(yyvsp[-1].no),NULL);
	 		}else if((yyvsp[-1].no)->type==strptrtype){
	 			(yyval.no)=createTree(-1,strtype,"",ptrval,(yyvsp[-1].no),NULL);
	 		}else{
	 			printf("Type mismatch in pointer,non-int and non-str type found\n");
	 			exit(1);
	 		}	
	 		 }
#line 2037 "y.tab.c"
    break;

  case 66: /* expr: MUL ID  */
#line 320 "exptree.y"
                        {if((yyvsp[0].no)->type==intptrtype){
	 			(yyval.no)=createTree(-1,inttype,"",ptrval,(yyvsp[0].no),NULL);
	 		}else if((yyvsp[0].no)->type==strptrtype){
	 			(yyval.no)=createTree(-1,strtype,"",ptrval,(yyvsp[0].no),NULL);
	 		}else{
	 			printf("Type mismatch in pointer,non-int and non-str type found\n");
	 			exit(1);
	 		}}
#line 2050 "y.tab.c"
    break;


#line 2054 "y.tab.c"

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

#line 333 "exptree.y"


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
