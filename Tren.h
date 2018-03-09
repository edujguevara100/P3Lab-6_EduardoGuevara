#ifndef TREN_H
#define TREN_H
#include "Vagon.h"
#include "Escenarios.h"
class Tren: public Escenarios {
	public:
		void fillPista();
		Tren();
		Vagon* getVagon();
	private:
		Vagon* vagon;
};
#endif
