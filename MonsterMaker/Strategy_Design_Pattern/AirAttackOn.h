#pragma once

#include "AirBehavior.h"

#include <iostream>

class AirAttackOn : public AirBehavior
{
public:
	virtual void AirAttack() override
	{
		std::cout << "Air Attack Start" << std::endl;

		// �߰� ���
		// ������ ���ϴ� ������ ���� ���� �Լ� ��
		
	}

	virtual void ShowAttackType() override
	{
		std::cout << "Can Air Attack" << std::endl;

	}

};
