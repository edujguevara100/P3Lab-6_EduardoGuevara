#include "Bot.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Item.h"
#include <iostream>
Bot::Bot(char ident, int posx,int posy):Item(ident){
	cordx = posx;
	cordy = posy;
}
int Bot::getCordx(){
	return cordx;
}
int Bot::getCordy(){
	return cordy;
}
void Bot::mover(){
	srand(time(NULL));
	int ran;
	ran = rand() % 4 + 1;
	switch(ran){
		case 1:
			cordx--;
			if(cordx < 0 || (cordx%2 != 0 && cordy%2 != 0)){
				cordx++;
				mover();
			}
			break;
		case 2:
			cordx++;
			if(cordx > 12 || (cordx%2 != 0 && cordy%2 != 0)){
				cordx--;
				mover();
			}
			break;
		case 3:
			cordy++;
			if(cordy > 10 || (cordx%2 != 0 && cordy%2 != 0)){
				cordy--;
				mover();
			}
			break;
		case 4:
			cordy--;
			if(cordy < 0 || (cordx%2 != 0 && cordy%2 != 0)){
				cordy++;
				mover();
			}
			break;
	}
}

void Bot::poner(){
	bombx = cordx;
	bomby = cordy;
}

void Bot::removeb(){
	bombx = -1;
	bomby = -1;
}

bool Bot::isVivo(){
	return vivo;
}

int Bot::getContb(){
	return contb;
}
