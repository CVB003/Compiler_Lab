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
    SELF = 267,                    /* SELF  */
    BRKPND = 268,                  /* BRKPND  */
    PLUS = 269,                    /* PLUS  */
    MINUS = 270,                   /* MINUS  */
    MUL = 271,                     /* MUL  */
    DIV = 272,                     /* DIV  */
    END = 273,                     /* END  */
    BEGN = 274,                    /* BEGN  */
    LT = 275,                      /* LT  */
    GT = 276,                      /* GT  */
    LE = 277,                      /* LE  */
    GE = 278,                      /* GE  */
    NE = 279,                      /* NE  */
    EQ = 280,                      /* EQ  */
    IF = 281,                      /* IF  */
    THEN = 282,                    /* THEN  */
    ELSE = 283,                    /* ELSE  */
    ENDIF = 284,                   /* ENDIF  */
    WHILE = 285,                   /* WHILE  */
    DO = 286,                      /* DO  */
    ENDWHILE = 287,                /* ENDWHILE  */
    DECL = 288,                    /* DECL  */
    ENDDECL = 289,                 /* ENDDECL  */
    REPEAT = 290,                  /* REPEAT  */
    UNTIL = 291,                   /* UNTIL  */
    MAIN = 292,                    /* MAIN  */
    RETURN = 293,                  /* RETURN  */
    AND = 294,                     /* AND  */
    TYPE = 295,                    /* TYPE  */
    ENDTYPE = 296,                 /* ENDTYPE  */
    ALLOC = 297,                   /* ALLOC  */
    NULL_SPL = 298,                /* NULL_SPL  */
    FREE = 299,                    /* FREE  */
    INITIALIZE = 300,              /* INITIALIZE  */
    CLASS = 301,                   /* CLASS  */
    ENDCLASS = 302,                /* ENDCLASS  */
    EXTENDS = 303,                 /* EXTENDS  */
    DELETE = 304,                  /* DELETE  */
    NEW = 305,                     /* NEW  */
    MOD = 306                      /* MOD  */
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
#define SELF 267
#define BRKPND 268
#define PLUS 269
#define MINUS 270
#define MUL 271
#define DIV 272
#define END 273
#define BEGN 274
#define LT 275
#define GT 276
#define LE 277
#define GE 278
#define NE 279
#define EQ 280
#define IF 281
#define THEN 282
#define ELSE 283
#define ENDIF 284
#define WHILE 285
#define DO 286
#define ENDWHILE 287
#define DECL 288
#define ENDDECL 289
#define REPEAT 290
#define UNTIL 291
#define MAIN 292
#define RETURN 293
#define AND 294
#define TYPE 295
#define ENDTYPE 296
#define ALLOC 297
#define NULL_SPL 298
#define FREE 299
#define INITIALIZE 300
#define CLASS 301
#define ENDCLASS 302
#define EXTENDS 303
#define DELETE 304
#define NEW 305
#define MOD 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "exptree.y"

	struct tnode *no;
	

#line 241 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



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
  YYSYMBOL_SELF = 12,                      /* SELF  */
  YYSYMBOL_BRKPND = 13,                    /* BRKPND  */
  YYSYMBOL_PLUS = 14,                      /* PLUS  */
  YYSYMBOL_MINUS = 15,                     /* MINUS  */
  YYSYMBOL_MUL = 16,                       /* MUL  */
  YYSYMBOL_DIV = 17,                       /* DIV  */
  YYSYMBOL_END = 18,                       /* END  */
  YYSYMBOL_BEGN = 19,                      /* BEGN  */
  YYSYMBOL_LT = 20,                        /* LT  */
  YYSYMBOL_GT = 21,                        /* GT  */
  YYSYMBOL_LE = 22,                        /* LE  */
  YYSYMBOL_GE = 23,                        /* GE  */
  YYSYMBOL_NE = 24,                        /* NE  */
  YYSYMBOL_EQ = 25,                        /* EQ  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_THEN = 27,                      /* THEN  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_ENDIF = 29,                     /* ENDIF  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_DO = 31,                        /* DO  */
  YYSYMBOL_ENDWHILE = 32,                  /* ENDWHILE  */
  YYSYMBOL_DECL = 33,                      /* DECL  */
  YYSYMBOL_ENDDECL = 34,                   /* ENDDECL  */
  YYSYMBOL_REPEAT = 35,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 36,                     /* UNTIL  */
  YYSYMBOL_MAIN = 37,                      /* MAIN  */
  YYSYMBOL_RETURN = 38,                    /* RETURN  */
  YYSYMBOL_AND = 39,                       /* AND  */
  YYSYMBOL_TYPE = 40,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 41,                   /* ENDTYPE  */
  YYSYMBOL_ALLOC = 42,                     /* ALLOC  */
  YYSYMBOL_NULL_SPL = 43,                  /* NULL_SPL  */
  YYSYMBOL_FREE = 44,                      /* FREE  */
  YYSYMBOL_INITIALIZE = 45,                /* INITIALIZE  */
  YYSYMBOL_CLASS = 46,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 47,                  /* ENDCLASS  */
  YYSYMBOL_EXTENDS = 48,                   /* EXTENDS  */
  YYSYMBOL_DELETE = 49,                    /* DELETE  */
  YYSYMBOL_NEW = 50,                       /* NEW  */
  YYSYMBOL_MOD = 51,                       /* MOD  */
  YYSYMBOL_52_ = 52,                       /* ';'  */
  YYSYMBOL_53_ = 53,                       /* ','  */
  YYSYMBOL_54_ = 54,                       /* '['  */
  YYSYMBOL_55_ = 55,                       /* ']'  */
  YYSYMBOL_56_ = 56,                       /* '('  */
  YYSYMBOL_57_ = 57,                       /* ')'  */
  YYSYMBOL_58_ = 58,                       /* '{'  */
  YYSYMBOL_59_ = 59,                       /* '}'  */
  YYSYMBOL_60_ = 60,                       /* '.'  */
  YYSYMBOL_61_ = 61,                       /* '='  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_Gdeclblock = 64,                /* Gdeclblock  */
  YYSYMBOL_Gdecllist = 65,                 /* Gdecllist  */
  YYSYMBOL_Gdecl = 66,                     /* Gdecl  */
  YYSYMBOL_Gidlist = 67,                   /* Gidlist  */
  YYSYMBOL_Gid = 68,                       /* Gid  */
  YYSYMBOL_ClassDefBlock = 69,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 70,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 71,                  /* ClassDef  */
  YYSYMBOL_Cname = 72,                     /* Cname  */
  YYSYMBOL_MethodDecl = 73,                /* MethodDecl  */
  YYSYMBOL_MDecl = 74,                     /* MDecl  */
  YYSYMBOL_MethodDefns = 75,               /* MethodDefns  */
  YYSYMBOL_MDef = 76,                      /* MDef  */
  YYSYMBOL_Fdefblock = 77,                 /* Fdefblock  */
  YYSYMBOL_Fdef = 78,                      /* Fdef  */
  YYSYMBOL_Paramlist = 79,                 /* Paramlist  */
  YYSYMBOL_Param = 80,                     /* Param  */
  YYSYMBOL_type = 81,                      /* type  */
  YYSYMBOL_Ldeclblock = 82,                /* Ldeclblock  */
  YYSYMBOL_Ldecllist = 83,                 /* Ldecllist  */
  YYSYMBOL_Ldecl = 84,                     /* Ldecl  */
  YYSYMBOL_Idlist = 85,                    /* Idlist  */
  YYSYMBOL_Mainblock = 86,                 /* Mainblock  */
  YYSYMBOL_Typedefblock = 87,              /* Typedefblock  */
  YYSYMBOL_Typedeflist = 88,               /* Typedeflist  */
  YYSYMBOL_Typedef = 89,                   /* Typedef  */
  YYSYMBOL_Fielddeclist = 90,              /* Fielddeclist  */
  YYSYMBOL_Fielddecl = 91,                 /* Fielddecl  */
  YYSYMBOL_Field = 92,                     /* Field  */
  YYSYMBOL_body = 93,                      /* body  */
  YYSYMBOL_slist = 94,                     /* slist  */
  YYSYMBOL_ifstmt = 95,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 96,                 /* whilestmt  */
  YYSYMBOL_repeatstmt = 97,                /* repeatstmt  */
  YYSYMBOL_dowhilestmt = 98,               /* dowhilestmt  */
  YYSYMBOL_stmt = 99,                      /* stmt  */
  YYSYMBOL_retstmt = 100,                  /* retstmt  */
  YYSYMBOL_inputstmt = 101,                /* inputstmt  */
  YYSYMBOL_outputstmt = 102,               /* outputstmt  */
  YYSYMBOL_assgstmt = 103,                 /* assgstmt  */
  YYSYMBOL_expr = 104,                     /* expr  */
  YYSYMBOL_Arglist = 105                   /* Arglist  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   772

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
      56,    57,     2,     2,    53,     2,    60,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
       2,    61,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    40,    48,    51,    55,    61,    62,    65,
      68,    69,    71,    72,    73,    74,    77,    78,    80,    81,
      84,    85,    88,    89,    92,    93,    95,    96,    99,   100,
     102,   103,   105,   106,   109,   127,   139,   140,   143,   146,
     147,   148,   151,   152,   155,   156,   159,   162,   163,   166,
     179,   180,   183,   184,   187,   190,   191,   194,   197,   198,
     199,   203,   206,   207,   210,   211,   216,   219,   221,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   237,   242,   244,   252,   255,   259,   264,   276,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   306,   318,   327,   328,
     329,   330,   331,   332,   333,   334,   337,   338
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
  "WRITE", "BREAK", "CONTINUE", "INT", "STR", "STRING", "SELF", "BRKPND",
  "PLUS", "MINUS", "MUL", "DIV", "END", "BEGN", "LT", "GT", "LE", "GE",
  "NE", "EQ", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE",
  "DECL", "ENDDECL", "REPEAT", "UNTIL", "MAIN", "RETURN", "AND", "TYPE",
  "ENDTYPE", "ALLOC", "NULL_SPL", "FREE", "INITIALIZE", "CLASS",
  "ENDCLASS", "EXTENDS", "DELETE", "NEW", "MOD", "';'", "','", "'['",
  "']'", "'('", "')'", "'{'", "'}'", "'.'", "'='", "$accept", "program",
  "Gdeclblock", "Gdecllist", "Gdecl", "Gidlist", "Gid", "ClassDefBlock",
  "ClassDefList", "ClassDef", "Cname", "MethodDecl", "MDecl",
  "MethodDefns", "MDef", "Fdefblock", "Fdef", "Paramlist", "Param", "type",
  "Ldeclblock", "Ldecllist", "Ldecl", "Idlist", "Mainblock",
  "Typedefblock", "Typedeflist", "Typedef", "Fielddeclist", "Fielddecl",
  "Field", "body", "slist", "ifstmt", "whilestmt", "repeatstmt",
  "dowhilestmt", "stmt", "retstmt", "inputstmt", "outputstmt", "assgstmt",
  "expr", "Arglist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-165)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -33,    27,    11,  -165,   -19,   -22,    20,  -165,    31,
    -165,  -165,     6,    25,    26,   149,  -165,  -165,    48,  -165,
      17,  -165,    44,   172,   194,    63,  -165,  -165,  -165,    56,
       4,  -165,   160,  -165,  -165,   147,  -165,   225,  -165,   201,
     -33,   194,  -165,   203,  -165,   182,   173,  -165,  -165,  -165,
     149,  -165,  -165,   118,   102,  -165,  -165,  -165,   168,   282,
     211,  -165,   305,  -165,   227,   149,   235,    75,  -165,   201,
      78,  -165,   237,   332,  -165,   349,   188,   149,  -165,   244,
      24,   355,   184,  -165,    65,  -165,   247,  -165,   200,    93,
    -165,   144,  -165,  -165,    84,   209,   210,   221,   222,   218,
     229,   226,   232,   349,   349,   167,   233,   153,   249,  -165,
    -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,    16,
    -165,   279,   240,    82,   149,  -165,   149,  -165,  -165,   182,
     239,  -165,   281,   167,   289,   167,    32,   167,  -165,  -165,
     297,  -165,   167,   167,   364,   264,  -165,   -38,  -165,   252,
    -165,   254,   261,   267,   167,   117,   615,   320,   324,   167,
    -165,  -165,  -165,  -165,   276,   283,   179,    42,  -165,   211,
     182,  -165,   547,  -165,   648,   106,    66,   394,  -165,   407,
     445,   277,   290,   167,    86,   293,   334,   294,   343,   458,
     145,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,  -165,   301,  -165,   668,    90,  -165,   308,
    -165,   315,   211,   306,  -165,   167,   321,   326,   329,   356,
     351,   167,   167,   560,  -165,   708,   180,  -165,   328,  -165,
     331,  -165,  -165,   193,   100,   100,  -165,  -165,   177,   177,
     177,   177,   177,   177,   721,  -165,   339,  -165,   335,   207,
    -165,  -165,   327,   167,   602,  -165,  -165,  -165,   349,   349,
     496,   509,  -165,   167,  -165,  -165,  -165,  -165,  -165,   182,
     338,  -165,   688,   340,   214,   299,   -12,   348,   708,   211,
     182,  -165,   352,   349,   353,   354,  -165,  -165,   333,   211,
    -165,   314,  -165,  -165,  -165,   342,   360,  -165,  -165
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     0,     0,    51,     0,
      53,     1,     0,     0,     0,     0,    50,    52,    22,    17,
       0,    19,     0,     0,     0,     0,    41,    39,    40,     0,
       0,    56,     0,    16,    18,     0,     6,     0,     8,     0,
      39,     0,    33,     0,     3,     0,     0,    54,    55,    23,
       0,     5,     7,    15,     0,    11,    32,     2,     0,     0,
       0,    57,     0,    25,     0,     0,     0,     0,     9,     0,
       0,    43,     0,     0,    45,     0,     0,     0,    24,     0,
       0,     0,     0,    14,     0,    37,     0,    10,     0,     0,
      48,     0,    42,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    76,    77,    63,    78,    69,    70,    71,    49,     0,
      29,     0,     0,     0,     0,    12,     0,    13,    38,     0,
       0,    46,     0,     0,     0,     0,     0,     0,    74,    75,
       0,    80,     0,     0,     0,     0,   102,   104,   103,     0,
     114,     0,     0,     0,     0,   110,     0,     0,     0,     0,
      61,    62,    21,    28,     0,     0,     0,     0,    36,     0,
       0,    47,     0,    59,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,    58,     0,     0,    27,     0,
      20,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   117,     0,   112,     0,   111,
       0,   101,   109,     0,    89,    90,    91,    92,    94,    95,
      97,    96,    98,    99,   100,    93,     0,    88,     0,     0,
      26,    35,     0,     0,     0,    82,    84,    85,     0,     0,
       0,     0,   105,     0,   107,   113,   115,   108,    79,     0,
       0,    34,     0,     0,     0,     0,     0,     0,   116,     0,
       0,    87,     0,     0,     0,     0,    68,    67,     0,     0,
      83,     0,    65,    66,    31,     0,     0,    30,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,  -165,   366,  -165,   357,  -165,  -165,   387,
    -165,   369,    12,   296,  -110,  -165,   384,   -67,   309,     0,
    -128,  -165,   363,  -165,    96,  -165,  -165,   428,   388,     2,
     -75,  -164,   -97,  -165,  -165,  -165,  -165,  -106,  -165,  -165,
    -165,  -165,   -88,   250
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,    24,    37,    38,    54,    55,    13,    20,    21,
      22,    62,    63,   119,   120,    41,    42,    84,    85,    86,
      60,    73,    74,    91,     4,     5,     9,    10,    30,    31,
     155,    76,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   225,   226
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     107,   169,   161,    89,     6,   211,   144,   145,    26,   163,
      18,    11,     1,    27,    28,    29,   183,   156,   184,   259,
      26,    18,   134,    39,    43,    27,    28,    12,   107,   107,
      29,     7,    48,   107,    14,     7,   175,    39,   161,   161,
     286,    43,   212,     2,    99,   172,    26,   174,   252,   177,
      64,    27,    28,    19,   179,   180,   166,   163,    23,    72,
      46,   176,    79,    47,    33,    64,   189,    48,     8,   107,
     107,   206,    16,    72,    78,   162,    61,   121,    15,    26,
     123,    79,    26,    25,    27,    28,    26,    27,    28,   146,
     147,    27,    28,    78,    26,   223,    32,   148,    99,    27,
      28,   210,    35,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   288,   193,   194,   126,   121,
      44,    45,   127,   217,   121,   295,   158,   254,   149,   150,
     151,   152,    83,   260,   261,    88,   153,    57,   133,   165,
     249,   279,   154,   224,   134,   135,   126,   248,   146,   147,
     130,   202,   289,    26,    68,    69,   148,    99,    27,    28,
     215,   274,   275,   216,    49,   272,   134,   121,   161,   161,
     146,   147,    66,   190,    67,   278,    26,   158,   148,    99,
      50,    27,    28,   107,   107,   161,   291,   149,   150,   151,
     152,   191,   192,   193,   194,   153,   131,   132,    26,   107,
     107,   154,   232,    40,    28,    53,    36,    58,   107,   149,
     150,   151,   152,   158,   159,    59,   107,   153,    94,    95,
      96,    97,    98,   154,    70,    61,    99,   100,   202,    26,
      75,    80,   126,   263,    27,    28,   209,   264,    82,   125,
     101,    90,   283,   284,   102,   103,   263,   118,   122,   104,
     267,   128,   105,    94,    95,    96,    97,    98,   129,    51,
     126,    99,   100,   106,   270,   136,   137,   160,    94,    95,
      96,    97,    98,   138,   139,   101,    99,   100,   140,   102,
     103,   141,   142,   164,   104,   171,    26,   105,   143,   157,
     101,    27,    28,   173,   102,   103,   123,   170,   106,   104,
     182,   178,   105,    94,    95,    96,    97,    98,   185,    26,
     186,    99,   100,   106,    27,    28,    71,   187,    94,    95,
      96,    97,    98,   188,   204,   101,    99,   100,   205,   102,
     103,   285,   207,   221,   104,   208,    26,   105,   228,    77,
     101,    27,    28,   296,   102,   103,   222,   230,   106,   104,
     227,   229,   105,    94,    95,    96,    97,    98,   246,    26,
     250,    99,   100,   106,    27,    28,    92,   253,    94,    95,
      96,    97,    98,   255,   251,   101,    99,   100,   256,   102,
     103,   257,   259,   258,   104,   265,   271,   105,   266,   124,
     101,   268,   294,   269,   181,   103,   280,   282,   106,   104,
     287,   297,   105,    52,   290,   292,   293,    34,   191,   192,
     193,   194,   298,   106,   195,   196,   197,   198,   199,   200,
     167,   191,   192,   193,   194,    56,    87,   195,   196,   197,
     198,   199,   200,   201,    81,   168,    93,    17,    65,     0,
     233,     0,     0,     0,     0,   202,   201,     0,     0,     0,
       0,   218,     0,     0,     0,     0,     0,     0,   202,   191,
     192,   193,   194,     0,   219,   195,   196,   197,   198,   199,
     200,     0,   191,   192,   193,   194,     0,     0,   195,   196,
     197,   198,   199,   200,   201,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   202,   201,     0,     0,
       0,     0,   220,     0,     0,     0,     0,     0,     0,   202,
     191,   192,   193,   194,     0,   231,   195,   196,   197,   198,
     199,   200,     0,   191,   192,   193,   194,     0,     0,   195,
     196,   197,   198,   199,   200,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   202,   201,     0,
       0,     0,     0,   276,     0,     0,     0,     0,     0,     0,
     202,   191,   192,   193,   194,     0,   277,   195,   196,   197,
     198,   199,   200,     0,   191,   192,   193,   194,     0,     0,
     195,   196,   197,   198,   199,   200,   201,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,   201,
       0,     0,   213,     0,     0,     0,     0,     0,     0,     0,
       0,   202,     0,     0,     0,   262,   191,   192,   193,   194,
       0,     0,   195,   196,   197,   198,   199,   200,     0,   191,
     192,   193,   194,     0,     0,   195,   196,   197,   198,   199,
     200,   201,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   202,   201,     0,     0,   273,     0,     0,
       0,     0,   191,   192,   193,   194,   202,   203,   195,   196,
     197,   198,   199,   200,     0,     0,     0,     0,     0,     0,
       0,     0,   191,   192,   193,   194,     0,   201,   195,   196,
     197,   198,   199,   200,     0,     0,     0,     0,     0,   202,
     214,     0,   191,   192,   193,   194,     0,   201,   195,   196,
     197,   198,   199,   200,     0,     0,     0,     0,     0,   202,
     247,     0,   191,   192,   193,   194,     0,   201,   195,   196,
     197,   198,   199,   200,     0,   191,   192,   193,   194,   202,
     281,   195,   196,   197,   198,   199,   200,   201,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   202,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   202
};

static const yytype_int16 yycheck[] =
{
      75,   129,   108,    70,    37,   169,   103,   104,     4,   119,
       4,     0,     9,     9,    10,    15,    54,   105,    56,    31,
       4,     4,    60,    23,    24,     9,    10,    46,   103,   104,
      30,     4,    30,   108,    56,     4,     4,    37,   144,   145,
      52,    41,   170,    40,    12,   133,     4,   135,   212,   137,
      50,     9,    10,    47,   142,   143,   123,   167,    33,    59,
       4,   136,    62,    59,    47,    65,   154,    65,    41,   144,
     145,   159,    41,    73,    62,    59,    52,    77,    58,     4,
      56,    81,     4,    57,     9,    10,     4,     9,    10,     3,
       4,     9,    10,    81,     4,   183,    48,    11,    12,     9,
      10,    59,    58,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   279,    16,    17,    53,   119,
      24,    58,    57,    57,   124,   289,    60,   215,    42,    43,
      44,    45,    57,   221,   222,    57,    50,    41,    54,    57,
     207,   269,    56,    57,    60,    61,    53,    57,     3,     4,
      57,    51,   280,     4,    52,    53,    11,    12,     9,    10,
      54,   258,   259,    57,     4,   253,    60,   167,   274,   275,
       3,     4,    54,    56,    56,   263,     4,    60,    11,    12,
      33,     9,    10,   258,   259,   291,   283,    42,    43,    44,
      45,    14,    15,    16,    17,    50,    52,    53,     4,   274,
     275,    56,    57,     9,    10,     4,    34,     4,   283,    42,
      43,    44,    45,    60,    61,    33,   291,    50,     4,     5,
       6,     7,     8,    56,    56,    52,    12,    13,    51,     4,
      19,     4,    53,    53,     9,    10,    57,    57,     3,    55,
      26,     4,    28,    29,    30,    31,    53,    59,     4,    35,
      57,     4,    38,     4,     5,     6,     7,     8,    58,    34,
      53,    12,    13,    49,    57,    56,    56,    18,     4,     5,
       6,     7,     8,    52,    52,    26,    12,    13,    60,    30,
      31,    52,    56,     4,    35,     4,     4,    38,    56,    56,
      26,     9,    10,     4,    30,    31,    56,    58,    49,    35,
      36,     4,    38,     4,     5,     6,     7,     8,    56,     4,
      56,    12,    13,    49,     9,    10,    34,    56,     4,     5,
       6,     7,     8,    56,     4,    26,    12,    13,     4,    30,
      31,    32,    56,    56,    35,    52,     4,    38,     4,    34,
      26,     9,    10,    29,    30,    31,    56,     4,    49,    35,
      57,    57,    38,     4,     5,     6,     7,     8,    57,     4,
      52,    12,    13,    49,     9,    10,    34,    61,     4,     5,
       6,     7,     8,    52,    59,    26,    12,    13,    52,    30,
      31,    52,    31,    27,    35,    57,    59,    38,    57,    34,
      26,    52,    59,    58,    30,    31,    58,    57,    49,    35,
      52,    59,    38,    37,    52,    52,    52,    20,    14,    15,
      16,    17,    52,    49,    20,    21,    22,    23,    24,    25,
     124,    14,    15,    16,    17,    41,    69,    20,    21,    22,
      23,    24,    25,    39,    65,   126,    73,     9,    50,    -1,
     190,    -1,    -1,    -1,    -1,    51,    39,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    51,    14,
      15,    16,    17,    -1,    57,    20,    21,    22,    23,    24,
      25,    -1,    14,    15,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    39,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      14,    15,    16,    17,    -1,    57,    20,    21,    22,    23,
      24,    25,    -1,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    39,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    14,    15,    16,    17,    -1,    57,    20,    21,    22,
      23,    24,    25,    -1,    14,    15,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    39,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    55,    14,    15,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    14,
      15,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    39,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    51,    52,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    -1,    39,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    14,    15,    16,    17,    -1,    39,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    14,    15,    16,    17,    -1,    39,    20,    21,
      22,    23,    24,    25,    -1,    14,    15,    16,    17,    51,
      52,    20,    21,    22,    23,    24,    25,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    40,    63,    86,    87,    37,     4,    41,    88,
      89,     0,    46,    69,    56,    58,    41,    89,     4,    47,
      70,    71,    72,    33,    64,    57,     4,     9,    10,    81,
      90,    91,    48,    47,    71,    58,    34,    65,    66,    81,
       9,    77,    78,    81,    86,    58,     4,    59,    91,     4,
      33,    34,    66,     4,    67,    68,    78,    86,     4,    33,
      82,    52,    73,    74,    81,    90,    54,    56,    52,    53,
      56,    34,    81,    83,    84,    19,    93,    34,    74,    81,
       4,    73,     3,    57,    79,    80,    81,    68,    57,    79,
       4,    85,    34,    84,     4,     5,     6,     7,     8,    12,
      13,    26,    30,    31,    35,    38,    49,    92,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    59,    75,
      76,    81,     4,    56,    34,    55,    53,    57,     4,    58,
      57,    52,    53,    54,    60,    61,    56,    56,    52,    52,
      60,    52,    56,    56,    94,    94,     3,     4,    11,    42,
      43,    44,    45,    50,    56,    92,   104,    56,    60,    61,
      18,    99,    59,    76,     4,    57,    79,    75,    80,    82,
      58,     4,   104,     4,   104,     4,    92,   104,     4,   104,
     104,    30,    36,    54,    56,    56,    56,    56,    56,   104,
      56,    14,    15,    16,    17,    20,    21,    22,    23,    24,
      25,    39,    51,    52,     4,     4,   104,    56,    52,    57,
      59,    93,    82,    55,    52,    54,    57,    57,    57,    57,
      57,    56,    56,   104,    57,   104,   105,    57,     4,    57,
       4,    57,    57,   105,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,    57,    52,    57,    79,
      52,    59,    93,    61,   104,    52,    52,    52,    27,    31,
     104,   104,    55,    53,    57,    57,    57,    57,    52,    58,
      57,    59,   104,    55,    94,    94,    57,    57,   104,    82,
      58,    52,    57,    28,    29,    32,    52,    52,    93,    82,
      52,    94,    52,    52,    59,    93,    29,    59,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    81,
      81,    81,    82,    82,    83,    83,    84,    85,    85,    86,
      87,    87,    88,    88,    89,    90,    90,    91,    92,    92,
      92,    93,    94,    94,    95,    95,    96,    97,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,   100,   101,   101,   101,   102,   103,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     1,     3,     2,     2,     1,     3,
       3,     1,     4,     4,     3,     1,     3,     2,     2,     1,
       8,     7,     1,     3,     2,     1,     6,     5,     2,     1,
       9,     8,     2,     1,     9,     8,     3,     1,     2,     1,
       1,     1,     3,     2,     2,     1,     3,     3,     1,     8,
       3,     2,     2,     1,     4,     2,     1,     3,     3,     3,
       3,     3,     2,     1,    10,     8,     8,     7,     7,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     5,
       2,     3,     5,     8,     5,     5,     4,     7,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     4,     3,     4,     4,     3,
       1,     3,     3,     4,     1,     4,     3,     1
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
  case 2: /* program: Typedefblock ClassDefBlock Gdeclblock Fdefblock Mainblock  */
#line 30 "exptree.y"
                                                                        {
						struct tnode* t1=createTree(-1,"void","",cnn,(yyvsp[-1].no),(yyvsp[0].no));
						 (yyval.no)=createTree(-1,"void","",cnn,(yyvsp[-2].no),t1);
						printf("\n Printing symbol table\n");
						  struct Gsymbol* t=symbtable;
						  symbtable=NULL;
						 add_funcdefs_class((yyvsp[-3].no));
						 symbtable=t;
							
						  }
#line 1621 "y.tab.c"
    break;

  case 3: /* program: Typedefblock ClassDefBlock Gdeclblock Mainblock  */
#line 40 "exptree.y"
                                                                                { (yyval.no)=createTree(-1,"void","",cnn,(yyvsp[-1].no),(yyvsp[0].no));
	 					 printf("\n Printing symbol table\n");
						  struct Gsymbol* t=symbtable;
						  symbtable=NULL;
						 add_funcdefs_class((yyvsp[-2].no));
						 symbtable=t;
						  }
#line 1633 "y.tab.c"
    break;

  case 4: /* program: Mainblock  */
#line 48 "exptree.y"
                                                {(yyval.no)=(yyvsp[0].no);}
#line 1639 "y.tab.c"
    break;

  case 5: /* Gdeclblock: DECL Gdecllist ENDDECL  */
#line 51 "exptree.y"
                                        {(yyval.no)=createTree(-1,"void","",gdeclblk,(yyvsp[-1].no),NULL);
					 before_code();
					 printf("Global decl happening.............\n");
					}
#line 1648 "y.tab.c"
    break;

  case 6: /* Gdeclblock: DECL ENDDECL  */
#line 55 "exptree.y"
                                {(yyval.no)=NULL;
	    			before_code();
	    			
	    			}
#line 1657 "y.tab.c"
    break;

  case 7: /* Gdecllist: Gdecllist Gdecl  */
#line 61 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",gdeclst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1663 "y.tab.c"
    break;

  case 8: /* Gdecllist: Gdecl  */
#line 62 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1669 "y.tab.c"
    break;

  case 9: /* Gdecl: type Gidlist ';'  */
#line 65 "exptree.y"
                                {assign_type((yyvsp[-1].no),(yyvsp[-2].no)->varname);(yyval.no)=createTree(-1,"void","",gdecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1675 "y.tab.c"
    break;

  case 10: /* Gidlist: Gidlist ',' Gid  */
#line 68 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",gidlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1681 "y.tab.c"
    break;

  case 11: /* Gidlist: Gid  */
#line 69 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1687 "y.tab.c"
    break;

  case 12: /* Gid: ID '[' NUM ']'  */
#line 71 "exptree.y"
                        {(yyval.no)=createTree(-1,"void","",arrdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1693 "y.tab.c"
    break;

  case 13: /* Gid: ID '(' Paramlist ')'  */
#line 72 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",funcdecl,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1699 "y.tab.c"
    break;

  case 14: /* Gid: ID '(' ')'  */
#line 73 "exptree.y"
                        {(yyval.no)=createTree(-1,"void","",funcdecl,(yyvsp[-2].no),NULL);}
#line 1705 "y.tab.c"
    break;

  case 15: /* Gid: ID  */
#line 74 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1711 "y.tab.c"
    break;

  case 16: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 77 "exptree.y"
                                            {(yyval.no)=(yyvsp[-1].no);}
#line 1717 "y.tab.c"
    break;

  case 17: /* ClassDefBlock: CLASS ENDCLASS  */
#line 78 "exptree.y"
                                 {(yyval.no)=NULL;}
#line 1723 "y.tab.c"
    break;

  case 18: /* ClassDefList: ClassDefList ClassDef  */
#line 80 "exptree.y"
                                     {(yyval.no)=createTree(-1,"void","",classdeflst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1729 "y.tab.c"
    break;

  case 19: /* ClassDefList: ClassDef  */
#line 81 "exptree.y"
                                {(yyval.no)=(yyvsp[0].no);}
#line 1735 "y.tab.c"
    break;

  case 20: /* ClassDef: Cname '{' DECL Fielddeclist MethodDecl ENDDECL MethodDefns '}'  */
#line 84 "exptree.y"
                                                                          {(yyval.no)=createTree(-1,"void","",classdef,(yyvsp[-7].no),createTree(-1,"void","",cnn,(yyvsp[-4].no),createTree(-1,"void","",cnn,(yyvsp[-3].no),(yyvsp[-1].no))));}
#line 1741 "y.tab.c"
    break;

  case 21: /* ClassDef: Cname '{' DECL MethodDecl ENDDECL MethodDefns '}'  */
#line 85 "exptree.y"
                                                              {(yyval.no)=createTree(-1,"void","",classdef,(yyvsp[-6].no),createTree(-1,"void","",cnn,NULL,createTree(-1,"void","",cnn,(yyvsp[-3].no),(yyvsp[-1].no))));}
#line 1747 "y.tab.c"
    break;

  case 22: /* Cname: ID  */
#line 88 "exptree.y"
           {(yyval.no)=createTree(-1,"void","",cnamend,(yyvsp[0].no),NULL);}
#line 1753 "y.tab.c"
    break;

  case 23: /* Cname: ID EXTENDS ID  */
#line 89 "exptree.y"
                        {(yyval.no)=createTree(-1,"void","",cnamend,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1759 "y.tab.c"
    break;

  case 24: /* MethodDecl: MethodDecl MDecl  */
#line 92 "exptree.y"
                              {(yyval.no)=createTree(-1,"void","",mdeclst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1765 "y.tab.c"
    break;

  case 25: /* MethodDecl: MDecl  */
#line 93 "exptree.y"
                   {(yyval.no)=(yyvsp[0].no);}
#line 1771 "y.tab.c"
    break;

  case 26: /* MDecl: type ID '(' Paramlist ')' ';'  */
#line 95 "exptree.y"
                                     {(yyval.no)=createTree(-1,"void","",mdecl,(yyvsp[-5].no),createTree(-1,"void","",cnn,(yyvsp[-4].no),(yyvsp[-2].no)));}
#line 1777 "y.tab.c"
    break;

  case 27: /* MDecl: type ID '(' ')' ';'  */
#line 96 "exptree.y"
                             {(yyval.no)=createTree(-1,"void","",mdecl,(yyvsp[-4].no),createTree(-1,"void","",cnn,(yyvsp[-3].no),NULL));}
#line 1783 "y.tab.c"
    break;

  case 28: /* MethodDefns: MethodDefns MDef  */
#line 99 "exptree.y"
                               {(yyval.no)=createTree(-1,"void","",mdeflst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1789 "y.tab.c"
    break;

  case 29: /* MethodDefns: MDef  */
#line 100 "exptree.y"
                   {(yyval.no)=(yyvsp[0].no);}
#line 1795 "y.tab.c"
    break;

  case 30: /* MDef: type ID '(' Paramlist ')' '{' Ldeclblock body '}'  */
#line 102 "exptree.y"
                                                          {(yyval.no)=createTree(-1,"void","",mdef,(yyvsp[-8].no),createTree(-1,"void","",cnn,(yyvsp[-7].no),createTree(-1,"void","",cnn,(yyvsp[-5].no),createTree(-1,"void","",cnn,(yyvsp[-2].no),(yyvsp[-1].no)))));}
#line 1801 "y.tab.c"
    break;

  case 31: /* MDef: type ID '(' ')' '{' Ldeclblock body '}'  */
#line 103 "exptree.y"
                                                        {(yyval.no)=createTree(-1,"void","",mdef,(yyvsp[-7].no),createTree(-1,"void","",cnn,(yyvsp[-6].no),createTree(-1,"void","",cnn,NULL,createTree(-1,"void","",cnn,(yyvsp[-2].no),(yyvsp[-1].no)))));}
#line 1807 "y.tab.c"
    break;

  case 32: /* Fdefblock: Fdefblock Fdef  */
#line 105 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",fdefblk,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1813 "y.tab.c"
    break;

  case 33: /* Fdefblock: Fdef  */
#line 106 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1819 "y.tab.c"
    break;

  case 34: /* Fdef: type ID '(' Paramlist ')' '{' Ldeclblock body '}'  */
#line 109 "exptree.y"
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
#line 1839 "y.tab.c"
    break;

  case 35: /* Fdef: type ID '(' ')' '{' Ldeclblock body '}'  */
#line 127 "exptree.y"
                                                                {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 								printf("2Funcn %s is undeclared\n",(yyvsp[-6].no)->varname);
	 								exit(1);
	 			 				}
	 			 				(yyval.no)=createTree(-1,(yyvsp[-7].no)->type->name,"",fndef,createTree(-1,"void","",cnn,(yyvsp[-7].no),(yyvsp[-6].no)),createTree(-1,"void","",cnn,NULL,createTree(-1,"void","",cnn,(yyvsp[-2].no),(yyvsp[-1].no))));
	 			 				check_decl((yyvsp[-7].no)->type,(yyvsp[-1].no));
	 			 				
	 			 				code_gen((yyval.no));
	 			 				destroy_lsymbtable();
	 			 				}
#line 1854 "y.tab.c"
    break;

  case 36: /* Paramlist: Paramlist ',' Param  */
#line 139 "exptree.y"
                                        {(yyval.no)=createTree(-1,"void","",paramlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1860 "y.tab.c"
    break;

  case 37: /* Paramlist: Param  */
#line 140 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 1866 "y.tab.c"
    break;

  case 38: /* Param: type ID  */
#line 143 "exptree.y"
                {(yyval.no)=createTree(-1,"void","",param,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1872 "y.tab.c"
    break;

  case 39: /* type: INT  */
#line 146 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1878 "y.tab.c"
    break;

  case 40: /* type: STR  */
#line 147 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1884 "y.tab.c"
    break;

  case 41: /* type: ID  */
#line 148 "exptree.y"
                {(yyval.no)=(yyvsp[0].no);}
#line 1890 "y.tab.c"
    break;

  case 42: /* Ldeclblock: DECL Ldecllist ENDDECL  */
#line 151 "exptree.y"
                                    {(yyval.no)=createTree(-1,"void","",ldeclblk,(yyvsp[-1].no),NULL);}
#line 1896 "y.tab.c"
    break;

  case 43: /* Ldeclblock: DECL ENDDECL  */
#line 152 "exptree.y"
                                {(yyval.no)=NULL;}
#line 1902 "y.tab.c"
    break;

  case 44: /* Ldecllist: Ldecllist Ldecl  */
#line 155 "exptree.y"
                            {(yyval.no)=createTree(-1,"void","",ldecllst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1908 "y.tab.c"
    break;

  case 45: /* Ldecllist: Ldecl  */
#line 156 "exptree.y"
                    {(yyval.no)=(yyvsp[0].no);}
#line 1914 "y.tab.c"
    break;

  case 46: /* Ldecl: type Idlist ';'  */
#line 159 "exptree.y"
                       {(yyval.no)=createTree(-1,"void","",ldecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1920 "y.tab.c"
    break;

  case 47: /* Idlist: Idlist ',' ID  */
#line 162 "exptree.y"
                       {(yyval.no)=createTree(-1,"void","",idlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 1926 "y.tab.c"
    break;

  case 48: /* Idlist: ID  */
#line 163 "exptree.y"
             {(yyval.no)=(yyvsp[0].no);}
#line 1932 "y.tab.c"
    break;

  case 49: /* Mainblock: INT MAIN '(' ')' '{' Ldeclblock body '}'  */
#line 166 "exptree.y"
                                                     {
							(yyval.no)=createTree(-1,"void","",mainnd,(yyvsp[-2].no),(yyvsp[-1].no));
							printf("\n Printing Local symbol table\n");
							struct Lsymbol* t=(yyvsp[-7].no)->Lentry;
							
							printf("Entering main check.............\n");
							check_decl(TLookup("INT"),(yyvsp[-1].no));
							printf("Exiting main check.............\n");
							code_gen((yyval.no));
							destroy_lsymbtable();
							}
#line 1948 "y.tab.c"
    break;

  case 50: /* Typedefblock: TYPE Typedeflist ENDTYPE  */
#line 179 "exptree.y"
                                        {(yyval.no)=(yyvsp[-1].no);}
#line 1954 "y.tab.c"
    break;

  case 51: /* Typedefblock: TYPE ENDTYPE  */
#line 180 "exptree.y"
                                {(yyval.no)=NULL;}
#line 1960 "y.tab.c"
    break;

  case 52: /* Typedeflist: Typedeflist Typedef  */
#line 183 "exptree.y"
                                 {(yyval.no)=createTree(-1,"void","",typedeflst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1966 "y.tab.c"
    break;

  case 53: /* Typedeflist: Typedef  */
#line 184 "exptree.y"
                       {(yyval.no)=(yyvsp[0].no);}
#line 1972 "y.tab.c"
    break;

  case 54: /* Typedef: ID '{' Fielddeclist '}'  */
#line 187 "exptree.y"
                                 {struct Fieldlist* fields=convert_fldlst((yyvsp[-1].no),(yyvsp[-3].no)->varname);TInstall((yyvsp[-3].no)->varname,count_fields(fields),fields);(yyval.no)=createTree(-1,"void","",typedefnd,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1978 "y.tab.c"
    break;

  case 55: /* Fielddeclist: Fielddeclist Fielddecl  */
#line 190 "exptree.y"
                                     {(yyval.no)=createTree(-1,"void","",fielddecllst,(yyvsp[-1].no),(yyvsp[0].no));}
#line 1984 "y.tab.c"
    break;

  case 56: /* Fielddeclist: Fielddecl  */
#line 191 "exptree.y"
                                {(yyval.no)=(yyvsp[0].no);}
#line 1990 "y.tab.c"
    break;

  case 57: /* Fielddecl: type ID ';'  */
#line 194 "exptree.y"
                       {(yyval.no)=createTree(-1,"void","",fielddecl,(yyvsp[-2].no),(yyvsp[-1].no));}
#line 1996 "y.tab.c"
    break;

  case 58: /* Field: Field '.' ID  */
#line 197 "exptree.y"
                    {(yyval.no)=createTree(-1,"void","",fieldlst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2002 "y.tab.c"
    break;

  case 59: /* Field: ID '.' ID  */
#line 198 "exptree.y"
                    {(yyval.no)=createTree(-1,"void","",field,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2008 "y.tab.c"
    break;

  case 60: /* Field: SELF '.' ID  */
#line 199 "exptree.y"
                      {(yyval.no)=createTree(-1,"void","",self_field,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2014 "y.tab.c"
    break;

  case 61: /* body: BEGN slist END  */
#line 203 "exptree.y"
                      {(yyval.no)=(yyvsp[-1].no);}
#line 2020 "y.tab.c"
    break;

  case 62: /* slist: slist stmt  */
#line 206 "exptree.y"
                        {(yyval.no)=createTree(-1,"void","",cnn,(yyvsp[-1].no),(yyvsp[0].no));}
#line 2026 "y.tab.c"
    break;

  case 63: /* slist: stmt  */
#line 207 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2032 "y.tab.c"
    break;

  case 64: /* ifstmt: IF '(' expr ')' THEN slist ELSE slist ENDIF ';'  */
#line 210 "exptree.y"
                                                                {struct tnode* t=createTree(-1,"void","",el,(yyvsp[-4].no),(yyvsp[-2].no));(yyval.no)=createTree(-1,"void","",ifel,(yyvsp[-7].no),t);}
#line 2038 "y.tab.c"
    break;

  case 65: /* ifstmt: IF '(' expr ')' THEN slist ENDIF ';'  */
#line 211 "exptree.y"
                                                { struct tnode* t=createTree(-1,"void","",el,(yyvsp[-2].no),NULL);
						  
					          (yyval.no)=createTree(-1,"void","",ifel,(yyvsp[-5].no),t);}
#line 2046 "y.tab.c"
    break;

  case 66: /* whilestmt: WHILE '(' expr ')' DO slist ENDWHILE ';'  */
#line 216 "exptree.y"
                                                        {(yyval.no)=createTree(-1,"void","",whl,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 2052 "y.tab.c"
    break;

  case 67: /* repeatstmt: REPEAT slist UNTIL '(' expr ')' ';'  */
#line 219 "exptree.y"
                                                  {(yyval.no)=createTree(-1,"void","",rpt,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 2058 "y.tab.c"
    break;

  case 68: /* dowhilestmt: DO slist WHILE '(' expr ')' ';'  */
#line 221 "exptree.y"
                                                {(yyval.no)=createTree(-1,"void","",dow,(yyvsp[-5].no),(yyvsp[-2].no));}
#line 2064 "y.tab.c"
    break;

  case 69: /* stmt: inputstmt  */
#line 223 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2070 "y.tab.c"
    break;

  case 70: /* stmt: outputstmt  */
#line 224 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2076 "y.tab.c"
    break;

  case 71: /* stmt: assgstmt  */
#line 225 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2082 "y.tab.c"
    break;

  case 72: /* stmt: ifstmt  */
#line 226 "exptree.y"
                        {(yyval.no)= (yyvsp[0].no);}
#line 2088 "y.tab.c"
    break;

  case 73: /* stmt: whilestmt  */
#line 227 "exptree.y"
                        {(yyval.no) = (yyvsp[0].no);}
#line 2094 "y.tab.c"
    break;

  case 74: /* stmt: BREAK ';'  */
#line 228 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 2100 "y.tab.c"
    break;

  case 75: /* stmt: CONTINUE ';'  */
#line 229 "exptree.y"
                        {(yyval.no)=(yyvsp[-1].no);}
#line 2106 "y.tab.c"
    break;

  case 76: /* stmt: repeatstmt  */
#line 230 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 2112 "y.tab.c"
    break;

  case 77: /* stmt: dowhilestmt  */
#line 231 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 2118 "y.tab.c"
    break;

  case 78: /* stmt: retstmt  */
#line 232 "exptree.y"
                        {(yyval.no)=(yyvsp[0].no);}
#line 2124 "y.tab.c"
    break;

  case 79: /* stmt: DELETE '(' ID ')' ';'  */
#line 233 "exptree.y"
                               {(yyval.no)=createTree(-1,"void","",delnd,(yyvsp[-2].no),NULL);}
#line 2130 "y.tab.c"
    break;

  case 80: /* stmt: BRKPND ';'  */
#line 234 "exptree.y"
                    {(yyval.no)=(yyvsp[-1].no);}
#line 2136 "y.tab.c"
    break;

  case 81: /* retstmt: RETURN expr ';'  */
#line 237 "exptree.y"
                                {
				(yyval.no)=createTree(-1,(yyvsp[-1].no)->type->name,"",retnd,(yyvsp[-1].no),NULL);
				}
#line 2144 "y.tab.c"
    break;

  case 82: /* inputstmt: READ '(' ID ')' ';'  */
#line 242 "exptree.y"
                                {
	 			 (yyval.no)=createTree(-1,"void","",rd,(yyvsp[-2].no),NULL);printf("Reachinfg read\n");}
#line 2151 "y.tab.c"
    break;

  case 83: /* inputstmt: READ '(' ID '[' expr ']' ')' ';'  */
#line 244 "exptree.y"
                                             {if(lookup((yyvsp[-5].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-5].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-5].no)->varname);
	 			 
	 			 	struct tnode* temp=createTree(-1,t->type->name,"",arrasg,(yyvsp[-5].no),(yyvsp[-3].no));
	 			 	(yyval.no)=createTree(-1,"void","",rd,temp,NULL);}
#line 2164 "y.tab.c"
    break;

  case 84: /* inputstmt: READ '(' Field ')' ';'  */
#line 252 "exptree.y"
                                  {(yyval.no)=createTree(-1,"void","",rd,(yyvsp[-2].no),NULL);}
#line 2170 "y.tab.c"
    break;

  case 85: /* outputstmt: WRITE '(' expr ')' ';'  */
#line 255 "exptree.y"
                                    {(yyval.no) = createTree(-1,"void","",wr,(yyvsp[-2].no),NULL);}
#line 2176 "y.tab.c"
    break;

  case 86: /* assgstmt: ID '=' expr ';'  */
#line 259 "exptree.y"
                           {
	 			 
	 			 (yyval.no) = createTree(-1,"void","",asg,(yyvsp[-3].no),(yyvsp[-1].no));
	 			 printf("reaching asg\n");}
#line 2185 "y.tab.c"
    break;

  case 87: /* assgstmt: ID '[' expr ']' '=' expr ';'  */
#line 264 "exptree.y"
                                         {if(lookup((yyvsp[-6].no)->varname)==NULL){
	 					printf("Variable %s is undeclared\n",(yyvsp[-6].no)->varname);
	 					exit(1);
	 			 	}
	 			 	struct Gsymbol* t=lookup((yyvsp[-6].no)->varname);
	 			        
	 			 	struct tnode* temp=createTree(-1,t->type->name,"",arrasg,(yyvsp[-6].no),(yyvsp[-4].no));
	 			 	(yyval.no)=createTree(-1,"void","",asg,temp,(yyvsp[-1].no));
	 			 	
	  
	  				 }
#line 2201 "y.tab.c"
    break;

  case 88: /* assgstmt: Field '=' expr ';'  */
#line 276 "exptree.y"
                               {(yyval.no)=createTree(-1,"void","",asg,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 2207 "y.tab.c"
    break;

  case 89: /* expr: expr PLUS expr  */
#line 282 "exptree.y"
                                {(yyval.no) = createTree(-1,"INT","",ps,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2213 "y.tab.c"
    break;

  case 90: /* expr: expr MINUS expr  */
#line 283 "exptree.y"
                                {(yyval.no) = createTree(-1,"INT","",ms,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2219 "y.tab.c"
    break;

  case 91: /* expr: expr MUL expr  */
#line 284 "exptree.y"
                                {(yyval.no) = createTree(-1,"INT","",ml,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2225 "y.tab.c"
    break;

  case 92: /* expr: expr DIV expr  */
#line 285 "exptree.y"
                                {(yyval.no) = createTree(-1,"INT","",dv,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2231 "y.tab.c"
    break;

  case 93: /* expr: expr MOD expr  */
#line 286 "exptree.y"
                                {(yyval.no) = createTree(-1,"INT","",mod,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2237 "y.tab.c"
    break;

  case 94: /* expr: expr LT expr  */
#line 287 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",lt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2243 "y.tab.c"
    break;

  case 95: /* expr: expr GT expr  */
#line 288 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",gt,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2249 "y.tab.c"
    break;

  case 96: /* expr: expr GE expr  */
#line 289 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",ge,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2255 "y.tab.c"
    break;

  case 97: /* expr: expr LE expr  */
#line 290 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",le,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2261 "y.tab.c"
    break;

  case 98: /* expr: expr NE expr  */
#line 291 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",ne,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2267 "y.tab.c"
    break;

  case 99: /* expr: expr EQ expr  */
#line 292 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",eq,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2273 "y.tab.c"
    break;

  case 100: /* expr: expr AND expr  */
#line 293 "exptree.y"
                                {(yyval.no) = createTree(-1,"bool","",andnd,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2279 "y.tab.c"
    break;

  case 101: /* expr: '(' expr ')'  */
#line 294 "exptree.y"
                                {(yyval.no) = (yyvsp[-1].no);}
#line 2285 "y.tab.c"
    break;

  case 102: /* expr: NUM  */
#line 295 "exptree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2291 "y.tab.c"
    break;

  case 103: /* expr: STRING  */
#line 296 "exptree.y"
                                {(yyval.no)=(yyvsp[0].no);}
#line 2297 "y.tab.c"
    break;

  case 104: /* expr: ID  */
#line 297 "exptree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2303 "y.tab.c"
    break;

  case 105: /* expr: ID '[' expr ']'  */
#line 298 "exptree.y"
                                {if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("Variable %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-3].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type->name,"",arrval,(yyvsp[-3].no),(yyvsp[-1].no));
	 			}
#line 2316 "y.tab.c"
    break;

  case 106: /* expr: ID '(' ')'  */
#line 306 "exptree.y"
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
#line 2333 "y.tab.c"
    break;

  case 107: /* expr: ID '(' Arglist ')'  */
#line 318 "exptree.y"
                                {
	 			if(lookup((yyvsp[-3].no)->varname)==NULL){
	 				printf("4Funcn %s is undeclared\n",(yyvsp[-3].no)->varname);
	 				exit(1);
	 			 }
	 			 struct Gsymbol* t=lookup((yyvsp[-3].no)->varname);
	 			 
	 			 (yyval.no)=createTree(-1,t->type->name,"",fncall,(yyvsp[-3].no),(yyvsp[-1].no));
	 			 }
#line 2347 "y.tab.c"
    break;

  case 108: /* expr: Field '(' Arglist ')'  */
#line 327 "exptree.y"
                                 {(yyval.no)=createTree(-1,"void","",metcall,(yyvsp[-3].no),(yyvsp[-1].no));}
#line 2353 "y.tab.c"
    break;

  case 109: /* expr: Field '(' ')'  */
#line 328 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",metcall,(yyvsp[-2].no),NULL);}
#line 2359 "y.tab.c"
    break;

  case 110: /* expr: Field  */
#line 329 "exptree.y"
                        {(yyval.no)=createTree(-1,"void","",fieldval,(yyvsp[0].no),NULL);}
#line 2365 "y.tab.c"
    break;

  case 111: /* expr: INITIALIZE '(' ')'  */
#line 330 "exptree.y"
                                {(yyval.no)=createTree(-1,"INT","",initnd,NULL,NULL);printf("reachinf here for newnd.....\n");}
#line 2371 "y.tab.c"
    break;

  case 112: /* expr: ALLOC '(' ')'  */
#line 331 "exptree.y"
                                {(yyval.no)=createTree(-1,"INT","",allocnd,NULL,NULL);}
#line 2377 "y.tab.c"
    break;

  case 113: /* expr: FREE '(' ID ')'  */
#line 332 "exptree.y"
                                {(yyval.no)=createTree(-1,"INT","",freend,(yyvsp[-1].no),NULL);}
#line 2383 "y.tab.c"
    break;

  case 114: /* expr: NULL_SPL  */
#line 333 "exptree.y"
                        {(yyval.no)=createTree(-1,"NULL","",nullnd,NULL,NULL);}
#line 2389 "y.tab.c"
    break;

  case 115: /* expr: NEW '(' ID ')'  */
#line 334 "exptree.y"
                          {printf("reachinf here for newnd.....\n");(yyval.no)=createTree(-1,"void","",newnd,(yyvsp[-1].no),NULL);}
#line 2395 "y.tab.c"
    break;

  case 116: /* Arglist: Arglist ',' expr  */
#line 337 "exptree.y"
                                {(yyval.no)=createTree(-1,"void","",arglst,(yyvsp[-2].no),(yyvsp[0].no));}
#line 2401 "y.tab.c"
    break;

  case 117: /* Arglist: expr  */
#line 338 "exptree.y"
                 {(yyval.no)=(yyvsp[0].no);}
#line 2407 "y.tab.c"
    break;


#line 2411 "y.tab.c"

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

#line 341 "exptree.y"


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
