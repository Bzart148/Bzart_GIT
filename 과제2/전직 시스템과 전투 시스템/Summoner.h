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
		cout << "��ų�� : ������Ʈ ��ȯ ȹ��!" << endl;
	}
};
