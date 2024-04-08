// proyecto-personal-intercambio-expresiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
	int x1 = 0, x2 = 0, x3 = 0;
	cout << "PROGRAMA PARA INTERCAMBIO DE VALORES" << endl;
	cout << "Escribir un numero a)" << endl; cin >> x1; 
	cout << "Escribir un numero b)" << endl; cin >> x2; 
	x3 = x2;
	x2 = x1;
	cout << "El intercambio de valores es el siguiente" << endl;
	cout << "numero a)" << endl;
	cout << x3 <<endl ; 
	cout << "numero b)" << endl;
	cout << x2 <<endl; 

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
