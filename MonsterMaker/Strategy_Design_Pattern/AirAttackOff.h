#pragma once

#include "AirBehavior.h"

#include <iostream>

class AirAttackOff : public AirBehavior
{
public:
	virtual void AirAttack() override
	{
		std::cout << "Air Attack Fail" << std::endl;

	}

	virtual void ShowAttackType() override
	{
		std::cout << "Cannot Air Attack" << std::endl;

	}
};
