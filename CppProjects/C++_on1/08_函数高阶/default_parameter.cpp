#include <iostream>
#include <string>

using namespace std;

//����һ������ѧ����Ϣ�ĺ���
inline string stuInfo(string name = "δָ��", int age = 18, double score = 60) {

	string info = "ѧ������: " + name + "\n����: " + to_string(age) + "\n�ɼ�: " + to_string(score);

	return info;

}


int main() {

	cout << stuInfo("����") << endl;

	return 0;
}
