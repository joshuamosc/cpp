// Busqueda binaria

// En este tipo de busqueda el arreglo debe estar ordenado de manera ascendente

#include <iostream>

using namespace std;

int main() 
{

	int numeros[] = { 1, 4, 6, 8, 9, 12, 15, 25, 65, 734, 1231, 14432, 1243123 };

	int inf, sup, mitad, dato;

	bool found = false;

	cout << "Ingresa el dato que quieres buscar: ";
	cin >> dato;

	// Algoritmo busqueda binaria

	inf = 0;
	sup = 13; // numero de elmento que existe

	while (inf <= sup) 
	{
		mitad = (inf + sup) / 2;

		if (numeros[mitad] == dato)
		{
			found = true;
			break;
		}
		else if (numeros[mitad] > dato) 
		{
			sup = mitad;
			mitad = (inf + sup) / 2;
		} 
		else if (numeros[mitad] < dato)
		{
			inf = mitad;
			mitad = (inf + sup) / 2;
		}

	}

	if (found)
	{
		cout << "El numero ha sido encontrado";
	}
	else {
		cout << "El numero no se encuentra en la lista";
	}





	return 0;
}
