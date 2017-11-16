#include <iostream>

struct Nodo{
	int valor;
	Nodo* sgte;
};
struct Lista{
	Nodo* primero;
};

void agregarOrdenado(Lista&,int a);
void imprimirLista(const Lista&);
