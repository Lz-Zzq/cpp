//# include <iostream>
//
//using namespace std;
//
//int main() {
//
//	//指针的使用
//	int a = 10;
//	int b = 20;
//	long c = 35;
//
//	int* p1 = &a;
//	long* p2 = &c;
//
//	//空指针
//	int* ptr = nullptr; 
//	ptr = NULL;
//	ptr = 0;  //指向的不是字节0,而是不被使用的一个地址
//	
//
//	cout << "a地址为: " << &a << endl;
//	cout << "b地址为: " << &b<< endl;
//	cout << "c地址为: " << &c << endl;
//	
//	
//	cout << "p1: " << p1 << endl;
//	cout << "p2: " << p2 << endl;
//
//	cout << " " << endl;
//
//	int i = 1024;
//	int* pi = &i;
//	int** ppi = &pi;
//
//	cout << i << endl;
//	cout << &i << endl;
//	cout << pi << endl;
//	cout << ppi << endl;
//	cout << *pi << endl;
//	cout << *ppi << endl;
//	cout << **ppi << endl;
//	
//	const int i2 = 10;
//	const int* pc = &i2;
//	
//	cout << *pc << endl;
//	*pi = 12;
//	//*pc = 12;
//
//	//指向常量的指针常量
//	const int* const ccp = &i2;
//
//	cout << "---------------------------" << endl;
//
//	//指针与数组
//	int arr[] = { 1,5,3,4,5 };
//	cout << "arr = " << arr << endl;
//
//
//	cout << &arr << endl;
//	cout << &arr[0] << endl;
//	cout << &arr[1] << endl;
//
//	int* poi = nullptr;
//	poi = arr;
//
//	cout << poi << endl;
//
//
//
//	for (int num : arr) {
//		cout << num << "";
//	}
//
//	cout << endl;
//
//	cout << ++poi << endl;
//
//
//	//指针数组和数组指针
//	int* arrp[5] = {&i,&b,&a,arr}; //指针数组  
//	int(* arrp2)[5]; //指向数组的指针 
//
//	//
//	cout << "arrp在内存中的长度为: " << sizeof(arrp) << endl;
//	//本质是一个指针
//	cout << "arrp2在内存中的长度为: " << sizeof(arrp2) << endl;
//
//	cout << *arrp[0] << endl;
//
//	//arr本质上是一个int *类型的数组  但是arrp2 是 int* 5指向数组类型的对象
//	//这里arr 代表的是第一个元素的地址  &arr代表数组的地址  虽然地址一样,但是含义不一样
//	arrp2 = &arr;
//	//存储的是整个数组 解析数组地址后得到数组元素第一个的地址
//	cout << *arrp2 << endl;
//	cout << arr << " + " << &arr << endl;
//	//加上括号 否则会直接两次解析成值而非地址则不能向后位移4位
//	cout << *(*arrp2 + 1) << endl;
//
//
//}