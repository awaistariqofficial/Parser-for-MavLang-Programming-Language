%{
#include <stdio.h>
#include <stdlib.h>

extern int yylineno;
extern char* yytext;

int yylex(void);
void yyerror(const char *s);
%}

%token LAUNCH LOCK ELSEJET LOOPBACK RUNWAY
%token MISSION ENGAGE DEBRIEF EJECT
%token AFTERBURN STALL SIGNAL READJET
%token FLIGHTPATH

%token TARGET ALTITUDE AIRSPEED CHARCODE SWITCH

%token ASSIGN INC DEC AND OR GT LT

%token LBRACE RBRACE LPAREN RPAREN
%token SEMICOLON COMMA LBRACKET RBRACKET

%token IDENTIFIER INTEGER FLOAT STRING CHAR

%%

program
    : LAUNCH block
      { printf("Syntax analysis successful\n"); }
    ;

block
    : LBRACE stmt_list RBRACE
    ;

stmt_list
    : stmt stmt_list
    | /* empty */
    ;

stmt
    : declaration
    | assignment
    | conditional
    | output
    ;

declaration
    : TARGET IDENTIFIER SEMICOLON
    ;

assignment
    : IDENTIFIER ASSIGN expr SEMICOLON
    ;

conditional
    : LOCK LPAREN expr RPAREN block
    ;

output
    : SIGNAL IDENTIFIER SEMICOLON
    ;

expr
    : IDENTIFIER
    | INTEGER
    | FLOAT
    ;

%%

void yyerror(const char *s)
{
    printf("Line %d: Syntax Error → Found '%s'\n", yylineno, yytext);
}

int main(void)
{
    yyparse();
    return 0;
}
