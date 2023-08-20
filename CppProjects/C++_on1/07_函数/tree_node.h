#pragma once
#include <string> 
using namespace std;

struct TreeNode {

	string name;
	TreeNode* left;
	TreeNode* right;
	
};


//ǰ�����
void printTreePreOrder(TreeNode* root);

//�������
void printTreeInOrder(TreeNode* root);

//�������
void printTreePostOrder(TreeNode* root);