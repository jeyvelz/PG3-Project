#pragma once
#include "Animal.h"

//�h���N���X
class Dog : public Animal {
public:
	Dog();
	~Dog();
	
	void Cry() override;
};