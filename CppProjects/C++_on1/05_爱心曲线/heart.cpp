#include<iostream>
using namespace std;
int main() {
	//曲线方程 (x^2 + y^2 -a)^3 - x^2 * y^3 < 0  小于0都在爱心内部
	double a = 0.3;
	//边界
	double bound = 1.3 * sqrt(a);

	//xy坐标变化步长
	double step = 0.05;

	//二维扫描
	for (double y = bound; y >= -bound; y-=step) {
		//内层,逐点扫描
		for(double x = -bound; x <= bound; x+=step*0.5){
			//带入曲线方程,计算点是否在曲线内
			double result = pow((pow(x,2)+pow(y,2) -a), 3) - (pow(x, 2) * pow(y, 3));
			if (result <= 0)
				cout << "*";
			else 
				cout << " ";
		}
		cout << endl;
	}

		//int width = 40;         // 曲线宽度
		//int height = 20;        // 曲线高度
		//double scale = 0.3;     // 曲线的横向和纵向缩放比例

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