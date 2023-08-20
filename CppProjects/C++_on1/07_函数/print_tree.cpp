#include <iostream>
#include "tree_node.h"

using namespace std;

//�������
void printTreePreOrder(TreeNode* root) {
	 //��׼��� ����ǿ�ֱ�ӷ���
	if (root == NULL) return;

	//���ȴ�ӡ���ڵ��ֵ
	cout << root->name << "\t";


	//�ݹ��ӡ��������
	printTreePreOrder(root->left);
	printTreePreOrder(root->right);
}


//�������
void printTreeInOrder(TreeNode* root) {
	 //��׼��� ����ǿ�ֱ�ӷ���
	if (root == NULL) return;

	
	//�ݹ��ӡ������
	printTreeInOrder(root->left);

	//���ȴ�ӡ���ڵ��ֵ
	cout << root->name << "\t";

	//��ӡ�ұ�
	printTreeInOrder(root->right);
	
}

//�������
void printTreePostOrder(TreeNode* root) {
	//��׼��� ����ǿ�ֱ�ӷ���
	if (root == NULL) return;


	//�ݹ��ӡ������
	printTreePostOrder(root->left);


	//��ӡ������
	printTreePostOrder(root->right);


	//���ȴ�ӡ���ڵ��ֵ
	cout << root->name << "\t";

}
