//# include <iostream>
//
//using namespace std;
//
//int main() {
//
//
//	int a = 10;
//	int* p = &a;
//	int& ref = a; // ref是a的引用
//	//int& ref2; // 错误，引用必须初始化
//	cout << "ref = " << ref << endl; // ref等于a的值
//	cout << "a的地址为：" << &a << endl;
//	cout << "ref 的地址为：" << &ref << endl; // ref 和 a 的地址完全一样
//
//	int b = 20;
//	ref = b;
//
//	cout << "a的地址为：" << &a << endl;
//	cout << "b的地址为：" << &b << endl;
//	cout << "ref的地址为：" << &ref << endl;
//	cout << "a = " << a << endl;
//
//	const int c = 314;
//	const int& cur = c;
//	p = &b;
//
//
//	return 0;
//}