#pragma once
#include "PCH.h"
#include "Monster.h"

class Zergling : public Monster
{
public:
	Zergling()
	{
		this->SetMonsterName("Zergling");
		this->SetAirAttack(new AirAttackOff);
		this->SetGroundAttack(new GroundAttackOn);
		this->SetProperty(5, 1, 2.612f, 8);
	};
	~Zergling() {	};

};
