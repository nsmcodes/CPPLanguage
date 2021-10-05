#pragma once
#include "PCH.h"
#include "Monster.h"

class Devourer : public Monster
{
public:
	Devourer()
	{
		this->SetMonsterName("Devourer");
		this->SetAirAttack(new AirAttackOn);
		this->SetGroundAttack(new GroundAttackOff);
		this->SetProperty(25, 6, 2.344f, 100);

	};
	~Devourer() {	};
};

