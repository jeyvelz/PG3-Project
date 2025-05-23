#pragma once
#include "IShape.h"

//�h���N���X
class Circle : public IShape {
public:
	Circle();
	~Circle();

	void Size() override;
	void Draw() override;

private:
	float radius_ = 7.0f; //���a
	float area_ = 0.0f; //�ʐ�
};