#include <iostream>
#include "list_node.h"

using namespace std;

int main() {

	//����һ������
	ListNode node5 = { 5,NULL };
	ListNode node4 = { 4,&node5 };
	ListNode node3 = { 3,&node4 };
	ListNode node2 = { 2,&node3 };
	ListNode node1 = { 1,&node2 };

	ListNode* node = &node1;

	//��ǰ�ڵ�
	ListNode* curr = node;
	//��һ�ڵ�
	ListNode* prev = NULL;

	while (curr) {

		ListNode* temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;





		//�洢��ǰ�ڵ����һ���ڵ�
		//��ǰ�ڵ��nextָ����һ���ڵ�
		//��һ���ڵ�ָ��ǰ�ڵ�
		//��ǰ�ڵ�ָ����һ���ڵ�

	}


	while (prev) {

		cout << prev->value << endl;
		prev = prev->next;
	}

}




















	//cout << "&node >>\t " << &node << endl;  //node �Լ��ĵ�ַ
	//cout << "node >>\t\t " << node << endl; //nodeָ��ĵ�ַnode1�ĵ�ַ
	//cout << "node1.next >>\t " << node1.next << endl; //node1.next ָ��ĵ�ַ
	//cout << "&node1.next >>\t " << &node1.next << endl; //&node1.next next����ĵ�ַ
	//cout << "&node2 >>\t " << &node2 << endl; //node2�ĵ�ַ
	//cout << "node2.next >>\t " << node2.next << endl; //node2�ĵ�ַ
	//cout << "&node3.next >>\t " << &node3.next<< endl; //node1��ֵ
	//cout << "&node1 >>\t " << &node1.next << endl; //node1��ֵ
	//cout << "&node1 >>\t " << &node2 << endl; //node1��ֵ

	//ListNode* nnext = node;
	//ListNode* curr = node;
	//ListNode* prev = nullptr;

	//while(curr) {
	//	//��ʱָ��
	//	ListNode* temp = curr->next;
	//	curr->next = prev;
	//	//����ָ�붼��ǰ�ƶ�
	//	prev = curr;
	//	curr = temp;

	//}

	//ListNode* newList = prev;

	//while (newList) {
	//	cout << newList->value << endl;
	//	newList = newList->next;
	//}
	
	//return 0;
//}