#pragma once
#include "IShape.h"

//”h¶ƒNƒ‰ƒX
class Circle : public IShape {
public:
	Circle();
	~Circle();

	void Size() override;
	void Draw() override;

private:
	float radius_ = 7.0f; //”¼Œa
	float area_ = 0.0f; //–ÊÏ
};