#pragma once
class AttackSpeed
{
private:
	float attackSpeed;
	bool canAttack;

public:
	AttackSpeed();
	~AttackSpeed() {};

	void CheckCoolingTime();

	bool GetAttackState() { return canAttack; }

	void SetAttackSpeed(float _attackSpeed);
	void SetAttackState(bool _state);

};

