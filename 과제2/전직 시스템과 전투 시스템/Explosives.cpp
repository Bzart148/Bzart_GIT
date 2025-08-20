#include "Explosives.h"
#include <iostream>

Explosives::Explosives()
{
	cout << " 화약사로 전직하였습니다." << endl;
	Level += 9;
	HP += 200;
	MP += 200;
	Damage += 50;
	Armer += 30;
	Accuracy += 40;
	Speed += 20;
}