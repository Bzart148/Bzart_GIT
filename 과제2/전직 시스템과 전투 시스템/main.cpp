#include <iostream>
#include "player.h"
#include "Knight.h"
#include "Summoner.h"
#include "Explosives.h"
#include "Assassin.h"
#include "DroneSniper.h"

using namespace std;

int main(void)
{
		string jop[ ] = { "나이트" , "소환사", "폭약사", "암살자","드론아처" };
		int getJop = 0; // 직업변수
		string nickname;
		Player* player = nullptr;

		cout << "닉네임을 입력해주세요 : " << endl;
		cin >> nickname; 

		cout << "<전직 시스템>" << endl;
		cout << "용사 " << nickname << "님, 환영합니다!" << endl;
		cout << "당신의 직업을 선택해 주세요." << endl;

			for (int i = 0; i < 5; i++)
			{
			cout << (i + 1) << "	" << jop[ i ] << endl;
			}
	
		cout << "선택 :  \n";
		cin >> getJop;

			switch (getJop)
			{
			case 1:
				player = new Knight;
				break;

				case 2 : 
				player = new Summoner;
				break;

				case 3 : 
				player = new Explosives;
				break;

				case 4 : 
				player = new Assassin;
				break;

				case 5 : 
				cout << "죄송합니다. 드론 아처는 추후 출시될 예정입니다." << endl;
				return 1;

				default:
				cout << "잘못된 접근법 입니다." << endl;
				return 1;
			}
		player -> setNickname(nickname);
		player -> printPlayersStatus( );

		player->attack();

		delete player;

	return 0;
}

