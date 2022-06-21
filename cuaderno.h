#include "arbol.h"
#pragma once
class Cuaderno {
protected:
	int id;
	int ciclo;
	string texto;
	int resultado;
public:
	Cuaderno();
	void mostrarCuaderno();
};