// Busqueda secuencial

// a[5] = { 5, 2, 6, 1, 6 }; dato = 4

#include <iostream>

using namespace std;

int main() {
	
	int ar[10] = { 1, 2, 4, 6, 1243, 534, 12, 65, 43, 5 };
	int dato, i;
	bool found = false;
	
	cout<<"Que dato deseas buscar? ";
	cin>>dato;
	
	// Busqueda secuencial
	for ( i = 0; i < 10; i++ ) {
		if ( dato == ar[i] ) {
			found = true;
			break;
		}
	}
	
	if ( found ) {
		printf("El dato se encuentra en la posicion %d", i+1);
	} else {
		printf("El dato no fue encontrado!");
	}
	
	return 0;
}
