#include "Item.h"
#ifndef PLAYER_H
#define PLAYER_H
class Player: public Item{
	public:
		Player(char,int,int);
		bool isVivo();
		int getContb();
		void mover();
		void poner();
		void removeb();
	private:
		bool vivo = true;
		int contb = 3;
		int cordx;
		int cordy;
		int bombx;
		int bomby;


};
#endif
