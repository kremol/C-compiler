%{
#include "mylexer.h"
#include"func.h"
#include"codeGeneration.h"
%}



%name myparser
// class definition
{
    // place any extra class members here
}
// constructor
{
    // place any extra initialisation code here
}

// destructor
{
    // place any extra cleanup code here
}

// place any declarations here
%include {
#ifndef YYSTYPE
#define YYSTYPE	TreeNode*
#endif
}

%token NUMBER_I NUMBER_D ID IF ELSE FOR WHILE
%token PLUS MINUS TIMES OVER SELFP SELFM MODU CAND COR XOR BN LS RS
%token LP RP BLP BRP SEMI ASSIGN EQUAL LARGE LESS UNEQ AND OR NOT LAE LEE
%TOKEN INT DOUBLE CHAR MAIN DOU CHARACTER PRINT INPUT

%left XOR
%left OR
%left AND
%left NOT
%left COR
%left CAND
%left LARGE LESS UNEQ EQUAL	LAE LEE
%left LS LR
%left PLUS MINUS 
%left TIMES OVER MODU
%right UMINUS

%%
program		: INT MAIN LP RP BLP seq BRP {$$=$6;saveTree=$$;}
			;
			
seq			: seq stmt {TreeNode *t = new TreeNode("seq");
											t->child.push_back($1);
											t->child.push_back($2);
											$$=t;}
			| stmt {$$=$1;}
			| {$$=NULL;}
			;
			
stmt        : nosemi_stmt SEMI{ $$=$1;}		//不需要分号的语句（会在语句结束的地方加上分号）
			| for_stmt {$$ = $1;}
			| while_stmt {$$ = $1;}
			| if_stmt {$$ = $1;}
			| SEMI {$$=NULL;}	//空语句
			;
			
nosemi_stmt : def_stmt{$$=$1;}
			| assign_stmt { $$ = $1;}
			| PRINT LP expr RP {	$1->child.push_back($3);
								$$=$1;}
			| INPUT LP ID RP{$1->child.push_back($3);
							 search($3->name,$3);
							 $$=$1;}
		    | expr {$$=$1;}
			| {$$=NULL;}
			;
			
			
def_stmt	: INT assign_stmt { if($2->kind!=8&&$2->kind!=7){cout<<"Line: "<<line<<"	Int type error"<<endl;}   //check type
								checkRedefine($2);
								TreeNode *t = new TreeNode("int_def");
											t->child.push_back($1);
											t->child.push_back($2);
											t->kind=3;
											if($2->kind==7){
												for(int i=0;i<$2->var.size();i++)
													setIDType($2->var[i],8);
											}
											$2->kind=8;
											$$=t;}
								
			| DOUBLE assign_stmt {  if($2->kind!=9&&$2->kind!=7){cout<<"Line: "<<line<<"	Double type error"<<endl;}
									checkRedefine($2);
									TreeNode *t = new TreeNode("double_def");
											t->child.push_back($1);
											t->child.push_back($2);
											t->kind=4;
											if($2->kind==7){
												for(int i=0;i<$2->var.size();i++)
													setIDType($2->var[i],9);
											}
											$2->kind=9;
											$$=t;}
								
			| CHAR assign_stmt { if($2->kind!=10&&$2->kind!=7){cout<<"Line: "<<line<<"	Char type error"<<endl;}
								 checkRedefine($2);
								 TreeNode *t = new TreeNode("char_def");
											t->child.push_back($1);
											t->child.push_back($2);
											t->kind=5;
											if($2->kind==7){
												for(int i=0;i<$2->var.size();i++)
													setIDType($2->var[i],10);
											}
											$2->kind=10;
											$$=t;}
			| assign_stmt {$$=$1;}
			| {$$=NULL;}
			;

if_stmt     : IF LP expr RP stmt
				 { $$->child.push_back($3);
                   $$->child.push_back($5);
                   $$=$1;}
                   
			| IF LP expr RP BLP seq BRP
                 { $$->child.push_back($3);
                   $$->child.push_back($6);
                   $$=$1;
                 }
              
            | IF LP expr RP BLP seq BRP ELSE stmt
                 { $$->child.push_back($3);
                   $$->child.push_back($6);
                   $$->child.push_back($9);
                   $$=$1;
                 }
             
            | IF LP expr RP stmt ELSE BLP seq BRP
                 { $$->child.push_back($3);
                   $$->child.push_back($5);
                   $$->child.push_back($8);
                   $$=$1;
                 }
                 
            | IF LP expr RP stmt ELSE stmt
                 { $$->child.push_back($3);
                   $$->child.push_back($5);
                   $$->child.push_back($7);
                   $$=$1;
                 }
            
         
            | IF LP expr RP BLP seq BRP ELSE BLP seq BRP
                 { $$->child.push_back($3);
                   $$->child.push_back($6);
                   $$->child.push_back($10);
                   $$=$1;
                 }
            ;
            
assign_stmt : assign_stmt DOU assign_stmt { TreeNode *t = new TreeNode("link_def");
											t->child.push_back($1);
											t->child.push_back($3);
											if($1->kind==7||$3->kind==7){t->kind=7;}
											else if($1->kind!=7){t->kind=$1->kind;}
											else {t->kind=$3->kind;}
											for(int i=0;i<$1->var.size();i++){
												t->var.push_back($1->var[i]);
											}
											for(int j=0;j<$3->var.size();j++){
												t->var.push_back($3->var[j]);
											}
											$$=t;
										    if(($1->kind!=$3->kind)&&($1->kind!=7)&&($3->kind!=7)){
										      cout<<"Line: "<<line<<"	Continuous define type error "<<endl;}}  //多个定义  check type
			
			| ID ASSIGN expr
				{if(($1->kind!=7)&&($1->kind!=$3->kind)){cout<<"Line: "<<line<<"	Conflict type error"<<endl;}  //check type
				 $2->child.push_back($1);
				 $2->child.push_back($3);
				 $1->val=$3->val;
				 $1->kind=$3->kind;
				 $2->kind=$3->kind;
				 $2->var.push_back($1->name);
				 $$=$2;
				 setIDType($1->name,$3->kind);}
				 
			| ID{$$=$1;}		//用于无初始化定义         
			;
		
		
for_stmt	: FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP stmt
				{ $1->child.push_back($3);
				  $1->child.push_back($5);
				  $1->child.push_back($7);
				  $1->child.push_back($9);
				  $$=$1;}
			| FOR LP def_stmt SEMI expr SEMI nosemi_stmt RP BLP seq BRP
				{ $1->child.push_back($3);
				  $1->child.push_back($5);
				  $1->child.push_back($7);
				  $1->child.push_back($10);
				  $$=$1;}
			;
			
while_stmt  : WHILE LP expr RP BLP seq BRP
				{ $1->child.push_back($3);
				  $1->child.push_back($6);
				  $$=$1;}
			;

            
expr    :   expr PLUS expr  { cacuCheckType($1->kind,$3->kind);
							  $2->val = $1->val + $3->val;
							  $2->child.push_back($1);
							  $2->child.push_back($3);
							  $2->kind=8;
							  $$=$2;}
			
		|	expr MINUS expr	{ cacuCheckType($1->kind,$3->kind);
							  $2->val = $1->val - $3->val;
							  $2->child.push_back($1);
							  $2->child.push_back($3);
							  $2->kind=8;
							  $$=$2; }
							  
		|	expr TIMES expr	{ cacuCheckType($1->kind,$3->kind);
							  $2->val = $1->val * $3->val;
							  $2->child.push_back($1);
							  $2->child.push_back($3);
							  $2->kind=8;	
							  $$=$2; }
							  
		|	expr OVER expr	{ cacuCheckType($1->kind,$3->kind);
								//$3->val 在语义上不为0
							  $2->child.push_back($1);
							  $2->child.push_back($3);
							  $2->kind=8;
							  $$=$2; }
		
		|   expr MODU expr  {if($3->kind!=8){
								cout << "Line:" << line << "	"<< "mod must be int!"<< endl;
								$2->val = $1->val;
							}
							
							else
								$2->val = $1->val % $3->val;
							$2->child.push_back($1);
							$2->child.push_back($3);
							$2->kind=8;
							$$=$2;}
								
		|   expr CAND expr	{ $2->val = $1->val & $3->val;
							  $2->child.push_back($1);
							  $2->child.push_back($3);
							  $2->kind=8;
							  $$=$2;}
							  
		|   expr COR expr	{ $2->val = $1->val | $3->val;
							  $2->child.push_back($1);
							  $2->child.push_back($3);
							  $2->kind=8;
							  $$=$2;}
							  
		|   expr XOR expr	{ $2->val = $1->val ^ $3->val;
							  $2->child.push_back($1);
							  $2->child.push_back($3);
							  $2->kind=8;
							  $$=$2; }
							  
		|	BN expr        {  $1->val = ~($2->val);
							  $1->kind=8;	
							  $1->child.push_back($2);
							  $$=$1;}
							  
		|   expr LS NUMBER_I	{$2->val = $1->val << ($3->val);
								 $2->child.push_back($1);
							     $2->child.push_back($3);
							     $2->kind=8;
							     $$=$2;}
							     
		|   expr RS NUMBER_I	{$2->val = $1->val >> ($3->val);
								 $2->child.push_back($1);
							     $2->child.push_back($3);
							     $2->kind=8;
							     $$=$2;}
									
		
		|	expr EQUAL expr{ $2->child.push_back($1);
							   $2->child.push_back($3);
							   $$=$2;}
							 
		|   expr LAE expr{  $2->child.push_back($1);
							   $2->child.push_back($3);
							   $$=$2;}
							   
		|   expr LEE expr{  $2->child.push_back($1);
							   $2->child.push_back($3);
							   $$=$2;}
							  
							   
		|   expr LARGE expr{ $2->child.push_back($1);
							   $2->child.push_back($3);
							   $$=$2;}
							  
							   
		|   expr LESS expr{  $2->child.push_back($1);
							   $2->child.push_back($3);
							   $$=$2;}
							   
						   
		|   expr UNEQ expr{  $2->child.push_back($1);
							   $2->child.push_back($3);
							   $$=$2;}
							   
							   
		|   expr AND expr {  $2->child.push_back($1);
							   $2->child.push_back($3);
							   $$=$2;}
						
			
		|   expr OR expr  {  $2->child.push_back($1);
		 					   $2->child.push_back($3);
							   $$=$2;}
							  
							   
		|   NOT expr		{  $1->child.push_back($2);
							   $$=$1;}
							 
							  
		|	LP expr RP	{ $$=$2; }
		|   ID SELFP	{$2->child.push_back($1);
						 $2->val=++$1->val;
						 $2->kind=$1->kind;
						 $$=$2;} 
		|   ID SELFM	{$2->child.push_back($1);
						 $2->val=--$1->val;
						 $2->kind=$1->kind;
						 $$=$2;} 
		|	MINUS expr 	{ $$=$2;
						  $$->val=2147483647;}
		|	NUMBER_D {$$=$1;} 
		|	NUMBER_I {$$=$1;}
		|	CHARACTER { $$=$1;}
        |   ID{$$=$1;} 
        |   {$$=NULL;}
        ;  
%%

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