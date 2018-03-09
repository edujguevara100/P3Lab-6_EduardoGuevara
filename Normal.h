#include "Bomba.h"
#ifndef NORMAL_H
#define NORMAL_H

class Normal: public Bomba{
	public:
		Normal(char);
		void Explode(Item***);
		int getAlcanze();
	private:
		int alcanze;
};
#endif
