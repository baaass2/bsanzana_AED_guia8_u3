#include <iostream>
#include "Ordenamiento.h"

Ordenamiento::Ordenamiento(){
}

double Ordenamiento::burbujaMayor(int* array, int N){

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
	//imprimir(array, N);	
	return duracion;
}

double Ordenamiento::burbujaMenor(int* array, int N){

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
	//imprimir(array, N);	
	return duracion;
}


double Ordenamiento::insercion(int* array, int N){
	
	int temp;
	int i, j;
	
	clock_t time;
	time = clock();
	double duracion;
	
	for (i=0; i<N; i++){
		temp = array[i];
		j = i - 1;
	}
		while ( (array[j] > temp) && (j >= 0) ){
			array[j+1] = array[j];
			j--;
			array[j+1] = temp;
		}
	
	duracion = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;
	imprimir(array, N);	
	return duracion;
}

double Ordenamiento::insercionBinaria(int* array, int N){

	clock_t time;
	time = clock();
	double duracion;








	duracion = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;
	//imprimir(array, N);	
	return duracion;
}

double Ordenamiento::seleccion(int* array, int N){

	clock_t time;
	time = clock();
	double duracion;








	duracion = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;
	//imprimir(array, N);	
	return duracion;
}

double Ordenamiento::shell(int* array, int N){

	clock_t time;
	time = clock();
	double duracion;








	duracion = ((clock() - time) / (double) CLOCKS_PER_SEC) * 1000 ;
	//imprimir(array, N);	
	return duracion;
}

void Ordenamiento::quicksort(int *array, int start, int end){

    int pivot;
 
    if (start < end) {
        pivot = divideQuicksort(array, start, end);
        
        quicksort(array, start, pivot - 1);

        quicksort(array, pivot + 1, end);
    }
}

		


int Ordenamiento::divideQuicksort(int *array, int start, int end) {
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
void Ordenamiento::imprimir(int* array, int N){
	for (int i=0; i<N; i++){
		cout<< "num:   "<< array[i] <<endl;		
	}
}


