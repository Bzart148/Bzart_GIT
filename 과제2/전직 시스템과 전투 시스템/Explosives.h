#pragma once
#include "player.h"
#include <iostream>

class Explosives : public Player
{
	public : 
		Explosives();
		~Explosives();

		void attack()
		{
			cout << "��ų�� : ���� ���� ȹ��!" << endl;
		}
};