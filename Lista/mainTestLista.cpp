#include <iostream>
#include <Lista.h>

Lista List;
List.primero=null;

int main(){
	agregarOrdenado(Lista&,int a);
	imprimirLista(const Lista&);
	while(cin>>n){
		agregarOrdenado(List,n);
	}
	imprimirLista(List);
}

