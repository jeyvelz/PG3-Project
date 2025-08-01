#include <iostream>
#include <string>
#include <chrono>


int main() {
  
    //初期化
    std::string a(1000000, 'a'); //1000000文字
    std::string b;
    std::string c;

    //文字
    std::cout <<  "Compare copy and move time for 1000000 characters \n";

    //Copyの時間を計算
    auto start_copy = std::chrono::high_resolution_clock::now();
    b = a;  // copy
    auto end_copy = std::chrono::high_resolution_clock::now();
    auto copy_time = std::chrono::duration_cast<std::chrono::microseconds>(end_copy - start_copy).count();

    //Moveの時間を計算
    auto start_move = std::chrono::high_resolution_clock::now();
    c = std::move(a); // move
    auto end_move = std::chrono::high_resolution_clock::now();
    auto move_time = std::chrono::duration_cast<std::chrono::microseconds>(end_move - start_move).count();

    //表示
    std::cout << "Copy time: " << copy_time << " microseconds\n";
    std::cout << "Move time: " << move_time << " microseconds\n";

    return 0;
}