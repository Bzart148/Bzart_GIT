#include "Knight.h"
#include <iostream>

using namespace std;


Knight::Knight()
{
	cout << "����Ʈ�� ���� �Ͽ����ϴ�." << endl;
	Level += 9;
	HP += 500;
	MP += 120;
	Damage += 100;
	Armer += 150;
	Accuracy += 20;
	Speed += 10;
	//������� 2������.
	//cout << "----------------------------------" << endl;  
	//cout << "���� ����" << endl;
	//cout << "�г��� : " << nickname << endl;
	//cout << "LV. " << Level << endl;
	//cout << "HP : " << HP << endl;
	//cout << "MP : " << MP << endl;
	//cout << "���ݷ� : " << Damage << endl;
	//cout << "���� : " << Armer << endl;
	//cout << "���߷� : " << Accuracy << endl;
	//cout << "�ӵ� : " << Speed << endl;
	//cout << "----------------------------------" << endl;
}

Knight::~Knight()
{
}