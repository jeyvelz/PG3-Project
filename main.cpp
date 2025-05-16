#include <stdio.h>

template <typename Type>

class ClassName {
public:
	//�����o�ϐ�
	Type num1;
	Type num2;

	//�R���X�g���N�^
	ClassName(Type num1, Type num2) : num1(num1), num2(num2) {};

	//�Q�̐������ׂāA�������l��Ԃ��֐�
	Type Min() {
		if (num1 < num2) {
			return num1;
		} else {
			return num2;
		}		
	}
};

int main() {
	//int�^
	ClassName<int>intNum(10, 30);
	int minValInt = intNum.Min();
	printf("%d\n", minValInt);
	//float�^
	ClassName<float>floatNum(50.16f, 30.45f);
	float minValFloat = floatNum.Min();
	printf("%0.2f\n", minValFloat);
	//double�^
	ClassName<double>doubleNum(22.22, 44.44);
	double minValDouble = doubleNum.Min();
	printf("%0.2lf\n", minValDouble);

	return 0;
}