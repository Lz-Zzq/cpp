//# include <iostream>
//
//using namespace std;
//
//int main() {
//
//	//ָ���ʹ��
//	int a = 10;
//	int b = 20;
//	long c = 35;
//
//	int* p1 = &a;
//	long* p2 = &c;
//
//	//��ָ��
//	int* ptr = nullptr; 
//	ptr = NULL;
//	ptr = 0;  //ָ��Ĳ����ֽ�0,���ǲ���ʹ�õ�һ����ַ
//	
//
//	cout << "a��ַΪ: " << &a << endl;
//	cout << "b��ַΪ: " << &b<< endl;
//	cout << "c��ַΪ: " << &c << endl;
//	
//	
//	cout << "p1: " << p1 << endl;
//	cout << "p2: " << p2 << endl;
//
//	cout << " " << endl;
//
//	int i = 1024;
//	int* pi = &i;
//	int** ppi = &pi;
//
//	cout << i << endl;
//	cout << &i << endl;
//	cout << pi << endl;
//	cout << ppi << endl;
//	cout << *pi << endl;
//	cout << *ppi << endl;
//	cout << **ppi << endl;
//	
//	const int i2 = 10;
//	const int* pc = &i2;
//	
//	cout << *pc << endl;
//	*pi = 12;
//	//*pc = 12;
//
//	//ָ������ָ�볣��
//	const int* const ccp = &i2;
//
//	cout << "---------------------------" << endl;
//
//	//ָ��������
//	int arr[] = { 1,5,3,4,5 };
//	cout << "arr = " << arr << endl;
//
//
//	cout << &arr << endl;
//	cout << &arr[0] << endl;
//	cout << &arr[1] << endl;
//
//	int* poi = nullptr;
//	poi = arr;
//
//	cout << poi << endl;
//
//
//
//	for (int num : arr) {
//		cout << num << "";
//	}
//
//	cout << endl;
//
//	cout << ++poi << endl;
//
//
//	//ָ�����������ָ��
//	int* arrp[5] = {&i,&b,&a,arr}; //ָ������  
//	int(* arrp2)[5]; //ָ�������ָ�� 
//
//	//
//	cout << "arrp���ڴ��еĳ���Ϊ: " << sizeof(arrp) << endl;
//	//������һ��ָ��
//	cout << "arrp2���ڴ��еĳ���Ϊ: " << sizeof(arrp2) << endl;
//
//	cout << *arrp[0] << endl;
//
//	//arr��������һ��int *���͵�����  ����arrp2 �� int* 5ָ���������͵Ķ���
//	//����arr ������ǵ�һ��Ԫ�صĵ�ַ  &arr��������ĵ�ַ  ��Ȼ��ַһ��,���Ǻ��岻һ��
//	arrp2 = &arr;
//	//�洢������������ ���������ַ��õ�����Ԫ�ص�һ���ĵ�ַ
//	cout << *arrp2 << endl;
//	cout << arr << " + " << &arr << endl;
//	//�������� �����ֱ�����ν�����ֵ���ǵ�ַ�������λ��4λ
//	cout << *(*arrp2 + 1) << endl;
//
//
//}