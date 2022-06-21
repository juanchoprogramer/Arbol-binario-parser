#include "nodo.h"
#pragma once
class Arbol
{
private:
	Nodo* inicio;
	Nodo* derecha;
	Nodo* izquierda;
	int tamanio;
	int apuntador;
public:
	Arbol() : inicio(), derecha(), izquierda(), tamanio(0) {}
	int realizarOperacion();
	void agregarOperacion(string locacion);

};

