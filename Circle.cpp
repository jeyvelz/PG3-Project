#include "Circle.h"
#include <iostream>
#include <numbers>

Circle::Circle(){

}

Circle::~Circle(){

}

void Circle::Size(){
	area_ = 3.1415 * (radius_ * radius_);
}

void Circle::Draw(){
	printf("�~�̖ʐς�%.2f\n", area_);
}


