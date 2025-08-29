#include "Assassin.h"

Assassin::Assassin()
{
	cout << "어쌔신으로 전직하였습니다." << endl;
	Level += 4;
	HP += 300;
	MP += 150;
	Damage += 80;
	Armer += 10;
	Accuracy += 50;
	Speed += 65;
}

Assassin::~Assassin()
{
}