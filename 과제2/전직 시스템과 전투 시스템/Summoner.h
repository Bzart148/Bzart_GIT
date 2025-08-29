#pragma once
#include "player.h"
#include <iostream>

class Summoner : public Player
{
	public :
		Summoner();
		~Summoner();

	void attack()
	{
		cout << "스킬명 : 이프리트 소환 획득!" << endl;
	}
};
