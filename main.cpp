#include <iostream>
#include "Escenarios.h"
#include "Item.h"
#include "Tren.h"
#include "Invisible.h"
#include "Player.h"
#include "Bot.h"
#include "Bomba.h"
#include "Espina.h"
#include "Normal.h"
#include "V.h"
#include "Casilla.h"
#include "Obstaculo.h"
#include "Vagon.h"
#include <ncurses.h>
int main(){
	initscr();
	noecho();
	WINDOW* win = newwin(50,50,1,1);
	keypad(stdscr,TRUE);
	cbreak();
	Escenarios* game = new Tren("Carlos");
	//(Tren)game->fillPista("Carlos");
	Item*** tab = game->pista;
	getch();
	nodelay(stdscr,TRUE);
	clear();
	halfdelay(5);
	refresh();
	for(int i = 0; i < 11; i++){
		for(int j = 0; j < 13; j++){
			printw("%c",tab[i][j]->getIdent());
			printw("%c",' ');
		}
		printw("%s","\n");
	}/*
	for(int i = 0; i < 11; i++){
		for(int j = 0; j < 13; j++){
			if(dynamic_cast<Bot*>(tab[i][j] != 0)){
				(Bot*)tab[i][j]->mover();
			}
		}
	}
	nodelay(stdscr,TRUE);
	clear();
	halfdelay(5);
	refresh();
	for(int i = 0; i < 11; i++){
		for(int j = 0; j < 13; j++){
			if(dynamic_cast<Bot*>(tab[i][j] != 0)){
				int a,b;
				a = (Bot*)tab[i][j]->getCordx();
				b = (Bot*)tab[i][j]->getCordy();
				tab[a][b] = tab[i][j];
				tab[i][j] = new Casilla(' ');
			}
		}
	}*/
	getch();
	return 0;
}
