#include <stdio.h>
#include <list>
#include <iostream>

using namespace std; //std::が不要になる

int main() {

	//リスト初期化
	list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	//1970年駅一覧
	std::cout << "1970年駅一覧\n";

	for (const auto& eki : eki_list) {
		std::cout << eki << "\n";
	}

	//2019年開業（西日暮里開業）
	std::cout << "\n2019年駅一覧\n";
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		
		if (strcmp(*itr, "Tabata") == 0) {
			// 田端の前に西日暮里を代入
			eki_list.insert(itr, "Nishi-Nippori");
			break;
		}
	}
	//2019年駅表示
	for (const auto& eki : eki_list) {
		std::cout << eki << "\n";
	}

	//2022年開業（高輪ゲートウェイ開業）
	std::cout << "\n2022年駅一覧\n";
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr) {
		if (strcmp(*itr, "Tamachi") == 0) {
			// 田町の前に高輪ゲートウェイを代入
			eki_list.insert(itr, "Takanawa Gateway");
			break;
		}
	}
	//2020年駅表示
	for (const auto& eki : eki_list) {
		std::cout << eki << "\n";
	}

	return 0;
}