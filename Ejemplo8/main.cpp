#include <stdio.h>
#include <iostream>

using namespace std;

int menor(int x, int y) // declaración y definición de función juntas
{
	return x < y ? x : y;
}

int menorde3(int x, int y, int z); // declaración de función

int main(int argc, char **argv)
{	
	int a, b, c;
	
	cout << "Escribe tres datos enteros: " << endl;
	cin >> a >> b >> c;
	cout << "El menor de los tres números " << menorde3(a, b, c) << endl;
	
	return 0;
}

int menorde3(int x, int y, int z) // ... aquí va la definicion
{
	return menor(menor(x, y), z);
}
