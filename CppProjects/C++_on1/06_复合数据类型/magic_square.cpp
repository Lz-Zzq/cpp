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
	// 目标和 等差数列 (1 + n * n) * (n * n) / 2  = 45 / 3 = 15
	int target = (1 + n * n) * n / 2;
	

	//检验每一行列
	for (int i = 0; i < n; i++) {
		int sumRow = 0;
		int sumCol = 0;

		//遍历当前行的每个元素,进行叠加
		for (int j = 0; j < n; j++) {
			sumRow += arr[i][j];
			sumCol += arr[j][i];
		}
		if (sumRow != target || sumCol != target) {
			isMagic = false;
			break;
		}

		//检验对角线
		int sumDiag1 = 0, sumDiag2 = 0;
		sumDiag1 += arr[i][i];
		sumDiag2 += arr[i][n - 1 - i];
		if (sumDiag1 != target || sumDiag2 != target) {
			isMagic = false;
			break;
		}

	}

	cout << "给定的矩阵arr" << (isMagic ? "是" : "不是") << n << "阶幻方!" << endl;



	////检验对角线
	//int sumDiag1 = 0, sumDiag2 = 0;
	//for (int i = 0; i < n; i++) {
	//	sumDiag1 += arr[i][i];
	//	sumDiag2 += arr[i][n - 1 - i];
	//}

	//判断是否等于target
	//if (sumDiag1 != target || sumDiag2 != target) {
	//	isMagic = false;
	//}

	//cout << "给定的矩阵arr" << (isMagic ? "是" : "不是") << n << "阶幻方!" << endl;


	return 0;
}