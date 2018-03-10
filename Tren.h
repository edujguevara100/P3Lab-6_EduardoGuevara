#ifndef TREN_H
#define TREN_H
#include "Vagon.h"
#include "Escenarios.h"
#include <string>
using namespace std;
class Tren: public Escenarios {
	public:
		void fillPista(string);
		Tren(string);
		Vagon* getVagon();
	private:
		Vagon* vagon;
};
#endif
