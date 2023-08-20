#include <iostream>
#include "tree_node.h"

using namespace std;

//先序遍历
void printTreePreOrder(TreeNode* root) {
	 //基准情况 如果是空直接返回
	if (root == NULL) return;

	//首先打印跟节点的值
	cout << root->name << "\t";


	//递归打印左右子数
	printTreePreOrder(root->left);
	printTreePreOrder(root->right);
}


//中序遍历
void printTreeInOrder(TreeNode* root) {
	 //基准情况 如果是空直接返回
	if (root == NULL) return;

	
	//递归打印左子树
	printTreeInOrder(root->left);

	//首先打印跟节点的值
	cout << root->name << "\t";

	//打印右边
	printTreeInOrder(root->right);
	
}

//后序遍历
void printTreePostOrder(TreeNode* root) {
	//基准情况 如果是空直接返回
	if (root == NULL) return;


	//递归打印左子树
	printTreePostOrder(root->left);


	//打印右子树
	printTreePostOrder(root->right);


	//首先打印跟节点的值
	cout << root->name << "\t";

}
