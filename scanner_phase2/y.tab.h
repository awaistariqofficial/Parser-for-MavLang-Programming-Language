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
    LAUNCH = 258,                  /* LAUNCH  */
    LOCK = 259,                    /* LOCK  */
    ELSEJET = 260,                 /* ELSEJET  */
    LOOPBACK = 261,                /* LOOPBACK  */
    RUNWAY = 262,                  /* RUNWAY  */
    MISSION = 263,                 /* MISSION  */
    ENGAGE = 264,                  /* ENGAGE  */
    DEBRIEF = 265,                 /* DEBRIEF  */
    EJECT = 266,                   /* EJECT  */
    AFTERBURN = 267,               /* AFTERBURN  */
    STALL = 268,                   /* STALL  */
    SIGNAL = 269,                  /* SIGNAL  */
    READJET = 270,                 /* READJET  */
    FLIGHTPATH = 271,              /* FLIGHTPATH  */
    TARGET = 272,                  /* TARGET  */
    ALTITUDE = 273,                /* ALTITUDE  */
    AIRSPEED = 274,                /* AIRSPEED  */
    CHARCODE = 275,                /* CHARCODE  */
    SWITCH = 276,                  /* SWITCH  */
    ASSIGN = 277,                  /* ASSIGN  */
    INC = 278,                     /* INC  */
    DEC = 279,                     /* DEC  */
    AND = 280,                     /* AND  */
    OR = 281,                      /* OR  */
    GT = 282,                      /* GT  */
    LT = 283,                      /* LT  */
    LBRACE = 284,                  /* LBRACE  */
    RBRACE = 285,                  /* RBRACE  */
    LPAREN = 286,                  /* LPAREN  */
    RPAREN = 287,                  /* RPAREN  */
    SEMICOLON = 288,               /* SEMICOLON  */
    COMMA = 289,                   /* COMMA  */
    LBRACKET = 290,                /* LBRACKET  */
    RBRACKET = 291,                /* RBRACKET  */
    IDENTIFIER = 292,              /* IDENTIFIER  */
    INTEGER = 293,                 /* INTEGER  */
    FLOAT = 294,                   /* FLOAT  */
    STRING = 295,                  /* STRING  */
    CHAR = 296                     /* CHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LAUNCH 258
#define LOCK 259
#define ELSEJET 260
#define LOOPBACK 261
#define RUNWAY 262
#define MISSION 263
#define ENGAGE 264
#define DEBRIEF 265
#define EJECT 266
#define AFTERBURN 267
#define STALL 268
#define SIGNAL 269
#define READJET 270
#define FLIGHTPATH 271
#define TARGET 272
#define ALTITUDE 273
#define AIRSPEED 274
#define CHARCODE 275
#define SWITCH 276
#define ASSIGN 277
#define INC 278
#define DEC 279
#define AND 280
#define OR 281
#define GT 282
#define LT 283
#define LBRACE 284
#define RBRACE 285
#define LPAREN 286
#define RPAREN 287
#define SEMICOLON 288
#define COMMA 289
#define LBRACKET 290
#define RBRACKET 291
#define IDENTIFIER 292
#define INTEGER 293
#define FLOAT 294
#define STRING 295
#define CHAR 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
