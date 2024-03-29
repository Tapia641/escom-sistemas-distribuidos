// ARCHIVO DE IMPLEMENTACION DE LA CLASE RECTANGULO

#ifndef RECTANGULO_H_
#define RECTANGULO_H_
#include "Coordenada.h"

class Rectangulo{
	private:
		Coordenada superiorIzq;
		Coordenada inferiorDer;
	public:
		Rectangulo();
		Rectangulo(double xSupIzq, double ySupIzq, double xInfDer,double yInfDer);
		void imprimeEsq();
		Coordenada obtieneSupIzq();
		Coordenada obtieneInfDer();
};

#endif
