#include<iostream>
using namespace std;
int main()
{

	string num1 = "999";
	string num2 = "999";

	string result;

	//��������ָ��,ָ���������ĸ�λ
	int p1 = num1.size() - 1;
	int p2 = num2.size() - 1;

	//��һ���������浱ǰ��λ
	int carry = 0;

	//ѭ������
	while (p1 >= 0 || p2 >= 0 || carry != 0) {
		//�ж��Ƿ�������,��ɲ�0  �ַ���Ӧ ASCII �� - 0 ��ASCII����� �Ǹ�����
	    int x =	(p1 >= 0) ? (num1[p1] - '0') : 0;
	    int y =	(p2 >= 0) ? (num2[p2] - '0') : 0;

		int sum = x + y + carry; //����ʮλ��carry
		carry = sum / 10; //�͵�ʮλ������carry��
		result += (sum + '0'); //�͵ĸ�λת�����ַ����浽�����

		//ָ����ǰ�ƶ�,��һλ
		--p1;
		--p2;

	}

	//�Խ�����з�ת
	int i = 0, j = result.size() - 1;
	while (i < j) {
		char t = result[i];
		result[i++] = result[j];
		result[j--] = t;
	}


	cout << num1 << " + " << num2 << " = " << result;

	return 0;
}