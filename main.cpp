#include <stdio.h>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(65001);
	char str[] = "日本語上手ですね";
	printf("%s",str);

	return 0;
}