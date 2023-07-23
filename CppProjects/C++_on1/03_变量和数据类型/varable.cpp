#include <iostream>
# define PI 3.14   //不推荐 推荐使用const
using namespace std;
int number = 0;
int main() {

	//定义变量
	int a=1, b;
	unsigned short c; //无符号类型
	short d = 32768; //无符号类型
	char ch = 18;

	int number = 1;
	wchar_t ad = 2; //宽字符类型 在底层对另一层整形 具体占用几个字节要看系统实现
	//char_16t 16bit 与32bit
	cout << "number = " << number << endl;

	//short 无符号最大值 就是 正数补码就是自身 复数补码就是反码+1 有符号最大值-1的补码 无符号最大值-1补码去掉符号位
	cout << "::number = " << :: number << endl; //默认命名空间  :: 域运算符

	cout << "a的长度 = " << sizeof (char)  << endl;
	//0111 1111 = 127 
	//算有符号最小数  : 添加符号位 取最大值反码    1111... 1000 0000 = -128  
	//算无符号最大值  : 有符号最小数反码+1 去除符号位  0000....1111 1111 = 255  相当于有符号最大值 +1
	cout << "ch = " << (int) ch<< endl;
	cout << "a = " << ++a << endl;  
	cout << "a = " << a++ << endl;
	cout << "a = " << a++ << endl;

	double tf = 5.34;
	//int de = int (tf);
	int de = static_cast<double>(tf);


	//无符号类型超出表示范围 当前值%最大值余数   有符号结果是未定义的

	//条件表达式是右结合率

	return 0;

}
