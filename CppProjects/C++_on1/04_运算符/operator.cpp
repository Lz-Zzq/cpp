#include <iostream>
using namespace std;
int main() {
	//unsigned char bits = 0xb5;
	//cout << oct;  //�˽���
	//cout << dec; //ʮ����
	//cout << hex; //ʮ������
	//cout << bit;

	//cout << "bits����2λ: " << (bits << 2) << endl;
	//��һ���������ҳ�ֻ����һ�ε��Ǹ���
	//int i1 = 5, i2 = 12, i3 = 12, i4 = 19, i5 = 5;
	//cout << "ֻ����һ�ε��Ǹ�����: " << (i1 ^ i2 ^ i3 ^ i4 ^ i5) << endl;
	//0101 0001     0100
	//cout << "ֻ����һ�ε��Ǹ�����: " << (i1 ^ 1 ) << endl;

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

	//����ֻ��1�뱾��   �ڼ���Ա�������������������
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

	cout << "��Ϸ����: ����0-100����,5�λ���\n" << endl;

	//���������
	srand(time(0)); // ���������  (α���)
	int target = rand() % 100; 
	//int target = 5; 

	//����ѭ�����Ͻ��в²�
	int n = 5;
	cout << "������: " << " ";
	while (n-- > 0)
	{
		int num;
		cin >> num;
		if (num > target) {
			cout << "�������ִ�" << endl;
		}
		else if(num < target){
			cout << "��������С" << endl;
		}
		else if(num == target){
			cout << "����������ȷ" << endl;
			return 0;
		}

	}

	

	return 0;
}