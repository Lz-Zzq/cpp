#include <iostream>
#include <string>

using namespace std;

//定义一个返回学生信息的函数
inline string stuInfo(string name = "未指定", int age = 18, double score = 60) {

	string info = "学生姓名: " + name + "\n年龄: " + to_string(age) + "\n成绩: " + to_string(score);

	return info;

}


int main() {

	cout << stuInfo("狗猪") << endl;

	return 0;
}
