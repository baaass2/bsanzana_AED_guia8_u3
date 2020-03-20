#include <iostream>
using namespace std;


class Ordenamiento {
	public:
		Ordenamiento();
		double burbujaMayor(int* array, int N, string S);
		double burbujaMenor(int array[], int N, string par);
		double insercion(int array[], int N, string par);
		double insercionBinaria(int array[], int N, string par);
		double seleccion(int array[], int N, string par);
		double shell(int array[], int N, string par);
		void quicksort(int array[], int start, int end);
		int divideQuicksort(int array[], int start, int end);
		void imprimir(int array[], int N, string S);
};

