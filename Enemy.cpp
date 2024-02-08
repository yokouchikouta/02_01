#include "Enemy.h"
#include <stdio.h>
void(Enemy::* Enemy::FuncTable[])()
={
	&Enemy::Approach,
	& Enemy::Shot,
	& Enemy::Leave,
 };	

void Enemy::Update() {

	(this->*FuncTable[static_cast<size_t>(phase)])();
	//static_cast<size_t>(phase);
	//switch (phase)
	//{
	//case Enemy::Phase::kApproach:

	//	break;
	//case Enemy::Phase::kShot:

	//	break;
	//case Enemy::Phase::kLeave:

	//	break;
	//default:
	//	break;
	//}
}
void Enemy::Approach() {
	printf("Ú‹ß");
	phase = Phase::kShot;
}

void Enemy::Shot()
{
	printf("ËŒ‚");
	phase = Phase::kLeave;
}
void Enemy::Leave()
{
	printf("—£’E");
}

