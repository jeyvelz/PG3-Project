#include <stdio.h>
#include <thread>
#include <functional>

/// <summary>
/// 数字を2倍する関数
/// </summary>
/// <param name="num">数字</param>
void Double(int num) {
	num *= 2;
	printf("num * 2 : %d\n", num);
}

/// <summary>
/// 数字を２を足す関数
/// </summary>
/// <param name="num">数字</param>
void AddTwo(int num) {
	num += 2;
	printf("num + 2 : %d\n", num);
}

int main() {
	int num = 3;

	//マルチスレッド
	//thread 1 並行して処理する、先に終わる方が表示される
	printf("Thread 1\n");
	std::thread th1(Double, num);
	std::thread th2(AddTwo, num);

	th1.join();
	th2.join();

	//thread 2
	printf("\nThread 2\n");
	std::thread th3(Double, num);
	th3.join();

	std::thread th4(AddTwo, num);	
	th4.join();

	//thread 3
	printf("\nThread 3\n");
	std::function<void(int)> Triple = [=](int num) {
		num *= 3;
		printf("num * 3 : %d\n", num);
		};

	std::function<void(int)> AddThree = [=](int num) {
		num += 3;
		printf("num + 3 : %d\n", num);
	};

	std::thread th5(Triple, num);
	std::thread th6(AddThree, num);

	th5.join();
	th6.join();

	return 0;
}