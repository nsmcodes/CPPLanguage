#pragma once

#include "GroundBehavior.h"

#include <iostream>

class GroundAttackOn : public GroundBehavior
{
public:
	virtual void GroundAttack() override
	{
		std::cout << "Ground Attack Start" << std::endl;

		// 추가 기능
		// 적에게 가하는 데미지 공식 전달 함수 등

	}

	virtual void ShowAttackType() override
	{
		std::cout << "Can Ground Attack" << std::endl;

	}

};
