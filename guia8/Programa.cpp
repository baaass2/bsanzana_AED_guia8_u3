#include <iostream>
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 
#include <string>
#include "Ordenamiento.h"
using namespace std;

int main(int argc, char *argv[]) {
	
	Ordenamiento ordenar;
	double tiempo[7];
	int N = stoi(argv[1]);
	
	if(N > 1000000 or N <= 0){
		cout<< "ERROR: numero no valido " << endl;
		cout<< "reinicie el programa. " << endl;
		return 0;
	}
	
	string par = (1,argv[2]);
	 
	int array[N];
	int array1[N];
	int array2[N];
	int array3[N];
	int array4[N];
	int array5[N];
	int array6[N];
	

	for (int i=0; i<N; i++){
		int num = (rand() % N) + 1;
		array[i] = num;
	}
	
	for (int i=0; i<N; i++){
		array1[i] = array[i];
		array2[i] = array[i];
		array3[i] = array[i];
		array4[i] = array[i];
		array5[i] = array[i];
		array6[i] = array[i];	
	}
	
	cout<< "argv2: " << argv[2] << endl;

	if((par.compare("VER")) == 0){
		for (int i=0; i<N; i++){
			cout<< " "<< array[i] << ", ";		
		}
	cout << "" << endl;
	}
	
	tiempo[0] = ordenar.burbujaMayor(array, N);
	tiempo[1] = ordenar.burbujaMenor(array1, N);	
	tiempo[2] = ordenar.insercion(array2,N);	
	tiempo[3] = ordenar.insercionBinaria(array3, N);
	tiempo[4] = ordenar.seleccion(array4, N);
	tiempo[5] = ordenar.shell(array5,N);
	
	clock_t time;
	time = clock();
	double duracionQuicksort;

	ordenar.quicksort(array6, 0, N - 1);
	
	duracionQuicksort = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;
	tiempo[6] = duracionQuicksort; 
	
	cout<< "Tiempo Burbuja Mayor:         " << tiempo[0] << " ms." << endl;
	cout<< "Tiempo Burbuja Menor:         " << tiempo[1] << " ms." << endl;
	cout<< "Tiempo Insercion:             " << tiempo[2] << " ms." << endl;
	cout<< "Tiempo Insercion Binaria:     " << tiempo[3]  <<" ms." << endl;
	cout<< "Tiempo Seleccion:             " << tiempo[4] << " ms." << endl;
	cout<< "Tiempo Shell:                 " << tiempo[5] << " ms." << endl;
	cout<< "Tiempo Quicksort:             " << tiempo[6] << " ms." << endl;

    return 0;
}
