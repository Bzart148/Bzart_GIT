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
		cout << "½ºÅ³¸í : ¾Ï¹¬È°»ì±Ç È¹µæ!" << endl;
	}
};