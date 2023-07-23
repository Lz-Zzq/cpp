#include <iostream>
using namespace std;

void welcome() {
	//std::cout << "Hello Wrold!" << std::endl;
	cout << "请输入你的大名!" << endl;
	string name;
	//cin.get(); //等待键盘输入
	cin >> name;
	cout << "Hello " + name << endl;
	//cin.get();
	//system("pause");
}

int main() {

	welcome();
	return 0;
}
