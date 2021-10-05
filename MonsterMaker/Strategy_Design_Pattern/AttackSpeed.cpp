#include "AttackSpeed.h"

AttackSpeed::AttackSpeed()
{
	attackSpeed = 0.0f;
	canAttack = true;

}

void AttackSpeed::CheckCoolingTime()
{
	// update 문에 넣어 공격 상태 체크

	if (canAttack == false)
	{
		float tempTime = 0.0f;

		// tempTime += 0.01초 단위로 덧셈;

		if (tempTime >= attackSpeed)
			SetAttackState(true);

	}

}

void AttackSpeed::SetAttackSpeed(float _attackSpeed)
{
	attackSpeed = _attackSpeed;

}

void AttackSpeed::SetAttackState(bool _state)
{
	canAttack = _state;

}
