//# include <iostream>
//
//using namespace std;
//
//int main() {
//
//
//	int a = 10;
//	int* p = &a;
//	int& ref = a; // ref��a������
//	//int& ref2; // �������ñ����ʼ��
//	cout << "ref = " << ref << endl; // ref����a��ֵ
//	cout << "a�ĵ�ַΪ��" << &a << endl;
//	cout << "ref �ĵ�ַΪ��" << &ref << endl; // ref �� a �ĵ�ַ��ȫһ��
//
//	int b = 20;
//	ref = b;
//
//	cout << "a�ĵ�ַΪ��" << &a << endl;
//	cout << "b�ĵ�ַΪ��" << &b << endl;
//	cout << "ref�ĵ�ַΪ��" << &ref << endl;
//	cout << "a = " << a << endl;
//
//	const int c = 314;
//	const int& cur = c;
//	p = &b;
//
//
//	return 0;
//}