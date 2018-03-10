#ifndef ESCENARIOS_H
#define ESCENARIOS_H
#include "Item.h"
#include <string>
using namespace std;
class Escenarios{
	public:
		Escenarios();
		virtual void fillPista(string) = 0;
		~Escenarios();
		Item*** getPista();
		Item*** pista;
};
#endif
