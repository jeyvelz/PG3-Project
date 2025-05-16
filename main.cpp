#include <stdio.h>

template <typename Type>

class ClassName {
public:
	//メンバ変数
	Type num1;
	Type num2;

	//コンストラクタ
	ClassName(Type num1, Type num2) : num1(num1), num2(num2) {};

	//２つの数字を比べて、小さい値を返す関数
	Type Min() {
		if (num1 < num2) {
			return num1;
		} else {
			return num2;
		}		
	}
};

int main() {
	//int型
	ClassName<int>intNum(10, 30);
	int minValInt = intNum.Min();
	printf("%d\n", minValInt);
	//float型
	ClassName<float>floatNum(50.16f, 30.45f);
	float minValFloat = floatNum.Min();
	printf("%0.2f\n", minValFloat);
	//double型
	ClassName<double>doubleNum(22.22, 44.44);
	double minValDouble = doubleNum.Min();
	printf("%0.2lf\n", minValDouble);

	return 0;
}