#pragma once
#include "player.h"
#include <iostream>

class Assassin : public Player
{
public : 
	Assassin();
	~Assassin();

	void attack()
	{
		cout << "��ų�� : �Ϲ�Ȱ��� ȹ��!" << endl;
	}
};