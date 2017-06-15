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
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 12/28/16
* Time: 09:23:05
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 11 ".\\myparser.y"

    // place any extra class members here

#line 69 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#line 25 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE	TreeNode*
#endif

#line 82 "myparser.h"
#define NUMBER_I 257
#define NUMBER_D 258
#define ID 259
#define IF 260
#define ELSE 261
#define FOR 262
#define WHILE 263
#define PLUS 264
#define MINUS 265
#define TIMES 266
#define OVER 267
#define SELFP 268
#define SELFM 269
#define MODU 270
#define CAND 271
#define COR 272
#define XOR 273
#define BN 274
#define LS 275
#define RS 276
#define LP 277
#define RP 278
#define BLP 279
#define BRP 280
#define SEMI 281
#define ASSIGN 282
#define EQUAL 283
#define LARGE 284
#define LESS 285
#define UNEQ 286
#define AND 287
#define OR 288
#define NOT 289
#define LAE 290
#define LEE 291
#define INT 292
#define DOUBLE 293
#define CHAR 294
#define MAIN 295
#define DOU 296
#define CHARACTER 297
#define PRINT 298
#define INPUT 299
#define LR 300
#define UMINUS 301
#endif
