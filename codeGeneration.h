#ifndef CODEGENERATION_H_
#define CODEGENERATION_H_
#include"func.h"

extern int ord;
extern int seg;
extern int skip;
extern int varnum;
extern int change;
extern vector<TreeNode*> self;

void dealSelfpm(vector<TreeNode*> &self, fstream &outfile);
void printInput(TreeNode *root, fstream &outfile);
void printOutput(TreeNode *root, fstream &outfile);
void printHead(fstream &outfile);
void printDefine(TreeNode *root, fstream &outfile);
void printCaculate(TreeNode *root, fstream &outfile);
void printAssign(TreeNode *root, fstream &outfile);
void dealLogic(TreeNode *root, fstream &outfile, int dia1, int dia2);
int printRelation(TreeNode *root, fstream &outfile, int dia1, int dia2);
void printIf(TreeNode *root, fstream &outfile);
void printWhile(TreeNode *root, fstream &outfile);
void printEnd(fstream &outfile);
void codeGeneration(TreeNode *root, fstream &outfile);
void visit(TreeNode *root, fstream &outfile);
void postTravel(TreeNode *root, fstream &outfile);
void preTravel(TreeNode *root, fstream &outfile);
char* tmpVar(int num);
void cacuTmp(TreeNode *root);
void printFor(TreeNode *root, fstream &outfile);

#endif