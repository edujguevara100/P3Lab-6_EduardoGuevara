#ifndef BOMBA_H
#define BOMBA_H
#include "Item.h"
class Bomba: public Item{
	public:
		Bomba(char);
		int explode;
		virtual void Explode(Item***);
	private:
		int getExplode();
		
};
#endif
