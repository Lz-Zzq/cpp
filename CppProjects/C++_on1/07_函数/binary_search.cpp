#include <iostream>
using namespace std;

int fb6(int x) {
	if (x == 1 || x == 2) {
		return 1;
	}
	return fb6(x - 1) + fb6(x - 2);
}

int search(int(&a)[10], int target, int left, int right);
int main3211() {
	int arr[10] = { 1,2,3,4,5,6,9,12,25,38 };
	int key = 38;
	int length = sizeof(arr) / sizeof(int);
	cout << search(arr, key, 0, length) << endl;
	
	cout << fb6(6) << endl;
	return 0;
}


int search(int(&a)[10], int target, int left, int right) {

	if (right == left) {
		return -1;
	}
	
	
		int m = (left + right) / 2;
		if (target > a[m]) {
			return search(a,target,m+1,right);
		}
		else if(target < a[m]) {
			return search(a, target, left,m);
		}
		else {
			return m;
		}

}