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
            cout << "��ų�� : �Ŀ� ��Ʈ����ũ ȹ��!"  << endl;
        }
};
