#pragma once

#include "GroundBehavior.h"

#include <iostream>

class GroundAttackOn : public GroundBehavior
{
public:
	virtual void GroundAttack() override
	{
		std::cout << "Ground Attack Start" << std::endl;

		// �߰� ���
		// ������ ���ϴ� ������ ���� ���� �Լ� ��

	}

	virtual void ShowAttackType() override
	{
		std::cout << "Can Ground Attack" << std::endl;

	}

};
