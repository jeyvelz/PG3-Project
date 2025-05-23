#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle(){

}

Rectangle::~Rectangle(){

}

void Rectangle::Size(){
	area_ = width_ * height_;
}

void Rectangle::Draw(){
	printf("‹éŒ`‚Ì–ÊÏ‚Í%.2f\n", area_);
}
