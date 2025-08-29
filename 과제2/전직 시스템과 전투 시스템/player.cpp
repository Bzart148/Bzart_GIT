#include <iostream>
#include "player.h"

using namespace std;

Player::Player()
{
	this->Level = 1;
	this->HP = 20;
	this->MP = 20;
	this->Damage = 50;
	this->Armer = 50;
	this->Accuracy = 10;
	this->Speed = 5;

}
Player::~Player()
{
}

void Player::printPlayersStatus()
{
	cout << "----------------------------------" << endl;
	cout << "현재 상태" << endl;
	cout << "닉네임 : " << getNickname() << endl;
	cout << "LV. " << getLevel() << endl;
	cout << "HP : " << getHP() << endl;
	cout << "MP : " << getMP() << endl;
	cout << "공격력 : " << getDamege() << endl;
	cout << "방어력 : " << getArmer() << endl;
	cout << "명중률 : " << getAccuracy() << endl;
	cout << "속도 : " << getSpeed() << endl;
	cout << "----------------------------------" << endl;
}
