#pragma once
#include <string> 
using namespace std;

struct TreeNode {

	string name;
	TreeNode* left;
	TreeNode* right;
	
};


//前序遍历
void printTreePreOrder(TreeNode* root);

//中序遍历
void printTreeInOrder(TreeNode* root);

//后序遍历
void printTreePostOrder(TreeNode* root);