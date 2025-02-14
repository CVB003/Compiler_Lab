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
	

#line 156 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
