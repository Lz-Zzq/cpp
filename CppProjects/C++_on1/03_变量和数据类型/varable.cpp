#include <iostream>
# define PI 3.14   //���Ƽ� �Ƽ�ʹ��const
using namespace std;
int number = 0;
int main() {

	//�������
	int a=1, b;
	unsigned short c; //�޷�������
	short d = 32768; //�޷�������
	char ch = 18;

	int number = 1;
	wchar_t ad = 2; //���ַ����� �ڵײ����һ������ ����ռ�ü����ֽ�Ҫ��ϵͳʵ��
	//char_16t 16bit ��32bit
	cout << "number = " << number << endl;

	//short �޷������ֵ ���� ��������������� ����������Ƿ���+1 �з������ֵ-1�Ĳ��� �޷������ֵ-1����ȥ������λ
	cout << "::number = " << :: number << endl; //Ĭ�������ռ�  :: �������

	cout << "a�ĳ��� = " << sizeof (char)  << endl;
	//0111 1111 = 127 
	//���з�����С��  : ��ӷ���λ ȡ���ֵ����    1111... 1000 0000 = -128  
	//���޷������ֵ  : �з�����С������+1 ȥ������λ  0000....1111 1111 = 255  �൱���з������ֵ +1
	cout << "ch = " << (int) ch<< endl;
	cout << "a = " << ++a << endl;  
	cout << "a = " << a++ << endl;
	cout << "a = " << a++ << endl;

	double tf = 5.34;
	//int de = int (tf);
	int de = static_cast<double>(tf);


	//�޷������ͳ�����ʾ��Χ ��ǰֵ%���ֵ����   �з��Ž����δ�����

	//�������ʽ���ҽ����

	return 0;

}
