#include "Monster.h"

Monster::Monster()
{
	name = "";
	airBehavior = new AirAttackOff;
	groundBehavior = new GroundAttackOff;

	attackDamage = 0;
	attackRange = 0;
	moveSpeed = 0.0f;
	attackSpeed = 0;

}

void Monster::AirAttack()
{
	airBehavior->AirAttack();

}

void Monster::GroundAttack()
{
	groundBehavior->GroundAttack();

}

void Monster::SetMonsterName(std::string _name)
{
	name = _name;

}

void Monster::SetAirAttack(AirBehavior* _airBehavior)
{
	airBehavior = _airBehavior;

}

void Monster::SetGroundAttack(GroundBehavior* _groundBehavior)
{
	groundBehavior = _groundBehavior;

}

void Monster::SetProperty(int _damage, int _range, float _moveSpeed, int _attackSpeed)
{
	attackDamage = _damage;
	attackRange = _range;
	moveSpeed = _moveSpeed;
	attackSpeed = _attackSpeed;

}

void Monster::ShowAttackType()
{
	airBehavior->ShowAttackType();
	groundBehavior->ShowAttackType();

}

void Monster::ShowMonsterInfomation()
{
	cout << "Monster Name : " << name << endl;
	cout << "Monster Attack : " << attackDamage << endl;
	cout << "Monster Range : " << attackRange << endl;
	cout << "Monster Attack Speed : " << attackSpeed << endl;
	cout << "Monster Move Speed : " << moveSpeed << endl;

}
