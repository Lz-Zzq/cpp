#include <iostream>
using namespace std;
int main() {
	//unsigned char bits = 0xb5;
	//cout << oct;  //八进制
	//cout << dec; //十进制
	//cout << hex; //十六进制
	//cout << bit;

	//cout << "bits左移2位: " << (bits << 2) << endl;
	//从一组数组中找出只出现一次的那个数
	//int i1 = 5, i2 = 12, i3 = 12, i4 = 19, i5 = 5;
	//cout << "只出现一次的那个数字: " << (i1 ^ i2 ^ i3 ^ i4 ^ i5) << endl;
	//0101 0001     0100
	//cout << "只出现一次的那个数字: " << (i1 ^ 1 ) << endl;

	// 1 2 1 1  0001  0010  0001  0001    
	// 1 2    0011
	// 3 1    0010
	// 2 1    0011

	// 1 3 1 0001 0011 0001
	// 1 3   0010
	// 2 1  0011


	//int nums [] = {5,12,5,19,12};
	//int i = 0;

	//for (int a : nums) {
		//i^= a;
	//}

	//cout << i << endl;

	//for (int i = 1; i < 10; i++) {
		//for (int j = 1; j <= i; j ++ ) {
			//cout << j << "*" << i << "=" << i*j << "\t";
		//}
		//cout<< "\n" << endl;
	//}

	//for (int i = 1; i <= 1000; i++) {
	//	int num = i;
	//	while (num > 1) {
	//		if (num % 10 == 7) {
	//			cout << i << " ";
	//			break;
	//		}
	//		num /= 10;
	//	}
	//}
	//cout << endl;



	//for (int i = 1; i < 1000; i++) {
	//	int num = i;
	//	while (num > 1) {
	//		if (num % 10 == 7) {
	//			cout << i << " ";
	//			break;
	//		}
	//		num /= 10;
	//	}

	//}
	//cout << endl;

	//因数只有1与本身   期间可以被整除的数都不是质数
	//for (int i = 2; i < 100; i++) {
	//	bool fag = true;
		//for (int j = 2; j < i; j++) {
			//if (i % j == 0) {
			//	fag = false;
			//	break;
			//}
	//	}
	//	int sum = 2;
	//	while (sum < i) {
	//		if (i % sum++ == 0) {
	//			fag = false;
	//			break;
	//		}
	//	}

	//	if (fag) {
	//		cout << i << " ";
	//	}

	//}

	//cout << endl;

	cout << "游戏规则: 输入0-100整数,5次机会\n" << endl;

	//生成随机数
	srand(time(0)); // 随机数种子  (伪随机)
	int target = rand() % 100; 
	//int target = 5; 

	//利用循环不断进行猜测
	int n = 5;
	cout << "请输入: " << " ";
	while (n-- > 0)
	{
		int num;
		cin >> num;
		if (num > target) {
			cout << "输入数字大" << endl;
		}
		else if(num < target){
			cout << "输入数字小" << endl;
		}
		else if(num == target){
			cout << "输入数字正确" << endl;
			return 0;
		}

	}

	

	return 0;
}