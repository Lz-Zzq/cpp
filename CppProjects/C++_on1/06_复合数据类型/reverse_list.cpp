#include <iostream>
#include "list_node.h"

using namespace std;

int main() {

	//定义一个链表
	ListNode node5 = { 5,NULL };
	ListNode node4 = { 4,&node5 };
	ListNode node3 = { 3,&node4 };
	ListNode node2 = { 2,&node3 };
	ListNode node1 = { 1,&node2 };

	ListNode* node = &node1;

	//当前节点
	ListNode* curr = node;
	//后一节点
	ListNode* prev = NULL;

	while (curr) {

		ListNode* temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;





		//存储当前节点的下一个节点
		//当前节点的next指向上一个节点
		//上一个节点指向当前节点
		//当前节点指向下一个节点

	}


	while (prev) {

		cout << prev->value << endl;
		prev = prev->next;
	}

}




















	//cout << "&node >>\t " << &node << endl;  //node 自己的地址
	//cout << "node >>\t\t " << node << endl; //node指向的地址node1的地址
	//cout << "node1.next >>\t " << node1.next << endl; //node1.next 指向的地址
	//cout << "&node1.next >>\t " << &node1.next << endl; //&node1.next next自身的地址
	//cout << "&node2 >>\t " << &node2 << endl; //node2的地址
	//cout << "node2.next >>\t " << node2.next << endl; //node2的地址
	//cout << "&node3.next >>\t " << &node3.next<< endl; //node1的值
	//cout << "&node1 >>\t " << &node1.next << endl; //node1的值
	//cout << "&node1 >>\t " << &node2 << endl; //node1的值

	//ListNode* nnext = node;
	//ListNode* curr = node;
	//ListNode* prev = nullptr;

	//while(curr) {
	//	//临时指针
	//	ListNode* temp = curr->next;
	//	curr->next = prev;
	//	//两个指针都向前移动
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