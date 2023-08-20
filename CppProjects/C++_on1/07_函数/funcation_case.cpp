# include<iostream>
# include "f.h"
typedef int arrayT[5];
using namespace std;

//立方和函数
int cubeSum(int x, int y);

//使用引用作为形参
void increase(int &x) {
	++x;
}

void in(const string&  x) {

}

//数组无法直接拷贝
void pri(int arr[] ,int size) {
	

}
//两种定义方式完全等价
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
	
	//常量引用会自己转成可以转换的目标对象
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

	//返回数组指针
	int arr1[5] = { 1,2,3,4,5 };
	int* parr[5]; //指针数组
	//数组指针类型[5]指向了一个数组的地址
	int(*ap)[5]	 = &arr; // 数组指针  指向数组的指针

	int(*fun(int x))[5];  //繁琐
	typedef int arrayT[5];
	arrayT* fun(int x);  //简化 等效

	//尾置返回类型  auto 自动推断返回值类型
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

//返回类型是 数组指针
auto fun3(int x) -> int(*)[5] {
	return NULL;
}
//数组指针
int(*fun1(int x))[5] {
	return NULL;
}
//数组指针
arrayT* fun(int x) {
	return NULL;
}
//斐波那契
int fb(int x) {
	if (x == 1 || x == 2) {
		return 1;
	}
	int y = fb(x - 1) + fb(x - 2);
	return y;
}

//斐波那契
int *fb2(int x) {
	int* array = new int[x + 1]; //指针指向了数组的第一个元素
	array[0] = 0;
	array[1] = 1;
	for (int i = 2; i <= x; i++) {
		array[i] = array[i - 1] + array[i - 2];
	}
	return array;
}

//斐波那契
int fb3(int x) {

	int first = 0;
	int second = 1;
	int third = 0;

	for (int i = 2; i <= x; i++) {
		//第三位等于第二位+第一位 (第四位)
		third = second + first;
		//第一位等于第二位 指针后移
		first = second; 
		//第二位等于第三位
		second = third;
	}


	return second;
}