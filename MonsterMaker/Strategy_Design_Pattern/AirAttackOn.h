#pragma once

#include "AirBehavior.h"

#include <iostream>

class AirAttackOn : public AirBehavior
{
public:
	virtual void AirAttack() override
	{
		std::cout << "Air Attack Start" << std::endl;

		// 추가 기능
		// 적에게 가하는 데미지 공식 전달 함수 등
		
	}

	virtual void ShowAttackType() override
	{
		std::cout << "Can Air Attack" << std::endl;

	}

};
