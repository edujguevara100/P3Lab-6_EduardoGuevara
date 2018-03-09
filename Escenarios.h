#ifndef ESCENARIOS_H
#define ESCENARIOS_H
#include "Item.h"
class Escenarios{
	public:
		Escenarios();
		virtual void fillPista() = 0;
		~Escenarios();
		Item*** getPista();
		Item*** pista;
};
#endif
