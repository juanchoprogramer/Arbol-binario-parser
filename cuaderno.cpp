#include <iostream>
#include <string>
using namespace std;
#include "cuaderno.h"
//agregar-eliminar-ver-marcar como completado
Cuaderno::Cuaderno() {
	id = 1;
	ciclo = 1;
	texto = "";
}
void Cuaderno::mostrarCuaderno() {
	Lista<string> Prueba;
	cout << "numero de cuaderno:" << id << endl;
	while (ciclo != 0) {
		cin.ignore();
		cout << "AGREGAR OPERACION:" << endl;
		getline(cin, texto);
		cout << "0 Salir 1 Continuar" << endl;
		cin >> ciclo;
	}
}