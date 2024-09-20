#include <stdio.h>
#include <iostream>

using namespace std;
const int minimo = 0, maximo = 10;

int main(int argc, char **argv)
{	
	int n;
	
	cout << "Introduzca un numero entre " << minimo << " y " << maximo << "." << endl;
	cin >> n;
	
	if((n < minimo) || (n > maximo))
		cout << "El valor " << n << " está fuera del rango." << endl;
	else
		switch(n){
			case 0:
				cout << "No existe definicion de numero primo para este caso." << endl;
				break;
			case 2:
				cout << "El numero es primo." << endl;
				break;
			case 3:
				cout << "El numero es primo." << endl;
				break;
			case 5:
				cout << "El numero es primo." << endl;
				break;
			case 7:
				cout << "El numero es primo." << endl;
				break;
			default:
				cout << "El numero " << n << " no es primo." << endl;
				break;
		};

	
	return 0;
}
