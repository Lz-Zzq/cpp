#include<iostream>
using namespace std;
int main4()
{
	const int n = 3;
	bool isMagic = true;
	int arr[n][n] = {
	{4, 9, 2},
	{3, 5, 7},
	{8, 1, 6}
	};
	// Ŀ��� �Ȳ����� (1 + n * n) * (n * n) / 2  = 45 / 3 = 15
	int target = (1 + n * n) * n / 2;
	

	//����ÿһ����
	for (int i = 0; i < n; i++) {
		int sumRow = 0;
		int sumCol = 0;

		//������ǰ�е�ÿ��Ԫ��,���е���
		for (int j = 0; j < n; j++) {
			sumRow += arr[i][j];
			sumCol += arr[j][i];
		}
		if (sumRow != target || sumCol != target) {
			isMagic = false;
			break;
		}

		//����Խ���
		int sumDiag1 = 0, sumDiag2 = 0;
		sumDiag1 += arr[i][i];
		sumDiag2 += arr[i][n - 1 - i];
		if (sumDiag1 != target || sumDiag2 != target) {
			isMagic = false;
			break;
		}

	}

	cout << "�����ľ���arr" << (isMagic ? "��" : "����") << n << "�׻÷�!" << endl;



	////����Խ���
	//int sumDiag1 = 0, sumDiag2 = 0;
	//for (int i = 0; i < n; i++) {
	//	sumDiag1 += arr[i][i];
	//	sumDiag2 += arr[i][n - 1 - i];
	//}

	//�ж��Ƿ����target
	//if (sumDiag1 != target || sumDiag2 != target) {
	//	isMagic = false;
	//}

	//cout << "�����ľ���arr" << (isMagic ? "��" : "����") << n << "�׻÷�!" << endl;


	return 0;
}