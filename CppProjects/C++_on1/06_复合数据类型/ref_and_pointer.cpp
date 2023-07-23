//# include <iostream>
//
//using namespace std;
//
//int main() {
//
//	//引用和指针常量
//	int a = 10;
//	// 引用的行为，和指针常量非常类似
//	int& r = a;
//	int* const p = &a;
//	r = 20;
//	*p = 30;
//	cout << "a = " << a << endl;
//	cout << "a的地址为：" << &a << endl;
//	cout << "r = " << r << endl;
//	cout << "r的地址为：" << &r << endl;
//	cout << "*p = " << *p << endl;
//	cout << "p = " << p << endl;
//
//	int i = 56, j = 28;;
//	int* ptr = &i; // ptr是一个指针，指向int类型对象
//	int*& pref = ptr; // pref是一个引用，绑定指针ptr
//	cout << *pref << endl;
//	pref = &j; // 将指针ptr指向j
//	cout << *pref << endl;
//	*pref = 20; // 将 j 的值变为 20
//	cout << j << endl;
//
//
//
//	int& ref = i;
//	//int&* rptr = &ref; // 错误，不允许使用指向引用的指针
//	int* rptr = &ref; // 事实上就是指向了 i	
//
//}