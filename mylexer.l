%{
//this code will be added into the header of generated .cpp file
#pragma warning( disable : 4996)
#include <stdlib.h>  
#include "myparser.h"
#include"func.h"
//enum NodeKind { IFK 0, FORK 1, WHILEK 2, INTK 3, DOUBLEK 4, CHARK 5, OTHERK 6, IDK 7, NUMBERK_I 8, NUMBERK_D 9, CHARACTERK 10 };

%}

%name mylexer

delim [ \t]
com "//".*
ws    {delim}+
letter [a-zA-Z]
digit [0-9]
character \'.\'
id    {letter}({letter}|{digit})*
number_d {digit}+(\.{digit}+)
number_i {digit}+


%%
%{
//this code will be added into yyaction function
    YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
    //double yylval;
%}

{ws} {/* do nothing */}
\n {line++;}

{character} { yylval=new TreeNode();
			  int num=(int)yytext[1];
				if (num < 10){
					char *k = new char(2);
					k[0] = num + '0';
					k[1] = '\0';
					yylval->name=k;
				}
				else if(num>=10&&num<100){
					char *k = new char(3);
					k[0] = num/10 + '0';
					k[1] = num % 10 + '0';
					k[2] = '\0';
					yylval->name=k;
				}
				else{
					char *k = new char(4);
					k[0] = num/100 + '0';
					k[1] = (num % 100)/10 + '0';
					k[2] = (num % 100)%10 + '0';
					k[3] = '\0';
					yylval->name=k;
				}
			  yylval->kind=10;
			  return CHARACTER;}

";"		{yylval=new TreeNode(";",0);
		 return SEMI;}

","		{return DOU;}



"main"  {return MAIN;}

"if"	{yylval=new TreeNode("if",0,0);
		 return IF;}
		 
"else"	{yylval=new TreeNode("else",0,0);
		 return ELSE;}
		 
"for"	{yylval=new TreeNode("for",0,1);
		 return FOR;}
		 
"while" {yylval=new TreeNode("while",0,2);
		 return WHILE;}
		 
"int"  {yylval=new TreeNode("int",0,3);
		return INT;}
		
"double"  {yylval=new TreeNode("double",0,4);
			return DOUBLE;}
			
"char"  {yylval=new TreeNode("char",0,5);
   		 return CHAR;}
 
"++"    {yylval=new TreeNode("++",0);
		return SELFP;}
			
"--"    {yylval=new TreeNode("--",0);
		return SELFM;}
   		 
"=="	{yylval=new TreeNode("==",0);
			 return EQUAL;}
			 
"&&"    {yylval=new TreeNode("&&",0);
			 return AND;}
			 
"||"	{yylval=new TreeNode("||",0);
			 return OR;}
			 
">>"		{yylval = new TreeNode(">>",0);
			 return LS;}
			 
"<<"		{yylval = new TreeNode("<<",0);
			 return RS;}
			 
">="		{yylval = new TreeNode(">=",0);
			 return LAE;}
			 
"<="		{yylval = new TreeNode("<=",0);
			 return LEE;}
			 
">"			{yylval=new TreeNode(">",0);
			 return LARGE;}
			 
"<"			{yylval=new TreeNode("<",0);
			 return LESS;}
			 
"!="		{yylval=new TreeNode("!=",0);
			 return UNEQ;}
		 
"!"			{yylval=new TreeNode("!",0);
			 return NOT;}
   		 
"="			{yylval=new TreeNode("=",0);
			 return ASSIGN;}

"+"         {yylval=new TreeNode("+",0);
			return PLUS;}
			
"-"         {yylval=new TreeNode("-",0);
			return MINUS;}
			
"*"         {yylval=new TreeNode("*",0);
			return TIMES;}
			
"/"         {yylval=new TreeNode("/",0);
			return OVER;}
			
"%"			{yylval = new TreeNode("%",0);
			return MODU;}

"&"			{yylval = new TreeNode("&",0);
			return CAND;}

"|"			{yylval = new TreeNode("|",0);
			return COR;}

"^"			{yylval = new TreeNode("^",0);
			return XOR;}

"~"			{yylval = new TreeNode("~",0);
			return BN;}

"{"         {return BLP;}
			
"}"         {return BRP;}
			
"("         {return LP;}
			
")"         {return RP;}

"print"		{yylval = new TreeNode("print",0);
			return PRINT;}

"input"		{yylval = new TreeNode("input",0);
			return INPUT;}

{com} {cout<<yytext<<endl;}

{id}        {
			yylval=new TreeNode();
			char *c=new char[strlen(yytext)+1];
			int i;
			for(i=0;i<strlen(yytext);i++){
				c[i]=yytext[i];
			}
			c[i]='\0';
		     yylval->name=c;
		     yylval->var.push_back(c);
		    add_word(7,yytext,yylval);
			return ID;}
			
{number_d}    {yylval=new TreeNode();
			char *c=new char[strlen(yytext)+1];
			int i;
			for(i=0;i<strlen(yytext);i++){
				c[i]=yytext[i];
			}
			c[i]='\0';
		     yylval->name=c;
			yylval->val = atof(yytext);
			yylval->kind=9;
			return NUMBER_D;}
			
{number_i}    {yylval=new TreeNode();
			char *c=new char[strlen(yytext)+1];
			int i;
			for(i=0;i<strlen(yytext);i++){
				c[i]=yytext[i];
			}
			c[i]='\0';
		     yylval->name=c;
			yylval->val = atof(yytext);
			yylval->kind=8;
			return NUMBER_I;}
			

"."          {yylval=new TreeNode();yylval->name="mkl";printf("Mystery character %s\n", yytext); }
%%

