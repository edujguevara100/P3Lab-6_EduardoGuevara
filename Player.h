#include "Item.h"
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player: public Item{
	public:
		Player(char,int,int,string);
		bool isVivo();
		int getContb();
		void mover();
		void poner();
		void removeb();
	private:
		string nombre;
		bool vivo = true;
		int contb = 3;
		int cordx;
		int cordy;
		int bombx;
		int bomby;


};
#endif
