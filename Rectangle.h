#pragma once
#include "IShape.h"

//”h¶ƒNƒ‰ƒX
class Rectangle : public IShape {
public:
	Rectangle();
	~Rectangle();

	void Size() override;
	void Draw() override;

private:
	float width_ = 4.0f; //•
	float height_ = 2.0f; //c
	float area_ = 0.0f; //–ÊÏ
};
