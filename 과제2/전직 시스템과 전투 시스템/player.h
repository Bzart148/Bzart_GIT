#pragma once
#include <string>
using namespace std;

class Player
{	public : 
		Player();
		~Player();
		virtual void attack() = 0;
		virtual void  printPlayersStatus();
		// Level = 1, HP, MP = 20, Damage = 5, Armer = 5, Accuracy = 10, Speed = 5;

		string getJobName()
		{ return jobname; }
		string getNickname()
		{ return nickname; }
		int getLevel( )
		{ return Level; }
		int getHP( )
		{ return HP; }
		int getMP( )
		{ return MP; }
		int getDamege( )
		{ return Damage; }
		int getArmer( )
		{ return Armer; }
		int getAccuracy( )
		{ return Accuracy; }
		int getSpeed( )
		{ return Speed; }


		void setNickname(string nickname)
			{ this->nickname = nickname; }
		void setHP(int HP)
			{this->HP = HP; }
		void setMP(int MP)
			{ this->MP = MP; }
		void setDamage(int Damage)
			{ this->Damage = Damage; }
		void setArmer(int armer)
			{ this->Armer = armer; }
		void setAccuracy(int accuracy)
			{ this->Accuracy = accuracy; }
		void setSpeed(int speed)
			{ this->Speed = speed; }
	

	protected : 
		string jobname;
		string nickname;
		int Level ;
		int HP ;
		int MP ;
		int Damage ;
		int Armer ;
		int Accuracy ;
		int Speed ;
};
