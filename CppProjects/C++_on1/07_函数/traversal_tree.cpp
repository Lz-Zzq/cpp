#include <iostream>
#include "tree_node.h"

using namespace std;

int main() {

	// 定义一棵二叉树
	TreeNode nodeG = { "G", nullptr, nullptr };
	TreeNode nodeF = { "F", nullptr, nullptr };
	TreeNode nodeE = { "E", &nodeG, nullptr };
	TreeNode nodeD = { "D", nullptr, nullptr };
	TreeNode nodeC = { "C", nullptr, &nodeF };
	TreeNode nodeB = { "B", &nodeD, &nodeE };
	TreeNode nodeA = { "A", &nodeB, &nodeC };
	TreeNode* tree = &nodeA;
	printTreePreOrder(tree);
	cout << endl << endl;
	printTreeInOrder(tree);
	cout << endl << endl;
	printTreePostOrder(tree);

	return 0;
}