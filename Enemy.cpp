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
	(this->*EnemyTransition[currentState])();

	currentState = (currentState + 1) % 3;
}