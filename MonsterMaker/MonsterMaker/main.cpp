#include "PCH.h"

#include "Monster.h"
#include "Hydra.h"
#include "Zergling.h"
#include "Devourer.h"

#include <iostream>
using namespace std;

int main()
{
	Monster* hydra = new Hydra();
	hydra->ShowMonsterInfomation();
	hydra->ShowAttackType();

	cout << endl;

	Monster* zergling = new Zergling();
	zergling->ShowMonsterInfomation();
	zergling->ShowAttackType();

	cout << endl;

	Monster* devourer = new Devourer();
	devourer->ShowMonsterInfomation();
	devourer->ShowAttackType();

	return 0;
}