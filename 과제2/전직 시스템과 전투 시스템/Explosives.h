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
			cout << "½ºÅ³¸í : ¿ø¼Ò Æø¹ß È¹µæ!" << endl;
		}
};