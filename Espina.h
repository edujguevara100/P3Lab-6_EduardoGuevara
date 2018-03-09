#include "Bomba.h"
#ifndef ESPINA_H
#define ESPINA_H
class Espina: public Bomba{
	public:
		Espina(char);
		void Explode(Item***);
};
#endif
