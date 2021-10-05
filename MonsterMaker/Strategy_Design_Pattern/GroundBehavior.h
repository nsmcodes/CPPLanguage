#pragma once

class GroundBehavior
{
public:
	GroundBehavior() {};
	~GroundBehavior() {};

	virtual void GroundAttack() = 0;
	virtual void ShowAttackType() = 0;

};
