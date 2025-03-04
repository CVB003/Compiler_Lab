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
    TYPE = 293,                    /* TYPE  */
    ENDTYPE = 294,                 /* ENDTYPE  */
    ALLOC = 295,                   /* ALLOC  */
    NULL_SPL = 296,                /* NULL_SPL  */
    FREE = 297,                    /* FREE  */
    INITIALIZE = 298,              /* INITIALIZE  */
    MOD = 299                      /* MOD  */
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
#define TYPE 293
#define ENDTYPE 294
#define ALLOC 295
#define NULL_SPL 296
#define FREE 297
#define INITIALIZE 298
#define MOD 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "exptree.y"

	struct tnode *no;
	

#line 230 "y.tab.c"

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
  YYSYMBOL_TYPE = 38,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 39,                   /* ENDTYPE  */
  YYSYMBOL_ALLOC = 40,                     /* ALLOC  */
  YYSYMBOL_NULL_SPL = 41,                  /* NULL_SPL  */
  YYSYMBOL_FREE = 42,                      /* FREE  */
  YYSYMBOL_INITIALIZE = 43,                /* INITIALIZE  */
  YYSYMBOL_MOD = 44,                       /* MOD  */
  YYSYMBOL_45_ = 45,                       /* ';'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '['  */
  YYSYMBOL_48_ = 48,                       /* ']'  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* '.'  */
  YYSYMBOL_54_ = 54,                       /* '='  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_Gdeclblock = 57,                /* Gdeclblock  */
  YYSYMBOL_Gdecllist = 58,                 /* Gdecllist  */
  YYSYMBOL_Gdecl = 59,                     /* Gdecl  */
  YYSYMBOL_Gidlist = 60,                   /* Gidlist  */
  YYSYMBOL_Gid = 61,                       /* Gid  */
  YYSYMBOL_Fdefblock = 62,                 /* Fdefblock  */
  YYSYMBOL_Fdef = 63,                      /* Fdef  */
  YYSYMBOL_Paramlist = 64,                 /* Paramlist  */
  YYSYMBOL_Param = 65,                     /* Param  */
  YYSYMBOL_type = 66,                      /* type  */
  YYSYMBOL_Ldeclblock = 67,                /* Ldeclblock  */
  YYSYMBOL_Ldecllist = 68,                 /* Ldecllist  */
  YYSYMBOL_Ldecl = 69,                     /* Ldecl  */
  YYSYMBOL_Idlist = 70,                    /* Idlist  */
  YYSYMBOL_Mainblock = 71,                 /* Mainblock  */
  YYSYMBOL_Typedefblock = 72,              /* Typedefblock  */
  YYSYMBOL_Typedeflist = 73,               /* Typedeflist  */
  YYSYMBOL_Typedef = 74,                   /* Typedef  */
  YYSYMBOL_Fielddeclist = 75,              /* Fielddeclist  */
  YYSYMBOL_Fielddecl = 76,                 /* Fielddecl  */
  YYSYMBOL_Field = 77,                     /* Field  */
  YYSYMBOL_body = 78,                      /* body  */
  YYSYMBOL_slist = 79,                     /* slist  */
  YYSYMBOL_ifstmt = 80,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 81,                 /* whilestmt  */
  YYSYMBOL_repeatstmt = 82,                /* repeatstmt  */
  YYSYMBOL_dowhilestmt = 83,               /* dowhilestmt  */
  YYSYMBOL_stmt = 84,                      /* stmt  */
  YYSYMBOL_retstmt = 85,                   /* retstmt  */
  YYSYMBOL_inputstmt = 86,                 /* inputstmt  */
  YYSYMBOL_outputstmt = 87,                /* outputstmt  */
  YYSYMBOL_assgstmt = 88,                  /* assgstmt  */
  YYSYMBOL_expr = 89,                      /* expr  */
  YYSYMBOL_Arglist = 90                    /* Arglist  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   631

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  239

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      49,    50,     2,     2,    46,     2,    53,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
       2,    54,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    38,    44,    47,    50,    55,    56,    59,
      62,    63,    65,    66,    67,    68,    71,    72,    79,    97,
     109,   110,   113,   116,   117,   118,   121,   122,   125,   126,
     129,   132,   133,   136,   148,   149,   152,   153,   156,   159,
     160,   163,   166,   167,   171,   174,   175,   178,   179,   184,
     187,   189,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   203,   208,   210,   218,   221,   222,   225,   229,
     231,   242,   254,   255,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     282,   294,   303,   304,   305,   306,   307,   310,   311
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
  "REPEAT", "UNTIL", "MAIN", "RETURN", "AND", "TYPE", "ENDTYPE", "ALLOC",
  "NULL_SPL", "FREE", "INITIALIZE", "MOD", "';'", "','", "'['", "']'",
  "'('", "')'", "'{'", "'}'", "'.'", "'='", "$accept", "program",
  "Gdeclblock", "Gdecllist", "Gdecl", "Gidlist", "Gid", "Fdefblock",
  "Fdef", "Paramlist", "Param", "type", "Ldeclblock", "Ldecllist", "Ldecl",
  "Idlist", "Mainblock", "Typedefblock", "Typedeflist", "Typedef",
  "Fielddeclist", "Fielddecl", "Field", "body", "slist", "ifstmt",
  "whilestmt", "repeatstmt", "dowhilestmt", "stmt", "retstmt", "inputstmt",
  "outputstmt", "assgstmt", "expr", "Arglist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,     8,     0,    45,   -99,     3,    43,    49,   -99,     2,
     -99,   -99,   205,    94,     1,   207,   -99,   -99,   -99,   -99,
     -99,   -99,   250,   -99,    90,     8,    94,   -99,   102,   -99,
      63,   117,    12,   -99,   -99,   -99,   -39,   -28,   -99,   -99,
     -99,    81,   106,   112,   -99,   -99,   145,    86,   -99,    90,
     155,   295,   144,   -99,   115,   -99,   -14,   -99,   187,   -99,
     128,    41,   -99,   188,   383,   -99,   589,   147,   -99,   207,
     -99,   -99,   106,   150,   -99,    83,   -99,   -99,   113,   153,
     154,   173,   179,   159,   199,   589,   589,    98,   116,   494,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   144,   106,   -99,   232,    98,   242,    68,   245,    82,
     -99,   -99,    98,    98,   595,   500,   -99,   157,   202,   -99,
     204,   206,    98,   203,   359,   257,   109,   -99,   -99,   210,
     144,   -99,   298,   -99,   218,   387,   197,   103,   219,   163,
     175,   208,   240,   243,    98,    34,   231,   287,   244,   220,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,   -99,   -99,   248,   399,   -99,   246,   241,   -99,
     -99,    98,   251,   255,   256,   261,   282,   279,    98,    98,
     310,   -99,   439,    69,   -99,   264,   -99,   -99,    74,    74,
     -99,   -99,    53,    53,    53,    53,    53,    53,   525,   -99,
     -99,   -99,   -99,   131,   347,   -99,   -99,   -99,   -99,   589,
     589,   253,   265,   -99,    98,   -99,   -99,   281,   427,   284,
     461,   546,   -16,   291,   439,   -99,   -99,   292,   589,   293,
     294,   -99,   -99,   -99,   556,   -99,   -99,   296,   -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     0,     0,    35,     0,
      37,     1,     0,     0,     0,     0,    34,    36,    25,    23,
      24,     6,     0,     8,     0,    23,     0,    17,     0,     3,
       0,     0,     0,    40,     5,     7,    15,     0,    11,    16,
       2,     0,     0,     0,    38,    39,     0,     0,     9,     0,
       0,     0,     0,    41,     0,    14,     0,    21,     0,    10,
       0,     0,    27,     0,     0,    29,     0,     0,    12,     0,
      13,    22,     0,     0,    32,     0,    26,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    59,    60,    46,    61,    52,    53,    54,    33,
      20,     0,     0,    30,     0,     0,     0,     0,     0,     0,
      57,    58,     0,     0,     0,     0,    87,    88,     0,    96,
       0,     0,     0,    92,     0,     0,     0,    44,    45,     0,
       0,    31,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,    42,     0,     0,    19,     0,     0,    69,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    98,     0,    94,     0,    93,    86,    74,    75,
      76,    77,    79,    80,    82,    81,    83,    84,    85,    78,
      73,    72,    18,     0,     0,    63,    65,    67,    66,     0,
       0,     0,     0,    89,     0,    91,    95,     0,     0,     0,
       0,     0,     0,     0,    97,    71,    70,     0,     0,     0,
       0,    51,    50,    64,     0,    48,    49,     0,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   -99,   318,   -99,   299,   -99,   317,   300,
     275,    18,   -67,   -99,   285,   -99,    -1,   -99,   -99,   336,
     -99,   319,   -66,   -23,   -83,   -99,   -99,   -99,   -99,   -88,
     -99,   -99,   -99,   -99,   -98,   -99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,    13,    22,    23,    37,    38,    26,    27,    56,
      57,    58,    52,    64,    65,    75,     4,     5,     9,    10,
      32,    33,   123,    67,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   124,   183
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      88,   128,   114,   115,     7,   101,     7,   132,    46,   135,
      47,   139,    29,   210,   140,   141,    18,    48,    49,    88,
      88,    19,    20,    88,   149,    40,   128,   128,   165,   231,
      24,    28,    69,    31,    12,   130,    70,   116,   117,     8,
      24,    16,   137,     6,    28,    11,   180,   182,    88,    88,
      31,    30,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    44,   150,   151,   152,   153,    63,
       1,   116,   117,   204,   118,   119,   120,   121,   129,   134,
     211,   212,    63,   122,   181,   116,   117,    69,   152,   153,
      18,    73,    14,   138,    36,    19,    20,   161,    18,     2,
      15,   116,   117,    25,    20,   218,    41,   167,   118,   119,
     120,   121,   116,   117,    42,   214,   224,   122,   161,   215,
     164,    43,   118,   119,   120,   121,   220,   221,   103,   104,
      50,   122,   128,   128,   116,   117,    55,    51,   118,   119,
     120,   121,   217,    88,    88,   234,   128,   122,    54,   118,
     119,   120,   121,   173,    88,    88,   125,    53,   122,    18,
     105,    66,    88,    68,    19,    20,   106,   107,    88,   125,
     126,   118,   119,   120,   121,   150,   151,   152,   153,    72,
     122,   154,   155,   156,   157,   158,   159,   150,   151,   152,
     153,    71,    74,   154,   155,   156,   157,   158,   159,    99,
     160,   102,   108,   109,   144,    60,   145,   161,   112,    18,
     106,    18,   160,   175,    19,    20,    19,    20,   110,   161,
     150,   151,   152,   153,   111,   176,   154,   155,   156,   157,
     158,   159,   150,   151,   152,   153,   131,    21,   154,   155,
     156,   157,   158,   159,   171,   160,   133,   172,   113,   136,
     106,   146,   161,   147,    18,   148,   125,   160,   177,    19,
      20,   163,   166,   169,   161,   150,   151,   152,   153,   174,
     187,   154,   155,   156,   157,   158,   159,   150,   151,   152,
     153,   184,    34,   154,   155,   156,   157,   158,   159,   178,
     160,   185,   179,   200,   186,   203,   205,   161,   202,    18,
     206,   207,   160,   222,    19,    20,   208,   209,   210,   161,
     150,   151,   152,   153,   216,   223,   154,   155,   156,   157,
     158,   159,   150,   151,   152,   153,   225,    62,   154,   155,
     156,   157,   158,   159,   227,   160,   232,   233,   235,   236,
      35,   238,   161,    39,   100,    17,   168,   160,    59,    77,
      61,    45,     0,     0,   161,     0,     0,     0,   213,   150,
     151,   152,   153,     0,     0,   154,   155,   156,   157,   158,
     159,   150,   151,   152,   153,     0,     0,   154,   155,   156,
     157,   158,   159,     0,   160,     0,     0,    18,     0,     0,
       0,   161,    19,    20,     0,   219,   160,     0,     0,   150,
     151,   152,   153,   161,   162,   154,   155,   156,   157,   158,
     159,   150,   151,   152,   153,    76,     0,   154,   155,   156,
     157,   158,   159,     0,   160,     0,     0,     0,     0,     0,
       0,   161,   170,     0,     0,     0,   160,     0,     0,   150,
     151,   152,   153,   161,   201,   154,   155,   156,   157,   158,
     159,   150,   151,   152,   153,     0,     0,   154,   155,   156,
     157,   158,   159,     0,   160,    78,    79,    80,    81,    82,
       0,   161,   226,     0,     0,     0,   160,     0,     0,     0,
       0,     0,     0,   161,     0,    83,     0,   228,   229,    84,
      85,     0,     0,     0,    86,     0,     0,    87,    78,    79,
      80,    81,    82,     0,    78,    79,    80,    81,    82,     0,
     127,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,    84,    85,    83,     0,     0,    86,    84,    85,
      87,     0,     0,    86,   143,     0,    87,   150,   151,   152,
     153,     0,     0,   154,   155,   156,   157,   158,   159,     0,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,     0,     0,     0,     0,   161,
      83,     0,     0,     0,    84,    85,   230,     0,     0,    86,
      83,     0,    87,   237,    84,    85,     0,     0,     0,    86,
       0,     0,    87,    78,    79,    80,    81,    82,     0,    78,
      79,    80,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,    84,    85,    83,
       0,     0,    86,   142,    85,    87,     0,     0,    86,     0,
       0,    87
};

static const yytype_int16 yycheck[] =
{
      66,    89,    85,    86,     4,    72,     4,   105,    47,   107,
      49,   109,    13,    29,   112,   113,     4,    45,    46,    85,
      86,     9,    10,    89,   122,    26,   114,   115,   126,    45,
      12,    13,    46,    15,    31,   102,    50,     3,     4,    39,
      22,    39,   108,    35,    26,     0,   144,   145,   114,   115,
      32,    50,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,    52,    12,    13,    14,    15,    51,
       9,     3,     4,   171,    40,    41,    42,    43,   101,    11,
     178,   179,    64,    49,    50,     3,     4,    46,    14,    15,
       4,    50,    49,    11,     4,     9,    10,    44,     4,    38,
      51,     3,     4,     9,    10,   203,     4,   130,    40,    41,
      42,    43,     3,     4,    51,    46,   214,    49,    44,    50,
      11,     4,    40,    41,    42,    43,   209,   210,    45,    46,
      49,    49,   220,   221,     3,     4,    50,    31,    40,    41,
      42,    43,    11,   209,   210,   228,   234,    49,     3,    40,
      41,    42,    43,    50,   220,   221,    53,    45,    49,     4,
      47,    17,   228,    48,     9,    10,    53,    54,   234,    53,
      54,    40,    41,    42,    43,    12,    13,    14,    15,    51,
      49,    18,    19,    20,    21,    22,    23,    12,    13,    14,
      15,     4,     4,    18,    19,    20,    21,    22,    23,    52,
      37,    51,    49,    49,    47,    50,    49,    44,    49,     4,
      53,     4,    37,    50,     9,    10,     9,    10,    45,    44,
      12,    13,    14,    15,    45,    50,    18,    19,    20,    21,
      22,    23,    12,    13,    14,    15,     4,    32,    18,    19,
      20,    21,    22,    23,    47,    37,     4,    50,    49,     4,
      53,    49,    44,    49,     4,    49,    53,    37,    50,     9,
      10,     4,    52,    45,    44,    12,    13,    14,    15,    50,
      50,    18,    19,    20,    21,    22,    23,    12,    13,    14,
      15,    50,    32,    18,    19,    20,    21,    22,    23,    49,
      37,     4,    49,    45,    50,    54,    45,    44,    52,     4,
      45,    45,    37,    50,     9,    10,    45,    25,    29,    44,
      12,    13,    14,    15,    50,    50,    18,    19,    20,    21,
      22,    23,    12,    13,    14,    15,    45,    32,    18,    19,
      20,    21,    22,    23,    50,    37,    45,    45,    45,    45,
      22,    45,    44,    26,    69,     9,    48,    37,    49,    64,
      50,    32,    -1,    -1,    44,    -1,    -1,    -1,    48,    12,
      13,    14,    15,    -1,    -1,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    22,    23,    -1,    37,    -1,    -1,     4,    -1,    -1,
      -1,    44,     9,    10,    -1,    48,    37,    -1,    -1,    12,
      13,    14,    15,    44,    45,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    32,    -1,    18,    19,    20,
      21,    22,    23,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    37,    -1,    -1,    12,
      13,    14,    15,    44,    45,    18,    19,    20,    21,    22,
      23,    12,    13,    14,    15,    -1,    -1,    18,    19,    20,
      21,    22,    23,    -1,    37,     4,     5,     6,     7,     8,
      -1,    44,    45,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    -1,    -1,    36,     4,     5,
       6,     7,     8,    -1,     4,     5,     6,     7,     8,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    28,    29,    24,    -1,    -1,    33,    28,    29,
      36,    -1,    -1,    33,    34,    -1,    36,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    21,    22,    23,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    44,
      24,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,    33,
      24,    -1,    36,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    -1,    36,     4,     5,     6,     7,     8,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,    24,
      -1,    -1,    33,    28,    29,    36,    -1,    -1,    33,    -1,
      -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    38,    56,    71,    72,    35,     4,    39,    73,
      74,     0,    31,    57,    49,    51,    39,    74,     4,     9,
      10,    32,    58,    59,    66,     9,    62,    63,    66,    71,
      50,    66,    75,    76,    32,    59,     4,    60,    61,    63,
      71,     4,    51,     4,    52,    76,    47,    49,    45,    46,
      49,    31,    67,    45,     3,    50,    64,    65,    66,    61,
      50,    64,    32,    66,    68,    69,    17,    78,    48,    46,
      50,     4,    51,    50,     4,    70,    32,    69,     4,     5,
       6,     7,     8,    24,    28,    29,    33,    36,    77,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    52,
      65,    67,    51,    45,    46,    47,    53,    54,    49,    49,
      45,    45,    49,    49,    79,    79,     3,     4,    40,    41,
      42,    43,    49,    77,    89,    53,    54,    16,    84,    78,
      67,     4,    89,     4,    11,    89,     4,    77,    11,    89,
      89,    89,    28,    34,    47,    49,    49,    49,    49,    89,
      12,    13,    14,    15,    18,    19,    20,    21,    22,    23,
      37,    44,    45,     4,    11,    89,    52,    78,    48,    45,
      45,    47,    50,    50,    50,    50,    50,    50,    49,    49,
      89,    50,    89,    90,    50,     4,    50,    50,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      45,    45,    52,    54,    89,    45,    45,    45,    45,    25,
      29,    89,    89,    48,    46,    50,    50,    11,    89,    48,
      79,    79,    50,    50,    89,    45,    45,    50,    26,    27,
      30,    45,    45,    45,    79,    45,    45,    27,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    56,    57,    57,    58,    58,    59,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    66,    66,    66,    67,    67,    68,    68,
      69,    70,    70,    71,    72,    72,    73,    73,    74,    75,
      75,    76,    77,    77,    78,    79,    79,    80,    80,    81,
      82,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    85,    86,    86,    86,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     1,     3,     2,     2,     1,     3,
       3,     1,     4,     4,     3,     1,     2,     1,     9,     8,
       3,     1,     2,     1,     1,     1,     3,     2,     2,     1,
       3,     3,     1,     8,     3,     2,     2,     1,     4,     2,
       1,     3,     3,     3,     3,     2,     1,    10,     8,     8,
       7,     7,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     3,     5,     8,     5,     5,     5,     4,     4,
       7,     7,     4,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     4,
       3,     4,     1,     3,     3,     4,     1,     3,     1
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
  case 2: /* program: Typedefblock Gdeclblock Fdefblock Mainblock  */
#line 30 "exptree.y"
                                                        {
						struct tnode* t1=createTree(-1,"void","",cnn,(yyvsp[-1].no),(yyvsp[0].no));
						 (yyval.no)=createTree(-1,"void","",cnn,(yyvsp[-2].no),t1);
						printf("\n Printing symbol table\n");
						  struct Gsymbol* t=symbtable;
						 
							
						  }
#line 1535 "y.tab.c"
    break;

  case 3: /* program: Typedefblock Gdeclblock Mainblock  */
#line 38 "exptree.y"
                                                                { (yyval.no)=createTree(-1,"void","",cnn,(yyvsp[-1].no),(yyvsp[0].no));
	 					 printf("\n Printing symbol table\n");
						  struct Gsymbol* t=symbtable;
						 
						  }
#line 1545 "y.tab.c"
    break;

  case 4: /* program: Mainblock  */
#line 44 "exptree.y"
                                                {(yyval.no)=(yyvsp[0].no);}
#line 1551 "y.tab.c"
    break;

  case 5: /* Gdeclblock: DECL Gdecllist ENDDECL  */
#line 47 "exptree.y"
                                        {(yyval.no)=createTree(-1,"void","",gdeclblk,(yyvsp[-1].no),NULL);
					 before_code();
					}
#line 1559 "y.tab.c"
    break;

  case 6: /* Gdeclblock: DECL ENDDECL  */
#line 50 "exptree.y"
                                {(yyval.no)=NULL;
	    			before_code();
	    			}
#line 1567 "y.tab.c"
    break;

  case 7: /* Gdecllist: Gdecllist Gdecl  */
#line 55 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",gdeclst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1573 "y.tab.c"
    break;

  case 8: /* Gdecllist: Gdecl  */
#line 56 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1579 "y.tab.c"
    break;

  case 9: /* Gdecl: type Gidlist ';'  */
#line 59 "exptree.y"
                                {assign_type((yyvsp[-1].no),(yyvsp[-2].no)->type);(yyval.no)=createTree(-1,"void","",gdecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1585 "y.tab.c"
    break;

  case 10: /* Gidlist: Gidlist ',' Gid  */
#line 62 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",gidlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1591 "y.tab.c"
    break;

  case 11: /* Gidlist: Gid  */
#line 63 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1597 "y.tab.c"
    break;

  case 12: /* Gid: ID '[' NUM ']'  */
#line 65 "exptree.y"
                        {(yyval.no)=createTree(-1,"void","",arrdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1603 "y.tab.c"
    break;

  case 13: /* Gid: ID '(' Paramlist ')'  */
#line 66 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",funcdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1609 "y.tab.c"
    break;

  case 14: /* Gid: ID '(' ')'  */
#line 67 "exptree.y"
                        {(yyval.no)=createTree(-1,"void","",funcdecl,(yyvsp[-2].no),NULL);}
#line 1615 "y.tab.c"
    break;

  case 15: /* Gid: ID  */
#line 68 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1621 "y.tab.c"
    break;

  case 16: /* Fdefblock: Fdefblock Fdef  */
#line 71 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",fdefblk,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1627 "y.tab.c"
    break;

  case 17: /* Fdefblock: Fdef  */
#line 72 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);
	    		
	    
	    
	    		}
#line 1637 "y.tab.c"
    break;

  case 18: /* Fdef: type ID '(' Paramlist ')' '{' Ldeclblock body '}'  */
#line 79 "exptree.y"
                                                                {if(lookup((yyvsp[-7].no)->varname)==NULL){
	 								printf("1Funcn %s is undeclared\n",(yyvsp[-7].no)->varname);
	 								exit(1);
	 			 				}
	 			 				(yyval.no)=createTree(-1,(yyvsp[-8].no)->type->name,"",fndef,createTree(-1,"void","",cnn,(yyvsp[-8].no),(yyvsp[-7].no)),createTree(-1,"void","",cnn,(yyvsp[-5].no),createTree(-1,"void","",cnn,(yyvsp[-2].no),(yyvsp[-1].no))));
	 			 				
	 			 				check_decl((yyvsp[-8].no)->type,(yyvsp[-1].no));
	 			 				printf("REACH HERE\n");
	 			 				code_gen((yyval.no));
	 			 				printf("REACH AND HERE\n");
	 			 				destroy_lsymbtable();
	 			 				
	 			 				
	 			 				
	 			 				}
#line 1657 "y.tab.c"
    break;

  case 19: /* Fdef: type ID '(' ')' '{' Ldeclblock body '}'  */
#line 97 "exptree.y"
                                                                {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 								printf("2Funcn %s is undeclared\n",(yyvsp[-6].no)->varname);
	 								exit(1);
	 			 				}
	 			 				(yyval.no)=createTree(-1,(yyvsp[-7].no)->type->name,"",fndef,createTree(-1,"void","",cnn,(yyvsp[-7].no),(yyvsp[-6].no)),createTree(-1,"void","",cnn,NULL,createTree(-1,"void","",cnn,(yyvsp[-2].no),(yyvsp[-1].no))));
	 			 				check_decl((yyvsp[-7].no)->type,(yyvsp[-1].no));
	 			 				
	 			 				code_gen((yyval.no));
	 			 				destroy_lsymbtable();
	 			 				}
#line 1672 "y.tab.c"
    break;

  case 20: /* Paramlist: Paramlist ',' Param  */
#line 109 "exptree.y"
                                        {(yyval.no)=createTree(-1,"void","",paramlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1678 "y.tab.c"
    break;

  case 21: /* Paramlist: Param  */
#line 110 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1684 "y.tab.c"
    break;

  case 22: /* Param: type ID  */
#line 113 "exptree.y"
                {(yyval.no)=createTree(-1,"void","",param,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1690 "y.tab.c"
    break;

  case 23: /* type: INT  */
#line 116 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1696 "y.tab.c"
    break;

  case 24: /* type: STR  */
#line 117 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1702 "y.tab.c"
    break;

  case 25: /* type: ID  */
#line 118 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1708 "y.tab.c"
    break;

  case 26: /* Ldeclblock: DECL Ldecllist ENDDECL  */
#line 121 "exptree.y"
                                    {(yyval.no)=createTree(-1,"void","",ldeclblk,(yyvsp[-1].no),NULL);}
#line 1714 "y.tab.c"
    break;

  case 27: /* Ldeclblock: DECL ENDDECL  */
#line 122 "exptree.y"
                                {(yyval.no)=NULL;}
#line 1720 "y.tab.c"
    break;

  case 28: /* Ldecllist: Ldecllist Ldecl  */
#line 125 "exptree.y"
                            {(yyval.no)=createTree(-1,"void","",ldecllst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1726 "y.tab.c"
    break;

  case 29: /* Ldecllist: Ldecl  */
#line 126 "exptree.y"
                    {(yyval.no)=(yyvsp[0].no);}
#line 1732 "y.tab.c"
    break;

  case 30: /* Ldecl: type Idlist ';'  */
#line 129 "exptree.y"
                       {(yyval.no)=createTree(-1,"void","",ldecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1738 "y.tab.c"
    break;

  case 31: /* Idlist: Idlist ',' ID  */
#line 132 "exptree.y"
                       {(yyval.no)=createTree(-1,"void","",idlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1744 "y.tab.c"
    break;

  case 32: /* Idlist: ID  */
#line 133 "exptree.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1750 "y.tab.c"
    break;

  case 33: /* Mainblock: INT MAIN '(' ')' '{' Ldeclblock body '}'  */
#line 136 "exptree.y"
                                                     {
							(yyval.no)=createTree(-1,"void","",mainnd,(yyvsp[-2].no),(yyvsp[-1].no));
							printf("\n Printing Local symbol table\n");
							struct Lsymbol* t=(yyvsp[-7].no)->Lentry;
							
							check_decl(TLookup("INT"),(yyvsp[-1].no));
							
							code_gen((yyval.no));
							destroy_lsymbtable();
							}
#line 1765 "y.tab.c"
    break;

  case 34: /* Typedefblock: TYPE Typedeflist ENDTYPE  */
#line 148 "exptree.y"
                                        {(yyval.no)=(yyvsp[-1].no);}
#line 1771 "y.tab.c"
    break;

  case 35: /* Typedefblock: TYPE ENDTYPE  */
#line 149 "exptree.y"
                                {(yyval.no)=NULL;}
#line 1777 "y.tab.c"
    break;

  case 36: /* Typedeflist: Typedeflist Typedef  */
#line 152 "exptree.y"
                                 {(yyval.no)=createTree(-1,"void","",typedeflst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1783 "y.tab.c"
    break;

  case 37: /* Typedeflist: Typedef  */
#line 153 "exptree.y"
                       {(yyval.no)=(yyvsp[0].no);}
#line 1789 "y.tab.c"
    break;

  case 38: /* Typedef: ID '{' Fielddeclist '}'  */
#line 156 "exptree.y"
                                 {struct Fieldlist* fields=convert_fldlst((yyvsp[-1].no),(yyvsp[-3].no)->varname);TInstall((yyvsp[-3].no)->varname,count_fields(fields),fields);(yyval.no)=createTree(-1,"void","",typedefnd,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1795 "y.tab.c"
    break;

  case 39: /* Fielddeclist: Fielddeclist Fielddecl  */
#line 159 "exptree.y"
                                     {(yyval.no)=createTree(-1,"void","",fielddecllst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1801 "y.tab.c"
    break;

  case 40: /* Fielddeclist: Fielddecl  */
#line 160 "exptree.y"
                                {(yyval.no)=(yyvsp[0].no);}
#line 1807 "y.tab.c"
    break;

  case 41: /* Fielddecl: type ID ';'  */
#line 163 "exptree.y"
                       {(yyval.no)=createTree(-1,"void","",fielddecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1813 "y.tab.c"
    break;

  case 42: /* Field: Field '.' ID  */
#line 166 "exptree.y"
                    {(yyval.no)=createTree(-1,"void","",fieldlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1819 "y.tab.c"
    break;

  case 43: /* Field: ID '.' ID  */
#line 167 "exptree.y"
                    {(yyval.no)=createTree(-1,"void","",field,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1825 "y.tab.c"
    break;

  case 44: /* body: BEGN slist END  */
#line 171 "exptree.y"
                      {(yyval.no)=(yyvsp[-1].no);}
#line 1831 "y.tab.c"
    break;

  case 45: /* slist: slist stmt  */
#line 174 "exptree.y"
                        {(yyval.no)=createTree(-1,"void","",cnn,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1837 "y.tab.c"
    break;

  case 46: /* slist: stmt  */
#line 175 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1843 "y.tab.c"
    break;

  case 47: /* ifstmt: IF '(' expr ')' THEN slist ELSE slist ENDIF ';'  */
#line 178 "exptree.y"
                                                                {struct tnode* t=createTree(-1,"void","",el,(yyvsp[-4].no),(yyvsp[-2].no));(yyval.no)=createTree(-1,"void","",ifel,(yyvsp[-7].no),t);}
#line 1849 "y.tab.c"
    break;

  case 48: /* ifstmt: IF '(' expr ')' THEN slist ENDIF ';'  */
#line 179 "exptree.y"
                                                { struct tnode* t=createTree(-1,"void","",el,(yyvsp[-2].no),NULL);
						  
					          (yyval.no)=createTree(-1,"void","",ifel,(yyvsp[-5].no),t);}
#line 1857 "y.tab.c"
    break;

  case 49: /* whilestmt: WHILE '(' expr ')' DO slist ENDWHILE ';'  */
#line 184 "exptree.y"
                                                        {(yyval.no)=createTree(-1,"void","",whl,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1863 "y.tab.c"
    break;

  case 50: /* repeatstmt: REPEAT slist UNTIL '(' expr ')' ';'  */
#line 187 "exptree.y"
                                                  {(yyval.no)=createTree(-1,"void","",rpt,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1869 "y.tab.c"
    break;

  case 51: /* dowhilestmt: DO slist WHILE '(' expr ')' ';'  */
#line 189 "exptree.y"
                                                {(yyval.no)=createTree(-1,"void","",dow,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1875 "y.tab.c"
    break;

  case 52: /* stmt: inputstmt  */
#line 191 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1881 "y.tab.c"
    break;

  case 53: /* stmt: outputstmt  */
#line 192 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1887 "y.tab.c"
    break;

  case 54: /* stmt: assgstmt  */
#line 193 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1893 "y.tab.c"
    break;

  case 55: /* stmt: ifstmt  */
#line 194 "exptree.y"
                        {(yyval.no)= (yyvsp[0].no);}
#line 1899 "y.tab.c"
    break;

  case 56: /* stmt: whilestmt  */
#line 195 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 1905 "y.tab.c"
    break;

  case 57: /* stmt: BREAK ';'  */
#line 196 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 1911 "y.tab.c"
    break;

  case 58: /* stmt: CONTINUE ';'  */
#line 197 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 1917 "y.tab.c"
    break;

  case 59: /* stmt: repeatstmt  */
#line 198 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1923 "y.tab.c"
    break;

  case 60: /* stmt: dowhilestmt  */
#line 199 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1929 "y.tab.c"
    break;

  case 61: /* stmt: retstmt  */
#line 200 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1935 "y.tab.c"
    break;

  case 62: /* retstmt: RETURN expr ';'  */
#line 203 "exptree.y"
                                {
				(yyval.no)=createTree(-1,(yyvsp[-1].no)->type->name,"",retnd,(yyvsp[-1].no),NULL);
				}
#line 1943 "y.tab.c"
    break;

  case 63: /* inputstmt: READ '(' ID ')' ';'  */
#line 208 "exptree.y"
                                {
	 			 (yyval.no)=createTree(-1,"void","",rd,(yyvsp[-2].no),NULL);printf("Reachinfg read\n");}
#line 1950 "y.tab.c"
    break;

  case 64: /* inputstmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 210 "exptree.y"
                                             {if(lookup((yyvsp[-5].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-5].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-5].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type->name,"",arrasg,(yyvsp[-5].no),(yyvsp[-3].no));
	 			 	(yyval.no)=createTree(-1,"void","",rd,temp,NULL);}
#line 1963 "y.tab.c"
    break;

  case 65: /* inputstmt: READ '(' Field ')' ';'  */
#line 218 "exptree.y"
                                  {(yyval.no)=createTree(-1,"void","",rd,(yyvsp[-2].no),NULL);}
#line 1969 "y.tab.c"
    break;

  case 66: /* outputstmt: WRITE '(' expr ')' ';'  */
#line 221 "exptree.y"
                                    {(yyval.no) = createTree(-1,"void","",wr,(yyvsp[-2].no),NULL);}
#line 1975 "y.tab.c"
    break;

  case 67: /* outputstmt: WRITE '(' STRING ')' ';'  */
#line 222 "exptree.y"
                                       {(yyval.no) = createTree(-1,"void","",wr,(yyvsp[-2].no),NULL);}
#line 1981 "y.tab.c"
    break;

  case 68: /* assgstmt: ID '=' expr ';'  */
#line 225 "exptree.y"
                           {
	 			 
	 			 (yyval.no) = createTree(-1,"void","",asg,(yyvsp[-3].no),(yyvsp[-1].no));
	 			 printf("reaching asg\n");}
#line 1990 "y.tab.c"
    break;

  case 69: /* assgstmt: ID '=' STRING ';'  */
#line 229 "exptree.y"
                              {
	 			 (yyval.no)=createTree(-1,"void","",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1997 "y.tab.c"
    break;

  case 70: /* assgstmt: ID '[' expr ']' '=' expr ';'  */
#line 231 "exptree.y"
                                         {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			        
	 			 	struct tnode* temp=createTree(-1,t->type->name,"",arrasg,(yyvsp[-6].no),(yyvsp[-4].no));
	 			 	(yyval.no)=createTree(-1,"void","",asg,temp,(yyvsp[-1].no));
	 			 	
	  
	  				 }
#line 2013 "y.tab.c"
    break;

  case 71: /* assgstmt: ID '[' expr ']' '=' STRING ';'  */
#line 242 "exptree.y"
                                           {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type->name,"",arrasg,(yyvsp[-6].no),(yyvsp[-4].no));
	 			 	(yyval.no)=createTree(-1,"void","",asg,temp,(yyvsp[-1].no));
	  
	  
	  
	  				   }
#line 2030 "y.tab.c"
    break;

  case 72: /* assgstmt: Field '=' expr ';'  */
#line 254 "exptree.y"
                               {(yyval.no)=createTree(-1,"void","",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 2036 "y.tab.c"
    break;

  case 73: /* assgstmt: Field '=' STRING ';'  */
#line 255 "exptree.y"
                                 {(yyval.no)=createTree(-1,"void","",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 2042 "y.tab.c"
    break;

  case 74: /* expr: expr PLUS expr  */
#line 259 "exptree.y"
                                {(yyval.no) = createTree(-1,"INT","",ps,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2048 "y.tab.c"
    break;

  case 75: /* expr: expr MINUS expr  */
#line 260 "exptree.y"
                                {(yyval.no) = createTree(-1,"INT","",ms,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2054 "y.tab.c"
    break;

  case 76: /* expr: expr MUL expr  */
#line 261 "exptree.y"
                                {(yyval.no) = createTree(-1,"INT","",ml,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2060 "y.tab.c"
    break;

  case 77: /* expr: expr DIV expr  */
#line 262 "exptree.y"
                                {(yyval.no) = createTree(-1,"INT","",dv,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2066 "y.tab.c"
    break;

  case 78: /* expr: expr MOD expr  */
#line 263 "exptree.y"
                                {(yyval.no) = createTree(-1,"INT","",mod,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2072 "y.tab.c"
    break;

  case 79: /* expr: expr LT expr  */
#line 264 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",lt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2078 "y.tab.c"
    break;

  case 80: /* expr: expr GT expr  */
#line 265 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",gt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2084 "y.tab.c"
    break;

  case 81: /* expr: expr GE expr  */
#line 266 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",ge,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2090 "y.tab.c"
    break;

  case 82: /* expr: expr LE expr  */
#line 267 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",le,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2096 "y.tab.c"
    break;

  case 83: /* expr: expr NE expr  */
#line 268 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",ne,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2102 "y.tab.c"
    break;

  case 84: /* expr: expr EQ expr  */
#line 269 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",eq,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2108 "y.tab.c"
    break;

  case 85: /* expr: expr AND expr  */
#line 270 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",andnd,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2114 "y.tab.c"
    break;

  case 86: /* expr: '(' expr ')'  */
#line 271 "exptree.y"
                                {(yyval.no) = (yyvsp[-1].no);}
#line 2120 "y.tab.c"
    break;

  case 87: /* expr: NUM  */
#line 272 "exptree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2126 "y.tab.c"
    break;

  case 88: /* expr: ID  */
#line 273 "exptree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2132 "y.tab.c"
    break;

  case 89: /* expr: ID '[' expr ']'  */
#line 274 "exptree.y"
                                {if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-3].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type->name,"",arrval,(yyvsp[-3].no),(yyvsp[-1].no));
	 			}
#line 2145 "y.tab.c"
    break;

  case 90: /* expr: ID '(' ')'  */
#line 282 "exptree.y"
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
	 			 (yyval.no)=createTree(-1,t->type->name,"",fncall,(yyvsp[-2].no),NULL);
	 			 }
#line 2162 "y.tab.c"
    break;

  case 91: /* expr: ID '(' Arglist ')'  */
#line 294 "exptree.y"
                                {
	 			if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("4Funcn %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-3].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type->name,"",fncall,(yyvsp[-3].no),(yyvsp[-1].no));
	 			 }
#line 2176 "y.tab.c"
    break;

  case 92: /* expr: Field  */
#line 303 "exptree.y"
                        {(yyval.no)=createTree(-1,"void","",fieldval,(yyvsp[0].no),NULL);}
#line 2182 "y.tab.c"
    break;

  case 93: /* expr: INITIALIZE '(' ')'  */
#line 304 "exptree.y"
                                {(yyval.no)=createTree(-1,"INT","",initnd,NULL,NULL);}
#line 2188 "y.tab.c"
    break;

  case 94: /* expr: ALLOC '(' ')'  */
#line 305 "exptree.y"
                                {(yyval.no)=createTree(-1,"INT","",allocnd,NULL,NULL);}
#line 2194 "y.tab.c"
    break;

  case 95: /* expr: FREE '(' ID ')'  */
#line 306 "exptree.y"
                                {(yyval.no)=createTree(-1,"INT","",freend,(yyvsp[-1].no),NULL);}
#line 2200 "y.tab.c"
    break;

  case 96: /* expr: NULL_SPL  */
#line 307 "exptree.y"
                        {(yyval.no)=createTree(-1,"NULL","",nullnd,NULL,NULL);}
#line 2206 "y.tab.c"
    break;

  case 97: /* Arglist: Arglist ',' expr  */
#line 310 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",arglst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2212 "y.tab.c"
    break;

  case 98: /* Arglist: expr  */
#line 311 "exptree.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 2218 "y.tab.c"
    break;


#line 2222 "y.tab.c"

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

#line 314 "exptree.y"


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
  	TypeTableCreate();
	yyparse();
	
	return 0;
}
