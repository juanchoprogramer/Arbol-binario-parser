#include <iostream>
#include <string>
#include "nodo.h"
using namespace std;
Nodo::Nodo(char* informacion, int* valor)
{
	siguienteDerecha = NULL;
	siguienteIzquierda = NULL;
	datos = new char;
	*datos = *informacion;
	estatus = new int;
	*estatus = *valor;
}
void Nodo::setInformacion(char* informacion, int* valor)
{
	datos = new char;
	*datos = *informacion;
	estatus = new int;
	*estatus = *valor;
}
void Nodo::setSiguienteDerecha(Nodo* s)
{
	siguienteDerecha = s;
}
void Nodo::setSiguienteIzquierda(Nodo* s)
{
	siguienteIzquierda = s;
}
void Nodo::setDatos(char* informacion)
{
	datos = new char;
	*datos = *informacion;
}
void Nodo::setEstatus(int* valor)
{
	estatus = new int;
	*estatus = *valor;
}
const char* Nodo::getDatos() const
{
	return datos;
}
const int* Nodo::getEstatus() const
{
	return estatus;
}
Nodo* Nodo::getSiguienteDerecha()
{
	return siguienteDerecha;
}
Nodo* Nodo::getSiguienteIzquierda()
{
	return siguienteIzquierda;
}