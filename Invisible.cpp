#include "Invisible.h"
#include "Casilla.h"
#include "Obstaculo.h"
#include "Bot.h"
#include "Player.h"
#include <iostream>
Invisible::Invisible(){

}

void Invisible::fillPista(){
	pista = new Item**[11];
	for(int j = 0; j < 11; j++){
		pista[j] = new Item*[13];
	}
	for(int i = 0; i < 11; i++){
		for(int j = 0; j < 13; j++){	
			if(i%2 != 0 && j%2 != 0){
				pista[i][j] = new Obstaculo('o');
			}
		}
	}
	for(int i = 0; i < 11; i++){
		for(int j = 0; j < 13; j++){
			if(pista[i][j] != NULL){
				pista[i][j] = new Casilla(' ');
			}
		}
	}
	pista[0][0] = new Player('p',0,0);
	pista[10][0] = new Bot('b',0,10);
	pista[0][12] = new Bot('b',12,0);
	pista[10][12] = new Bot('b',12,10);
	pista[5][6] = new Bot('b',6, 5);
}
