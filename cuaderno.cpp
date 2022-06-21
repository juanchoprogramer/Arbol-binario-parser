#include <iostream>
#include <string>
using namespace std;
#include "cuaderno.h"
//agregar-eliminar-ver-marcar como completado
Cuaderno::Cuaderno() {
	id = 1;
	ciclo = 1;
	texto = "";
	resultado = 0;
}
void Cuaderno::mostrarCuaderno() {
	Arbol Prueba;
	cout << "numero de cuaderno:" << id << endl;
	while (ciclo != 0) {
		cin.ignore();
		cout << "AGREGAR OPERACION:" << endl;
		getline(cin, texto);
		cout << texto<<endl;
		resultado = Prueba.realizarOperacion();
		cout << resultado<<endl;
		cout << "0 Salir 1 Continuar" << endl;
		cin >> ciclo;
	}
}