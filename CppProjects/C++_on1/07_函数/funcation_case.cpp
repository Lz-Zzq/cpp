# include<iostream>
# include "f.h"
typedef int arrayT[5];
using namespace std;

//�����ͺ���
int cubeSum(int x, int y);

//ʹ��������Ϊ�β�
void increase(int &x) {
	++x;
}

void in(const string&  x) {

}

//�����޷�ֱ�ӿ���
void pri(int arr[] ,int size) {
	

}
//���ֶ��巽ʽ��ȫ�ȼ�
void ppr(int* arr, int size) {
	
	for (int i = 0; i < size; i++)
	{
		cout << *arr << endl;
		arr++;
	}

}

string& lr(string str1,string str2) {
	return str1.size() > str2.size() ? str1 : str2;
}


void ppt(int (& arr)[5]) {
	for (int x : arr) {
		cout << x << endl;
	}
}



int main11(){

	cout << cubeSum(1, 1) << endl;
	cout << sum(1, 1) << endl;
	
	int x = 5;

	increase(x);

	cout << x << endl;
	
	//�������û��Լ�ת�ɿ���ת����Ŀ�����
	in("adsf");

	int arr[5] = { 11,22,33,44,55 };
	pri(arr, sizeof(arr) / sizeof(int));
	cout << endl;
	ppr(arr, sizeof(arr) / sizeof(int));
	cout << endl;
	ppt(arr);

	string str1 = "hello world ? word? wod?";
	string str2 = "hello cpp difficult dogs? no easy cat fish ???  ";

	lr(str1,str2);

	//��������ָ��
	int arr1[5] = { 1,2,3,4,5 };
	int* parr[5]; //ָ������
	//����ָ������[5]ָ����һ������ĵ�ַ
	int(*ap)[5]	 = &arr; // ����ָ��  ָ�������ָ��

	int(*fun(int x))[5];  //����
	typedef int arrayT[5];
	arrayT* fun(int x);  //�� ��Ч

	//β�÷�������  auto �Զ��ƶϷ���ֵ����
	auto fun3(int x) -> int(*)[5];
	auto fun3(int x) -> int(*)[5];
	x = 1;
	int* ps = &x;
	cout << "ps[0]" << ps[1] << endl;;

	// 1  1  2  3  5  8  13
	int fb(int x);
	cout << endl;
	cout << fb(6) << endl;
	cout << endl;
	int fb3(int x);
	cout << fb3(6) << endl;
	return 0;
}

//���������� ����ָ��
auto fun3(int x) -> int(*)[5] {
	return NULL;
}
//����ָ��
int(*fun1(int x))[5] {
	return NULL;
}
//����ָ��
arrayT* fun(int x) {
	return NULL;
}
//쳲�����
int fb(int x) {
	if (x == 1 || x == 2) {
		return 1;
	}
	int y = fb(x - 1) + fb(x - 2);
	return y;
}

//쳲�����
int *fb2(int x) {
	int* array = new int[x + 1]; //ָ��ָ��������ĵ�һ��Ԫ��
	array[0] = 0;
	array[1] = 1;
	for (int i = 2; i <= x; i++) {
		array[i] = array[i - 1] + array[i - 2];
	}
	return array;
}

//쳲�����
int fb3(int x) {

	int first = 0;
	int second = 1;
	int third = 0;

	for (int i = 2; i <= x; i++) {
		//����λ���ڵڶ�λ+��һλ (����λ)
		third = second + first;
		//��һλ���ڵڶ�λ ָ�����
		first = second; 
		//�ڶ�λ���ڵ���λ
		second = third;
	}


	return second;
}