#include <stdio.h>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(65001);
	char str[] = "お前はもう死んでいる";
	printf("%s\n",str);
	printf("何！？");

	return 0;
}