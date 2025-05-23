#include "Cat.h"
#include <stdio.h>

Cat::Cat(){
	printf("‚Ë‚±‚ª¶‚Ü‚ê‚½\n");
}

Cat::~Cat() {
	printf("‚Ë‚±‚ª–S‚­‚È‚Á‚½\n");
}

void Cat::Cry() {
	printf("‚Ë‚±‚ª‚É‚á‚ñ~\n");
}
