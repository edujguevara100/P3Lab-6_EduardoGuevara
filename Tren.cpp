#include "Tren.h"
#include "Casilla.h"
#include "Obstaculo.h"
#include "Player.h"
#include "Bot.h"
#include "Vagon.h"
#include <iostream>
#include <string>
Tren::Tren(string name){
	fillPista(name);
}
Vagon* Tren::getVagon(){
	return vagon;	
}

void Tren::fillPista(string name){
	pista = new Item**[11];
	for(int i = 0; i < 11; i++){
		pista[i] = new Item*[13];
	}

	pista[7][4] = new Vagon('v',4,7);
	pista[0][0] = new Player('p',0,0,name);
	pista[10][12] = new Bot('b',12,10);
	pista[0][12] = new Bot('b',12,0);
	pista[10][0] = new Bot('b',0,10);
	pista[5][6] = new Bot('b',6,5);
	pista[1][1] = new Obstaculo('o');
	pista[1][3] = new Obstaculo('o');
	pista[1][5] = new Obstaculo('o');
	pista[1][7] = new Obstaculo('o');
	pista[1][9] = new Obstaculo('o');
	pista[1][11] = new Obstaculo('o');

	pista[3][1]= new Obstaculo('o');
	pista[3][3] = new Obstaculo('o');
	pista[3][5] = new Obstaculo('o');
	pista[3][7] = new Obstaculo('o');
	pista[3][9] = new Obstaculo('o');
	pista[3][11] = new Obstaculo('o');

	pista[5][1] = new Obstaculo('o');
	pista[5][3] = new Obstaculo('o');
	pista[5][5] = new Obstaculo('o');
	pista[5][7] = new Obstaculo('o');
	pista[5][9] = new Obstaculo('o');
	pista[5][11] = new Obstaculo('o');

	pista[7][1] = new Obstaculo('o');
	pista[7][3] = new Obstaculo('o');
	pista[7][5] = new Obstaculo('o');
	pista[7][7] = new Obstaculo('o');
	pista[7][9] = new Obstaculo('o');
	pista[7][11] = new Obstaculo('o');

	pista[9][1] = new Obstaculo('o');
	pista[9][3] = new Obstaculo('o');
	pista[9][5] = new Obstaculo('o');
	pista[9][7] = new Obstaculo('o');
	pista[9][9] = new Obstaculo('o');
	pista[9][11] = new Obstaculo('o');

	for(int i = 0; i < 11; i++){
		for(int j = 0; j < 13; j++){
			if(pista[i][j] == NULL){
				pista[i][j] = new Casilla(' ');
			}
		}
	}
}
