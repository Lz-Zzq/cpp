//# include <iostream>
//
//using namespace std;
//
//int main() {
//
//	const int n = 8;
//	int arr[n] = { 1,2,3,4,5,6,7,8 };
//
//	int arrCopy[n];
//
//	//int length = sizeof(arr) / sizeof(int);
//
//	//for (int i = length -1; i >= 0 ; i--) {
//	//	arrCopy[length - i -1] = arr[i];
//	//}
//
//
//
//	//Ë«Ö¸Õë
//	int head = 0, tail = 8 - 1;
//	while (head != 8) {
//		arrCopy[head++] = arr[tail--];
//	}
//
//
//	for (int i = 0; i < n; i++) {
//		cout << arrCopy[i] << endl;
//	}
//
//
//	return 0;
//
//
//}