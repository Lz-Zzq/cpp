#include<iostream>
using namespace std;
int main() {
	//���߷��� (x^2 + y^2 -a)^3 - x^2 * y^3 < 0  С��0���ڰ����ڲ�
	double a = 0.3;
	//�߽�
	double bound = 1.3 * sqrt(a);

	//xy����仯����
	double step = 0.05;

	//��άɨ��
	for (double y = bound; y >= -bound; y-=step) {
		//�ڲ�,���ɨ��
		for(double x = -bound; x <= bound; x+=step*0.5){
			//�������߷���,������Ƿ���������
			double result = pow((pow(x,2)+pow(y,2) -a), 3) - (pow(x, 2) * pow(y, 3));
			if (result <= 0)
				cout << "*";
			else 
				cout << " ";
		}
		cout << endl;
	}

		//int width = 40;         // ���߿��
		//int height = 20;        // ���߸߶�
		//double scale = 0.3;     // ���ߵĺ�����������ű���

	int num = 0;
		for (double y = 1.5; y > -1.5; y -= 0.5) {
			for (double x = -1.5; x < 1.5; x += 0.5) {
				double a = x * x + y * y - 1;
				char symbol = a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ';
				std::cout << symbol;
				num++;
			}
			std::cout << std::endl;
		}
		cout << num << endl;
		return 0;

}