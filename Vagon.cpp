#include "Vagon.h"

Vagon::Vagon(char ident, int posx, int posy): Item(ident){
	x = posx;
	y = posy;
}

void Vagon::setX(int posx){
	x = posx;
}

void Vagon::setY(int posy){
	y = posy;
}

int Vagon::getX(){
	return x;
}

int Vagon::getY(){
	return y;
}
