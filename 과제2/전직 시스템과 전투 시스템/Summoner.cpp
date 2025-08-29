#include "Summoner.h"

Summoner::Summoner()
{
	cout << "소환사로 전직하였습니다." << endl;
	Level += 7;
	HP += 150;
	MP += 600;
	Damage += 90;
	Armer += 20;
	Accuracy += 40;
	Speed += 20;
}

Summoner::~Summoner()
{
}