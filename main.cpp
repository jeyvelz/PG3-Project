#include <stdio.h>
#include "Cat.h"
#include "Dog.h"

int main() {
	//���N���X�ł܂Ƃ߂�
	Animal* animal[3];

	for (int i = 0; i < 2; i++) {
		//�h���N���X�ŃC���X�^���X�𐶐�����
		if (i < 1) {
			animal[i] = new Cat;
		} else {
			animal[i] = new Dog;
		}
	}

	for (int i = 0; i < 2; i++) {
		animal[i]->Cry();
	}

	for (int i = 0; i < 2; i++) {
		delete animal[i];
	}

	return 0;
}