#include <iostream>
using namespace std;

void welcome() {
	//std::cout << "Hello Wrold!" << std::endl;
	cout << "��������Ĵ���!" << endl;
	string name;
	//cin.get(); //�ȴ���������
	cin >> name;
	cout << "Hello " + name << endl;
	//cin.get();
	//system("pause");
}

int main() {

	welcome();
	return 0;
}
