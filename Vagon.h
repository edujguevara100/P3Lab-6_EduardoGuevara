#include "Item.h"
#ifndef VAGON_H
#define VAGON_H
class Vagon: public Item{
	public:
		Vagon(char,int,int);
		int getX();
		int getY();
		void setX(int);
		void setY(int);
	private:
		int x;
		int y;
};
#endif

