#ifndef FUNC_H_
#define FUNC_H_

#pragma warning( disable : 4996)
#include<iostream>
#include<vector>
#include<fstream>



using namespace std;
struct token
{
	int kind;
	char *name;
	token*next;
	bool isDefine;
	int pos;
	token(int k = 6, char*n = NULL, token *behind = NULL, int p = 0,bool d=false);
};

struct  TreeNode
{
	vector<TreeNode*> child;
	vector<char *> var;
	char* name;
	int kind;
	int val;
	int index;
	TreeNode(char *n = "", int v = 0, int k = 6)
	{
		val = v;
		name = n;
		kind = k;
		index = 0;
	}
};




int search(char*word, TreeNode *t);
int add_word(int type, char*word, TreeNode *t);

char *getType(int kind);


void setIDType(char *name, int kind);

void cacuCheckType(int kind1, int kind2);			//kind1必须和kind2相等且kind1,2不能未定义

void checkRedefine(TreeNode *t);

void postOutPut(TreeNode* saveTree, fstream &outfile);



extern int line;   //行号
extern int idNum;
extern enum NodeKind;
extern TreeNode* saveTree;
extern token *word_list;
#endif // !FUNC_H_
