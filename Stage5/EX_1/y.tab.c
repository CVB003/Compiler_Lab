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
    RETURN = 291,                  /* RETURN  */
    AND = 292,                     /* AND  */
    MOD = 293,                     /* MOD  */
    ADDR = 294                     /* ADDR  */
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
#define RETURN 291
#define AND 292
#define MOD 293
#define ADDR 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "exptree.y"

	struct tnode *no;
	

#line 220 "y.tab.c"

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
  YYSYMBOL_RETURN = 36,                    /* RETURN  */
  YYSYMBOL_AND = 37,                       /* AND  */
  YYSYMBOL_MOD = 38,                       /* MOD  */
  YYSYMBOL_ADDR = 39,                      /* ADDR  */
  YYSYMBOL_40_ = 40,                       /* ';'  */
  YYSYMBOL_41_ = 41,                       /* ','  */
  YYSYMBOL_42_ = 42,                       /* '['  */
  YYSYMBOL_43_ = 43,                       /* ']'  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* '{'  */
  YYSYMBOL_47_ = 47,                       /* '}'  */
  YYSYMBOL_48_ = 48,                       /* '='  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_Gdeclblock = 51,                /* Gdeclblock  */
  YYSYMBOL_Gdecllist = 52,                 /* Gdecllist  */
  YYSYMBOL_Gdecl = 53,                     /* Gdecl  */
  YYSYMBOL_Gidlist = 54,                   /* Gidlist  */
  YYSYMBOL_Gid = 55,                       /* Gid  */
  YYSYMBOL_Fdefblock = 56,                 /* Fdefblock  */
  YYSYMBOL_Fdef = 57,                      /* Fdef  */
  YYSYMBOL_Paramlist = 58,                 /* Paramlist  */
  YYSYMBOL_Param = 59,                     /* Param  */
  YYSYMBOL_type = 60,                      /* type  */
  YYSYMBOL_Ldeclblock = 61,                /* Ldeclblock  */
  YYSYMBOL_Ldecllist = 62,                 /* Ldecllist  */
  YYSYMBOL_Ldecl = 63,                     /* Ldecl  */
  YYSYMBOL_Idlist = 64,                    /* Idlist  */
  YYSYMBOL_Mainblock = 65,                 /* Mainblock  */
  YYSYMBOL_body = 66,                      /* body  */
  YYSYMBOL_slist = 67,                     /* slist  */
  YYSYMBOL_ifstmt = 68,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 69,                 /* whilestmt  */
  YYSYMBOL_repeatstmt = 70,                /* repeatstmt  */
  YYSYMBOL_dowhilestmt = 71,               /* dowhilestmt  */
  YYSYMBOL_stmt = 72,                      /* stmt  */
  YYSYMBOL_retstmt = 73,                   /* retstmt  */
  YYSYMBOL_inputstmt = 74,                 /* inputstmt  */
  YYSYMBOL_outputstmt = 75,                /* outputstmt  */
  YYSYMBOL_assgstmt = 76,                  /* assgstmt  */
  YYSYMBOL_expr = 77,                      /* expr  */
  YYSYMBOL_Arglist = 78                    /* Arglist  */
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
#define YYLAST   649

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      44,    45,     2,     2,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
       2,    48,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    60,    89,    92,    95,   100,   101,   104,
     107,   108,   110,   111,   112,   113,   114,   115,   116,   119,
     120,   123,   141,   152,   178,   196,   197,   200,   201,   212,
     213,   216,   217,   220,   221,   224,   227,   228,   229,   230,
     233,   256,   259,   260,   263,   264,   269,   272,   274,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   288,
     293,   295,   305,   306,   309,   312,   314,   325,   337,   343,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   372,   384,   393,   401,
     409,   413,   414
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
  "REPEAT", "UNTIL", "MAIN", "RETURN", "AND", "MOD", "ADDR", "';'", "','",
  "'['", "']'", "'('", "')'", "'{'", "'}'", "'='", "$accept", "program",
  "Gdeclblock", "Gdecllist", "Gdecl", "Gidlist", "Gid", "Fdefblock",
  "Fdef", "Paramlist", "Param", "type", "Ldeclblock", "Ldecllist", "Ldecl",
  "Idlist", "Mainblock", "body", "slist", "ifstmt", "whilestmt",
  "repeatstmt", "dowhilestmt", "stmt", "retstmt", "inputstmt",
  "outputstmt", "assgstmt", "expr", "Arglist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,    42,    13,    92,    29,   -92,    72,   -92,   -92,   -92,
      90,   -92,     6,   -92,    42,    29,   -92,   165,   -92,    64,
     -92,   -92,   -38,   123,   172,   -92,   -92,   -92,    94,   168,
     125,   144,    75,   156,   -92,     6,    78,   175,   196,   215,
     -92,   -34,   -92,   203,   101,   -92,   141,    48,   109,   150,
     197,   -92,   124,   -92,   -92,   235,   -92,    95,   196,   213,
     216,   129,   -92,   236,   167,   -92,   421,   208,   -92,   -92,
     -92,   197,   196,   196,   221,   -92,   275,   212,   -92,   -92,
      66,   246,   247,   240,   252,    39,   249,   250,   421,   421,
      39,   331,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   248,   197,   197,   196,   -92,   -92,   243,    39,
       5,   283,    87,   -92,   -92,   -92,   131,     8,   293,    39,
     130,    39,    39,   432,   344,   508,   -92,   -92,   -92,   260,
     262,   197,   -92,   294,   457,   259,   537,   209,   265,   143,
      39,    37,   -92,    39,   -92,   171,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    91,   183,
     211,   267,   269,   -92,   -92,   -92,   268,   -92,   266,   -92,
     -92,    39,   276,   277,   278,   469,   -92,   590,   170,   223,
     -92,    65,    65,   -92,   -92,    16,    16,    16,    16,    16,
      16,   611,   -92,   279,   549,   295,   292,    39,    39,   -92,
      93,   496,   -92,   -92,   -92,   -92,    39,   -92,   -92,   -92,
     -92,   421,   421,   251,   263,   288,   578,   284,   590,   298,
     377,    19,   290,   -92,   -92,   300,   421,   301,   302,   -92,
     -92,   -92,   388,   -92,   -92,   303,   -92
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     0,    29,    30,     6,
       0,     8,     0,     1,    29,     0,    20,     0,     3,     0,
       5,     7,    15,     0,     0,    11,    19,     2,     0,     0,
       0,     0,     0,    16,     9,     0,     0,     0,     0,     0,
      14,     0,    26,     0,     0,    10,     0,     0,     0,     0,
       0,    12,     0,    13,    27,     0,    17,     0,     0,     0,
       0,     0,    32,     0,     0,    34,     0,     0,    25,    28,
      18,     0,     0,     0,     0,    37,     0,     0,    31,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    56,    57,    43,    58,    49,    50,
      51,    40,     0,     0,     0,     0,    38,    35,     0,     0,
       0,     0,     0,    54,    55,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    42,    22,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    21,    24,     0,    39,     0,    65,
      64,     0,     0,     0,     0,     0,    86,    92,     0,     0,
      82,    70,    71,    72,    73,    75,    76,    78,    77,    79,
      80,    81,    74,     0,     0,     0,     0,     0,     0,    23,
       0,     0,    60,    63,    62,    85,     0,    87,    89,    69,
      68,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,    67,    66,     0,     0,     0,     0,    48,
      47,    61,     0,    45,    46,     0,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,   -92,   313,   -92,   297,   -92,   318,   174,
     304,    11,   -55,   -92,   280,   -92,   102,   -57,   -87,   -92,
     -92,   -92,   -92,   -91,   -92,   -92,   -92,   -92,   -85,   -92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    10,    11,    24,    25,    15,    16,    41,
      42,    43,    50,    64,    65,    77,     5,    67,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   120,   178
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     127,   123,   124,    71,    31,   125,    32,    52,   115,   116,
      22,    53,   142,    12,   102,    17,   135,   103,   104,   117,
      23,    12,     7,     8,   134,   136,    17,   139,   146,   147,
     148,   149,   127,   127,   145,     1,   159,   160,    14,     8,
     115,   116,   115,   116,   118,     9,   129,   130,   212,   119,
     131,   117,   143,   117,   157,   175,   177,     2,   179,   229,
      63,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   194,   166,    63,   118,     6,   118,   148,
     149,   119,   176,   119,     7,     8,   201,     7,     8,    52,
     115,   116,    13,    59,   115,   116,   115,   116,   138,     7,
       8,   117,   193,   157,   215,   117,    18,   117,   109,    30,
       7,     8,   213,   214,   110,   216,    19,    27,     7,     8,
      40,   218,    20,    46,   219,   220,   118,    33,   127,   127,
     118,   119,   118,     7,     8,   119,    52,   119,    36,   232,
      70,   127,   146,   147,   148,   149,    56,    39,   150,   151,
     152,   153,   154,   155,    60,   146,   147,   148,   149,     7,
       8,   150,   151,   152,   153,   154,   155,   156,   157,    28,
      52,    38,    37,   140,    74,   141,     7,     8,   158,    29,
     156,   157,    62,   146,   147,   148,   149,    58,   174,   150,
     151,   152,   153,   154,   155,   146,   147,   148,   149,    78,
      44,   150,   151,   152,   153,   154,   155,    54,   156,   157,
      47,   206,    34,    35,    66,   207,   180,    55,    57,    48,
     156,   157,    61,   146,   147,   148,   149,    49,   195,   150,
     151,   152,   153,   154,   155,   146,   147,   148,   149,    69,
      75,   150,   151,   152,   153,   154,   155,   132,   156,   157,
      76,   171,   107,   108,   172,   101,   196,   133,    51,    72,
     156,   157,    73,   146,   147,   148,   149,   105,   208,   150,
     151,   152,   153,   154,   155,   146,   147,   148,   149,   106,
     113,   150,   151,   152,   153,   154,   155,   137,   156,   157,
     111,   112,   114,   121,   122,   128,   221,   144,   167,   169,
     156,   157,    80,    81,    82,    83,    84,   164,   222,   165,
     173,   197,    85,   198,   200,   199,   202,   203,   204,   209,
     211,   212,    86,    21,   226,   227,    87,    88,   223,   225,
     230,    89,    45,    26,    90,    80,    81,    82,    83,    84,
     231,   233,   234,   236,    79,    85,     0,   126,    80,    81,
      82,    83,    84,     0,     0,    86,    68,     0,    85,    87,
      88,     0,     0,     0,    89,     0,     0,    90,    86,     0,
       0,     0,    87,    88,     0,     0,     0,    89,   162,     0,
      90,    80,    81,    82,    83,    84,     0,     0,     0,     0,
       0,    85,    80,    81,    82,    83,    84,     0,     0,     0,
       0,    86,    85,     0,     0,    87,    88,   228,     0,     0,
      89,     0,    86,    90,     0,   235,    87,    88,     0,     0,
       0,    89,     0,     0,    90,    80,    81,    82,    83,    84,
       0,     0,     0,     0,     0,    85,    80,    81,    82,    83,
      84,     0,     0,     0,     0,    86,    85,     0,     0,    87,
      88,     0,     0,     0,    89,     0,    86,    90,     0,     0,
     161,    88,     0,     0,     0,    89,     0,     0,    90,   146,
     147,   148,   149,     0,     0,   150,   151,   152,   153,   154,
     155,   146,   147,   148,   149,     0,     0,   150,   151,   152,
     153,   154,   155,     0,   156,   157,     0,     0,     0,     0,
     168,     0,     0,     0,     0,     0,   156,   157,   146,   147,
     148,   149,   205,     0,   150,   151,   152,   153,   154,   155,
     146,   147,   148,   149,     0,     0,   150,   151,   152,   153,
     154,   155,     0,   156,   157,     0,     0,     0,     0,   217,
       0,     0,     0,     0,     0,   156,   157,     0,   163,   146,
     147,   148,   149,     0,     0,   150,   151,   152,   153,   154,
     155,   146,   147,   148,   149,     0,     0,   150,   151,   152,
     153,   154,   155,     0,   156,   157,     0,   170,     0,     0,
       0,     0,     0,     0,     0,     0,   156,   157,     0,   210,
     146,   147,   148,   149,     0,     0,   150,   151,   152,   153,
     154,   155,   146,   147,   148,   149,     0,     0,   150,   151,
     152,   153,   154,   155,     0,   156,   157,     0,   224,     0,
       0,     0,     0,   146,   147,   148,   149,   156,   157,   150,
     151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   157
};

static const yytype_int16 yycheck[] =
{
      91,    88,    89,    58,    42,    90,    44,    41,     3,     4,
       4,    45,     4,     2,    71,     4,    11,    72,    73,    14,
      14,    10,     9,    10,   109,   110,    15,   112,    12,    13,
      14,    15,   123,   124,   119,     9,   121,   122,     9,    10,
       3,     4,     3,     4,    39,    32,   103,   104,    29,    44,
     105,    14,    44,    14,    38,   140,   141,    31,   143,    40,
      49,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   131,    64,    39,    35,    39,    14,
      15,    44,    45,    44,     9,    10,   171,     9,    10,    41,
       3,     4,     0,    45,     3,     4,     3,     4,    11,     9,
      10,    14,    11,    38,    11,    14,     4,    14,    42,    45,
       9,    10,   197,   198,    48,   200,    44,    15,     9,    10,
      45,   206,    32,    45,   211,   212,    39,     4,   219,   220,
      39,    44,    39,     9,    10,    44,    41,    44,    44,   226,
      45,   232,    12,    13,    14,    15,    45,     3,    18,    19,
      20,    21,    22,    23,    45,    12,    13,    14,    15,     9,
      10,    18,    19,    20,    21,    22,    23,    37,    38,     4,
      41,    46,     4,    42,    45,    44,     9,    10,    48,    14,
      37,    38,    32,    12,    13,    14,    15,    46,    45,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,    32,
      44,    18,    19,    20,    21,    22,    23,     4,    37,    38,
      36,    41,    40,    41,    17,    45,    45,    14,    44,    44,
      37,    38,    48,    12,    13,    14,    15,    31,    45,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,     4,
       4,    18,    19,    20,    21,    22,    23,     4,    37,    38,
      14,    42,    40,    41,    45,    47,    45,    14,    43,    46,
      37,    38,    46,    12,    13,    14,    15,    46,    45,    18,
      19,    20,    21,    22,    23,    12,    13,    14,    15,     4,
      40,    18,    19,    20,    21,    22,    23,     4,    37,    38,
      44,    44,    40,    44,    44,    47,    45,     4,     4,    40,
      37,    38,     4,     5,     6,     7,     8,    47,    45,    47,
      45,    44,    14,    44,    48,    47,    40,    40,    40,    40,
      25,    29,    24,    10,    26,    27,    28,    29,    40,    45,
      40,    33,    35,    15,    36,     4,     5,     6,     7,     8,
      40,    40,    40,    40,    64,    14,    -1,    16,     4,     5,
       6,     7,     8,    -1,    -1,    24,    52,    -1,    14,    28,
      29,    -1,    -1,    -1,    33,    -1,    -1,    36,    24,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    -1,
      36,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    24,    14,    -1,    -1,    28,    29,    30,    -1,    -1,
      33,    -1,    24,    36,    -1,    27,    28,    29,    -1,    -1,
      -1,    33,    -1,    -1,    36,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    24,    14,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    -1,    24,    36,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    -1,    36,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    22,    23,    -1,    37,    38,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    37,    38,    12,    13,
      14,    15,    43,    -1,    18,    19,    20,    21,    22,    23,
      12,    13,    14,    15,    -1,    -1,    18,    19,    20,    21,
      22,    23,    -1,    37,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    22,    23,    -1,    37,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      12,    13,    14,    15,    -1,    -1,    18,    19,    20,    21,
      22,    23,    12,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    22,    23,    -1,    37,    38,    -1,    40,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    37,    38,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    31,    50,    51,    65,    35,     9,    10,    32,
      52,    53,    60,     0,     9,    56,    57,    60,    65,    44,
      32,    53,     4,    14,    54,    55,    57,    65,     4,    14,
      45,    42,    44,     4,    40,    41,    44,     4,    46,     3,
      45,    58,    59,    60,    44,    55,    45,    58,    44,    31,
      61,    43,    41,    45,     4,    14,    45,    58,    46,    45,
      45,    58,    32,    60,    62,    63,    17,    66,    59,     4,
      45,    61,    46,    46,    45,     4,    14,    64,    32,    63,
       4,     5,     6,     7,     8,    14,    24,    28,    29,    33,
      36,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    47,    66,    61,    61,    46,     4,    40,    41,    42,
      48,    44,    44,    40,    40,     3,     4,    14,    39,    44,
      77,    44,    44,    67,    67,    77,    16,    72,    47,    66,
      66,    61,     4,    14,    77,    11,    77,     4,    11,    77,
      42,    44,     4,    44,     4,    77,    12,    13,    14,    15,
      18,    19,    20,    21,    22,    23,    37,    38,    48,    77,
      77,    28,    34,    40,    47,    47,    66,     4,    43,    40,
      40,    42,    45,    45,    45,    77,    45,    77,    78,    77,
      45,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    11,    77,    45,    45,    44,    44,    47,
      48,    77,    40,    40,    40,    43,    41,    45,    45,    40,
      40,    25,    29,    77,    77,    11,    77,    43,    77,    67,
      67,    45,    45,    40,    40,    45,    26,    27,    30,    40,
      40,    40,    67,    40,    40,    27,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    50,    51,    51,    52,    52,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    57,    57,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    64,    64,    64,    64,
      65,    66,    67,    67,    68,    68,    69,    70,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    73,
      74,    74,    75,    75,    76,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     2,     1,     3,
       3,     1,     4,     4,     3,     1,     2,     4,     5,     2,
       1,     9,     8,    10,     9,     3,     1,     2,     3,     1,
       1,     3,     2,     2,     1,     3,     3,     1,     2,     4,
       8,     3,     2,     1,    10,     8,     8,     7,     7,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     3,
       5,     8,     5,     5,     4,     4,     7,     7,     5,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     4,     3,     4,     2,     4,
       2,     3,     1
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
#line 30 "exptree.y"
                                                {
						struct tnode* t1=createTree(-1,notype,"",cnn,(yyvsp[-1].no),(yyvsp[0].no));
						 (yyval.no)=createTree(-1,notype,"",cnn,(yyvsp[-2].no),t1);
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
#line 1533 "y.tab.c"
    break;

  case 3: /* program: Gdeclblock Mainblock  */
#line 60 "exptree.y"
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
#line 1566 "y.tab.c"
    break;

  case 4: /* program: Mainblock  */
#line 89 "exptree.y"
                                                {(yyval.no)=(yyvsp[0].no);}
#line 1572 "y.tab.c"
    break;

  case 5: /* Gdeclblock: DECL Gdecllist ENDDECL  */
#line 92 "exptree.y"
                                        {(yyval.no)=createTree(-1,notype,"",gdeclblk,(yyvsp[-1].no),NULL);
					 before_code();
					}
#line 1580 "y.tab.c"
    break;

  case 6: /* Gdeclblock: DECL ENDDECL  */
#line 95 "exptree.y"
                                {(yyval.no)=NULL;
	    			before_code();
	    			}
#line 1588 "y.tab.c"
    break;

  case 7: /* Gdecllist: Gdecllist Gdecl  */
#line 100 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",gdeclst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1594 "y.tab.c"
    break;

  case 8: /* Gdecllist: Gdecl  */
#line 101 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1600 "y.tab.c"
    break;

  case 9: /* Gdecl: type Gidlist ';'  */
#line 104 "exptree.y"
                                {assign_type((yyvsp[-1].no),(yyvsp[-2].no)->type);(yyval.no)=createTree(-1,notype,"",gdecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1606 "y.tab.c"
    break;

  case 10: /* Gidlist: Gidlist ',' Gid  */
#line 107 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",gidlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1612 "y.tab.c"
    break;

  case 11: /* Gidlist: Gid  */
#line 108 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1618 "y.tab.c"
    break;

  case 12: /* Gid: ID '[' NUM ']'  */
#line 110 "exptree.y"
                        {(yyval.no)=createTree(-1,notype,"",arrdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1624 "y.tab.c"
    break;

  case 13: /* Gid: ID '(' Paramlist ')'  */
#line 111 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",funcdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1630 "y.tab.c"
    break;

  case 14: /* Gid: ID '(' ')'  */
#line 112 "exptree.y"
                        {(yyval.no)=createTree(-1,notype,"",funcdecl,(yyvsp[-2].no),NULL);}
#line 1636 "y.tab.c"
    break;

  case 15: /* Gid: ID  */
#line 113 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1642 "y.tab.c"
    break;

  case 16: /* Gid: MUL ID  */
#line 114 "exptree.y"
                {(yyval.no)=createTree(-1,notype,"",ptrdecl,(yyvsp[0].no),NULL);}
#line 1648 "y.tab.c"
    break;

  case 17: /* Gid: MUL ID '(' ')'  */
#line 115 "exptree.y"
                      {(yyval.no)=createTree(-1,notype,"",ptrfuncdecl,(yyvsp[-2].no),NULL);}
#line 1654 "y.tab.c"
    break;

  case 18: /* Gid: MUL ID '(' Paramlist ')'  */
#line 116 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",ptrfuncdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1660 "y.tab.c"
    break;

  case 19: /* Fdefblock: Fdefblock Fdef  */
#line 119 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",fdefblk,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1666 "y.tab.c"
    break;

  case 20: /* Fdefblock: Fdef  */
#line 120 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1672 "y.tab.c"
    break;

  case 21: /* Fdef: type ID '(' Paramlist ')' '{' Ldeclblock body '}'  */
#line 123 "exptree.y"
                                                                {if(lookup((yyvsp[-7].no)->varname)==NULL){
	 								printf("1Funcn %s is undeclared\n",(yyvsp[-7].no)->varname);
	 								exit(1);
	 			 				}
	 			 				(yyval.no)=createTree(-1,(yyvsp[-8].no)->type,"",fndef,createTree(-1,notype,"",cnn,(yyvsp[-8].no),(yyvsp[-7].no)),createTree(-1,notype,"",cnn,(yyvsp[-5].no),createTree(-1,notype,"",cnn,(yyvsp[-2].no),(yyvsp[-1].no))));
	 			 				
	 			 				check_decl((yyvsp[-8].no)->type,(yyvsp[-1].no));
	 			 				printf("REACH HERE\n");
	 			 				code_gen((yyval.no));
	 			 				printf("REACH AND HERE\n");
	 			 				destroy_lsymbtable();
	 			 				
	 			 				
	 			 				
	 			 				}
#line 1692 "y.tab.c"
    break;

  case 22: /* Fdef: type ID '(' ')' '{' Ldeclblock body '}'  */
#line 141 "exptree.y"
                                                                {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 								printf("2Funcn %s is undeclared\n",(yyvsp[-6].no)->varname);
	 								exit(1);
	 			 				}
	 			 				
	 			 				(yyval.no)=createTree(-1,(yyvsp[-7].no)->type,"",fndef,createTree(-1,notype,"",cnn,(yyvsp[-7].no),(yyvsp[-6].no)),createTree(-1,notype,"",cnn,NULL,createTree(-1,notype,"",cnn,(yyvsp[-2].no),(yyvsp[-1].no))));
	 			 				check_decl((yyvsp[-7].no)->type,(yyvsp[-1].no));
	 			 				
	 			 				code_gen((yyval.no));
	 			 				destroy_lsymbtable();
	 			 				}
#line 1708 "y.tab.c"
    break;

  case 23: /* Fdef: type MUL ID '(' Paramlist ')' '{' Ldeclblock body '}'  */
#line 152 "exptree.y"
                                                                {if(lookup((yyvsp[-7].no)->varname)==NULL){
	 								printf("1Funcn %s is undeclared\n",(yyvsp[-7].no)->varname);
	 								exit(1);
	 			 				}
	 			 				int tp;
	 			 				if((yyvsp[-9].no)->type==inttype){
	 			 					tp=intptrtype;
	 			 				}else{
	 			 					tp=strptrtype;
	 			 				}
	 			 				(yyval.no)=createTree(-1,tp,"",fndef,createTree(-1,notype,"",cnn,(yyvsp[-9].no),(yyvsp[-7].no)),createTree(-1,notype,"",cnn,(yyvsp[-5].no),createTree(-1,notype,"",cnn,(yyvsp[-2].no),(yyvsp[-1].no))));
	 			 				
	 			 				
	 			 				
	 			 				check_decl(tp,(yyvsp[-1].no));
	 			 				printf("REACH HERE\n");
	 			 				code_gen((yyval.no));
	 			 				printf("REACH AND HERE\n");
	 			 				destroy_lsymbtable();
	 			 				
	 			 				
	 			 				
	 			 				}
#line 1736 "y.tab.c"
    break;

  case 24: /* Fdef: type MUL ID '(' ')' '{' Ldeclblock body '}'  */
#line 178 "exptree.y"
                                                                        {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 								printf("2Funcn %s is undeclared\n",(yyvsp[-6].no)->varname);
	 								exit(1);
	 			 				}
	 			 				int tp;
	 			 				if((yyvsp[-8].no)->type==inttype){
	 			 					tp=intptrtype;
	 			 				}else{
	 			 					tp=strptrtype;
	 			 				}
	 			 				(yyval.no)=createTree(-1,tp,"",fndef,createTree(-1,notype,"",cnn,(yyvsp[-8].no),(yyvsp[-6].no)),createTree(-1,notype,"",cnn,NULL,createTree(-1,notype,"",cnn,(yyvsp[-2].no),(yyvsp[-1].no))));
	 			 				check_decl(tp,(yyvsp[-1].no));
	 			 				
	 			 				code_gen((yyval.no));
	 			 				destroy_lsymbtable();
	 			 				}
#line 1757 "y.tab.c"
    break;

  case 25: /* Paramlist: Paramlist ',' Param  */
#line 196 "exptree.y"
                                        {(yyval.no)=createTree(-1,notype,"",paramlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1763 "y.tab.c"
    break;

  case 26: /* Paramlist: Param  */
#line 197 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1769 "y.tab.c"
    break;

  case 27: /* Param: type ID  */
#line 200 "exptree.y"
                {(yyval.no)=createTree(-1,notype,"",param,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1775 "y.tab.c"
    break;

  case 28: /* Param: type MUL ID  */
#line 201 "exptree.y"
                      {int tp2=(yyvsp[-2].no)->type;
		       struct tnode* temp=NULL;
		       if(tp2==inttype){
		           temp=createTree(-1,intptrtype,"",ptrdecl,(yyvsp[0].no),NULL);
		       }else{
		           temp=createTree(-1,strptrtype,"",ptrdecl,(yyvsp[0].no),NULL);
		       }
		       (yyval.no)=createTree(-1,notype,"",param,(yyvsp[-2].no),temp);
		       }
#line 1789 "y.tab.c"
    break;

  case 29: /* type: INT  */
#line 212 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1795 "y.tab.c"
    break;

  case 30: /* type: STR  */
#line 213 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1801 "y.tab.c"
    break;

  case 31: /* Ldeclblock: DECL Ldecllist ENDDECL  */
#line 216 "exptree.y"
                                    {(yyval.no)=createTree(-1,notype,"",ldeclblk,(yyvsp[-1].no),NULL);}
#line 1807 "y.tab.c"
    break;

  case 32: /* Ldeclblock: DECL ENDDECL  */
#line 217 "exptree.y"
                                {(yyval.no)=NULL;}
#line 1813 "y.tab.c"
    break;

  case 33: /* Ldecllist: Ldecllist Ldecl  */
#line 220 "exptree.y"
                            {(yyval.no)=createTree(-1,notype,"",ldecllst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1819 "y.tab.c"
    break;

  case 34: /* Ldecllist: Ldecl  */
#line 221 "exptree.y"
                    {(yyval.no)=(yyvsp[0].no);}
#line 1825 "y.tab.c"
    break;

  case 35: /* Ldecl: type Idlist ';'  */
#line 224 "exptree.y"
                       {(yyval.no)=createTree(-1,notype,"",ldecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1831 "y.tab.c"
    break;

  case 36: /* Idlist: Idlist ',' ID  */
#line 227 "exptree.y"
                       {(yyval.no)=createTree(-1,notype,"",idlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1837 "y.tab.c"
    break;

  case 37: /* Idlist: ID  */
#line 228 "exptree.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1843 "y.tab.c"
    break;

  case 38: /* Idlist: MUL ID  */
#line 229 "exptree.y"
                 {(yyval.no)=createTree(-1,notype,"",ptrdecl,(yyvsp[0].no),NULL);}
#line 1849 "y.tab.c"
    break;

  case 39: /* Idlist: Idlist ',' MUL ID  */
#line 230 "exptree.y"
                            {(yyval.no)=createTree(-1,notype,"",idlst,(yyvsp[-3].no),createTree(-1,notype,"",ptrdecl,(yyvsp[0].no),NULL));}
#line 1855 "y.tab.c"
    break;

  case 40: /* Mainblock: INT MAIN '(' ')' '{' Ldeclblock body '}'  */
#line 233 "exptree.y"
                                                     {
							(yyval.no)=createTree(-1,notype,"",mainnd,(yyvsp[-2].no),(yyvsp[-1].no));
							printf("\n Printing Local symbol table\n");
							struct Lsymbol* t=(yyvsp[-7].no)->Lentry;
							while(t!=NULL){
								if(t->type==inttype){
									printf("INT ");
								}else{
									printf("STR ");
							}
							printf("%s ",t->name);
							printf("%d ",t->binding);
							
							t=t->next;
							
							}
							check_decl(inttype,(yyvsp[-1].no));
							
							code_gen((yyval.no));
							destroy_lsymbtable();
							}
#line 1881 "y.tab.c"
    break;

  case 41: /* body: BEGN slist END  */
#line 256 "exptree.y"
                      {(yyval.no)=(yyvsp[-1].no);}
#line 1887 "y.tab.c"
    break;

  case 42: /* slist: slist stmt  */
#line 259 "exptree.y"
                        {(yyval.no)=createTree(-1,notype,"",cnn,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1893 "y.tab.c"
    break;

  case 43: /* slist: stmt  */
#line 260 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1899 "y.tab.c"
    break;

  case 44: /* ifstmt: IF '(' expr ')' THEN slist ELSE slist ENDIF ';'  */
#line 263 "exptree.y"
                                                                {struct tnode* t=createTree(-1,notype,"",el,(yyvsp[-4].no),(yyvsp[-2].no));(yyval.no)=createTree(-1,notype,"",ifel,(yyvsp[-7].no),t);}
#line 1905 "y.tab.c"
    break;

  case 45: /* ifstmt: IF '(' expr ')' THEN slist ENDIF ';'  */
#line 264 "exptree.y"
                                                { struct tnode* t=createTree(-1,notype,"",el,(yyvsp[-2].no),NULL);
						  
					          (yyval.no)=createTree(-1,notype,"",ifel,(yyvsp[-5].no),t);}
#line 1913 "y.tab.c"
    break;

  case 46: /* whilestmt: WHILE '(' expr ')' DO slist ENDWHILE ';'  */
#line 269 "exptree.y"
                                                        {(yyval.no)=createTree(-1,notype,"",whl,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1919 "y.tab.c"
    break;

  case 47: /* repeatstmt: REPEAT slist UNTIL '(' expr ')' ';'  */
#line 272 "exptree.y"
                                                  {(yyval.no)=createTree(-1,notype,"",rpt,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1925 "y.tab.c"
    break;

  case 48: /* dowhilestmt: DO slist WHILE '(' expr ')' ';'  */
#line 274 "exptree.y"
                                                {(yyval.no)=createTree(-1,notype,"",dow,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1931 "y.tab.c"
    break;

  case 49: /* stmt: inputstmt  */
#line 276 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1937 "y.tab.c"
    break;

  case 50: /* stmt: outputstmt  */
#line 277 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1943 "y.tab.c"
    break;

  case 51: /* stmt: assgstmt  */
#line 278 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1949 "y.tab.c"
    break;

  case 52: /* stmt: ifstmt  */
#line 279 "exptree.y"
                        {(yyval.no)= (yyvsp[0].no);}
#line 1955 "y.tab.c"
    break;

  case 53: /* stmt: whilestmt  */
#line 280 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1961 "y.tab.c"
    break;

  case 54: /* stmt: BREAK ';'  */
#line 281 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 1967 "y.tab.c"
    break;

  case 55: /* stmt: CONTINUE ';'  */
#line 282 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 1973 "y.tab.c"
    break;

  case 56: /* stmt: repeatstmt  */
#line 283 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1979 "y.tab.c"
    break;

  case 57: /* stmt: dowhilestmt  */
#line 284 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1985 "y.tab.c"
    break;

  case 58: /* stmt: retstmt  */
#line 285 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1991 "y.tab.c"
    break;

  case 59: /* retstmt: RETURN expr ';'  */
#line 288 "exptree.y"
                                {
				(yyval.no)=createTree(-1,(yyvsp[-1].no)->type,"",retnd,(yyvsp[-1].no),NULL);
				}
#line 1999 "y.tab.c"
    break;

  case 60: /* inputstmt: READ '(' ID ')' ';'  */
#line 293 "exptree.y"
                                {
	 			 (yyval.no)=createTree(-1,notype,"",rd,(yyvsp[-2].no),NULL);}
#line 2006 "y.tab.c"
    break;

  case 61: /* inputstmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 295 "exptree.y"
                                             {if(lookup((yyvsp[-5].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-5].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-5].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-5].no),(yyvsp[-3].no));
	 			 	(yyval.no)=createTree(-1,notype,"",rd,temp,NULL);}
#line 2019 "y.tab.c"
    break;

  case 62: /* outputstmt: WRITE '(' expr ')' ';'  */
#line 305 "exptree.y"
                                    {(yyval.no) = createTree(-1,notype,"",wr,(yyvsp[-2].no),NULL);}
#line 2025 "y.tab.c"
    break;

  case 63: /* outputstmt: WRITE '(' STRING ')' ';'  */
#line 306 "exptree.y"
                                       {(yyval.no) = createTree(-1,notype,"",wr,(yyvsp[-2].no),NULL);}
#line 2031 "y.tab.c"
    break;

  case 64: /* assgstmt: ID '=' expr ';'  */
#line 309 "exptree.y"
                           {
	 			 
	 			 (yyval.no) = createTree(-1,notype,"",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 2039 "y.tab.c"
    break;

  case 65: /* assgstmt: ID '=' STRING ';'  */
#line 312 "exptree.y"
                              {
	 			 (yyval.no)=createTree(-1,notype,"",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 2046 "y.tab.c"
    break;

  case 66: /* assgstmt: ID '[' expr ']' '=' expr ';'  */
#line 314 "exptree.y"
                                         {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			        
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-6].no),(yyvsp[-4].no));
	 			 	(yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));
	 			 	
	  
	  				 }
#line 2062 "y.tab.c"
    break;

  case 67: /* assgstmt: ID '[' expr ']' '=' STRING ';'  */
#line 325 "exptree.y"
                                           {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-6].no),(yyvsp[-4].no));
	 			 	(yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));
	  
	  
	  
	  				   }
#line 2079 "y.tab.c"
    break;

  case 68: /* assgstmt: MUL expr '=' expr ';'  */
#line 337 "exptree.y"
                                  {
	  			  struct tnode* temp=NULL;
	  			  temp=createTree(-1,inttype,"",ptrasg,(yyvsp[-3].no),NULL);
	  			  (yyval.no)=createTree(-1,notype,"",asg2,temp,(yyvsp[-1].no));
	  
	  			  }
#line 2090 "y.tab.c"
    break;

  case 69: /* assgstmt: MUL expr '=' STRING ';'  */
#line 343 "exptree.y"
                                    {struct tnode* temp=NULL;
	  			  temp=createTree(-1,strtype,"",ptrasg,(yyvsp[-3].no),NULL);
	  			  (yyval.no)=createTree(-1,notype,"",asg2,temp,(yyvsp[-1].no));}
#line 2098 "y.tab.c"
    break;

  case 70: /* expr: expr PLUS expr  */
#line 349 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",ps,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2104 "y.tab.c"
    break;

  case 71: /* expr: expr MINUS expr  */
#line 350 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",ms,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2110 "y.tab.c"
    break;

  case 72: /* expr: expr MUL expr  */
#line 351 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",ml,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2116 "y.tab.c"
    break;

  case 73: /* expr: expr DIV expr  */
#line 352 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",dv,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2122 "y.tab.c"
    break;

  case 74: /* expr: expr MOD expr  */
#line 353 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",mod,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2128 "y.tab.c"
    break;

  case 75: /* expr: expr LT expr  */
#line 354 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",lt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2134 "y.tab.c"
    break;

  case 76: /* expr: expr GT expr  */
#line 355 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",gt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2140 "y.tab.c"
    break;

  case 77: /* expr: expr GE expr  */
#line 356 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",ge,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2146 "y.tab.c"
    break;

  case 78: /* expr: expr LE expr  */
#line 357 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",le,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2152 "y.tab.c"
    break;

  case 79: /* expr: expr NE expr  */
#line 358 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",ne,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2158 "y.tab.c"
    break;

  case 80: /* expr: expr EQ expr  */
#line 359 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",eq,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2164 "y.tab.c"
    break;

  case 81: /* expr: expr AND expr  */
#line 360 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",andnd,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2170 "y.tab.c"
    break;

  case 82: /* expr: '(' expr ')'  */
#line 361 "exptree.y"
                                {(yyval.no) = (yyvsp[-1].no);}
#line 2176 "y.tab.c"
    break;

  case 83: /* expr: NUM  */
#line 362 "exptree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2182 "y.tab.c"
    break;

  case 84: /* expr: ID  */
#line 363 "exptree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2188 "y.tab.c"
    break;

  case 85: /* expr: ID '[' expr ']'  */
#line 364 "exptree.y"
                                {if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-3].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type,"",arrval,(yyvsp[-3].no),(yyvsp[-1].no));
	 			}
#line 2201 "y.tab.c"
    break;

  case 86: /* expr: ID '(' ')'  */
#line 372 "exptree.y"
                                {
	 			 struct Gsymbol* t=lookup((yyvsp[-2].no)->varname);
	 			 if(lookup((yyvsp[-2].no)->varname)==NULL){
	 				printf("3Funcn %s is undeclared\n",(yyvsp[-2].no)->varname);
	 				exit(1);
	 			 }
	 			 if(t->paramlist!=NULL){
	 			 	printf("No arguments provided to funcn %s\n",t->name);
	 			 	exit(1);
	 			 }
	 			 (yyval.no)=createTree(-1,t->type,"",fncall,(yyvsp[-2].no),NULL);
	 			 }
#line 2218 "y.tab.c"
    break;

  case 87: /* expr: ID '(' Arglist ')'  */
#line 384 "exptree.y"
                                {
	 			if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("4Funcn %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-3].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type,"",fncall,(yyvsp[-3].no),(yyvsp[-1].no));
	 			 }
#line 2232 "y.tab.c"
    break;

  case 88: /* expr: MUL ID  */
#line 393 "exptree.y"
                        {if((yyvsp[0].no)->type==intptrtype){
	 			(yyval.no)=createTree(-1,inttype,"",ptrval,(yyvsp[0].no),NULL);
	 		}else if((yyvsp[0].no)->type==strptrtype){
	 			(yyval.no)=createTree(-1,strtype,"",ptrval,(yyvsp[0].no),NULL);
	 		}else{
	 			(yyval.no)=createTree(-1,inttype,"",ptrval,(yyvsp[0].no),NULL);
	 		}
	 		}
#line 2245 "y.tab.c"
    break;

  case 89: /* expr: MUL '(' expr ')'  */
#line 401 "exptree.y"
                                {if((yyvsp[-1].no)->type==intptrtype){
	 			(yyval.no)=createTree(-1,inttype,"",ptrval,(yyvsp[-1].no),NULL);
	 		}else if((yyvsp[-1].no)->type==strptrtype){
	 			(yyval.no)=createTree(-1,strtype,"",ptrval,(yyvsp[-1].no),NULL);
	 		}else{
	 			(yyval.no)=createTree(-1,inttype,"",ptrval,(yyvsp[-1].no),NULL);
	 		}	
	 		 }
#line 2258 "y.tab.c"
    break;

  case 90: /* expr: ADDR ID  */
#line 409 "exptree.y"
                        {(yyval.no)=createTree(-1,inttype,"",addr_id,(yyvsp[0].no),NULL);
	 		}
#line 2265 "y.tab.c"
    break;

  case 91: /* Arglist: Arglist ',' expr  */
#line 413 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",arglst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2271 "y.tab.c"
    break;

  case 92: /* Arglist: expr  */
#line 414 "exptree.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 2277 "y.tab.c"
    break;


#line 2281 "y.tab.c"

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

#line 417 "exptree.y"


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
