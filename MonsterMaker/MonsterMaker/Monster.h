#pragma once

#include "PCH.h"

#include "AirBehavior.h"
#include "GroundBehavior.h"

#include <iostream>
#include <string>
using namespace std;

class Monster
{
private:
	std::string name;
	AirBehavior* airBehavior;
	GroundBehavior* groundBehavior;

	int attackDamage;
	int attackRange;
	int attackSpeed;
	float moveSpeed;


public:
	Monster();
	~Monster() {	};

	void AirAttack();
	void GroundAttack();

	void SetMonsterName(std::string _name);
	void SetAirAttack(AirBehavior* _airBehavior);
	void SetGroundAttack(GroundBehavior* _groundBehavior);
	void SetProperty(int _damage, int _range, float _moveSpeed, int _attackSpeed);

	void ShowAttackType();
	void ShowMonsterInfomation();

};

