#include<iostream>
using namespace std;
int main()
{

	string num1 = "999";
	string num2 = "999";

	string result;

	//定义两个指针,指向两个数的个位
	int p1 = num1.size() - 1;
	int p2 = num2.size() - 1;

	//用一个变量保存当前进位
	int carry = 0;

	//循环遍历
	while (p1 >= 0 || p2 >= 0 || carry != 0) {
		//判断是否遍历完成,完成补0  字符对应 ASCII 码 - 0 的ASCII码就是 那个数字
	    int x =	(p1 >= 0) ? (num1[p1] - '0') : 0;
	    int y =	(p2 >= 0) ? (num2[p2] - '0') : 0;

		int sum = x + y + carry; //加上十位的carry
		carry = sum / 10; //和的十位保存在carry里
		result += (sum + '0'); //和的个位转换成字符保存到结果中

		//指针向前移动,下一位
		--p1;
		--p2;

	}

	//对结果进行反转
	int i = 0, j = result.size() - 1;
	while (i < j) {
		char t = result[i];
		result[i++] = result[j];
		result[j--] = t;
	}


	cout << num1 << " + " << num2 << " = " << result;

	return 0;
}