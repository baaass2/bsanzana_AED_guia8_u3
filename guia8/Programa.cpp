#include <iostream>
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 
#include <string>

using namespace std;

void imprimir(int* array, int N){
	for (int i=0; i<N; i++){
		cout<< "num:   "<< array[i] <<endl;		
	}
}

void burbujaMayor(int* array, int N){
	
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
	
	duracion = (clock() - time) / (double) CLOCKS_PER_SEC ;
	cout << " tiempo " << duracion*1000 << endl;
	
	//imprimir(array, N);
}


int main(int argc, char *argv[]) {
	
	int N = stoi(argv[1]);
	string par = (1,argv[2]);
	 
	int array[N];
	
	for (int i=0; i<N; i++){
		int num = (rand() % N) + 1;
		array[i] = num;
		
	}
	cout<< "argv2: " << argv[2] << endl;
	 
	if((par.compare("VER")) == 0){
		for (int i=0; i<N; i++){
			cout<< " "<< array[i] << ", ";		
		}
	cout << "" << endl;
	}
	burbujaMayor(array, N);

	
    return 0;
}
