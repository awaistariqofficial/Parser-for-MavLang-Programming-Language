%option noyywrap

%{
#include "y.tab.h"
#include <stdio.h>

extern int yylineno;
%}

%%

"launch"        { return LAUNCH; }
"lock"          { return LOCK; }
"elsejet"       { return ELSEJET; }
"loopback"      { return LOOPBACK; }
"runway"        { return RUNWAY; }
"mission"       { return MISSION; }
"engage"        { return ENGAGE; }
"debrief"       { return DEBRIEF; }
"eject"         { return EJECT; }
"afterburn"     { return AFTERBURN; }
"stall"         { return STALL; }
"signal"        { return SIGNAL; }
"readjet"       { return READJET; }
"flightpath"    { return FLIGHTPATH; }

"target"        { return TARGET; }
"altitude"      { return ALTITUDE; }
"airspeed"      { return AIRSPEED; }
"charcode"      { return CHARCODE; }
"switch"        { return SWITCH; }

"assign"        { return ASSIGN; }
"^^"            { return INC; }
"vv"            { return DEC; }
"++"            { return AND; }
"+-"            { return OR; }
">"             { return GT; }
"<"             { return LT; }

"{"             { return LBRACE; }
"}"             { return RBRACE; }
"("             { return LPAREN; }
")"             { return RPAREN; }
";"             { return SEMICOLON; }
","             { return COMMA; }
"["             { return LBRACKET; }
"]"             { return RBRACKET; }


\"[^\"]*\"      { return STRING; }
\'[^\']\'       { return CHAR; }

[0-9]+"."[0-9]+ { return FLOAT; }
[0-9]+          { return INTEGER; }

[a-zA-Z_][a-zA-Z0-9_]* { return IDENTIFIER; }

\n              { yylineno++; }
[ \t]+          { /* ignore */ }

. {
    printf("Line %d: ERROR → %s (invalid symbol)\n", yylineno, yytext);
}

%%
