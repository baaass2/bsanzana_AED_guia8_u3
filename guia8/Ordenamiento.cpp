#include <iostream>
#include "Ordenamiento.h"

Ordenamiento::Ordenamiento(){
}

double Ordenamiento::burbujaMayor(int* array, int N, string par ){
	
	clock_t time;
	time = clock();
	double duracion;
	int aux;
	
	for (int i = 0;i < N; i++){
		for (int j = 0; j< N-1; j++){
			if (array[j] < array[j+1]){ 
				aux = array[j]; 
				array[j] = array[j+1]; 
				array[j+1] = aux;
			}
		}	
	}
	
	duracion = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;
	
	if((par.compare("VER")) == 0){	
		imprimir(array, N, "BurbujaMayor");		
	}
	
	return duracion;
}

double Ordenamiento::burbujaMenor(int* array, int N, string par){
	
	clock_t time;
	time = clock();
	double duracion;
	int aux;
	
	for (int i = 0;i < N; i++){
		for (int j = 0; j< N-1; j++){
			if (array[j] > array[j+1]){ 
				aux = array[j]; 
				array[j] = array[j+1]; 
				array[j+1] = aux;
			}
		}	
	}
	
	duracion = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;
	
	if((par.compare("VER")) == 0){		
		imprimir(array, N, "BurbujaMenor");
	}
	return duracion;
}


double Ordenamiento::insercion(int* array, int N, string par){

	int temp;
	int i, j;
	
	clock_t time;
	time = clock();
	double duracion;
	
	for (i=0; i<N; i++){
		temp = array[i];
		j = i - 1;
		while ( (array[j] > temp) && (j >= 0) ){
			array[j+1] = array[j];
			j--;
			array[j+1] = temp;
		}
	}

	duracion = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;
	if((par.compare("VER")) == 0){		
		imprimir(array, N, "Insercion");
	}
	return duracion;
}

double Ordenamiento::insercionBinaria(int* array, int N, string par){
	
	clock_t time;
	time = clock();
	double duracion;
	
    int i,j,aux,izq,der,m;
    
    for(i=1;i<N;i++){
		aux = array[i];
        izq=0;
        der=i-1;
        while(izq<=der){
            m=((izq+der)/2);
            if (aux<array[m]){
                der=m-1;
			}
            else{
				izq=m+1;              
        }
            j=i-1;
		}
		while(j>=izq){
				array[j+1]=array[j];
					j=j-1;
		}
        array[izq]=aux;
	}

	duracion = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;	
	if((par.compare("VER")) == 0){		
		imprimir(array, N, "InsercionBinaria");
	}
	return duracion;
}

double Ordenamiento::seleccion(int* array, int N, string par){
	
	clock_t time;
	time = clock();
	double duracion;
	
	int aux;
	
	for (int i = 0; i < N ; ++i) {
       int min = i;
       for (int c = i + 1; c < N; ++c) {
           if (array[min] > array[c]){
		       min = c;
		   }
       }
       aux = array[i];
       array[i] = array[min];
       array[min] = aux;
	}

	duracion = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;
	if((par.compare("VER")) == 0){		
		imprimir(array, N, "Seleccion");
	}
	return duracion;
}

double Ordenamiento::shell(int* array, int N, string par){
	

	clock_t time;
	time = clock();
	double duracion;

	int entero;
	int i;
	int aux;
	bool band;
	entero = N + 1;
	while (entero > 1){
		entero = (int)(entero/2);
		band = true;
		while (band == true){
			band = false;
			i = 0;
			while ((i + entero) < N){
				if (array[i] > array[i + entero]){
					aux = array[i];
					array[i] = array[(i + entero)];
					array[(i + entero)] = aux;
					band = true;
				}
				i = i + 1;
			}
		}	
	}
	
	duracion = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;
	if((par.compare("VER")) == 0){		
		imprimir(array, N, "Shell");
	}	
	return duracion;
}

void Ordenamiento::quicksort(int* array, int start, int end){

    int pivot;
 
    if (start < end) {
        pivot = divideQuicksort(array, start, end);
        
        quicksort(array, start, pivot - 1);

        quicksort(array, pivot + 1, end);
    }
}

		


int Ordenamiento::divideQuicksort(int* array, int start, int end) {
    int left;
    int right;
    int pivot;
    int temp;
 
    pivot = array[start];
    left = start;
    right = end;
 
    while (left < right) {
        while (array[right] > pivot) {
            right--;
        }
 
        while ((left < right) && (array[left] <= pivot)) {
            left++;
        }
        if (left < right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }
    temp = array[right];
    array[right] = array[start];
    array[start] = temp;

    return right;
}

void Ordenamiento::imprimir(int* array, int N, string S){
	
	cout << S << endl;
	for (int i=0; i<N; i++){
			cout<< " "<< array[i] << ", ";		
		}
	cout << "" << endl;
	}
	


