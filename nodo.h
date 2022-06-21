#pragma once
class Nodo {
protected:
	char* datos;
	int* estatus;
	Nodo* siguienteDerecha;
	Nodo* siguienteIzquierda;
	int apuntador;
public:
	Nodo(char *informacion, int *valor);
	Nodo() : datos(), estatus(), siguienteDerecha(), siguienteIzquierda(){}
	~Nodo() {
		delete datos;
		delete estatus;
		siguienteDerecha = nullptr;
		siguienteIzquierda = nullptr;
	}
	void setInformacion(char* informacion, int* valor);
	void setSiguienteDerecha(Nodo* s);
	void setSiguienteIzquierda(Nodo* s);
	void setDatos(char* informacion);
	void setEstatus(int* valor);
	const char* getDatos() const;
	const int* getEstatus() const;
	Nodo* getSiguienteDerecha();
	Nodo* getSiguienteIzquierda();

};