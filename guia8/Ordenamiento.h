#include <iostream>
using namespace std;


class Ordenamiento {
	public:
		Ordenamiento();
		double burbujaMayor(int* array, int N);
		double burbujaMenor(int* array, int N);
		double insercion(int* array, int N);
		double insercionBinaria(int* array, int N);
		double seleccion(int* array, int N);
		double shell(int* array, int N);
		void quicksort(int *array, int start, int end);
		int divideQuicksort(int *array, int start, int end);
		void imprimir(int* array, int N);
};

