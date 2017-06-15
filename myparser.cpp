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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 12/28/16
* Time: 09:23:05
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

#include "mylexer.h"
#include"func.h"
#include"codeGeneration.h"

#line 44 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 15 ".\\myparser.y"

    // place any extra initialisation code here

#line 68 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 20 ".\\myparser.y"

    // place any extra cleanup code here

#line 82 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 49 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);saveTree=(*(YYSTYPE YYFAR*)yyvalptr);
#line 192 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 52 ".\\myparser.y"
TreeNode *t = new TreeNode("seq");
											t->child.push_back(yyattribute(1 - 2));
											t->child.push_back(yyattribute(2 - 2));
											(*(YYSTYPE YYFAR*)yyvalptr)=t;
#line 208 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 56 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 221 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#line 57 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=NULL;
#line 229 "myparser.cpp"
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 60 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 241 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 61 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 254 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 62 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 267 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 63 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 280 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 64 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=NULL;
#line 293 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 67 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 306 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 68 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 319 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 69 ".\\myparser.y"
	yyattribute(1 - 4)->child.push_back(yyattribute(3 - 4));
								(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 4);
#line 333 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 71 ".\\myparser.y"
yyattribute(1 - 4)->child.push_back(yyattribute(3 - 4));
							 search(yyattribute(3 - 4)->name,yyattribute(3 - 4));
							 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 4);
#line 348 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 74 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 361 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#line 75 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=NULL;
#line 369 "myparser.cpp"
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 79 ".\\myparser.y"
 if(yyattribute(2 - 2)->kind!=8&&yyattribute(2 - 2)->kind!=7){cout<<"Line: "<<line<<"	Int type error"<<endl;}   //check type
								checkRedefine(yyattribute(2 - 2));
								TreeNode *t = new TreeNode("int_def");
											t->child.push_back(yyattribute(1 - 2));
											t->child.push_back(yyattribute(2 - 2));
											t->kind=3;
											if(yyattribute(2 - 2)->kind==7){
												for(int i=0;i<yyattribute(2 - 2)->var.size();i++)
													setIDType(yyattribute(2 - 2)->var[i],8);
											}
											yyattribute(2 - 2)->kind=8;
											(*(YYSTYPE YYFAR*)yyvalptr)=t;
#line 392 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 92 ".\\myparser.y"
  if(yyattribute(2 - 2)->kind!=9&&yyattribute(2 - 2)->kind!=7){cout<<"Line: "<<line<<"	Double type error"<<endl;}
									checkRedefine(yyattribute(2 - 2));
									TreeNode *t = new TreeNode("double_def");
											t->child.push_back(yyattribute(1 - 2));
											t->child.push_back(yyattribute(2 - 2));
											t->kind=4;
											if(yyattribute(2 - 2)->kind==7){
												for(int i=0;i<yyattribute(2 - 2)->var.size();i++)
													setIDType(yyattribute(2 - 2)->var[i],9);
											}
											yyattribute(2 - 2)->kind=9;
											(*(YYSTYPE YYFAR*)yyvalptr)=t;
#line 416 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 105 ".\\myparser.y"
 if(yyattribute(2 - 2)->kind!=10&&yyattribute(2 - 2)->kind!=7){cout<<"Line: "<<line<<"	Char type error"<<endl;}
								 checkRedefine(yyattribute(2 - 2));
								 TreeNode *t = new TreeNode("char_def");
											t->child.push_back(yyattribute(1 - 2));
											t->child.push_back(yyattribute(2 - 2));
											t->kind=5;
											if(yyattribute(2 - 2)->kind==7){
												for(int i=0;i<yyattribute(2 - 2)->var.size();i++)
													setIDType(yyattribute(2 - 2)->var[i],10);
											}
											yyattribute(2 - 2)->kind=10;
											(*(YYSTYPE YYFAR*)yyvalptr)=t;
#line 440 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 117 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 453 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#line 118 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=NULL;
#line 461 "myparser.cpp"
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 122 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(3 - 5));
                   (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(5 - 5));
                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 5);
#line 475 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 127 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(3 - 7));
                   (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(6 - 7));
                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 7);
                 
#line 491 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 133 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(3 - 9));
                   (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(6 - 9));
                   (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(9 - 9));
                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 9);
                 
#line 508 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 140 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(3 - 9));
                   (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(5 - 9));
                   (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(8 - 9));
                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 9);
                 
#line 525 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 147 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(3 - 7));
                   (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(5 - 7));
                   (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(7 - 7));
                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 7);
                 
#line 542 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 155 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(3 - 11));
                   (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(6 - 11));
                   (*(YYSTYPE YYFAR*)yyvalptr)->child.push_back(yyattribute(10 - 11));
                   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 11);
                 
#line 559 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 162 ".\\myparser.y"
 TreeNode *t = new TreeNode("link_def");
											t->child.push_back(yyattribute(1 - 3));
											t->child.push_back(yyattribute(3 - 3));
											if(yyattribute(1 - 3)->kind==7||yyattribute(3 - 3)->kind==7){t->kind=7;}
											else if(yyattribute(1 - 3)->kind!=7){t->kind=yyattribute(1 - 3)->kind;}
											else {t->kind=yyattribute(3 - 3)->kind;}
											for(int i=0;i<yyattribute(1 - 3)->var.size();i++){
												t->var.push_back(yyattribute(1 - 3)->var[i]);
											}
											for(int j=0;j<yyattribute(3 - 3)->var.size();j++){
												t->var.push_back(yyattribute(3 - 3)->var[j]);
											}
											(*(YYSTYPE YYFAR*)yyvalptr)=t;
										    if((yyattribute(1 - 3)->kind!=yyattribute(3 - 3)->kind)&&(yyattribute(1 - 3)->kind!=7)&&(yyattribute(3 - 3)->kind!=7)){
										      cout<<"Line: "<<line<<"	Continuous define type error "<<endl;}
#line 586 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 179 ".\\myparser.y"
if((yyattribute(1 - 3)->kind!=7)&&(yyattribute(1 - 3)->kind!=yyattribute(3 - 3)->kind)){cout<<"Line: "<<line<<"	Conflict type error"<<endl;}  //check type
				 yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
				 yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
				 yyattribute(1 - 3)->val=yyattribute(3 - 3)->val;
				 yyattribute(1 - 3)->kind=yyattribute(3 - 3)->kind;
				 yyattribute(2 - 3)->kind=yyattribute(3 - 3)->kind;
				 yyattribute(2 - 3)->var.push_back(yyattribute(1 - 3)->name);
				 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
				 setIDType(yyattribute(1 - 3)->name,yyattribute(3 - 3)->kind);
#line 607 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 189 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 620 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 194 ".\\myparser.y"
 yyattribute(1 - 9)->child.push_back(yyattribute(3 - 9));
				  yyattribute(1 - 9)->child.push_back(yyattribute(5 - 9));
				  yyattribute(1 - 9)->child.push_back(yyattribute(7 - 9));
				  yyattribute(1 - 9)->child.push_back(yyattribute(9 - 9));
				  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 9);
#line 637 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 200 ".\\myparser.y"
 yyattribute(1 - 11)->child.push_back(yyattribute(3 - 11));
				  yyattribute(1 - 11)->child.push_back(yyattribute(5 - 11));
				  yyattribute(1 - 11)->child.push_back(yyattribute(7 - 11));
				  yyattribute(1 - 11)->child.push_back(yyattribute(10 - 11));
				  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 11);
#line 654 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 208 ".\\myparser.y"
 yyattribute(1 - 7)->child.push_back(yyattribute(3 - 7));
				  yyattribute(1 - 7)->child.push_back(yyattribute(6 - 7));
				  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 7);
#line 669 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 214 ".\\myparser.y"
 cacuCheckType(yyattribute(1 - 3)->kind,yyattribute(3 - 3)->kind);
							  yyattribute(2 - 3)->val = yyattribute(1 - 3)->val + yyattribute(3 - 3)->val;
							  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							  yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							  yyattribute(2 - 3)->kind=8;
							  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 687 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 221 ".\\myparser.y"
 cacuCheckType(yyattribute(1 - 3)->kind,yyattribute(3 - 3)->kind);
							  yyattribute(2 - 3)->val = yyattribute(1 - 3)->val - yyattribute(3 - 3)->val;
							  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							  yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							  yyattribute(2 - 3)->kind=8;
							  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3); 
#line 705 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 228 ".\\myparser.y"
 cacuCheckType(yyattribute(1 - 3)->kind,yyattribute(3 - 3)->kind);
							  yyattribute(2 - 3)->val = yyattribute(1 - 3)->val * yyattribute(3 - 3)->val;
							  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							  yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							  yyattribute(2 - 3)->kind=8;	
							  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3); 
#line 723 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 235 ".\\myparser.y"
 cacuCheckType(yyattribute(1 - 3)->kind,yyattribute(3 - 3)->kind);
								//$3->val 在语义上不为0
							  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							  yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							  yyattribute(2 - 3)->kind=8;
							  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3); 
#line 741 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 242 ".\\myparser.y"
if(yyattribute(3 - 3)->kind!=8){
								cout << "Line:" << line << "	"<< "mod must be int!"<< endl;
								yyattribute(2 - 3)->val = yyattribute(1 - 3)->val;
							}
							
							else
								yyattribute(2 - 3)->val = yyattribute(1 - 3)->val % yyattribute(3 - 3)->val;
							yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							yyattribute(2 - 3)->kind=8;
							(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 764 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 254 ".\\myparser.y"
 yyattribute(2 - 3)->val = yyattribute(1 - 3)->val & yyattribute(3 - 3)->val;
							  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							  yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							  yyattribute(2 - 3)->kind=8;
							  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 781 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 260 ".\\myparser.y"
 yyattribute(2 - 3)->val = yyattribute(1 - 3)->val | yyattribute(3 - 3)->val;
							  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							  yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							  yyattribute(2 - 3)->kind=8;
							  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 798 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 266 ".\\myparser.y"
 yyattribute(2 - 3)->val = yyattribute(1 - 3)->val ^ yyattribute(3 - 3)->val;
							  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							  yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							  yyattribute(2 - 3)->kind=8;
							  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3); 
#line 815 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 272 ".\\myparser.y"
  yyattribute(1 - 2)->val = ~(yyattribute(2 - 2)->val);
							  yyattribute(1 - 2)->kind=8;	
							  yyattribute(1 - 2)->child.push_back(yyattribute(2 - 2));
							  (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 831 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 277 ".\\myparser.y"
yyattribute(2 - 3)->val = yyattribute(1 - 3)->val << (yyattribute(3 - 3)->val);
								 yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							     yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							     yyattribute(2 - 3)->kind=8;
							     (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 848 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 283 ".\\myparser.y"
yyattribute(2 - 3)->val = yyattribute(1 - 3)->val >> (yyattribute(3 - 3)->val);
								 yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							     yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							     yyattribute(2 - 3)->kind=8;
							     (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 865 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 290 ".\\myparser.y"
 yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							   yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 880 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 294 ".\\myparser.y"
  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							   yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 895 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 298 ".\\myparser.y"
  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							   yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 910 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 303 ".\\myparser.y"
 yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							   yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 925 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 308 ".\\myparser.y"
  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							   yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 940 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 313 ".\\myparser.y"
  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							   yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 955 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 318 ".\\myparser.y"
  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
							   yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 970 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 323 ".\\myparser.y"
  yyattribute(2 - 3)->child.push_back(yyattribute(1 - 3));
		 					   yyattribute(2 - 3)->child.push_back(yyattribute(3 - 3));
							   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 985 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 328 ".\\myparser.y"
  yyattribute(1 - 2)->child.push_back(yyattribute(2 - 2));
							   (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 999 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 332 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3); 
#line 1012 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 333 ".\\myparser.y"
yyattribute(2 - 2)->child.push_back(yyattribute(1 - 2));
						 yyattribute(2 - 2)->val=++yyattribute(1 - 2)->val;
						 yyattribute(2 - 2)->kind=yyattribute(1 - 2)->kind;
						 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 2);
#line 1028 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 337 ".\\myparser.y"
yyattribute(2 - 2)->child.push_back(yyattribute(1 - 2));
						 yyattribute(2 - 2)->val=--yyattribute(1 - 2)->val;
						 yyattribute(2 - 2)->kind=yyattribute(1 - 2)->kind;
						 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 2);
#line 1044 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 341 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 2);
						  (*(YYSTYPE YYFAR*)yyvalptr)->val=2147483647;
#line 1058 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 343 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 1071 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 344 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 1084 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 345 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 1097 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 346 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 1110 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#line 347 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=NULL;
#line 1118 "myparser.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "error", 256 },
		{ "NUMBER_I", 257 },
		{ "NUMBER_D", 258 },
		{ "ID", 259 },
		{ "IF", 260 },
		{ "ELSE", 261 },
		{ "FOR", 262 },
		{ "WHILE", 263 },
		{ "PLUS", 264 },
		{ "MINUS", 265 },
		{ "TIMES", 266 },
		{ "OVER", 267 },
		{ "SELFP", 268 },
		{ "SELFM", 269 },
		{ "MODU", 270 },
		{ "CAND", 271 },
		{ "COR", 272 },
		{ "XOR", 273 },
		{ "BN", 274 },
		{ "LS", 275 },
		{ "RS", 276 },
		{ "LP", 277 },
		{ "RP", 278 },
		{ "BLP", 279 },
		{ "BRP", 280 },
		{ "SEMI", 281 },
		{ "ASSIGN", 282 },
		{ "EQUAL", 283 },
		{ "LARGE", 284 },
		{ "LESS", 285 },
		{ "UNEQ", 286 },
		{ "AND", 287 },
		{ "OR", 288 },
		{ "NOT", 289 },
		{ "LAE", 290 },
		{ "LEE", 291 },
		{ "INT", 292 },
		{ "DOUBLE", 293 },
		{ "CHAR", 294 },
		{ "MAIN", 295 },
		{ "DOU", 296 },
		{ "CHARACTER", 297 },
		{ "PRINT", 298 },
		{ "INPUT", 299 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: program",
		"program: INT MAIN LP RP BLP seq BRP",
		"seq: seq stmt",
		"seq: stmt",
		"seq:",
		"stmt: nosemi_stmt SEMI",
		"stmt: for_stmt",
		"stmt: while_stmt",
		"stmt: if_stmt",
		"stmt: SEMI",
		"nosemi_stmt: def_stmt",
		"nosemi_stmt: assign_stmt",
		"nosemi_stmt: PRINT LP expr RP",
		"nosemi_stmt: INPUT LP ID RP",
		"nosemi_stmt: expr",
		"nosemi_stmt:",
		"def_stmt: INT assign_stmt",
		"def_stmt: DOUBLE assign_stmt",
		"def_stmt: CHAR assign_stmt",
		"def_stmt: assign_stmt",
		"def_stmt:",
		"if_stmt: IF LP expr RP stmt",
		"if_stmt: IF LP expr RP BLP seq BRP",
		"if_stmt: IF LP expr RP BLP seq BRP ELSE stmt",
		"if_stmt: IF LP expr RP stmt ELSE BLP seq BRP",
		"if_stmt: IF LP expr RP stmt ELSE stmt",
		"if_stmt: IF LP expr RP BLP seq BRP ELSE BLP seq BRP",
		"assign_stmt: assign_stmt DOU assign_stmt",
		"assign_stmt: ID ASSIGN expr",
		"assign_stmt: ID",
		"for_stmt: FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP stmt",
		"for_stmt: FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP BLP seq BRP",
		"while_stmt: WHILE LP expr RP BLP seq BRP",
		"expr: expr PLUS expr",
		"expr: expr MINUS expr",
		"expr: expr TIMES expr",
		"expr: expr OVER expr",
		"expr: expr MODU expr",
		"expr: expr CAND expr",
		"expr: expr COR expr",
		"expr: expr XOR expr",
		"expr: BN expr",
		"expr: expr LS NUMBER_I",
		"expr: expr RS NUMBER_I",
		"expr: expr EQUAL expr",
		"expr: expr LAE expr",
		"expr: expr LEE expr",
		"expr: expr LARGE expr",
		"expr: expr LESS expr",
		"expr: expr UNEQ expr",
		"expr: expr AND expr",
		"expr: expr OR expr",
		"expr: NOT expr",
		"expr: LP expr RP",
		"expr: ID SELFP",
		"expr: ID SELFM",
		"expr: MINUS expr",
		"expr: NUMBER_D",
		"expr: NUMBER_I",
		"expr: CHARACTER",
		"expr: ID",
		"expr:"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 7, 0 },
		{ 2, 2, 1 },
		{ 2, 1, 2 },
		{ 2, 0, 3 },
		{ 3, 2, 4 },
		{ 3, 1, 5 },
		{ 3, 1, 6 },
		{ 3, 1, 7 },
		{ 3, 1, 8 },
		{ 4, 1, 9 },
		{ 4, 1, 10 },
		{ 4, 4, 11 },
		{ 4, 4, 12 },
		{ 4, 1, 13 },
		{ 4, 0, 14 },
		{ 5, 2, 15 },
		{ 5, 2, 16 },
		{ 5, 2, 17 },
		{ 5, 1, 18 },
		{ 5, 0, 19 },
		{ 6, 5, 20 },
		{ 6, 7, 21 },
		{ 6, 9, 22 },
		{ 6, 9, 23 },
		{ 6, 7, 24 },
		{ 6, 11, 25 },
		{ 7, 3, 26 },
		{ 7, 3, 27 },
		{ 7, 1, 28 },
		{ 8, 9, 29 },
		{ 8, 11, 30 },
		{ 9, 7, 31 },
		{ 10, 3, 32 },
		{ 10, 3, 33 },
		{ 10, 3, 34 },
		{ 10, 3, 35 },
		{ 10, 3, 36 },
		{ 10, 3, 37 },
		{ 10, 3, 38 },
		{ 10, 3, 39 },
		{ 10, 2, 40 },
		{ 10, 3, 41 },
		{ 10, 3, 42 },
		{ 10, 3, 43 },
		{ 10, 3, 44 },
		{ 10, 3, 45 },
		{ 10, 3, 46 },
		{ 10, 3, 47 },
		{ 10, 3, 48 },
		{ 10, 3, 49 },
		{ 10, 3, 50 },
		{ 10, 2, 51 },
		{ 10, 3, 52 },
		{ 10, 2, 53 },
		{ 10, 2, 54 },
		{ 10, 2, 55 },
		{ 10, 1, 56 },
		{ 10, 1, 57 },
		{ 10, 1, 58 },
		{ 10, 1, 59 },
		{ 10, 0, 60 }
	};
	yyreduction = reduction;

	yytokenaction_size = 1301;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 106, YYAT_SHIFT, 53 },
		{ 106, YYAT_SHIFT, 54 },
		{ 106, YYAT_SHIFT, 55 },
		{ 106, YYAT_SHIFT, 56 },
		{ 37, YYAT_SHIFT, 44 },
		{ 115, YYAT_SHIFT, 119 },
		{ 106, YYAT_SHIFT, 57 },
		{ 106, YYAT_SHIFT, 58 },
		{ 106, YYAT_SHIFT, 59 },
		{ 106, YYAT_SHIFT, 60 },
		{ 78, YYAT_SHIFT, 102 },
		{ 106, YYAT_SHIFT, 61 },
		{ 106, YYAT_SHIFT, 62 },
		{ 78, YYAT_ERROR, 0 },
		{ 39, YYAT_SHIFT, 33 },
		{ 39, YYAT_SHIFT, 34 },
		{ 112, YYAT_SHIFT, 117 },
		{ 106, YYAT_SHIFT, 110 },
		{ 105, YYAT_SHIFT, 109 },
		{ 106, YYAT_SHIFT, 63 },
		{ 106, YYAT_SHIFT, 64 },
		{ 106, YYAT_SHIFT, 65 },
		{ 106, YYAT_SHIFT, 66 },
		{ 106, YYAT_SHIFT, 67 },
		{ 106, YYAT_SHIFT, 68 },
		{ 101, YYAT_SHIFT, 107 },
		{ 106, YYAT_SHIFT, 69 },
		{ 106, YYAT_SHIFT, 70 },
		{ 126, YYAT_SHIFT, 7 },
		{ 126, YYAT_SHIFT, 8 },
		{ 126, YYAT_SHIFT, 9 },
		{ 126, YYAT_SHIFT, 10 },
		{ 85, YYAT_SHIFT, 62 },
		{ 126, YYAT_SHIFT, 11 },
		{ 126, YYAT_SHIFT, 12 },
		{ 84, YYAT_SHIFT, 62 },
		{ 126, YYAT_SHIFT, 13 },
		{ 37, YYAT_SHIFT, 18 },
		{ 37, YYAT_SHIFT, 19 },
		{ 37, YYAT_SHIFT, 20 },
		{ 82, YYAT_SHIFT, 55 },
		{ 82, YYAT_SHIFT, 56 },
		{ 83, YYAT_SHIFT, 62 },
		{ 80, YYAT_SHIFT, 52 },
		{ 82, YYAT_SHIFT, 57 },
		{ 126, YYAT_SHIFT, 14 },
		{ 79, YYAT_SHIFT, 103 },
		{ 76, YYAT_SHIFT, 101 },
		{ 126, YYAT_SHIFT, 15 },
		{ 75, YYAT_SHIFT, 52 },
		{ 82, YYAT_SHIFT, 62 },
		{ 126, YYAT_SHIFT, 128 },
		{ 126, YYAT_SHIFT, 16 },
		{ 74, YYAT_SHIFT, 100 },
		{ 73, YYAT_SHIFT, 99 },
		{ 98, YYAT_SHIFT, 53 },
		{ 98, YYAT_SHIFT, 54 },
		{ 98, YYAT_SHIFT, 55 },
		{ 98, YYAT_SHIFT, 56 },
		{ 62, YYAT_SHIFT, 90 },
		{ 126, YYAT_SHIFT, 17 },
		{ 98, YYAT_SHIFT, 57 },
		{ 61, YYAT_SHIFT, 89 },
		{ 126, YYAT_SHIFT, 18 },
		{ 126, YYAT_SHIFT, 19 },
		{ 126, YYAT_SHIFT, 20 },
		{ 98, YYAT_SHIFT, 61 },
		{ 98, YYAT_SHIFT, 62 },
		{ 126, YYAT_SHIFT, 21 },
		{ 126, YYAT_SHIFT, 22 },
		{ 126, YYAT_SHIFT, 23 },
		{ 125, YYAT_SHIFT, 7 },
		{ 125, YYAT_SHIFT, 8 },
		{ 125, YYAT_SHIFT, 9 },
		{ 125, YYAT_SHIFT, 10 },
		{ 52, YYAT_SHIFT, 44 },
		{ 125, YYAT_SHIFT, 11 },
		{ 125, YYAT_SHIFT, 12 },
		{ 49, YYAT_SHIFT, 79 },
		{ 125, YYAT_SHIFT, 13 },
		{ 47, YYAT_SHIFT, 52 },
		{ 97, YYAT_SHIFT, 53 },
		{ 97, YYAT_SHIFT, 54 },
		{ 97, YYAT_SHIFT, 55 },
		{ 97, YYAT_SHIFT, 56 },
		{ 46, YYAT_SHIFT, 52 },
		{ 45, YYAT_SHIFT, 52 },
		{ 97, YYAT_SHIFT, 57 },
		{ 125, YYAT_SHIFT, 14 },
		{ 44, YYAT_SHIFT, 35 },
		{ 42, YYAT_SHIFT, 77 },
		{ 125, YYAT_SHIFT, 15 },
		{ 97, YYAT_SHIFT, 61 },
		{ 97, YYAT_SHIFT, 62 },
		{ 125, YYAT_SHIFT, 127 },
		{ 125, YYAT_SHIFT, 16 },
		{ 32, YYAT_SHIFT, 71 },
		{ 30, YYAT_SHIFT, 52 },
		{ 94, YYAT_SHIFT, 53 },
		{ 94, YYAT_SHIFT, 54 },
		{ 94, YYAT_SHIFT, 55 },
		{ 94, YYAT_SHIFT, 56 },
		{ 23, YYAT_SHIFT, 49 },
		{ 125, YYAT_SHIFT, 17 },
		{ 94, YYAT_SHIFT, 57 },
		{ 22, YYAT_SHIFT, 48 },
		{ 125, YYAT_SHIFT, 18 },
		{ 125, YYAT_SHIFT, 19 },
		{ 125, YYAT_SHIFT, 20 },
		{ 94, YYAT_SHIFT, 61 },
		{ 94, YYAT_SHIFT, 62 },
		{ 125, YYAT_SHIFT, 21 },
		{ 125, YYAT_SHIFT, 22 },
		{ 125, YYAT_SHIFT, 23 },
		{ 119, YYAT_SHIFT, 7 },
		{ 119, YYAT_SHIFT, 8 },
		{ 119, YYAT_SHIFT, 9 },
		{ 119, YYAT_SHIFT, 10 },
		{ 12, YYAT_SHIFT, 38 },
		{ 119, YYAT_SHIFT, 11 },
		{ 119, YYAT_SHIFT, 12 },
		{ 11, YYAT_SHIFT, 37 },
		{ 119, YYAT_SHIFT, 13 },
		{ 81, YYAT_SHIFT, 55 },
		{ 81, YYAT_SHIFT, 56 },
		{ 40, YYAT_SHIFT, 55 },
		{ 40, YYAT_SHIFT, 56 },
		{ 81, YYAT_SHIFT, 57 },
		{ 10, YYAT_SHIFT, 36 },
		{ 40, YYAT_SHIFT, 57 },
		{ 5, YYAT_SHIFT, 6 },
		{ 119, YYAT_SHIFT, 14 },
		{ 4, YYAT_SHIFT, 5 },
		{ 81, YYAT_SHIFT, 62 },
		{ 119, YYAT_SHIFT, 15 },
		{ 40, YYAT_SHIFT, 62 },
		{ 119, YYAT_SHIFT, 123 },
		{ 3, YYAT_SHIFT, 4 },
		{ 119, YYAT_SHIFT, 16 },
		{ 2, YYAT_ACCEPT, 0 },
		{ 1, YYAT_SHIFT, 3 },
		{ 93, YYAT_SHIFT, 53 },
		{ 93, YYAT_SHIFT, 54 },
		{ 93, YYAT_SHIFT, 55 },
		{ 93, YYAT_SHIFT, 56 },
		{ 0, YYAT_SHIFT, 1 },
		{ 119, YYAT_SHIFT, 17 },
		{ 93, YYAT_SHIFT, 57 },
		{ -1, YYAT_ERROR, 0 },
		{ 119, YYAT_SHIFT, 18 },
		{ 119, YYAT_SHIFT, 19 },
		{ 119, YYAT_SHIFT, 20 },
		{ 93, YYAT_SHIFT, 61 },
		{ 93, YYAT_SHIFT, 62 },
		{ 119, YYAT_SHIFT, 21 },
		{ 119, YYAT_SHIFT, 22 },
		{ 119, YYAT_SHIFT, 23 },
		{ 118, YYAT_SHIFT, 7 },
		{ 118, YYAT_SHIFT, 8 },
		{ 118, YYAT_SHIFT, 9 },
		{ 118, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 118, YYAT_SHIFT, 11 },
		{ 118, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 118, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 92, YYAT_SHIFT, 53 },
		{ 92, YYAT_SHIFT, 54 },
		{ 92, YYAT_SHIFT, 55 },
		{ 92, YYAT_SHIFT, 56 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 92, YYAT_SHIFT, 57 },
		{ 118, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 118, YYAT_SHIFT, 15 },
		{ 92, YYAT_SHIFT, 61 },
		{ 92, YYAT_SHIFT, 62 },
		{ 118, YYAT_SHIFT, 122 },
		{ 118, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 91, YYAT_SHIFT, 53 },
		{ 91, YYAT_SHIFT, 54 },
		{ 91, YYAT_SHIFT, 55 },
		{ 91, YYAT_SHIFT, 56 },
		{ -1, YYAT_ERROR, 0 },
		{ 118, YYAT_SHIFT, 17 },
		{ 91, YYAT_SHIFT, 57 },
		{ -1, YYAT_ERROR, 0 },
		{ 118, YYAT_SHIFT, 18 },
		{ 118, YYAT_SHIFT, 19 },
		{ 118, YYAT_SHIFT, 20 },
		{ 91, YYAT_SHIFT, 61 },
		{ 91, YYAT_SHIFT, 62 },
		{ 118, YYAT_SHIFT, 21 },
		{ 118, YYAT_SHIFT, 22 },
		{ 118, YYAT_SHIFT, 23 },
		{ 117, YYAT_SHIFT, 7 },
		{ 117, YYAT_SHIFT, 8 },
		{ 117, YYAT_SHIFT, 9 },
		{ 117, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 117, YYAT_SHIFT, 11 },
		{ 117, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 117, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 117, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 117, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ 117, YYAT_SHIFT, 120 },
		{ -1, YYAT_ERROR, 0 },
		{ 117, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 117, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 117, YYAT_SHIFT, 18 },
		{ 117, YYAT_SHIFT, 19 },
		{ 117, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 117, YYAT_SHIFT, 21 },
		{ 117, YYAT_SHIFT, 22 },
		{ 117, YYAT_SHIFT, 23 },
		{ 111, YYAT_SHIFT, 7 },
		{ 111, YYAT_SHIFT, 8 },
		{ 111, YYAT_SHIFT, 9 },
		{ 111, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 11 },
		{ 111, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 116 },
		{ 111, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 18 },
		{ 111, YYAT_SHIFT, 19 },
		{ 111, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 111, YYAT_SHIFT, 21 },
		{ 111, YYAT_SHIFT, 22 },
		{ 111, YYAT_SHIFT, 23 },
		{ 109, YYAT_SHIFT, 7 },
		{ 109, YYAT_SHIFT, 8 },
		{ 109, YYAT_SHIFT, 9 },
		{ 109, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 11 },
		{ 109, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 113 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 18 },
		{ 109, YYAT_SHIFT, 19 },
		{ 109, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 109, YYAT_SHIFT, 21 },
		{ 109, YYAT_SHIFT, 22 },
		{ 109, YYAT_SHIFT, 23 },
		{ 108, YYAT_SHIFT, 7 },
		{ 108, YYAT_SHIFT, 8 },
		{ 108, YYAT_SHIFT, 9 },
		{ 108, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 11 },
		{ 108, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 112 },
		{ 108, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 18 },
		{ 108, YYAT_SHIFT, 19 },
		{ 108, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 108, YYAT_SHIFT, 21 },
		{ 108, YYAT_SHIFT, 22 },
		{ 108, YYAT_SHIFT, 23 },
		{ 99, YYAT_SHIFT, 7 },
		{ 99, YYAT_SHIFT, 8 },
		{ 99, YYAT_SHIFT, 9 },
		{ 99, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 11 },
		{ 99, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 104 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 18 },
		{ 99, YYAT_SHIFT, 19 },
		{ 99, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 99, YYAT_SHIFT, 21 },
		{ 99, YYAT_SHIFT, 22 },
		{ 99, YYAT_SHIFT, 23 },
		{ 28, YYAT_SHIFT, 7 },
		{ 28, YYAT_SHIFT, 8 },
		{ 28, YYAT_SHIFT, 9 },
		{ 28, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 28, YYAT_SHIFT, 11 },
		{ 28, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 28, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 28, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 28, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 28, YYAT_SHIFT, 50 },
		{ 28, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 28, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 28, YYAT_SHIFT, 18 },
		{ 28, YYAT_SHIFT, 19 },
		{ 28, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 28, YYAT_SHIFT, 21 },
		{ 28, YYAT_SHIFT, 22 },
		{ 28, YYAT_SHIFT, 23 },
		{ 72, YYAT_SHIFT, 53 },
		{ 72, YYAT_SHIFT, 54 },
		{ 72, YYAT_SHIFT, 55 },
		{ 72, YYAT_SHIFT, 56 },
		{ 9, YYAT_SHIFT, 33 },
		{ 9, YYAT_SHIFT, 34 },
		{ 72, YYAT_SHIFT, 57 },
		{ 72, YYAT_SHIFT, 58 },
		{ 72, YYAT_SHIFT, 59 },
		{ 72, YYAT_SHIFT, 60 },
		{ -1, YYAT_ERROR, 0 },
		{ 72, YYAT_SHIFT, 61 },
		{ 72, YYAT_SHIFT, 62 },
		{ -1, YYAT_ERROR, 0 },
		{ 9, YYAT_REDUCE, 29 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 9, YYAT_REDUCE, 29 },
		{ 9, YYAT_SHIFT, 35 },
		{ 72, YYAT_SHIFT, 63 },
		{ 72, YYAT_SHIFT, 64 },
		{ 72, YYAT_SHIFT, 65 },
		{ 72, YYAT_SHIFT, 66 },
		{ 72, YYAT_SHIFT, 67 },
		{ 72, YYAT_SHIFT, 68 },
		{ -1, YYAT_ERROR, 0 },
		{ 72, YYAT_SHIFT, 69 },
		{ 72, YYAT_SHIFT, 70 },
		{ 41, YYAT_SHIFT, 53 },
		{ 41, YYAT_SHIFT, 54 },
		{ 41, YYAT_SHIFT, 55 },
		{ 41, YYAT_SHIFT, 56 },
		{ 9, YYAT_REDUCE, 29 },
		{ -1, YYAT_ERROR, 0 },
		{ 41, YYAT_SHIFT, 57 },
		{ 41, YYAT_SHIFT, 58 },
		{ 41, YYAT_SHIFT, 59 },
		{ 41, YYAT_SHIFT, 60 },
		{ -1, YYAT_ERROR, 0 },
		{ 41, YYAT_SHIFT, 61 },
		{ 41, YYAT_SHIFT, 62 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 41, YYAT_SHIFT, 63 },
		{ 41, YYAT_SHIFT, 64 },
		{ 41, YYAT_SHIFT, 65 },
		{ 41, YYAT_SHIFT, 66 },
		{ 41, YYAT_SHIFT, 67 },
		{ 41, YYAT_SHIFT, 68 },
		{ -1, YYAT_ERROR, 0 },
		{ 41, YYAT_SHIFT, 69 },
		{ 41, YYAT_SHIFT, 70 },
		{ 31, YYAT_SHIFT, 53 },
		{ 31, YYAT_SHIFT, 54 },
		{ 31, YYAT_SHIFT, 55 },
		{ 31, YYAT_SHIFT, 56 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 31, YYAT_SHIFT, 57 },
		{ 31, YYAT_SHIFT, 58 },
		{ 31, YYAT_SHIFT, 59 },
		{ 31, YYAT_SHIFT, 60 },
		{ -1, YYAT_ERROR, 0 },
		{ 31, YYAT_SHIFT, 61 },
		{ 31, YYAT_SHIFT, 62 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 31, YYAT_SHIFT, 63 },
		{ 31, YYAT_SHIFT, 64 },
		{ 31, YYAT_SHIFT, 65 },
		{ 31, YYAT_SHIFT, 66 },
		{ 31, YYAT_SHIFT, 67 },
		{ 31, YYAT_SHIFT, 68 },
		{ -1, YYAT_ERROR, 0 },
		{ 31, YYAT_SHIFT, 69 },
		{ 31, YYAT_SHIFT, 70 },
		{ 123, YYAT_SHIFT, 7 },
		{ 123, YYAT_SHIFT, 8 },
		{ 123, YYAT_SHIFT, 9 },
		{ 123, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 123, YYAT_SHIFT, 11 },
		{ 123, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 123, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 123, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 123, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 123, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 123, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 123, YYAT_SHIFT, 18 },
		{ 123, YYAT_SHIFT, 19 },
		{ 123, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 123, YYAT_SHIFT, 21 },
		{ 123, YYAT_SHIFT, 22 },
		{ 123, YYAT_SHIFT, 23 },
		{ 120, YYAT_SHIFT, 7 },
		{ 120, YYAT_SHIFT, 8 },
		{ 120, YYAT_SHIFT, 9 },
		{ 120, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 120, YYAT_SHIFT, 11 },
		{ 120, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 120, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 120, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 120, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 120, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 120, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 120, YYAT_SHIFT, 18 },
		{ 120, YYAT_SHIFT, 19 },
		{ 120, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 120, YYAT_SHIFT, 21 },
		{ 120, YYAT_SHIFT, 22 },
		{ 120, YYAT_SHIFT, 23 },
		{ 113, YYAT_SHIFT, 7 },
		{ 113, YYAT_SHIFT, 8 },
		{ 113, YYAT_SHIFT, 9 },
		{ 113, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 11 },
		{ 113, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 18 },
		{ 113, YYAT_SHIFT, 19 },
		{ 113, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 113, YYAT_SHIFT, 21 },
		{ 113, YYAT_SHIFT, 22 },
		{ 113, YYAT_SHIFT, 23 },
		{ 107, YYAT_SHIFT, 7 },
		{ 107, YYAT_SHIFT, 8 },
		{ 107, YYAT_SHIFT, 9 },
		{ 107, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 11 },
		{ 107, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 18 },
		{ 107, YYAT_SHIFT, 19 },
		{ 107, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 107, YYAT_SHIFT, 21 },
		{ 107, YYAT_SHIFT, 22 },
		{ 107, YYAT_SHIFT, 23 },
		{ 104, YYAT_SHIFT, 7 },
		{ 104, YYAT_SHIFT, 8 },
		{ 104, YYAT_SHIFT, 9 },
		{ 104, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 11 },
		{ 104, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 18 },
		{ 104, YYAT_SHIFT, 19 },
		{ 104, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 104, YYAT_SHIFT, 21 },
		{ 104, YYAT_SHIFT, 22 },
		{ 104, YYAT_SHIFT, 23 },
		{ 6, YYAT_SHIFT, 7 },
		{ 6, YYAT_SHIFT, 8 },
		{ 6, YYAT_SHIFT, 9 },
		{ 6, YYAT_SHIFT, 10 },
		{ -1, YYAT_ERROR, 0 },
		{ 6, YYAT_SHIFT, 11 },
		{ 6, YYAT_SHIFT, 12 },
		{ -1, YYAT_ERROR, 0 },
		{ 6, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 6, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 6, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 6, YYAT_SHIFT, 16 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 6, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 6, YYAT_SHIFT, 18 },
		{ 6, YYAT_SHIFT, 19 },
		{ 6, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 6, YYAT_SHIFT, 21 },
		{ 6, YYAT_SHIFT, 22 },
		{ 6, YYAT_SHIFT, 23 },
		{ 88, YYAT_SHIFT, 53 },
		{ 88, YYAT_SHIFT, 54 },
		{ 88, YYAT_SHIFT, 55 },
		{ 88, YYAT_SHIFT, 56 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 88, YYAT_SHIFT, 57 },
		{ 88, YYAT_SHIFT, 58 },
		{ 88, YYAT_SHIFT, 59 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 88, YYAT_SHIFT, 61 },
		{ 88, YYAT_SHIFT, 62 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 88, YYAT_SHIFT, 63 },
		{ 88, YYAT_SHIFT, 64 },
		{ 88, YYAT_SHIFT, 65 },
		{ 88, YYAT_SHIFT, 66 },
		{ 88, YYAT_SHIFT, 67 },
		{ 88, YYAT_SHIFT, 68 },
		{ -1, YYAT_ERROR, 0 },
		{ 88, YYAT_SHIFT, 69 },
		{ 88, YYAT_SHIFT, 70 },
		{ 96, YYAT_SHIFT, 53 },
		{ 96, YYAT_SHIFT, 54 },
		{ 96, YYAT_SHIFT, 55 },
		{ 96, YYAT_SHIFT, 56 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 96, YYAT_SHIFT, 57 },
		{ 96, YYAT_SHIFT, 58 },
		{ 96, YYAT_SHIFT, 59 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 96, YYAT_SHIFT, 61 },
		{ 96, YYAT_SHIFT, 62 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 110, YYAT_SHIFT, 7 },
		{ 110, YYAT_SHIFT, 8 },
		{ 110, YYAT_SHIFT, 9 },
		{ 96, YYAT_SHIFT, 63 },
		{ 96, YYAT_SHIFT, 64 },
		{ 96, YYAT_SHIFT, 65 },
		{ 96, YYAT_SHIFT, 66 },
		{ 96, YYAT_SHIFT, 67 },
		{ 110, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 96, YYAT_SHIFT, 69 },
		{ 96, YYAT_SHIFT, 70 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 110, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 110, YYAT_SHIFT, 15 },
		{ 110, YYAT_REDUCE, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 110, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 110, YYAT_SHIFT, 18 },
		{ 110, YYAT_SHIFT, 19 },
		{ 110, YYAT_SHIFT, 20 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 110, YYAT_SHIFT, 21 },
		{ 110, YYAT_SHIFT, 22 },
		{ 110, YYAT_SHIFT, 23 },
		{ 95, YYAT_SHIFT, 53 },
		{ 95, YYAT_SHIFT, 54 },
		{ 95, YYAT_SHIFT, 55 },
		{ 95, YYAT_SHIFT, 56 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 95, YYAT_SHIFT, 57 },
		{ 95, YYAT_SHIFT, 58 },
		{ 95, YYAT_SHIFT, 59 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 95, YYAT_SHIFT, 61 },
		{ 95, YYAT_SHIFT, 62 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 95, YYAT_SHIFT, 63 },
		{ 95, YYAT_SHIFT, 64 },
		{ 95, YYAT_SHIFT, 65 },
		{ 95, YYAT_SHIFT, 66 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 95, YYAT_SHIFT, 69 },
		{ 95, YYAT_SHIFT, 70 },
		{ 43, YYAT_SHIFT, 53 },
		{ 43, YYAT_SHIFT, 54 },
		{ 43, YYAT_SHIFT, 55 },
		{ 43, YYAT_SHIFT, 56 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 43, YYAT_SHIFT, 57 },
		{ 43, YYAT_SHIFT, 58 },
		{ 43, YYAT_SHIFT, 59 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 43, YYAT_SHIFT, 61 },
		{ 43, YYAT_SHIFT, 62 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 43, YYAT_SHIFT, 63 },
		{ 43, YYAT_SHIFT, 64 },
		{ 43, YYAT_SHIFT, 65 },
		{ 43, YYAT_SHIFT, 66 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 43, YYAT_SHIFT, 69 },
		{ 43, YYAT_SHIFT, 70 },
		{ 87, YYAT_SHIFT, 53 },
		{ 87, YYAT_SHIFT, 54 },
		{ 87, YYAT_SHIFT, 55 },
		{ 87, YYAT_SHIFT, 56 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 87, YYAT_SHIFT, 57 },
		{ 87, YYAT_SHIFT, 58 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 87, YYAT_SHIFT, 61 },
		{ 87, YYAT_SHIFT, 62 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 87, YYAT_SHIFT, 63 },
		{ 87, YYAT_SHIFT, 64 },
		{ 87, YYAT_SHIFT, 65 },
		{ 87, YYAT_SHIFT, 66 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 87, YYAT_SHIFT, 69 },
		{ 87, YYAT_SHIFT, 70 },
		{ 86, YYAT_SHIFT, 53 },
		{ 86, YYAT_SHIFT, 54 },
		{ 86, YYAT_SHIFT, 55 },
		{ 86, YYAT_SHIFT, 56 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 86, YYAT_SHIFT, 57 },
		{ -1, YYAT_ERROR, 0 },
		{ 100, YYAT_SHIFT, 7 },
		{ 100, YYAT_SHIFT, 8 },
		{ 100, YYAT_SHIFT, 39 },
		{ 86, YYAT_SHIFT, 61 },
		{ 86, YYAT_SHIFT, 62 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 100, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 86, YYAT_SHIFT, 63 },
		{ 86, YYAT_SHIFT, 64 },
		{ 86, YYAT_SHIFT, 65 },
		{ 86, YYAT_SHIFT, 66 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 100, YYAT_SHIFT, 14 },
		{ 86, YYAT_SHIFT, 69 },
		{ 86, YYAT_SHIFT, 70 },
		{ 100, YYAT_SHIFT, 15 },
		{ 70, YYAT_SHIFT, 7 },
		{ 70, YYAT_SHIFT, 8 },
		{ 70, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ 69, YYAT_SHIFT, 7 },
		{ 69, YYAT_SHIFT, 8 },
		{ 69, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ 70, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 100, YYAT_SHIFT, 17 },
		{ 69, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 7 },
		{ 68, YYAT_SHIFT, 8 },
		{ 68, YYAT_SHIFT, 39 },
		{ 70, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ 100, YYAT_SHIFT, 21 },
		{ 70, YYAT_SHIFT, 15 },
		{ 69, YYAT_SHIFT, 14 },
		{ 68, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 69, YYAT_SHIFT, 15 },
		{ 67, YYAT_SHIFT, 7 },
		{ 67, YYAT_SHIFT, 8 },
		{ 67, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 14 },
		{ 70, YYAT_SHIFT, 17 },
		{ 67, YYAT_SHIFT, 13 },
		{ 68, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ 69, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 70, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 67, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ 69, YYAT_SHIFT, 21 },
		{ 67, YYAT_SHIFT, 15 },
		{ 68, YYAT_SHIFT, 17 },
		{ 66, YYAT_SHIFT, 7 },
		{ 66, YYAT_SHIFT, 8 },
		{ 66, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 7 },
		{ 65, YYAT_SHIFT, 8 },
		{ 65, YYAT_SHIFT, 39 },
		{ 68, YYAT_SHIFT, 21 },
		{ 66, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 67, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 64, YYAT_SHIFT, 7 },
		{ 64, YYAT_SHIFT, 8 },
		{ 64, YYAT_SHIFT, 39 },
		{ 66, YYAT_SHIFT, 14 },
		{ 67, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 15 },
		{ 65, YYAT_SHIFT, 14 },
		{ 64, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 15 },
		{ 63, YYAT_SHIFT, 7 },
		{ 63, YYAT_SHIFT, 8 },
		{ 63, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 64, YYAT_SHIFT, 14 },
		{ 66, YYAT_SHIFT, 17 },
		{ 63, YYAT_SHIFT, 13 },
		{ 64, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 63, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 21 },
		{ 63, YYAT_SHIFT, 15 },
		{ 64, YYAT_SHIFT, 17 },
		{ 60, YYAT_SHIFT, 7 },
		{ 60, YYAT_SHIFT, 8 },
		{ 60, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ 59, YYAT_SHIFT, 7 },
		{ 59, YYAT_SHIFT, 8 },
		{ 59, YYAT_SHIFT, 39 },
		{ 64, YYAT_SHIFT, 21 },
		{ 60, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 63, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ 59, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 58, YYAT_SHIFT, 7 },
		{ 58, YYAT_SHIFT, 8 },
		{ 58, YYAT_SHIFT, 39 },
		{ 60, YYAT_SHIFT, 14 },
		{ 63, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 60, YYAT_SHIFT, 15 },
		{ 59, YYAT_SHIFT, 14 },
		{ 58, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 59, YYAT_SHIFT, 15 },
		{ 57, YYAT_SHIFT, 7 },
		{ 57, YYAT_SHIFT, 8 },
		{ 57, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 58, YYAT_SHIFT, 14 },
		{ 60, YYAT_SHIFT, 17 },
		{ 57, YYAT_SHIFT, 13 },
		{ 58, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ 59, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 60, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 57, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ 59, YYAT_SHIFT, 21 },
		{ 57, YYAT_SHIFT, 15 },
		{ 58, YYAT_SHIFT, 17 },
		{ 56, YYAT_SHIFT, 7 },
		{ 56, YYAT_SHIFT, 8 },
		{ 56, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ 55, YYAT_SHIFT, 7 },
		{ 55, YYAT_SHIFT, 8 },
		{ 55, YYAT_SHIFT, 39 },
		{ 58, YYAT_SHIFT, 21 },
		{ 56, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 57, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ 55, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 54, YYAT_SHIFT, 7 },
		{ 54, YYAT_SHIFT, 8 },
		{ 54, YYAT_SHIFT, 39 },
		{ 56, YYAT_SHIFT, 14 },
		{ 57, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 56, YYAT_SHIFT, 15 },
		{ 55, YYAT_SHIFT, 14 },
		{ 54, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 55, YYAT_SHIFT, 15 },
		{ 53, YYAT_SHIFT, 7 },
		{ 53, YYAT_SHIFT, 8 },
		{ 53, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 54, YYAT_SHIFT, 14 },
		{ 56, YYAT_SHIFT, 17 },
		{ 53, YYAT_SHIFT, 13 },
		{ 54, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ 55, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 56, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 53, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ 55, YYAT_SHIFT, 21 },
		{ 53, YYAT_SHIFT, 15 },
		{ 54, YYAT_SHIFT, 17 },
		{ 48, YYAT_SHIFT, 7 },
		{ 48, YYAT_SHIFT, 8 },
		{ 48, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ 38, YYAT_SHIFT, 7 },
		{ 38, YYAT_SHIFT, 8 },
		{ 38, YYAT_SHIFT, 39 },
		{ 54, YYAT_SHIFT, 21 },
		{ 48, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 53, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ 38, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 36, YYAT_SHIFT, 7 },
		{ 36, YYAT_SHIFT, 8 },
		{ 36, YYAT_SHIFT, 39 },
		{ 48, YYAT_SHIFT, 14 },
		{ 53, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 48, YYAT_SHIFT, 15 },
		{ 38, YYAT_SHIFT, 14 },
		{ 36, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 38, YYAT_SHIFT, 15 },
		{ 35, YYAT_SHIFT, 7 },
		{ 35, YYAT_SHIFT, 8 },
		{ 35, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 36, YYAT_SHIFT, 14 },
		{ 48, YYAT_SHIFT, 17 },
		{ 35, YYAT_SHIFT, 13 },
		{ 36, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ 38, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 48, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 35, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ 38, YYAT_SHIFT, 21 },
		{ 35, YYAT_SHIFT, 15 },
		{ 36, YYAT_SHIFT, 17 },
		{ 17, YYAT_SHIFT, 7 },
		{ 17, YYAT_SHIFT, 8 },
		{ 17, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ 15, YYAT_SHIFT, 7 },
		{ 15, YYAT_SHIFT, 8 },
		{ 15, YYAT_SHIFT, 39 },
		{ 36, YYAT_SHIFT, 21 },
		{ 17, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 35, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ 15, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 14, YYAT_SHIFT, 7 },
		{ 14, YYAT_SHIFT, 8 },
		{ 14, YYAT_SHIFT, 39 },
		{ 17, YYAT_SHIFT, 14 },
		{ 35, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 17, YYAT_SHIFT, 15 },
		{ 15, YYAT_SHIFT, 14 },
		{ 14, YYAT_SHIFT, 13 },
		{ -1, YYAT_ERROR, 0 },
		{ 15, YYAT_SHIFT, 15 },
		{ 13, YYAT_SHIFT, 7 },
		{ 13, YYAT_SHIFT, 8 },
		{ 13, YYAT_SHIFT, 39 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 14, YYAT_SHIFT, 14 },
		{ 17, YYAT_SHIFT, 17 },
		{ 13, YYAT_SHIFT, 13 },
		{ 14, YYAT_SHIFT, 15 },
		{ -1, YYAT_ERROR, 0 },
		{ 15, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 17, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ 13, YYAT_SHIFT, 14 },
		{ -1, YYAT_ERROR, 0 },
		{ 15, YYAT_SHIFT, 21 },
		{ 13, YYAT_SHIFT, 15 },
		{ 14, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 14, YYAT_SHIFT, 21 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 13, YYAT_SHIFT, 17 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 13, YYAT_SHIFT, 21 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -147, 1, YYAT_ERROR, 0 },
		{ -155, 1, YYAT_ERROR, 0 },
		{ 139, 1, YYAT_ERROR, 0 },
		{ -140, 1, YYAT_ERROR, 0 },
		{ -146, 1, YYAT_ERROR, 0 },
		{ -149, 1, YYAT_ERROR, 0 },
		{ 500, 1, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 194, 1, YYAT_REDUCE, 60 },
		{ -149, 1, YYAT_ERROR, 0 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ -159, 1, YYAT_ERROR, 0 },
		{ 1003, 1, YYAT_REDUCE, 61 },
		{ 992, 1, YYAT_REDUCE, 61 },
		{ 982, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 978, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_DEFAULT, 52 },
		{ 0, 0, YYAT_DEFAULT, 52 },
		{ 0, 0, YYAT_DEFAULT, 52 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ -172, 1, YYAT_ERROR, 0 },
		{ -175, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 158, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ -199, 1, YYAT_REDUCE, 11 },
		{ 250, 1, YYAT_REDUCE, 14 },
		{ -185, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 956, 1, YYAT_REDUCE, 61 },
		{ 945, 1, YYAT_REDUCE, 61 },
		{ -255, 1, YYAT_REDUCE, 20 },
		{ 935, 1, YYAT_REDUCE, 61 },
		{ -254, 1, YYAT_REDUCE, 60 },
		{ -141, 1, YYAT_REDUCE, 56 },
		{ 222, 1, YYAT_REDUCE, 41 },
		{ -188, 1, YYAT_DEFAULT, 78 },
		{ 651, 1, YYAT_REDUCE, 52 },
		{ -193, 1, YYAT_REDUCE, 29 },
		{ -210, 1, YYAT_REDUCE, 16 },
		{ -211, 1, YYAT_REDUCE, 17 },
		{ -216, 1, YYAT_REDUCE, 18 },
		{ 931, 1, YYAT_REDUCE, 61 },
		{ -181, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -184, 1, YYAT_ERROR, 0 },
		{ 909, 1, YYAT_REDUCE, 61 },
		{ 898, 1, YYAT_REDUCE, 61 },
		{ 888, 1, YYAT_REDUCE, 61 },
		{ 884, 1, YYAT_REDUCE, 61 },
		{ 862, 1, YYAT_REDUCE, 61 },
		{ 851, 1, YYAT_REDUCE, 61 },
		{ 841, 1, YYAT_REDUCE, 61 },
		{ 837, 1, YYAT_REDUCE, 61 },
		{ -195, 1, YYAT_ERROR, 0 },
		{ -198, 1, YYAT_ERROR, 0 },
		{ 815, 1, YYAT_REDUCE, 61 },
		{ 804, 1, YYAT_REDUCE, 61 },
		{ 794, 1, YYAT_REDUCE, 61 },
		{ 790, 1, YYAT_REDUCE, 61 },
		{ 768, 1, YYAT_REDUCE, 61 },
		{ 757, 1, YYAT_REDUCE, 61 },
		{ 747, 1, YYAT_REDUCE, 61 },
		{ 743, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 194, 1, YYAT_REDUCE, 28 },
		{ -224, 1, YYAT_DEFAULT, 78 },
		{ -228, 1, YYAT_ERROR, 0 },
		{ -247, 1, YYAT_REDUCE, 19 },
		{ -231, 1, YYAT_DEFAULT, 78 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ -268, 1, YYAT_DEFAULT, 106 },
		{ -232, 1, YYAT_ERROR, 0 },
		{ -253, 1, YYAT_REDUCE, 27 },
		{ -143, 1, YYAT_REDUCE, 33 },
		{ -226, 1, YYAT_REDUCE, 34 },
		{ -234, 1, YYAT_REDUCE, 35 },
		{ -241, 1, YYAT_REDUCE, 36 },
		{ -244, 1, YYAT_REDUCE, 37 },
		{ 707, 1, YYAT_REDUCE, 38 },
		{ 679, 1, YYAT_REDUCE, 39 },
		{ 536, 1, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ -80, 1, YYAT_REDUCE, 44 },
		{ -97, 1, YYAT_REDUCE, 47 },
		{ -123, 1, YYAT_REDUCE, 48 },
		{ -166, 1, YYAT_REDUCE, 49 },
		{ 623, 1, YYAT_REDUCE, 50 },
		{ 564, 1, YYAT_REDUCE, 51 },
		{ -183, 1, YYAT_REDUCE, 45 },
		{ -209, 1, YYAT_REDUCE, 46 },
		{ 115, 1, YYAT_REDUCE, 61 },
		{ 722, 1, YYAT_REDUCE, 61 },
		{ -254, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 457, 1, YYAT_REDUCE, 4 },
		{ -243, 1, YYAT_REDUCE, 21 },
		{ -264, 1, YYAT_ERROR, 0 },
		{ 414, 1, YYAT_REDUCE, 4 },
		{ 72, 1, YYAT_REDUCE, 61 },
		{ 29, 1, YYAT_REDUCE, 61 },
		{ 587, 1, YYAT_REDUCE, 61 },
		{ -14, 1, YYAT_REDUCE, 61 },
		{ -245, 1, YYAT_REDUCE, 22 },
		{ 371, 1, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ -273, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ -57, 1, YYAT_REDUCE, 61 },
		{ -100, 1, YYAT_REDUCE, 61 },
		{ -143, 1, YYAT_REDUCE, 61 },
		{ 328, 1, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 285, 1, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ -186, 1, YYAT_REDUCE, 61 },
		{ -229, 1, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 31 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 52;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 126, 51 },
		{ 126, 32 },
		{ 37, 74 },
		{ 126, 25 },
		{ 37, 75 },
		{ 126, 27 },
		{ 126, 29 },
		{ 110, 115 },
		{ 110, 26 },
		{ 120, 125 },
		{ 110, 30 },
		{ 123, 126 },
		{ 123, 24 },
		{ 110, 31 },
		{ 119, 124 },
		{ 117, 121 },
		{ 113, 118 },
		{ 109, 114 },
		{ 107, 111 },
		{ 104, 108 },
		{ 100, 106 },
		{ 99, 105 },
		{ 70, 98 },
		{ 69, 97 },
		{ 68, 96 },
		{ 67, 95 },
		{ 66, 94 },
		{ 65, 93 },
		{ 64, 92 },
		{ 63, 91 },
		{ 60, 88 },
		{ 59, 87 },
		{ 58, 86 },
		{ 57, 85 },
		{ 56, 84 },
		{ 55, 83 },
		{ 54, 82 },
		{ 53, 81 },
		{ 52, 80 },
		{ 48, 78 },
		{ 38, 76 },
		{ 36, 73 },
		{ 35, 72 },
		{ 20, 47 },
		{ 19, 46 },
		{ 18, 45 },
		{ 17, 43 },
		{ 15, 42 },
		{ 14, 41 },
		{ 13, 40 },
		{ 6, 28 },
		{ 0, 2 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 50, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 48, 123 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 39, -1 },
		{ 38, -1 },
		{ 37, -1 },
		{ 0, -1 },
		{ 36, -1 },
		{ 38, -1 },
		{ 37, -1 },
		{ 36, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 126 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 32, -1 },
		{ 31, -1 },
		{ -3, -1 },
		{ 30, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 29, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 31, -1 },
		{ 27, -1 },
		{ 26, -1 },
		{ 25, -1 },
		{ 24, -1 },
		{ 23, -1 },
		{ 22, -1 },
		{ 21, -1 },
		{ 20, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 19, -1 },
		{ 18, -1 },
		{ 17, -1 },
		{ 16, -1 },
		{ 15, -1 },
		{ 14, -1 },
		{ 13, -1 },
		{ 12, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 18, 126 },
		{ 10, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 17, 123 },
		{ 0, -1 },
		{ 0, -1 },
		{ 16, 123 },
		{ 0, 126 },
		{ 14, 126 },
		{ 3, -1 },
		{ 0, 126 },
		{ 0, -1 },
		{ 14, 123 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 12, 126 },
		{ 0, 126 },
		{ 11, 126 },
		{ 7, 123 },
		{ 0, -1 },
		{ 0, -1 },
		{ 9, 126 },
		{ 0, -1 },
		{ 0, 126 },
		{ -3, 110 },
		{ 0, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 349 ".\\myparser.y"


int main()
{
    
    int n = 1;
    mylexer lexer;
    myparser parser;
    freopen("file.txt", "r", stdin);
    if (parser.yycreate(&lexer)) {
        if (lexer.yycreate(&parser)) {
            n = parser.yyparse();
        }
    }
	fstream outfile;
	outfile.open("out.txt", ios::out);
	codeGeneration(saveTree, outfile);
	for(token *tmp=word_list;tmp!=NULL;tmp=tmp->next){			//check not defined
		if(!tmp->isDefine)
			cout<<tmp->name<<"	is not defined!"<<endl;
	}
    return n;
}
