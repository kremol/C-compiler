#include"func.h"

static int index = 1;		//遍历序号
int line = 1;
int idNum = 1;

TreeNode *saveTree = new TreeNode();
token *word_list = NULL;
enum NodeKind { IFK, FORK, WHILEK, INTK, DOUBLEK, CHARK, OTHERK, IDK, NUMBERK_I, NUMBERK_D, CHARACTERK };

token::token(int k, char*n, token *behind, int p,bool d )
{
	kind = k;
	name = new char[sizeof(n)+1];
	strcpy_s(name, sizeof(n)+1, n);
	next = behind;
	pos = p;
	isDefine = d;
}



int search(char*word, TreeNode *t)
{
	token *tmp = word_list;
	for (; tmp != NULL; tmp = tmp->next){
		if (strcmp(tmp->name, word) == 0){
			t->kind = tmp->kind;
			return 1;
		}
	}
	return -1;//not found
}

int add_word(int type, char*word, TreeNode *t)
{
	if (search(word, t) != -1)
		return -1;
	t->kind = IDK;
	token* tmp = new token(type, word, NULL, idNum);
	tmp->next = word_list;
	word_list = tmp;
	idNum += 1;
	return 1;
}

char *getType(int kind)
{
	switch (kind){
	case 0:return "IFK";
	case 1:return "FORK";
	case 2:return "WHILEK";
	case 3:return "INTK";
	case 4:return "DOUBLEK";
	case 5:return "CHARK";
	case 6:return "OTHERK";
	case 7:return "IDK";
	case 8:return "NUMBERK_I";
	case 9:return "NUMBERK_D";
	case 10:return "CHARACTERK";
	}
}

void setIDType(char *name, int kind)
{
	token *tmp = word_list;
	for (; tmp != NULL; tmp = tmp->next){
		if (strcmp(tmp->name, name) == 0){
			tmp->kind = kind;
			return;
		}
	}
}


void checkRedefine(TreeNode *t)
{
	for (int i = 0; i < t->var.size(); i++){
		for (token *tmp = word_list; tmp != NULL; tmp = tmp->next){
			if (strcmp(tmp->name, t->var[i]) == 0){
				if (tmp->isDefine){
					cout << "Line: " << line<<"  "<< tmp->name << " has been defined!" << endl;
					break;
				}
				else
					tmp->isDefine = true;
			}
		}
	}
}

void cacuCheckType(int kind1, int kind2)			//kind1必须和kind2相等且kind1,2不能未定义
{
	if (kind1 != kind2 || kind1 == IDK || kind2 == IDK)
		cout << "Line:" << line << "	" << getType(kind1) << " can't be caculated with " << getType(kind2) << endl;
}

void postOutPut(TreeNode* saveTree, fstream &outfile)
{
	if (saveTree){
		if (saveTree->child.size() != 0){
			for (int i = 0; i < saveTree->child.size(); i++){
				if (saveTree->child[i]){
					saveTree->child[i]->index = index++;
					postOutPut(saveTree->child[i], outfile);
				}
			}
			outfile << saveTree->index << " : " << getType(saveTree->kind) << "		" << saveTree->name << "		" << "Children: ";
			for (int i = 0; i < saveTree->child.size(); i++){
				if (saveTree->child[i]){
					outfile << saveTree->child[i]->index << " ";
				}
			}
			outfile << "\n";
		}
		else{
			outfile << saveTree->index << " : " << getType(saveTree->kind) << "		" << saveTree->name << "		" << "Children: \n";
		}
	}
}