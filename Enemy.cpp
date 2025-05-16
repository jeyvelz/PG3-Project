#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>

void (Enemy::* Enemy::EnemyTransition[])() = {
	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Withdraw
};

void(Enemy::Approach)(){
	printf("Enemy is approaching\n");
}

void(Enemy::Attack)(){
	printf("Enemy is attacking\n");
}

void(Enemy::Withdraw)(){
	printf("Enemy is withdrawing\n");
}

void Enemy::Update() {
	(this->*EnemyTransition[static_cast<size_t>(currentState_)])();
	//状態は３種まであるので制限する
	currentState_ = (currentState_ + 1) % 3;
}