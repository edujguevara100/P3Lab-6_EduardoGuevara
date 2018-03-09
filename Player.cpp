#include "Player.h"
#include <string>
#include <iostream>
using namespace std;
Player::Player(char ident, int posx, int posy): Item(ident){
	cordx = posx;
	cordy = posy;
}
bool Player::isVivo(){
	return vivo;
}
int Player::getContb(){
	return contb;
}

void Player::poner(){
	bombx = cordx;
	bomby = cordy;
}

void Player::mover(){
	int x,y;
	cout<<"Ingrese la fila a la que se quiere mover:"<<endl;
	cin>>y;
	cout<<"Ingrese la columna a la que se quiere mover:"<<endl;
	cin>>x;
	cordx = x;
	cordy = y;
	if((cordx < 0 || cordx > 12) || (cordy < 0 || cordy > 10)){
		mover();
	}
}

void Player::removeb(){
	bombx = -1;
	bomby = -1;
}
