#include"codeGeneration.h"

void printHead(fstream &outfile)
{
	outfile << ".386" << endl;
	outfile << ".model flat, stdcall" << endl;
	outfile << "option casemap : none" << endl;
	outfile << "include \\masm32\\include\\windows.inc" << endl;
	outfile << "include \\masm32\\include\\masm32.inc" << endl;
	outfile << "include \\masm32\\include\\msvcrt.inc" << endl;
	outfile << "include \\masm32\\include\\kernel32.inc" << endl;
	outfile << "includelib \\masm32\\lib\\masm32.lib" << endl;
	outfile << "includelib \\masm32\\lib\\msvcrt.lib" << endl;
	outfile << "includelib \\masm32\\lib\\kernel32.lib" << endl;
}
int ord = 0;     //临时变量个数
int seg = 0;
int skip = 0;    
int varnum = 0;  //表示变量数
int change = 0;  //表示非
vector<TreeNode*> self;

void cacuTmp(TreeNode *root)
{
	if (root){
		if (strcmp(root->name, "+") == 0 || strcmp(root->name, "-") == 0
			|| strcmp(root->name, "*") == 0 || strcmp(root->name, "/") == 0
			|| strcmp(root->name, "++") == 0 || strcmp(root->name, "--") == 0
			|| strcmp(root->name, "%") == 0 || strcmp(root->name, "&") == 0
			|| strcmp(root->name, "|") == 0 || strcmp(root->name, "^") == 0
			|| strcmp(root->name, "~") == 0 || strcmp(root->name, "<<") == 0
			|| strcmp(root->name, ">>") == 0)
		{
			varnum++;
		}
		if (root->child.size() != 0){
			for (int i = 0; i < root->child.size(); i++)
				cacuTmp(root->child[i]);
		}
	}
}
void printDefine(TreeNode *root, fstream &outfile)
{
	outfile << ".data" << endl;
	token *tmp = word_list;
	for (; tmp != NULL; tmp = tmp->next)
			outfile << "		" << tmp->name << " dd 0" << endl;
	for (int i = 0; i < varnum; i++)
		outfile << "		_t" << i << " dd 0" << endl;
	outfile << "		data db '%d',0" << endl;
	outfile << "		data1 db '%c',0" << endl;
	outfile << ".code" << endl;
	outfile << "start:" << endl;
	outfile << "		" << endl;
}

char* tmpVar(int num)
{
	if (num < 10){
		char *k = new char(4);
		k[0] = '_';
		k[1] = 't';
		k[2] = num + '0';
		k[3] = '\0';
		return k;
	}
	else{
		char *k = new char(5);
		k[0] = '_';
		k[1] = 't';
		k[2] = num/10 + '0';
		k[3] = num % 10 + '0';
		k[4] = '\0';
		return k;
	}
}
void dealSelfpm(vector<TreeNode *>&self,fstream &outfile)			
{
	for (int i = 0; i < self.size(); i++){
		outfile << "		mov eax, " << self[i]->child[0]->name << endl;
		if (self[i]->val==111)
			outfile << "		add eax, " << 1 << endl;
		else
			outfile << "		sub eax, " << 1 << endl;
		outfile << "		mov " << self[i]->child[0]->name << ", eax" << endl;
	}
	self.clear();
}
void printInput(TreeNode *root, fstream &outfile)
{
	if (root->child[0]->kind==8)
		outfile << "		invoke crt_scanf,addr data,addr " << root->child[0]->name << endl;
	else
		outfile << "		invoke crt_scanf,addr data1,addr " << root->child[0]->name << endl;
}
void printOutput(TreeNode *root, fstream &outfile)
{
	postTravel(root->child[0], outfile);
	if (root->child[0]->kind==8)
		outfile << "		invoke crt_printf,addr data, " << root->child[0]->name << endl;
	else
		outfile << "		invoke crt_printf,addr data1, " << root->child[0]->name << endl;
}
void printCaculate(TreeNode *root, fstream &outfile)
{
	if (strcmp(root->name, "+") == 0){
		outfile << "		mov eax, " << root->child[0]->name << endl;
		outfile << "		add eax, " << root->child[1]->name << endl;
		outfile << "		mov _t" << ord++ << ", eax" << endl;
		root->name = tmpVar(ord - 1);
	}
	else if (strcmp(root->name, "-") == 0){
		outfile << "		mov eax, " << root->child[0]->name << endl;
		outfile << "		sub eax, " << root->child[1]->name << endl;
		outfile << "		mov _t" << ord++ << ", eax" << endl;
		root->name = tmpVar(ord - 1);
	}
	else if (strcmp(root->name, "*") == 0){
		outfile << "		mov eax, " << root->child[0]->name << endl;
		outfile << "		mov ebx, " << root->child[1]->name << endl;
		outfile << "		mul ebx" <<endl;
		outfile << "		mov _t" << ord++ << ", eax" << endl;
		root->name = tmpVar(ord - 1);
	}
	else if (strcmp(root->name, "/") == 0){
		outfile << "		mov eax, " << root->child[0]->name << endl;
		outfile << "		mov ebx, " << root->child[1]->name << endl;
		outfile << "		mov edx, 0"<< endl;
		outfile << "		div ebx" << endl;
		outfile << "		mov _t" << ord++ << ", eax" << endl;
		root->name = tmpVar(ord - 1);
	}
	else if (strcmp(root->name, "++") == 0){
		self.push_back(root);
		root->name = root->child[0]->name;
		root->val = 111;				//111代表++
	}
	else if (strcmp(root->name, "--") == 0){
		self.push_back(root);
		root->name = root->child[0]->name;
		root->val = 222;				//222代表--
	}
	else if (strcmp(root->name, "%") == 0){
		outfile << "		mov edx, " << 0 << endl;
		outfile << "		mov eax, " << root->child[0]->name << endl;
		outfile << "		mov ebx, " << root->child[1]->name << endl;
		outfile << "		div ebx" << endl;
		outfile << "		mov _t" << ord++ <<", edx" << endl;
		root->name = tmpVar(ord - 1);
	}
	else if (strcmp(root->name, "&") == 0){
		outfile << "		mov eax, " << root->child[0]->name<< endl;
		outfile << "		mov ebx, " << root->child[1]->name << endl;
		outfile << "		and eax,ebx" << endl;
		outfile << "		mov _t" << ord++ << ", eax" << endl;
		root->name = tmpVar(ord - 1);
	}
	else if (strcmp(root->name, "|") == 0){
		outfile << "		mov eax, " << root->child[0]->name << endl;
		outfile << "		mov ebx, " << root->child[1]->name << endl;
		outfile << "		or eax,ebx" << endl;
		outfile << "		mov _t" << ord++ << ", eax" << endl;
		root->name = tmpVar(ord - 1);
	}
	else if (strcmp(root->name, "^") == 0){
		outfile << "		mov eax, " << root->child[0]->name << endl;
		outfile << "		mov ebx, " << root->child[1]->name << endl;
		outfile << "		xor eax,ebx" << endl;
		outfile << "		mov _t" << ord++ << ", eax" << endl;
		root->name = tmpVar(ord - 1);
	}
	else if (strcmp(root->name, "~") == 0){
		outfile << "		mov eax, " << root->child[0]->name << endl;
		outfile << "		not eax" << endl;
		outfile << "		mov _t" << ord++ << ", eax" << endl;
		root->name = tmpVar(ord - 1);
	}
	else if (strcmp(root->name, "<<") == 0){
		outfile << "		mov eax, " << root->child[0]->name << endl;
		outfile << "		sal eax, " << root->child[1]->name << endl;		
		outfile << "		mov _t" << ord++ << ", eax" << endl;
		root->name = tmpVar(ord - 1);
	}
	else if (strcmp(root->name, ">>") == 0){
		outfile << "		mov eax, " << root->child[0]->name << endl;
		outfile << "		sar eax, " << root->child[1]->name << endl;
		outfile << "		mov _t" << ord++ << ", eax" << endl;
		root->name = tmpVar(ord - 1);
	}
}

void printAssign(TreeNode *root, fstream &outfile)
{
	if (root->kind == 8){
		outfile << "		mov eax, " << root->child[1]->name << endl;
		if (root->child[1]->val == INT_MAX){
			outfile << "		mov ebx, -1" << endl;
			outfile << "		mul ebx" << endl;
		}
	}
	else if (root->kind==10)
		outfile << "		mov eax, " << root->child[1]->name << endl;
	outfile << "		mov " << root->child[0]->name << ",eax" << endl;
}
void dealLogic(TreeNode *root, fstream &outfile,int dia1,int dia2)
{
	if (strcmp(root->name, "&&") == 0){
		printRelation(root->child[0], outfile, dia1, dia2 + 1);
		outfile << "@" << seg <<":"<< endl;
		printRelation(root->child[1], outfile, dia2, dia2 + 1);
	}
	else if (strcmp(root->name, "||") == 0){
		printRelation(root->child[0], outfile, dia2, dia1);
		outfile << "@" << seg << ":" << endl;
		printRelation(root->child[1], outfile, dia2, dia2 + 1);
	}
}
int printRelation(TreeNode *root, fstream &outfile,int dia1,int dia2)
{
	if (strcmp(root->name, "&&") == 0 || strcmp(root->name, "||") == 0){
		dealLogic(root, outfile, dia1, dia2);
		return dia2;
	}
	else if (strcmp(root->name, "!") == 0){
		change = 1;
		printRelation(root->child[0], outfile, dia1, dia2);
	}
	else if (strcmp(root->name, ">") == 0 || strcmp(root->name, "<") == 0
		|| strcmp(root->name, ">=") == 0 || strcmp(root->name, "<=") == 0
		|| strcmp(root->name, "==") == 0 || strcmp(root->name, "!=") == 0)
	{
		outfile << "		mov eax, " << root->child[0]->name << endl;
		if (root->child[0]->val == INT_MAX){
			outfile << "		mov ebx, -1" << endl;
			outfile << "		mul ebx" << endl;
		}
		outfile << "		mov ecx, eax" << endl;
		outfile << "		mov eax, " << root->child[1]->name << endl;
		if (root->child[1]->val == INT_MAX){
			outfile << "		mov ebx, -1" << endl;
			outfile << "		mul ebx" << endl;
		}
		outfile << "		mov ebx, eax" << endl;
		outfile << "		cmp ecx,ebx" << endl;
		if (strcmp(root->name, "==") == 0)
			outfile << "		je @" << dia1 << endl;				     //等于跳转指令????
		else if (strcmp(root->name, "!=") == 0)
			outfile << "		jne @" << dia1 << endl;
		else if (strcmp(root->name, ">") == 0)
			outfile << "		jg @" << dia1 << endl;
		else if (strcmp(root->name, "<") == 0)
			outfile << "		jl @" << dia1 << endl;
		else if (strcmp(root->name, ">=") == 0)
			outfile << "		jge @" << dia1 << endl;
		else if (strcmp(root->name, "<=") == 0)
			outfile << "		jle @" << dia1 << endl;
		outfile << "		jmp @" << dia2 << endl;
		return dia1;				//返回跳转的段
	}
	else {
		outfile << "		mov eax " << root->name << endl;
		outfile << "		cmp eax, " << 0 << endl;
		outfile << "		jg @" << dia1 << endl;
		outfile << "		jmp @" << dia2 << endl;
		return dia1;
	}
}

void printIf(TreeNode *root, fstream &outfile)
{
	if (root->child.size() < 3){
		outfile << "@" << seg++ << ":" << endl;
		postTravel(root->child[0], outfile);			//处理关系中的运算
		dealSelfpm(self, outfile);
		int k = printRelation(root->child[0], outfile, seg, seg + 1);
		seg = k + 2;
		if (!change)
			outfile << "@" << k << ":" << endl;
		else
			outfile << "@" << k + 1 << ":" << endl;
		preTravel(root->child[1], outfile);
		if (!change)
			outfile << "@" << k + 1 << ":" << endl;
		else
			outfile << "@" << k << ":" << endl;
		change = 0;
	}

	else{					// include else situation
		outfile << "@" << seg++ << ":" << endl;
		postTravel(root->child[0], outfile);			//处理关系中的运算
		dealSelfpm(self, outfile);
		int k = printRelation(root->child[0], outfile, seg, seg + 1);
		seg = k + 2;
		if (!change)
			outfile << "@" << k << ":" << endl;
		else
			outfile << "@" << k + 1 << ":" << endl;
		preTravel(root->child[1], outfile);
		int t = seg;
		outfile << "		jmp @" << seg++ << endl;
		if (!change)
			outfile << "@" << k + 1 << ":" << endl;
		else
			outfile << "@" << k << ":" << endl;
		change = 0;
		preTravel(root->child[2], outfile);
		outfile << "@" << t << ":" << endl;
	}
}

void printWhile(TreeNode *root, fstream &outfile)
{
	int m = seg;
	outfile << "@" << seg++ << ":" << endl;
	postTravel(root->child[0], outfile);			//处理关系中的运算
	dealSelfpm(self, outfile);
	int k = printRelation(root->child[0], outfile, seg, seg + 1);
	seg = k + 2;
	if (!change)
		outfile << "@" << k << ":" << endl;
	else
		outfile << "@" << k + 1 << ":" << endl;
	preTravel(root->child[1], outfile);
	outfile << "		jmp @" << m << endl;
	if (!change)
		outfile << "@" << k + 1 << ":" << endl;
	else
		outfile << "@" << k << ":" << endl;
	change = 0;

}
void printFor(TreeNode *root, fstream &outfile)
{
	preTravel(root->child[0], outfile);
	int m = seg;
	outfile << "@" << seg++ << ":" << endl;
	postTravel(root->child[1], outfile);			//处理关系中的运算
	dealSelfpm(self, outfile);
	int k = printRelation(root->child[1], outfile, seg, seg + 1);
	seg = k + 2;
	if (!change)
		outfile << "@" << k << ":" << endl;
	else
		outfile << "@" << k + 1 << ":" << endl;
	preTravel(root->child[3], outfile);
	preTravel(root->child[2], outfile);
	outfile << "		jmp @" << m << endl;
	if (!change)
		outfile << "@" << k + 1 << ":" << endl;
	else
		outfile << "@" << k << ":" << endl;
	change = 0;
	
}
void printEnd(fstream &outfile)
{
	outfile << "		invoke crt__getch" << endl;
	outfile << "		ret" << endl;
	outfile << "end start" << endl;
}

void preTravel(TreeNode *root, fstream &outfile)
{
	if (root){
		visit(root, outfile);
		if (skip == 1){
			skip = 0;
			return;
		}
		if (root->child.size() != 0){
			for (int i = 0; i < root->child.size(); i++)
				preTravel(root->child[i], outfile);
		}
	}
}
void postTravel(TreeNode *root, fstream &outfile)
{
	if (root){
		if (root->child.size() != 0){
			for (int i = 0; i < root->child.size(); i++)
				postTravel(root->child[i], outfile);
		}
		//对根节点进行处理
		if (strcmp(root->name, "+") == 0 || strcmp(root->name, "-") == 0
			|| strcmp(root->name, "*") == 0 || strcmp(root->name, "/") == 0
			|| strcmp(root->name, "++") == 0 || strcmp(root->name, "--") == 0
			|| strcmp(root->name, "%") == 0 || strcmp(root->name, "&") == 0
			|| strcmp(root->name, "|") == 0 || strcmp(root->name, "^") == 0
			|| strcmp(root->name, "~") == 0 || strcmp(root->name, "<<") == 0
			|| strcmp(root->name, ">>") == 0)
		{
			printCaculate(root, outfile);
		}
		else if (strcmp(root->name, "=") == 0){
			printAssign(root, outfile);
		}
		else if (strcmp(root->name, "print") == 0){
			printOutput(root, outfile);
		}
	}
}

void visit(TreeNode *root, fstream &outfile)
{
	if (strcmp(root->name, "if") == 0){
		printIf(root, outfile);
		skip = 1;
	}
	else if (strcmp(root->name, "while") == 0){
		printWhile(root, outfile);
		root = NULL;
		skip = 1;
	}
	else if (strcmp(root->name, "=") == 0){
		postTravel(root, outfile);
		dealSelfpm(self, outfile);
		skip = 1;
	}
	else if (strcmp(root->name, "for") == 0){
		printFor(root, outfile);
		skip = 1;
	}
	else if (strcmp(root->name, "print") == 0){
		postTravel(root, outfile);
		dealSelfpm(self, outfile);
		skip = 1;
	}
	else if (strcmp(root->name, "input") == 0){
		printInput(root, outfile);
		skip = 1;
	}
	else if (strcmp(root->name, "+") == 0 || strcmp(root->name, "-")==0
		|| strcmp(root->name, "*") == 0 || strcmp(root->name, "/")==0
		||strcmp(root->name,"++")==0||strcmp(root->name,"--")==0
		|| strcmp(root->name, "%") == 0|| strcmp(root->name, "&") == 0 
		|| strcmp(root->name, "|") == 0|| strcmp(root->name, "^") == 0 
		|| strcmp(root->name, "~") == 0|| strcmp(root->name, "<<") == 0 
		|| strcmp(root->name, ">>") == 0)
	{
		postTravel(root, outfile);
		dealSelfpm(self, outfile);
		skip = 1;
	}
}
void codeGeneration(TreeNode *root, fstream &outfile)
{
	cacuTmp(root);
	printHead(outfile);
	printDefine(root, outfile);
	preTravel(root, outfile);
	printEnd(outfile);
}
