#include "Knight.h"
#include <iostream>

using namespace std;


Knight::Knight()
{
	cout << "나이트로 전직 하였습니다." << endl;
	Level += 9;
	HP += 500;
	MP += 120;
	Damage += 100;
	Armer += 150;
	Accuracy += 20;
	Speed += 10;
	//현재상태 2번나옴.
	//cout << "----------------------------------" << endl;  
	//cout << "현재 상태" << endl;
	//cout << "닉네임 : " << nickname << endl;
	//cout << "LV. " << Level << endl;
	//cout << "HP : " << HP << endl;
	//cout << "MP : " << MP << endl;
	//cout << "공격력 : " << Damage << endl;
	//cout << "방어력 : " << Armer << endl;
	//cout << "명중률 : " << Accuracy << endl;
	//cout << "속도 : " << Speed << endl;
	//cout << "----------------------------------" << endl;
}

Knight::~Knight()
{
}