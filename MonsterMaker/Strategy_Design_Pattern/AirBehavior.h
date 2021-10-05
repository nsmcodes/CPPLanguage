#pragma once

class AirBehavior
{
public:
	AirBehavior() {};
	~AirBehavior() {};

	virtual void AirAttack() = 0;
	virtual void ShowAttackType() = 0;

};
