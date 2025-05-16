#pragma once

class Enemy {
public:
	
	static void(Enemy::*EnemyTransition[])();

	//敵の更新処理
	void Update();
		
private:
	//現在状態
	int currentState_ = 0;

	//接近
	void (Approach)();
	//射撃
	void (Attack)();
	//離脱
	void (Withdraw)();
};