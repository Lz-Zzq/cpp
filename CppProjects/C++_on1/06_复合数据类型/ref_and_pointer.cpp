//# include <iostream>
//
//using namespace std;
//
//int main() {
//
//	//���ú�ָ�볣��
//	int a = 10;
//	// ���õ���Ϊ����ָ�볣���ǳ�����
//	int& r = a;
//	int* const p = &a;
//	r = 20;
//	*p = 30;
//	cout << "a = " << a << endl;
//	cout << "a�ĵ�ַΪ��" << &a << endl;
//	cout << "r = " << r << endl;
//	cout << "r�ĵ�ַΪ��" << &r << endl;
//	cout << "*p = " << *p << endl;
//	cout << "p = " << p << endl;
//
//	int i = 56, j = 28;;
//	int* ptr = &i; // ptr��һ��ָ�룬ָ��int���Ͷ���
//	int*& pref = ptr; // pref��һ�����ã���ָ��ptr
//	cout << *pref << endl;
//	pref = &j; // ��ָ��ptrָ��j
//	cout << *pref << endl;
//	*pref = 20; // �� j ��ֵ��Ϊ 20
//	cout << j << endl;
//
//
//
//	int& ref = i;
//	//int&* rptr = &ref; // ���󣬲�����ʹ��ָ�����õ�ָ��
//	int* rptr = &ref; // ��ʵ�Ͼ���ָ���� i	
//
//}