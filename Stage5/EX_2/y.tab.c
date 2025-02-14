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
    BRKP = 267,                    /* BRKP  */
    PLUS = 268,                    /* PLUS  */
    MINUS = 269,                   /* MINUS  */
    MUL = 270,                     /* MUL  */
    DIV = 271,                     /* DIV  */
    END = 272,                     /* END  */
    BEGN = 273,                    /* BEGN  */
    LT = 274,                      /* LT  */
    GT = 275,                      /* GT  */
    LE = 276,                      /* LE  */
    GE = 277,                      /* GE  */
    NE = 278,                      /* NE  */
    EQ = 279,                      /* EQ  */
    IF = 280,                      /* IF  */
    THEN = 281,                    /* THEN  */
    ELSE = 282,                    /* ELSE  */
    ENDIF = 283,                   /* ENDIF  */
    WHILE = 284,                   /* WHILE  */
    DO = 285,                      /* DO  */
    ENDWHILE = 286,                /* ENDWHILE  */
    DECL = 287,                    /* DECL  */
    ENDDECL = 288,                 /* ENDDECL  */
    REPEAT = 289,                  /* REPEAT  */
    UNTIL = 290,                   /* UNTIL  */
    MAIN = 291,                    /* MAIN  */
    RETURN = 292,                  /* RETURN  */
    AND = 293,                     /* AND  */
    DOT = 294,                     /* DOT  */
    TUPLE = 295,                   /* TUPLE  */
    MOD = 296,                     /* MOD  */
    ADDR = 297                     /* ADDR  */
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
#define BRKP 267
#define PLUS 268
#define MINUS 269
#define MUL 270
#define DIV 271
#define END 272
#define BEGN 273
#define LT 274
#define GT 275
#define LE 276
#define GE 277
#define NE 278
#define EQ 279
#define IF 280
#define THEN 281
#define ELSE 282
#define ENDIF 283
#define WHILE 284
#define DO 285
#define ENDWHILE 286
#define DECL 287
#define ENDDECL 288
#define REPEAT 289
#define UNTIL 290
#define MAIN 291
#define RETURN 292
#define AND 293
#define DOT 294
#define TUPLE 295
#define MOD 296
#define ADDR 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "exptree.y"

	struct tnode *no;
	

#line 226 "y.tab.c"

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
  YYSYMBOL_BRKP = 12,                      /* BRKP  */
  YYSYMBOL_PLUS = 13,                      /* PLUS  */
  YYSYMBOL_MINUS = 14,                     /* MINUS  */
  YYSYMBOL_MUL = 15,                       /* MUL  */
  YYSYMBOL_DIV = 16,                       /* DIV  */
  YYSYMBOL_END = 17,                       /* END  */
  YYSYMBOL_BEGN = 18,                      /* BEGN  */
  YYSYMBOL_LT = 19,                        /* LT  */
  YYSYMBOL_GT = 20,                        /* GT  */
  YYSYMBOL_LE = 21,                        /* LE  */
  YYSYMBOL_GE = 22,                        /* GE  */
  YYSYMBOL_NE = 23,                        /* NE  */
  YYSYMBOL_EQ = 24,                        /* EQ  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_THEN = 26,                      /* THEN  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_ENDIF = 28,                     /* ENDIF  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_DO = 30,                        /* DO  */
  YYSYMBOL_ENDWHILE = 31,                  /* ENDWHILE  */
  YYSYMBOL_DECL = 32,                      /* DECL  */
  YYSYMBOL_ENDDECL = 33,                   /* ENDDECL  */
  YYSYMBOL_REPEAT = 34,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 35,                     /* UNTIL  */
  YYSYMBOL_MAIN = 36,                      /* MAIN  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_AND = 38,                       /* AND  */
  YYSYMBOL_DOT = 39,                       /* DOT  */
  YYSYMBOL_TUPLE = 40,                     /* TUPLE  */
  YYSYMBOL_MOD = 41,                       /* MOD  */
  YYSYMBOL_ADDR = 42,                      /* ADDR  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '['  */
  YYSYMBOL_48_ = 48,                       /* ']'  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* '='  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_program = 53,                   /* program  */
  YYSYMBOL_Gdeclblock = 54,                /* Gdeclblock  */
  YYSYMBOL_Gdecllist = 55,                 /* Gdecllist  */
  YYSYMBOL_Gdecl = 56,                     /* Gdecl  */
  YYSYMBOL_tup_var_list = 57,              /* tup_var_list  */
  YYSYMBOL_Gidlist = 58,                   /* Gidlist  */
  YYSYMBOL_Gid = 59,                       /* Gid  */
  YYSYMBOL_Fdefblock = 60,                 /* Fdefblock  */
  YYSYMBOL_Fdef = 61,                      /* Fdef  */
  YYSYMBOL_Paramlist = 62,                 /* Paramlist  */
  YYSYMBOL_Param = 63,                     /* Param  */
  YYSYMBOL_type = 64,                      /* type  */
  YYSYMBOL_Ldeclblock = 65,                /* Ldeclblock  */
  YYSYMBOL_Ldecllist = 66,                 /* Ldecllist  */
  YYSYMBOL_Ldecl = 67,                     /* Ldecl  */
  YYSYMBOL_Idlist = 68,                    /* Idlist  */
  YYSYMBOL_Mainblock = 69,                 /* Mainblock  */
  YYSYMBOL_body = 70,                      /* body  */
  YYSYMBOL_slist = 71,                     /* slist  */
  YYSYMBOL_ifstmt = 72,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 73,                 /* whilestmt  */
  YYSYMBOL_repeatstmt = 74,                /* repeatstmt  */
  YYSYMBOL_dowhilestmt = 75,               /* dowhilestmt  */
  YYSYMBOL_stmt = 76,                      /* stmt  */
  YYSYMBOL_retstmt = 77,                   /* retstmt  */
  YYSYMBOL_inputstmt = 78,                 /* inputstmt  */
  YYSYMBOL_outputstmt = 79,                /* outputstmt  */
  YYSYMBOL_assgstmt = 80,                  /* assgstmt  */
  YYSYMBOL_expr = 81,                      /* expr  */
  YYSYMBOL_Arglist = 82                    /* Arglist  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   758

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      44,    45,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,    51,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    60,    89,    92,    95,   100,   101,   104,
     105,   109,   110,   113,   114,   116,   117,   118,   119,   120,
     121,   122,   127,   128,   131,   149,   160,   186,   204,   205,
     208,   209,   220,   221,   224,   225,   228,   229,   232,   233,
     237,   238,   239,   240,   243,   266,   269,   270,   273,   274,
     279,   282,   284,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   299,   304,   306,   316,   317,   320,
     323,   325,   336,   348,   354,   357,   360,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   389,   401,   410,   418,   426,   428,   431,
     432
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
  "WRITE", "BREAK", "CONTINUE", "INT", "STR", "STRING", "BRKP", "PLUS",
  "MINUS", "MUL", "DIV", "END", "BEGN", "LT", "GT", "LE", "GE", "NE", "EQ",
  "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "DECL",
  "ENDDECL", "REPEAT", "UNTIL", "MAIN", "RETURN", "AND", "DOT", "TUPLE",
  "MOD", "ADDR", "';'", "'('", "')'", "','", "'['", "']'", "'{'", "'}'",
  "'='", "$accept", "program", "Gdeclblock", "Gdecllist", "Gdecl",
  "tup_var_list", "Gidlist", "Gid", "Fdefblock", "Fdef", "Paramlist",
  "Param", "type", "Ldeclblock", "Ldecllist", "Ldecl", "Idlist",
  "Mainblock", "body", "slist", "ifstmt", "whilestmt", "repeatstmt",
  "dowhilestmt", "stmt", "retstmt", "inputstmt", "outputstmt", "assgstmt",
  "expr", "Arglist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-102)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   -11,    26,    33,    53,  -102,    11,  -102,  -102,  -102,
      64,   144,  -102,    30,  -102,   -11,    53,  -102,    43,  -102,
      39,    55,  -102,  -102,   -28,   103,    -3,  -102,  -102,  -102,
      69,   114,    79,   142,     1,   138,    99,  -102,    30,     3,
     118,   155,   123,  -102,    81,  -102,   136,   135,    44,  -102,
     152,   149,    47,   146,   195,   220,   142,  -102,   225,  -102,
    -102,  -102,   182,   155,   189,   194,   185,  -102,   229,    93,
     181,  -102,   400,   201,  -102,    86,  -102,  -102,  -102,   195,
     155,   155,   210,   217,  -102,   258,   150,  -102,  -102,   233,
     221,   222,   236,   238,   240,   119,   247,   249,   400,   400,
     119,   282,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,   288,   245,   195,   195,   155,   142,  -102,
    -102,   101,   294,   119,    91,   296,   100,  -102,  -102,  -102,
    -102,   141,     0,   297,   119,   151,   119,   119,   416,   298,
     588,  -102,  -102,  -102,  -102,   259,   264,   195,   190,  -102,
     304,   266,   184,   272,   619,    67,   273,   441,   316,    46,
     119,  -102,   119,  -102,   453,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   106,   486,   498,
     277,   278,  -102,  -102,  -102,   274,   220,  -102,   116,   275,
    -102,  -102,   286,   119,   287,   291,  -102,  -102,   705,   212,
     196,   531,  -102,    85,    85,  -102,  -102,   255,   255,   255,
     255,   255,   255,   717,  -102,   299,   631,   305,   295,   119,
     119,  -102,   180,   300,   662,   134,  -102,   226,  -102,  -102,
    -102,   119,  -102,  -102,  -102,  -102,   400,   400,   543,   576,
    -102,  -102,  -102,   302,   674,   301,   705,   248,   332,   -21,
     306,  -102,  -102,   307,   400,   308,   309,  -102,  -102,  -102,
     366,  -102,  -102,   310,  -102
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     0,    32,    33,     6,
       0,     0,     8,     0,     1,    32,     0,    23,     0,     3,
       0,     0,     5,     7,    18,     0,     0,    14,    22,     2,
       0,     0,     0,     0,     0,     0,    19,     9,     0,     0,
       0,     0,     0,    29,     0,    17,     0,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,    30,     0,    16,
      15,    20,     0,     0,     0,     0,     0,    35,     0,     0,
       0,    37,     0,     0,    11,     0,    28,    31,    21,     0,
       0,     0,     0,     0,    41,     0,     0,    34,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    60,    61,    47,    62,    53,    54,
      55,    44,    10,     0,     0,     0,     0,     0,     0,    42,
      38,     0,     0,     0,     0,     0,     0,    58,    59,    63,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,    46,    12,    25,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    24,    27,     0,     0,    43,     0,     0,
      70,    69,     0,     0,     0,     0,    98,    93,   100,     0,
       0,     0,    89,    77,    78,    79,    80,    82,    83,    85,
      84,    86,    87,    88,    81,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,    65,     0,    68,    67,
      94,     0,    92,    96,    74,    73,     0,     0,     0,     0,
      39,    76,    75,     0,     0,     0,    99,     0,     0,     0,
       0,    72,    71,     0,     0,     0,     0,    52,    51,    66,
       0,    49,    50,     0,    48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,  -102,   330,   162,  -102,   317,  -102,   338,
     -31,   303,    16,   -57,  -102,   290,  -102,    10,   -64,   -97,
    -102,  -102,  -102,  -102,  -101,  -102,  -102,  -102,  -102,   -95,
    -102
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    11,    12,    75,    26,    27,    16,    17,
      42,    43,    44,    54,    70,    71,    86,     5,    73,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   135,
     199
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     142,   138,   139,    46,   161,   140,    79,     1,    51,   237,
       7,     8,     7,     8,    19,   114,    34,    62,    13,    35,
      18,    66,   257,   115,   116,     6,    29,    13,   152,   154,
       2,   157,    18,    14,    24,     7,     8,   142,   142,   164,
      37,   178,   179,    38,   162,    25,    45,    30,    50,   130,
     131,   145,   146,     7,     8,    20,     7,     8,    31,     9,
     147,   132,    15,     8,   198,   200,    10,   201,    21,    69,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   216,   185,    32,    57,    69,   148,   133,    61,
     134,   197,    65,   224,   130,   131,    58,    84,   227,    33,
     167,   168,   153,   130,   131,   149,   132,    36,    85,   130,
     131,   156,   192,    39,   193,   132,   150,   215,    40,   130,
     131,   132,   130,   131,   238,   239,   176,   223,    41,   112,
     244,   132,   113,   133,   132,   134,   246,   130,   131,   247,
     248,    47,   133,    48,   134,   243,   142,   142,   133,   132,
     134,     7,     8,     7,     8,     7,     8,   260,   133,   142,
     134,   133,    52,   134,   165,   166,   167,   168,    55,    56,
     169,   170,   171,   172,   173,   174,   133,    22,   134,    67,
     158,    59,    56,    60,    10,   159,    68,    53,   160,   175,
       7,     8,   176,   120,    64,    56,   121,   165,   166,   167,
     168,    63,   177,   169,   170,   171,   172,   173,   174,   165,
     166,   167,   168,    72,    87,   169,   170,   171,   172,   173,
     174,    68,   175,   240,    74,   176,   113,    78,    56,    77,
      82,    56,   189,    83,   175,   186,    56,   176,    80,   165,
     166,   167,   168,    81,   232,   169,   170,   171,   172,   173,
     174,   111,    89,    90,    91,    92,    93,   230,   231,   117,
      94,   118,   119,    95,   175,   125,   126,   176,   165,   166,
     167,   168,   122,    96,   245,   254,   255,    97,    98,   127,
     123,   128,    99,   129,   124,   100,    89,    90,    91,    92,
      93,   136,   143,   137,    94,   144,   176,    95,   151,   141,
     155,   163,    89,    90,    91,    92,    93,    96,   187,   183,
      94,    97,    98,    95,   184,   190,    99,   188,   194,   100,
     196,   219,   220,    96,   221,   237,   225,    97,    98,   226,
     228,   236,    99,   181,   229,   100,    89,    90,    91,    92,
      93,    23,   234,   241,    94,   251,   253,    95,   222,   258,
     259,   261,   262,   264,    28,    49,     0,    96,     0,    76,
      88,    97,    98,   256,     0,     0,    99,     0,     0,   100,
      89,    90,    91,    92,    93,     0,     0,     0,    94,     0,
       0,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,     0,   263,    97,    98,     0,     0,     0,
      99,     0,     0,   100,    89,    90,    91,    92,    93,     0,
       0,     0,    94,     0,     0,    95,     0,     0,     0,     0,
      89,    90,    91,    92,    93,    96,     0,     0,    94,    97,
      98,    95,     0,     0,    99,     0,     0,   100,     0,     0,
       0,    96,     0,     0,     0,   180,    98,     0,     0,     0,
      99,     0,     0,   100,   165,   166,   167,   168,     0,     0,
     169,   170,   171,   172,   173,   174,   165,   166,   167,   168,
       0,     0,   169,   170,   171,   172,   173,   174,     0,   175,
       0,     0,   176,     0,     0,     0,   195,     0,     0,     0,
       0,   175,     0,     0,   176,     0,     0,     0,   202,   165,
     166,   167,   168,     0,     0,   169,   170,   171,   172,   173,
     174,   165,   166,   167,   168,     0,     0,   169,   170,   171,
     172,   173,   174,     0,   175,     0,     0,   176,     0,     0,
       0,   217,     0,     0,     0,     0,   175,     0,     0,   176,
       0,     0,     0,   218,   165,   166,   167,   168,     0,     0,
     169,   170,   171,   172,   173,   174,   165,   166,   167,   168,
       0,     0,   169,   170,   171,   172,   173,   174,     0,   175,
       0,     0,   176,     0,     0,     0,   233,     0,     0,     0,
       0,   175,     0,     0,   176,     0,     0,     0,   249,   165,
     166,   167,   168,     0,     0,   169,   170,   171,   172,   173,
     174,   165,   166,   167,   168,     0,     0,   169,   170,   171,
     172,   173,   174,     0,   175,     0,     0,   176,     0,     0,
       0,   250,     0,     0,     0,     0,   175,     0,     0,   176,
       0,   182,   165,   166,   167,   168,     0,     0,   169,   170,
     171,   172,   173,   174,   165,   166,   167,   168,     0,     0,
     169,   170,   171,   172,   173,   174,     0,   175,     0,     0,
     176,     0,   191,     0,     0,     0,     0,     0,     0,   175,
       0,     0,   176,     0,   235,   165,   166,   167,   168,     0,
       0,   169,   170,   171,   172,   173,   174,   165,   166,   167,
     168,     0,     0,   169,   170,   171,   172,   173,   174,     0,
     175,     0,     0,   176,     0,   242,     0,     0,     0,     0,
       0,     0,   175,     0,     0,   176,     0,   252,   165,   166,
     167,   168,     0,     0,   169,   170,   171,   172,   173,   174,
     165,   166,   167,   168,     0,     0,   169,   170,   171,   172,
     173,   174,     0,   175,     0,     0,   176,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176
};

static const yytype_int16 yycheck[] =
{
     101,    98,    99,    34,     4,   100,    63,     9,    39,    30,
       9,    10,     9,    10,     4,    79,    44,    48,     2,    47,
       4,    52,    43,    80,    81,    36,    16,    11,   123,   124,
      32,   126,    16,     0,     4,     9,    10,   138,   139,   134,
      43,   136,   137,    46,    44,    15,    45,     4,    45,     3,
       4,   115,   116,     9,    10,    44,     9,    10,    15,    33,
     117,    15,     9,    10,   159,   160,    40,   162,     4,    53,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   147,    45,     4,    70,   118,    42,    45,
      44,    45,    45,   188,     3,     4,    15,     4,   193,    44,
      15,    16,    11,     3,     4,     4,    15,     4,    15,     3,
       4,    11,    45,    44,    47,    15,    15,    11,     4,     3,
       4,    15,     3,     4,   219,   220,    41,    11,    49,    43,
     225,    15,    46,    42,    15,    44,   231,     3,     4,   236,
     237,     3,    42,    44,    44,    11,   247,   248,    42,    15,
      44,     9,    10,     9,    10,     9,    10,   254,    42,   260,
      44,    42,    44,    44,    13,    14,    15,    16,    45,    46,
      19,    20,    21,    22,    23,    24,    42,    33,    44,    33,
      39,    45,    46,    48,    40,    44,    40,    32,    47,    38,
       9,    10,    41,    43,    45,    46,    46,    13,    14,    15,
      16,    49,    51,    19,    20,    21,    22,    23,    24,    13,
      14,    15,    16,    18,    33,    19,    20,    21,    22,    23,
      24,    40,    38,    43,     4,    41,    46,    45,    46,     4,
      45,    46,    48,     4,    38,    45,    46,    41,    49,    13,
      14,    15,    16,    49,    48,    19,    20,    21,    22,    23,
      24,    50,     4,     5,     6,     7,     8,    45,    46,    49,
      12,    44,     4,    15,    38,    44,    44,    41,    13,    14,
      15,    16,    39,    25,    48,    27,    28,    29,    30,    43,
      47,    43,    34,    43,    51,    37,     4,     5,     6,     7,
       8,    44,     4,    44,    12,    50,    41,    15,     4,    17,
       4,     4,     4,     5,     6,     7,     8,    25,     4,    50,
      12,    29,    30,    15,    50,    43,    34,    51,    45,    37,
       4,    44,    44,    25,    50,    30,    51,    29,    30,    43,
      43,    26,    34,    35,    43,    37,     4,     5,     6,     7,
       8,    11,    43,    43,    12,    43,    45,    15,   186,    43,
      43,    43,    43,    43,    16,    38,    -1,    25,    -1,    56,
      70,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    37,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    -1,    37,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,    25,    -1,    -1,    12,    29,
      30,    15,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      34,    -1,    -1,    37,    13,    14,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    13,    14,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    45,    13,
      14,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    13,    14,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    45,    13,    14,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    13,    14,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    45,    13,
      14,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    13,    14,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    38,    -1,    -1,    41,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    38,    -1,    -1,    41,
      -1,    43,    13,    14,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    13,    14,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    38,    -1,    -1,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    41,    -1,    43,    13,    14,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    13,    14,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      38,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    41,    -1,    43,    13,    14,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      13,    14,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    32,    53,    54,    69,    36,     9,    10,    33,
      40,    55,    56,    64,     0,     9,    60,    61,    64,    69,
      44,     4,    33,    56,     4,    15,    58,    59,    61,    69,
       4,    15,    45,    44,    44,    47,     4,    43,    46,    44,
       4,    49,    62,    63,    64,    45,    62,     3,    44,    59,
      45,    62,    44,    32,    65,    45,    46,     4,    15,    45,
      48,    45,    62,    49,    45,    45,    62,    33,    40,    64,
      66,    67,    18,    70,     4,    57,    63,     4,    45,    65,
      49,    49,    45,     4,     4,    15,    68,    33,    67,     4,
       5,     6,     7,     8,    12,    15,    25,    29,    30,    34,
      37,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    50,    43,    46,    70,    65,    65,    49,    44,     4,
      43,    46,    39,    47,    51,    44,    44,    43,    43,    43,
       3,     4,    15,    42,    44,    81,    44,    44,    71,    71,
      81,    17,    76,     4,    50,    70,    70,    65,    62,     4,
      15,     4,    81,    11,    81,     4,    11,    81,    39,    44,
      47,     4,    44,     4,    81,    13,    14,    15,    16,    19,
      20,    21,    22,    23,    24,    38,    41,    51,    81,    81,
      29,    35,    43,    50,    50,    70,    45,     4,    51,    48,
      43,    43,    45,    47,    45,    45,     4,    45,    81,    82,
      81,    81,    45,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    11,    81,    45,    45,    44,
      44,    50,    57,    11,    81,    51,    43,    81,    43,    43,
      45,    46,    48,    45,    43,    43,    26,    30,    81,    81,
      43,    43,    43,    11,    81,    48,    81,    71,    71,    45,
      45,    43,    43,    45,    27,    28,    31,    43,    43,    43,
      71,    43,    43,    28,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    61,    61,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    68,    69,    70,    71,    71,    72,    72,
      73,    74,    75,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     2,     1,     3,
       7,     1,     3,     3,     1,     4,     4,     3,     1,     2,
       4,     5,     2,     1,     9,     8,    10,     9,     3,     1,
       2,     3,     1,     1,     3,     2,     2,     1,     3,     7,
       3,     1,     2,     4,     8,     3,     2,     1,    10,     8,
       8,     7,     7,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     2,     3,     5,     8,     5,     5,     4,
       4,     7,     7,     5,     5,     6,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     4,     3,     4,     2,     4,     2,     3,     3,
       1
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
#line 1580 "y.tab.c"
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
#line 1613 "y.tab.c"
    break;

  case 4: /* program: Mainblock  */
#line 89 "exptree.y"
                                                {(yyval.no)=(yyvsp[0].no);}
#line 1619 "y.tab.c"
    break;

  case 5: /* Gdeclblock: DECL Gdecllist ENDDECL  */
#line 92 "exptree.y"
                                        {(yyval.no)=createTree(-1,notype,"",gdeclblk,(yyvsp[-1].no),NULL);
					 before_code();
					}
#line 1627 "y.tab.c"
    break;

  case 6: /* Gdeclblock: DECL ENDDECL  */
#line 95 "exptree.y"
                                {(yyval.no)=NULL;
	    			before_code();
	    			}
#line 1635 "y.tab.c"
    break;

  case 7: /* Gdecllist: Gdecllist Gdecl  */
#line 100 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",gdeclst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1641 "y.tab.c"
    break;

  case 8: /* Gdecllist: Gdecl  */
#line 101 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1647 "y.tab.c"
    break;

  case 9: /* Gdecl: type Gidlist ';'  */
#line 104 "exptree.y"
                                {assign_type((yyvsp[-1].no),(yyvsp[-2].no)->type);(yyval.no)=createTree(-1,notype,"",gdecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1653 "y.tab.c"
    break;

  case 10: /* Gdecl: TUPLE ID '(' Paramlist ')' tup_var_list ';'  */
#line 105 "exptree.y"
                                                      {(yyval.no)=createTree(-1,notype,"",tupdecl,(yyvsp[-5].no),createTree(-1,notype,"",cnn,(yyvsp[-3].no),(yyvsp[-1].no)));
						      }
#line 1660 "y.tab.c"
    break;

  case 11: /* tup_var_list: ID  */
#line 109 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1666 "y.tab.c"
    break;

  case 12: /* tup_var_list: tup_var_list ',' ID  */
#line 110 "exptree.y"
                                  {(yyval.no)=createTree(-1,tuptype,"",tuplst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1672 "y.tab.c"
    break;

  case 13: /* Gidlist: Gidlist ',' Gid  */
#line 113 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",gidlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1678 "y.tab.c"
    break;

  case 14: /* Gidlist: Gid  */
#line 114 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1684 "y.tab.c"
    break;

  case 15: /* Gid: ID '[' NUM ']'  */
#line 116 "exptree.y"
                        {(yyval.no)=createTree(-1,notype,"",arrdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1690 "y.tab.c"
    break;

  case 16: /* Gid: ID '(' Paramlist ')'  */
#line 117 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",funcdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1696 "y.tab.c"
    break;

  case 17: /* Gid: ID '(' ')'  */
#line 118 "exptree.y"
                        {(yyval.no)=createTree(-1,notype,"",funcdecl,(yyvsp[-2].no),NULL);}
#line 1702 "y.tab.c"
    break;

  case 18: /* Gid: ID  */
#line 119 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1708 "y.tab.c"
    break;

  case 19: /* Gid: MUL ID  */
#line 120 "exptree.y"
                {(yyval.no)=createTree(-1,notype,"",ptrdecl,(yyvsp[0].no),NULL);}
#line 1714 "y.tab.c"
    break;

  case 20: /* Gid: MUL ID '(' ')'  */
#line 121 "exptree.y"
                      {(yyval.no)=createTree(-1,notype,"",ptrfuncdecl,(yyvsp[-2].no),NULL);}
#line 1720 "y.tab.c"
    break;

  case 21: /* Gid: MUL ID '(' Paramlist ')'  */
#line 122 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",ptrfuncdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1726 "y.tab.c"
    break;

  case 22: /* Fdefblock: Fdefblock Fdef  */
#line 127 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",fdefblk,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1732 "y.tab.c"
    break;

  case 23: /* Fdefblock: Fdef  */
#line 128 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1738 "y.tab.c"
    break;

  case 24: /* Fdef: type ID '(' Paramlist ')' '{' Ldeclblock body '}'  */
#line 131 "exptree.y"
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
#line 1758 "y.tab.c"
    break;

  case 25: /* Fdef: type ID '(' ')' '{' Ldeclblock body '}'  */
#line 149 "exptree.y"
                                                                {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 								printf("2Funcn %s is undeclared\n",(yyvsp[-6].no)->varname);
	 								exit(1);
	 			 				}
	 			 				
	 			 				(yyval.no)=createTree(-1,(yyvsp[-7].no)->type,"",fndef,createTree(-1,notype,"",cnn,(yyvsp[-7].no),(yyvsp[-6].no)),createTree(-1,notype,"",cnn,NULL,createTree(-1,notype,"",cnn,(yyvsp[-2].no),(yyvsp[-1].no))));
	 			 				check_decl((yyvsp[-7].no)->type,(yyvsp[-1].no));
	 			 				
	 			 				code_gen((yyval.no));
	 			 				destroy_lsymbtable();
	 			 				}
#line 1774 "y.tab.c"
    break;

  case 26: /* Fdef: type MUL ID '(' Paramlist ')' '{' Ldeclblock body '}'  */
#line 160 "exptree.y"
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
#line 1802 "y.tab.c"
    break;

  case 27: /* Fdef: type MUL ID '(' ')' '{' Ldeclblock body '}'  */
#line 186 "exptree.y"
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
#line 1823 "y.tab.c"
    break;

  case 28: /* Paramlist: Paramlist ',' Param  */
#line 204 "exptree.y"
                                        {(yyval.no)=createTree(-1,notype,"",paramlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1829 "y.tab.c"
    break;

  case 29: /* Paramlist: Param  */
#line 205 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1835 "y.tab.c"
    break;

  case 30: /* Param: type ID  */
#line 208 "exptree.y"
                {(yyval.no)=createTree(-1,notype,"",param,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1841 "y.tab.c"
    break;

  case 31: /* Param: type MUL ID  */
#line 209 "exptree.y"
                      {int tp2=(yyvsp[-2].no)->type;
		       struct tnode* temp=NULL;
		       if(tp2==inttype){
		           temp=createTree(-1,intptrtype,"",ptrdecl,(yyvsp[0].no),NULL);
		       }else{
		           temp=createTree(-1,strptrtype,"",ptrdecl,(yyvsp[0].no),NULL);
		       }
		       (yyval.no)=createTree(-1,notype,"",param,(yyvsp[-2].no),temp);
		       }
#line 1855 "y.tab.c"
    break;

  case 32: /* type: INT  */
#line 220 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1861 "y.tab.c"
    break;

  case 33: /* type: STR  */
#line 221 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1867 "y.tab.c"
    break;

  case 34: /* Ldeclblock: DECL Ldecllist ENDDECL  */
#line 224 "exptree.y"
                                    {(yyval.no)=createTree(-1,notype,"",ldeclblk,(yyvsp[-1].no),NULL);}
#line 1873 "y.tab.c"
    break;

  case 35: /* Ldeclblock: DECL ENDDECL  */
#line 225 "exptree.y"
                                {(yyval.no)=NULL;}
#line 1879 "y.tab.c"
    break;

  case 36: /* Ldecllist: Ldecllist Ldecl  */
#line 228 "exptree.y"
                            {(yyval.no)=createTree(-1,notype,"",ldecllst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1885 "y.tab.c"
    break;

  case 37: /* Ldecllist: Ldecl  */
#line 229 "exptree.y"
                    {(yyval.no)=(yyvsp[0].no);}
#line 1891 "y.tab.c"
    break;

  case 38: /* Ldecl: type Idlist ';'  */
#line 232 "exptree.y"
                       {(yyval.no)=createTree(-1,notype,"",ldecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1897 "y.tab.c"
    break;

  case 39: /* Ldecl: TUPLE ID '(' Paramlist ')' tup_var_list ';'  */
#line 233 "exptree.y"
                                                      {(yyval.no)=createTree(-1,notype,"",tupdecl_ldecl,(yyvsp[-5].no),createTree(-1,notype,"",cnn,(yyvsp[-3].no),(yyvsp[-1].no)));
						      }
#line 1904 "y.tab.c"
    break;

  case 40: /* Idlist: Idlist ',' ID  */
#line 237 "exptree.y"
                       {(yyval.no)=createTree(-1,notype,"",idlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1910 "y.tab.c"
    break;

  case 41: /* Idlist: ID  */
#line 238 "exptree.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1916 "y.tab.c"
    break;

  case 42: /* Idlist: MUL ID  */
#line 239 "exptree.y"
                 {(yyval.no)=createTree(-1,notype,"",ptrdecl,(yyvsp[0].no),NULL);}
#line 1922 "y.tab.c"
    break;

  case 43: /* Idlist: Idlist ',' MUL ID  */
#line 240 "exptree.y"
                            {(yyval.no)=createTree(-1,notype,"",idlst,(yyvsp[-3].no),createTree(-1,notype,"",ptrdecl,(yyvsp[0].no),NULL));}
#line 1928 "y.tab.c"
    break;

  case 44: /* Mainblock: INT MAIN '(' ')' '{' Ldeclblock body '}'  */
#line 243 "exptree.y"
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
#line 1954 "y.tab.c"
    break;

  case 45: /* body: BEGN slist END  */
#line 266 "exptree.y"
                      {(yyval.no)=(yyvsp[-1].no);}
#line 1960 "y.tab.c"
    break;

  case 46: /* slist: slist stmt  */
#line 269 "exptree.y"
                        {(yyval.no)=createTree(-1,notype,"",cnn,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1966 "y.tab.c"
    break;

  case 47: /* slist: stmt  */
#line 270 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1972 "y.tab.c"
    break;

  case 48: /* ifstmt: IF '(' expr ')' THEN slist ELSE slist ENDIF ';'  */
#line 273 "exptree.y"
                                                                {struct tnode* t=createTree(-1,notype,"",el,(yyvsp[-4].no),(yyvsp[-2].no));(yyval.no)=createTree(-1,notype,"",ifel,(yyvsp[-7].no),t);}
#line 1978 "y.tab.c"
    break;

  case 49: /* ifstmt: IF '(' expr ')' THEN slist ENDIF ';'  */
#line 274 "exptree.y"
                                                { struct tnode* t=createTree(-1,notype,"",el,(yyvsp[-2].no),NULL);
						  
					          (yyval.no)=createTree(-1,notype,"",ifel,(yyvsp[-5].no),t);}
#line 1986 "y.tab.c"
    break;

  case 50: /* whilestmt: WHILE '(' expr ')' DO slist ENDWHILE ';'  */
#line 279 "exptree.y"
                                                        {(yyval.no)=createTree(-1,notype,"",whl,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1992 "y.tab.c"
    break;

  case 51: /* repeatstmt: REPEAT slist UNTIL '(' expr ')' ';'  */
#line 282 "exptree.y"
                                                  {(yyval.no)=createTree(-1,notype,"",rpt,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1998 "y.tab.c"
    break;

  case 52: /* dowhilestmt: DO slist WHILE '(' expr ')' ';'  */
#line 284 "exptree.y"
                                                {(yyval.no)=createTree(-1,notype,"",dow,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 2004 "y.tab.c"
    break;

  case 53: /* stmt: inputstmt  */
#line 286 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2010 "y.tab.c"
    break;

  case 54: /* stmt: outputstmt  */
#line 287 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2016 "y.tab.c"
    break;

  case 55: /* stmt: assgstmt  */
#line 288 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2022 "y.tab.c"
    break;

  case 56: /* stmt: ifstmt  */
#line 289 "exptree.y"
                        {(yyval.no)= (yyvsp[0].no);}
#line 2028 "y.tab.c"
    break;

  case 57: /* stmt: whilestmt  */
#line 290 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2034 "y.tab.c"
    break;

  case 58: /* stmt: BREAK ';'  */
#line 291 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 2040 "y.tab.c"
    break;

  case 59: /* stmt: CONTINUE ';'  */
#line 292 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 2046 "y.tab.c"
    break;

  case 60: /* stmt: repeatstmt  */
#line 293 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 2052 "y.tab.c"
    break;

  case 61: /* stmt: dowhilestmt  */
#line 294 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 2058 "y.tab.c"
    break;

  case 62: /* stmt: retstmt  */
#line 295 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 2064 "y.tab.c"
    break;

  case 63: /* stmt: BRKP ';'  */
#line 296 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 2070 "y.tab.c"
    break;

  case 64: /* retstmt: RETURN expr ';'  */
#line 299 "exptree.y"
                                {
				(yyval.no)=createTree(-1,(yyvsp[-1].no)->type,"",retnd,(yyvsp[-1].no),NULL);
				}
#line 2078 "y.tab.c"
    break;

  case 65: /* inputstmt: READ '(' ID ')' ';'  */
#line 304 "exptree.y"
                                {
	 			 (yyval.no)=createTree(-1,notype,"",rd,(yyvsp[-2].no),NULL);}
#line 2085 "y.tab.c"
    break;

  case 66: /* inputstmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 306 "exptree.y"
                                             {if(lookup((yyvsp[-5].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-5].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-5].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-5].no),(yyvsp[-3].no));
	 			 	(yyval.no)=createTree(-1,notype,"",rd,temp,NULL);}
#line 2098 "y.tab.c"
    break;

  case 67: /* outputstmt: WRITE '(' expr ')' ';'  */
#line 316 "exptree.y"
                                    {(yyval.no) = createTree(-1,notype,"",wr,(yyvsp[-2].no),NULL);}
#line 2104 "y.tab.c"
    break;

  case 68: /* outputstmt: WRITE '(' STRING ')' ';'  */
#line 317 "exptree.y"
                                       {(yyval.no) = createTree(-1,notype,"",wr,(yyvsp[-2].no),NULL);}
#line 2110 "y.tab.c"
    break;

  case 69: /* assgstmt: ID '=' expr ';'  */
#line 320 "exptree.y"
                           {
	 			 
	 			 (yyval.no) = createTree(-1,notype,"",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 2118 "y.tab.c"
    break;

  case 70: /* assgstmt: ID '=' STRING ';'  */
#line 323 "exptree.y"
                              {
	 			 (yyval.no)=createTree(-1,notype,"",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 2125 "y.tab.c"
    break;

  case 71: /* assgstmt: ID '[' expr ']' '=' expr ';'  */
#line 325 "exptree.y"
                                         {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			        
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-6].no),(yyvsp[-4].no));
	 			 	(yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));
	 			 	
	  
	  				 }
#line 2141 "y.tab.c"
    break;

  case 72: /* assgstmt: ID '[' expr ']' '=' STRING ';'  */
#line 336 "exptree.y"
                                           {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type,"",arrasg,(yyvsp[-6].no),(yyvsp[-4].no));
	 			 	(yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));
	  
	  
	  
	  				   }
#line 2158 "y.tab.c"
    break;

  case 73: /* assgstmt: MUL expr '=' expr ';'  */
#line 348 "exptree.y"
                                  {
	  			  struct tnode* temp=NULL;
	  			  temp=createTree(-1,inttype,"",ptrasg,(yyvsp[-3].no),NULL);
	  			  (yyval.no)=createTree(-1,notype,"",asg2,temp,(yyvsp[-1].no));
	  
	  			  }
#line 2169 "y.tab.c"
    break;

  case 74: /* assgstmt: MUL expr '=' STRING ';'  */
#line 354 "exptree.y"
                                    {struct tnode* temp=NULL;
	  			  temp=createTree(-1,strtype,"",ptrasg,(yyvsp[-3].no),NULL);
	  			  (yyval.no)=createTree(-1,notype,"",asg2,temp,(yyvsp[-1].no));}
#line 2177 "y.tab.c"
    break;

  case 75: /* assgstmt: ID DOT ID '=' expr ';'  */
#line 357 "exptree.y"
                                   {struct tnode* temp=NULL;
	  			    temp=createTree(-1,inttype,"",tupasg,(yyvsp[-5].no),(yyvsp[-3].no));
	  			    (yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));}
#line 2185 "y.tab.c"
    break;

  case 76: /* assgstmt: ID DOT ID '=' STRING ';'  */
#line 360 "exptree.y"
                                     {struct tnode* temp=NULL;
	  			    temp=createTree(-1,strtype,"",tupasg,(yyvsp[-5].no),(yyvsp[-3].no));
	  			    (yyval.no)=createTree(-1,notype,"",asg,temp,(yyvsp[-1].no));}
#line 2193 "y.tab.c"
    break;

  case 77: /* expr: expr PLUS expr  */
#line 366 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",ps,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2199 "y.tab.c"
    break;

  case 78: /* expr: expr MINUS expr  */
#line 367 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",ms,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2205 "y.tab.c"
    break;

  case 79: /* expr: expr MUL expr  */
#line 368 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",ml,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2211 "y.tab.c"
    break;

  case 80: /* expr: expr DIV expr  */
#line 369 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",dv,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2217 "y.tab.c"
    break;

  case 81: /* expr: expr MOD expr  */
#line 370 "exptree.y"
                                {(yyval.no) = createTree(-1,inttype,"",mod,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2223 "y.tab.c"
    break;

  case 82: /* expr: expr LT expr  */
#line 371 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",lt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2229 "y.tab.c"
    break;

  case 83: /* expr: expr GT expr  */
#line 372 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",gt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2235 "y.tab.c"
    break;

  case 84: /* expr: expr GE expr  */
#line 373 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",ge,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2241 "y.tab.c"
    break;

  case 85: /* expr: expr LE expr  */
#line 374 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",le,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2247 "y.tab.c"
    break;

  case 86: /* expr: expr NE expr  */
#line 375 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",ne,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2253 "y.tab.c"
    break;

  case 87: /* expr: expr EQ expr  */
#line 376 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",eq,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2259 "y.tab.c"
    break;

  case 88: /* expr: expr AND expr  */
#line 377 "exptree.y"
                                {(yyval.no) = createTree(-1,booltype,"",andnd,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2265 "y.tab.c"
    break;

  case 89: /* expr: '(' expr ')'  */
#line 378 "exptree.y"
                                {(yyval.no) = (yyvsp[-1].no);}
#line 2271 "y.tab.c"
    break;

  case 90: /* expr: NUM  */
#line 379 "exptree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2277 "y.tab.c"
    break;

  case 91: /* expr: ID  */
#line 380 "exptree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2283 "y.tab.c"
    break;

  case 92: /* expr: ID '[' expr ']'  */
#line 381 "exptree.y"
                                {if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-3].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type,"",arrval,(yyvsp[-3].no),(yyvsp[-1].no));
	 			}
#line 2296 "y.tab.c"
    break;

  case 93: /* expr: ID '(' ')'  */
#line 389 "exptree.y"
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
#line 2313 "y.tab.c"
    break;

  case 94: /* expr: ID '(' Arglist ')'  */
#line 401 "exptree.y"
                                {
	 			if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("4Funcn %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-3].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type,"",fncall,(yyvsp[-3].no),(yyvsp[-1].no));
	 			 }
#line 2327 "y.tab.c"
    break;

  case 95: /* expr: MUL ID  */
#line 410 "exptree.y"
                        {if((yyvsp[0].no)->type==intptrtype){
	 			(yyval.no)=createTree(-1,inttype,"",ptrval,(yyvsp[0].no),NULL);
	 		}else if((yyvsp[0].no)->type==strptrtype){
	 			(yyval.no)=createTree(-1,strtype,"",ptrval,(yyvsp[0].no),NULL);
	 		}else{
	 			(yyval.no)=createTree(-1,inttype,"",ptrval,(yyvsp[0].no),NULL);
	 		}
	 		}
#line 2340 "y.tab.c"
    break;

  case 96: /* expr: MUL '(' expr ')'  */
#line 418 "exptree.y"
                                {if((yyvsp[-1].no)->type==intptrtype){
	 			(yyval.no)=createTree(-1,inttype,"",ptrval,(yyvsp[-1].no),NULL);
	 		}else if((yyvsp[-1].no)->type==strptrtype){
	 			(yyval.no)=createTree(-1,strtype,"",ptrval,(yyvsp[-1].no),NULL);
	 		}else{
	 			(yyval.no)=createTree(-1,inttype,"",ptrval,(yyvsp[-1].no),NULL);
	 		}	
	 		 }
#line 2353 "y.tab.c"
    break;

  case 97: /* expr: ADDR ID  */
#line 426 "exptree.y"
                        {(yyval.no)=createTree(-1,inttype,"",addr_id,(yyvsp[0].no),NULL);
	 		}
#line 2360 "y.tab.c"
    break;

  case 98: /* expr: ID DOT ID  */
#line 428 "exptree.y"
                        {(yyval.no)=createTree(-1,inttype,"",tupval,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2366 "y.tab.c"
    break;

  case 99: /* Arglist: Arglist ',' expr  */
#line 431 "exptree.y"
                                {(yyval.no)=createTree(-1,notype,"",arglst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2372 "y.tab.c"
    break;

  case 100: /* Arglist: expr  */
#line 432 "exptree.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 2378 "y.tab.c"
    break;


#line 2382 "y.tab.c"

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

#line 435 "exptree.y"


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
