#pragma once

#include "GroundBehavior.h"

#include <iostream>

class GroundAttackOff : public GroundBehavior
{
public:
	virtual void GroundAttack() override
	{
		std::cout << "Ground Attack Fail" << std::endl;

	}

	virtual void ShowAttackType() override
	{
		std::cout << "Cannot Ground Attack" << std::endl;

	}

};
