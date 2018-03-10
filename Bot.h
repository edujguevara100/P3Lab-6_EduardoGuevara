#include "Item.h"
#ifndef BOT_H
#define BOT_H
class Bot: public Item{
	private:
		int cordx;
		int cordy;
		int bombx;
		int bomby;
		bool vivo;
		int contb;
	public:
		int getCordx();
		int getCordy();
		bool isVivo();
		Bot(char,int,int);
		void mover();
		void poner();
		void removeb();
		int getContb();

};
#endif
