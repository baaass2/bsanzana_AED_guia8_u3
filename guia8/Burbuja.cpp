#include <iostream>

Arbol::Arbol(){
}

int Arbol::altura(Nodo *N) { 
	if (N == NULL){ 
		return 0;
	} 
	return N->fe; 
}

