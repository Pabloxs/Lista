#include <iostream>
//desarrollo de funciones
using namespace std;

agregarOrdenado(Lista&L,int v){
	Nodo* Aux=new Nodo();
	Aux->valor;
	if(L.primero == null){//esta vacia
		L.primero=Aux;
		L.primero->sgte=null;
	}
	else{
		Nodo* R=L.primero;
		while(Aux->valor>R->valor&&R.sgte!=NULL){
			R=R->sgte;
		}
		Aux->sgte=R->sgte;
		R->sgte=Aux;
		
	}
}


imprimirLista(const Lista&L){
	Nodo* Aux=L.primero;
	while(Aux=NULL){
		cout<<Aux->valor;
		Aux=Aux->sgte;
	}
}

