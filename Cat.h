#pragma once
#include "Animal.h"

//�h���N���X
class Cat : public Animal {
public:
	Cat();
	~Cat();

	void Cry() override;
};
