// Tarea-8-de-mayo-del-2024.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>
using namespace std; 
void a1()
{
	const int tamanio = 5;
	int arreglo[tamanio];
	cout << "1 arreglo" << endl; 
	cout << "Progra para ingresar diferentes tipos de arreglos " << endl;

	for (int i = 0; i < tamanio; i++) {
		cout << "Ingresar el numero en la posicion:" << i << ":" << endl;
		cin >> arreglo[i];
		
		
	}
	for (int i = 0; i < tamanio; i++)
	{
		cout << "Numero ingresado en la posicion:" << i << ":" << endl;
		cout << arreglo[i] << endl;
	}
	cout << "Este reglon cuenta con el límite de:" << tamanio <<endl;
}
void a2()
{
	const int tamanio = 3;
	int arreglo[tamanio];
	cout << "2 arreglo" << endl;
	cout << "Progra para ingresar diferentes tipos de arreglos " << endl;

	for (int i = 0; i < tamanio; i++) {
		cout << "Ingresar el numero en la posicion:" << i << ":" << endl;
		cin >> arreglo[i];


	}
	for (int i = 0; i < tamanio; i++)
	{
		cout << "Numero ingresado en la posicion:" << i << ":" << endl;
		cout << arreglo[i] << endl;
	}
	cout << "Este reglon cuenta con el límite de:" << tamanio <<endl;
}
void a3()
{
	const int tamanio = 3;
	int arreglo[tamanio];
	cout << "3 arreglo" << endl;
	cout << "Progra para ingresar diferentes tipos de arreglos " << endl;

	for (int i = 0; i < tamanio; i++) {
		cout << "Ingresar el numero en la posicion:" << i << ":" << endl;
		cin >> arreglo[i];


	}
	for (int i = 0; i < tamanio; i++)
	{
		cout << "Numero ingresado en la posicion:" << i << ":" << endl;
		cout << arreglo[i] << endl;
	}
	cout << "Este reglon cuenta con el límite de:" << tamanio;
}
void a4()
{
	const int tamanio = 9;
	int arreglo[tamanio];
	cout << "4 arreglo" << endl;
	cout << "Progra para ingresar diferentes tipos de arreglos " << endl;

	for (int i = 0; i < tamanio; i++) {
		cout << "Ingresar el numero en la posicion:" << i << ":" << endl;
		cin >> arreglo[i];


	}
	for (int i = 0; i < tamanio; i++)
	{
		cout << "Numero ingresado en la posicion:" << i << ":" << endl;
		cout << arreglo[i] << endl;
	}
	cout << "Este reglon cuenta con el límite de:" << tamanio <<endl;
}
void a5()
{
	const int tamanio = 4;
	int arreglo[tamanio];
	cout << "5 arreglo" << endl;
	cout << "Progra para ingresar diferentes tipos de arreglos " << endl;

	for (int i = 0; i < tamanio; i++) {
		cout << "Ingresar el numero en la posicion:" << i << ":" << endl;
		cin >> arreglo[i];


	}
	for (int i = 0; i < tamanio; i++)
	{
		cout << "Numero ingresado en la posicion:" << i << ":" << endl;
		cout << arreglo[i] << endl;
	}
	cout << "Este reglon cuenta con el límite de:" << tamanio <<endl;
}


int main()
{
	cout << "Programa para evaluar 5 tipos de arreglos diferentes:" << endl; 
	a1();
	a2();
	a3();
	a4();
	a5();
	return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
