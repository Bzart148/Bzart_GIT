#pragma once
#include "player.h"
#include <iostream>


class DroneSniper : public Player
{
	public:
		DroneSniper();
		~DroneSniper();

		void attack()
		{
			cout << "Coming soon" << endl;
		}
};
