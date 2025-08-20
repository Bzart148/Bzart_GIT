#pragma once
#include "player.h"
#include <iostream>

using namespace std;

class Knight : public Player
{
    public:
        Knight();
        ~Knight();

        void attack()
        {
            cout << "스킬명 : 파워 스트라이크 획득!"  << endl;
        }
};
