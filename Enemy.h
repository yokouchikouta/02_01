#pragma once
class Enemy
{
private://enumclass
	enum class Phase {
		kApproach,
		kShot,
		kLeave,
	};


public:
	void Update();
private:
	//�ڋ�
	void Approach();

	//
	void Shot();
	//���E
	void Leave();
private:
	static void(Enemy::*FuncTable[])();
	Phase phase = Phase::kApproach;
};

