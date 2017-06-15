/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 39 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 12/28/16
* Time: 09:22:14
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

//this code will be added into the header of generated .cpp file
#pragma warning( disable : 4996)
#include <stdlib.h>  
#include "myparser.h"
#include"func.h"
//enum NodeKind { IFK 0, FORK 1, WHILEK 2, INTK 3, DOUBLEK 4, CHARK 5, OTHERK 6, IDK 7, NUMBERK_I 8, NUMBERK_D 9, CHARACTERK 10 };


#line 48 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 25 ".\\mylexer.l"

//this code will be added into yyaction function
    YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
    //double yylval;

#line 146 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 31 ".\\mylexer.l"
/* do nothing */
#line 153 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 32 ".\\mylexer.l"
line++;
#line 160 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 34 ".\\mylexer.l"
 yylval=new TreeNode();
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
			  return CHARACTER;
#line 191 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 60 ".\\mylexer.l"
yylval=new TreeNode(";",0);
		 return SEMI;
#line 199 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 63 ".\\mylexer.l"
return DOU;
#line 206 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 67 ".\\mylexer.l"
return MAIN;
#line 213 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 69 ".\\mylexer.l"
yylval=new TreeNode("if",0,0);
		 return IF;
#line 221 "mylexer.cpp"
		}
		break;
#line 71 ".\\mylexer.l"
		 
#line 226 "mylexer.cpp"
	case 8:
		{
#line 72 ".\\mylexer.l"
yylval=new TreeNode("else",0,0);
		 return ELSE;
#line 232 "mylexer.cpp"
		}
		break;
#line 74 ".\\mylexer.l"
		 
#line 237 "mylexer.cpp"
	case 9:
		{
#line 75 ".\\mylexer.l"
yylval=new TreeNode("for",0,1);
		 return FOR;
#line 243 "mylexer.cpp"
		}
		break;
#line 77 ".\\mylexer.l"
		 
#line 248 "mylexer.cpp"
	case 10:
		{
#line 78 ".\\mylexer.l"
yylval=new TreeNode("while",0,2);
		 return WHILE;
#line 254 "mylexer.cpp"
		}
		break;
#line 80 ".\\mylexer.l"
		 
#line 259 "mylexer.cpp"
	case 11:
		{
#line 81 ".\\mylexer.l"
yylval=new TreeNode("int",0,3);
		return INT;
#line 265 "mylexer.cpp"
		}
		break;
#line 83 ".\\mylexer.l"
		
#line 270 "mylexer.cpp"
	case 12:
		{
#line 84 ".\\mylexer.l"
yylval=new TreeNode("double",0,4);
			return DOUBLE;
#line 276 "mylexer.cpp"
		}
		break;
#line 86 ".\\mylexer.l"
			
#line 281 "mylexer.cpp"
	case 13:
		{
#line 87 ".\\mylexer.l"
yylval=new TreeNode("char",0,5);
   		 return CHAR;
#line 287 "mylexer.cpp"
		}
		break;
#line 89 ".\\mylexer.l"
 
#line 292 "mylexer.cpp"
	case 14:
		{
#line 90 ".\\mylexer.l"
yylval=new TreeNode("++",0);
		return SELFP;
#line 298 "mylexer.cpp"
		}
		break;
#line 92 ".\\mylexer.l"
			
#line 303 "mylexer.cpp"
	case 15:
		{
#line 93 ".\\mylexer.l"
yylval=new TreeNode("--",0);
		return SELFM;
#line 309 "mylexer.cpp"
		}
		break;
#line 95 ".\\mylexer.l"
   		 
#line 314 "mylexer.cpp"
	case 16:
		{
#line 96 ".\\mylexer.l"
yylval=new TreeNode("==",0);
			 return EQUAL;
#line 320 "mylexer.cpp"
		}
		break;
#line 98 ".\\mylexer.l"
			 
#line 325 "mylexer.cpp"
	case 17:
		{
#line 99 ".\\mylexer.l"
yylval=new TreeNode("&&",0);
			 return AND;
#line 331 "mylexer.cpp"
		}
		break;
#line 101 ".\\mylexer.l"
			 
#line 336 "mylexer.cpp"
	case 18:
		{
#line 102 ".\\mylexer.l"
yylval=new TreeNode("||",0);
			 return OR;
#line 342 "mylexer.cpp"
		}
		break;
#line 104 ".\\mylexer.l"
			 
#line 347 "mylexer.cpp"
	case 19:
		{
#line 105 ".\\mylexer.l"
yylval = new TreeNode(">>",0);
			 return LS;
#line 353 "mylexer.cpp"
		}
		break;
#line 107 ".\\mylexer.l"
			 
#line 358 "mylexer.cpp"
	case 20:
		{
#line 108 ".\\mylexer.l"
yylval = new TreeNode("<<",0);
			 return RS;
#line 364 "mylexer.cpp"
		}
		break;
#line 110 ".\\mylexer.l"
			 
#line 369 "mylexer.cpp"
	case 21:
		{
#line 111 ".\\mylexer.l"
yylval = new TreeNode(">=",0);
			 return LAE;
#line 375 "mylexer.cpp"
		}
		break;
#line 113 ".\\mylexer.l"
			 
#line 380 "mylexer.cpp"
	case 22:
		{
#line 114 ".\\mylexer.l"
yylval = new TreeNode("<=",0);
			 return LEE;
#line 386 "mylexer.cpp"
		}
		break;
#line 116 ".\\mylexer.l"
			 
#line 391 "mylexer.cpp"
	case 23:
		{
#line 117 ".\\mylexer.l"
yylval=new TreeNode(">",0);
			 return LARGE;
#line 397 "mylexer.cpp"
		}
		break;
#line 119 ".\\mylexer.l"
			 
#line 402 "mylexer.cpp"
	case 24:
		{
#line 120 ".\\mylexer.l"
yylval=new TreeNode("<",0);
			 return LESS;
#line 408 "mylexer.cpp"
		}
		break;
#line 122 ".\\mylexer.l"
			 
#line 413 "mylexer.cpp"
	case 25:
		{
#line 123 ".\\mylexer.l"
yylval=new TreeNode("!=",0);
			 return UNEQ;
#line 419 "mylexer.cpp"
		}
		break;
#line 125 ".\\mylexer.l"
		 
#line 424 "mylexer.cpp"
	case 26:
		{
#line 126 ".\\mylexer.l"
yylval=new TreeNode("!",0);
			 return NOT;
#line 430 "mylexer.cpp"
		}
		break;
#line 128 ".\\mylexer.l"
   		 
#line 435 "mylexer.cpp"
	case 27:
		{
#line 129 ".\\mylexer.l"
yylval=new TreeNode("=",0);
			 return ASSIGN;
#line 441 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 132 ".\\mylexer.l"
yylval=new TreeNode("+",0);
			return PLUS;
#line 449 "mylexer.cpp"
		}
		break;
#line 134 ".\\mylexer.l"
			
#line 454 "mylexer.cpp"
	case 29:
		{
#line 135 ".\\mylexer.l"
yylval=new TreeNode("-",0);
			return MINUS;
#line 460 "mylexer.cpp"
		}
		break;
#line 137 ".\\mylexer.l"
			
#line 465 "mylexer.cpp"
	case 30:
		{
#line 138 ".\\mylexer.l"
yylval=new TreeNode("*",0);
			return TIMES;
#line 471 "mylexer.cpp"
		}
		break;
#line 140 ".\\mylexer.l"
			
#line 476 "mylexer.cpp"
	case 31:
		{
#line 141 ".\\mylexer.l"
yylval=new TreeNode("/",0);
			return OVER;
#line 482 "mylexer.cpp"
		}
		break;
#line 143 ".\\mylexer.l"
			
#line 487 "mylexer.cpp"
	case 32:
		{
#line 144 ".\\mylexer.l"
yylval = new TreeNode("%",0);
			return MODU;
#line 493 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 147 ".\\mylexer.l"
yylval = new TreeNode("&",0);
			return CAND;
#line 501 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 150 ".\\mylexer.l"
yylval = new TreeNode("|",0);
			return COR;
#line 509 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 153 ".\\mylexer.l"
yylval = new TreeNode("^",0);
			return XOR;
#line 517 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 156 ".\\mylexer.l"
yylval = new TreeNode("~",0);
			return BN;
#line 525 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 159 ".\\mylexer.l"
return BLP;
#line 532 "mylexer.cpp"
		}
		break;
#line 160 ".\\mylexer.l"
			
#line 537 "mylexer.cpp"
	case 38:
		{
#line 161 ".\\mylexer.l"
return BRP;
#line 542 "mylexer.cpp"
		}
		break;
#line 162 ".\\mylexer.l"
			
#line 547 "mylexer.cpp"
	case 39:
		{
#line 163 ".\\mylexer.l"
return LP;
#line 552 "mylexer.cpp"
		}
		break;
#line 164 ".\\mylexer.l"
			
#line 557 "mylexer.cpp"
	case 40:
		{
#line 165 ".\\mylexer.l"
return RP;
#line 562 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 167 ".\\mylexer.l"
yylval = new TreeNode("print",0);
			return PRINT;
#line 570 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 170 ".\\mylexer.l"
yylval = new TreeNode("input",0);
			return INPUT;
#line 578 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 173 ".\\mylexer.l"
cout<<yytext<<endl;
#line 585 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 175 ".\\mylexer.l"

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
			return ID;
#line 603 "mylexer.cpp"
		}
		break;
#line 187 ".\\mylexer.l"
			
#line 608 "mylexer.cpp"
	case 45:
		{
#line 188 ".\\mylexer.l"
yylval=new TreeNode();
			char *c=new char[strlen(yytext)+1];
			int i;
			for(i=0;i<strlen(yytext);i++){
				c[i]=yytext[i];
			}
			c[i]='\0';
		     yylval->name=c;
			yylval->val = atof(yytext);
			yylval->kind=9;
			return NUMBER_D;
#line 623 "mylexer.cpp"
		}
		break;
#line 199 ".\\mylexer.l"
			
#line 628 "mylexer.cpp"
	case 46:
		{
#line 200 ".\\mylexer.l"
yylval=new TreeNode();
			char *c=new char[strlen(yytext)+1];
			int i;
			for(i=0;i<strlen(yytext);i++){
				c[i]=yytext[i];
			}
			c[i]='\0';
		     yylval->name=c;
			yylval->val = atof(yytext);
			yylval->kind=8;
			return NUMBER_I;
#line 643 "mylexer.cpp"
		}
		break;
#line 211 ".\\mylexer.l"
			
#line 648 "mylexer.cpp"
	case 47:
		{
#line 213 ".\\mylexer.l"
yylval=new TreeNode();yylval->name="mkl";printf("Mystery character %s\n", yytext); 
#line 653 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 194;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 4, 1 },
		{ 3, 3 },
		{ 42, 17 },
		{ 37, 7 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 64, 53 },
		{ 43, 19 },
		{ 44, 19 },
		{ 52, 28 },
		{ 65, 53 },
		{ 46, 21 },
		{ 47, 21 },
		{ 45, 20 },
		{ 3, 1 },
		{ 5, 1 },
		{ 3, 3 },
		{ 53, 28 },
		{ 0, 8 },
		{ 6, 1 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 48, 24 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 59, 59 },
		{ 49, 25 },
		{ 50, 26 },
		{ 51, 27 },
		{ 39, 12 },
		{ 54, 29 },
		{ 55, 30 },
		{ 56, 31 },
		{ 57, 33 },
		{ 58, 38 },
		{ 0, 41 },
		{ 60, 48 },
		{ 61, 49 },
		{ 62, 50 },
		{ 63, 51 },
		{ 40, 14 },
		{ 66, 54 },
		{ 67, 55 },
		{ 68, 56 },
		{ 41, 16 },
		{ 69, 60 },
		{ 70, 61 },
		{ 23, 1 },
		{ 71, 62 },
		{ 72, 64 },
		{ 73, 66 },
		{ 74, 67 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 75, 68 },
		{ 76, 70 },
		{ 28, 1 },
		{ 77, 72 },
		{ 78, 74 },
		{ 79, 75 },
		{ 29, 1 },
		{ 80, 76 },
		{ 36, 5 },
		{ 30, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 31, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 32, 1 },
		{ 33, 1 },
		{ 34, 1 },
		{ 35, 1 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 },
		{ 22, 80 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 80, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -6, 1 },
		{ 0, 0, 2 },
		{ 0, 42, 26 },
		{ 0, 0, 32 },
		{ 0, -33, 33 },
		{ -38, 18, 0 },
		{ 0, 0, 39 },
		{ 0, 0, 40 },
		{ 0, 0, 30 },
		{ 0, 25, 28 },
		{ 0, 0, 5 },
		{ 0, 34, 29 },
		{ 0, 0, 47 },
		{ 0, 36, 31 },
		{ 0, -42, 46 },
		{ 0, 0, 4 },
		{ 0, -43, 24 },
		{ 0, -38, 27 },
		{ 0, -40, 23 },
		{ 80, 0, 44 },
		{ 0, 0, 35 },
		{ 80, -54, 44 },
		{ 80, -46, 44 },
		{ 80, -42, 44 },
		{ 80, -44, 44 },
		{ 80, -83, 44 },
		{ 80, -28, 44 },
		{ 80, -44, 44 },
		{ 80, -33, 44 },
		{ 0, 0, 37 },
		{ 0, -52, 34 },
		{ 0, 0, 38 },
		{ 0, 0, 36 },
		{ 0, 0, 25 },
		{ 0, 0, 17 },
		{ 0, 34, 0 },
		{ 0, 0, 14 },
		{ 0, 0, 15 },
		{ -41, 64, 43 },
		{ 59, 0, 0 },
		{ 0, 0, 20 },
		{ 0, 0, 22 },
		{ 0, 0, 16 },
		{ 0, 0, 21 },
		{ 0, 0, 19 },
		{ 80, -22, 44 },
		{ 80, -41, 44 },
		{ 80, -38, 44 },
		{ 80, -36, 44 },
		{ 80, 0, 7 },
		{ 80, -96, 44 },
		{ 80, -25, 44 },
		{ 80, -24, 44 },
		{ 80, -23, 44 },
		{ 0, 0, 18 },
		{ 0, 0, 3 },
		{ 0, 7, 45 },
		{ 80, -30, 44 },
		{ 80, -13, 44 },
		{ 80, -14, 44 },
		{ 80, 0, 9 },
		{ 80, -29, 44 },
		{ 80, 0, 11 },
		{ 80, -21, 44 },
		{ 80, -20, 44 },
		{ 80, -13, 44 },
		{ 80, 0, 13 },
		{ 80, -12, 44 },
		{ 80, 0, 8 },
		{ 80, -18, 44 },
		{ 80, 0, 6 },
		{ 80, -17, 44 },
		{ 80, -1, 44 },
		{ 80, 1, 44 },
		{ 80, 0, 42 },
		{ 80, 0, 41 },
		{ 80, 0, 10 },
		{ 0, 71, 12 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 214 ".\\mylexer.l"



