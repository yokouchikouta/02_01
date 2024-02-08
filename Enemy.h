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
	//ê⁄ãﬂ
	void Approach();

	//
	void Shot();
	//ó£íE
	void Leave();
private:
	static void(Enemy::*FuncTable[])();
	Phase phase = Phase::kApproach;
};

