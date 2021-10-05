#pragma once
#include "PCH.h"
#include "Monster.h"

class Hydra : public Monster
{
public:
	Hydra()
	{
		this->SetMonsterName("Hydra");
		this->SetAirAttack(new AirAttackOn);
		this->SetGroundAttack(new GroundAttackOn);
		this->SetProperty(10, 4, 1.741f, 15);

	};
	~Hydra() {	};

};

