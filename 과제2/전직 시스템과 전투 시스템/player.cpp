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
	cout << "���� ����" << endl;
	cout << "�г��� : " << getNickname() << endl;
	cout << "LV. " << getLevel() << endl;
	cout << "HP : " << getHP() << endl;
	cout << "MP : " << getMP() << endl;
	cout << "���ݷ� : " << getDamege() << endl;
	cout << "���� : " << getArmer() << endl;
	cout << "���߷� : " << getAccuracy() << endl;
	cout << "�ӵ� : " << getSpeed() << endl;
	cout << "----------------------------------" << endl;
}
