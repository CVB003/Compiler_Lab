/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
	

#line 174 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
