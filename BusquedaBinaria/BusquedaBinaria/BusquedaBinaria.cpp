// Busqueda binaria

// Para este tipo de busqueda se necesita un orden ascendente en el array

#include "BusquedaBinaria.h"

using namespace std;

int main()
{
	
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 16 };

	int dato, inf, sup, mitad, temp = 0;

	bool found = false;

	cout << "Ingrese el dato que desea buscar: ";
	cin >> dato;

	inf = 0;
	sup = 14;

	while (inf <= sup) 
	{
		mitad = (inf + sup) / 2;
		if (mitad == temp)
		{
			break;
		}
		temp = mitad;

		if (a[mitad] == dato)
		{
			found = true;
			break;
		}
		if (a[mitad] > dato) 
		{
			sup = mitad;
		}
		if (a[mitad] < dato) 
		{
			inf =  mitad;
		}
	}


	if (found)
	{
		cout << "\nEl dato fue encontrado en la posicion "<<mitad+1<<" de la lista";
	}
	else
	{
		cout << "\nEl dato no fue encontrado en la lista";
	}

}
