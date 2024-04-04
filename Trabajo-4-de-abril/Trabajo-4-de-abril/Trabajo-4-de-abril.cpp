// Trabajo-4-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std; 

int main()
{
	double x = 0, x1 = 0, x2 = 0, x3 = 0, d =0 ,b = 0 , c = 0;
	int x4;
	bool a = true; 
	do {
		cout << "Calculadora simple AGUS" << endl; 
		cout << "Ingresar el primer número" << endl; cin >> x; 
		cout << "Ingresar el segundo número" << endl; cin >> x1; 
		cout << "Ingresar el tercer número" << endl; cin >> x2;
		cout << "LISTADO DE OPERACIONES DISPONIBLES" << endl; 
		cout << "SUMA = 1" << endl; 
		cout << "RESTA = 2 " << endl; 
		cout << "Multiplicación = 3 " << endl;
		cout << "División = 4 " << endl;
		cout << "Potenciación = 5 " << endl; 
		cout << "¿Qué operación desea realizar" << endl; cin >> x3;
		if (x3 == 1)
		{
			cout << "La operación a realizar es la suma" << endl; 
			cout << "Los siguientes valores se van a sumar" << endl; 
			cout << x <<endl; 
			cout << x1 <<endl; 
			cout << x2 <<endl; 
			x3 = (x + x1 + x2); 
			cout << "El resultado es:" << endl; 
			cout << x3 <<endl; 
			cout << "FIN DE LA OPERACIÓN" << endl;

		}
		else if (x3 == 2)
		{
			cout << "La operación a realizar es la resta" << endl;
			cout << "Los siguientes valores se van a restar" << endl;
			cout << x << endl;
			cout << x1 << endl;
			cout << x2 << endl;
			x3 = (x - x1 - x2);
			cout << "El resultado es:" << endl;
			cout << x3 << endl;
			cout << "FIN DE LA OPERACIÓN" << endl;
		}
		else if (x3 == 3)
		{
			cout << "La operación a realizar es la Multiplicación" << endl;
			cout << "Los siguientes valores se van a multiplicar" << endl;
			cout << x << endl;
			cout << x1 << endl;
			cout << x2 << endl;
			x3 = (x * x1 * x2);
			cout << "El resultado es:" << endl;
			cout << x3 << endl;
			cout << "FIN DE LA OPERACIÓN" << endl;
		}
		else if (x3 == 4)
		{
			cout << "La operación a realizar es la Division" << endl;
			cout << "Los siguientes valores se van a dividr" << endl;
			cout << x << endl;
			cout << x1 << endl;
			cout << x2 << endl;
			x3 = (x / x1 / x2);
			cout << "El resultado es:" << endl;
			cout << x3 << endl;
			cout << "FIN DE LA OPERACIÓN" << endl;
		}
		else if (x3 == 5)
		{
			cout << "La operación a realizar es la Potencia" << endl;
			cout << "Los siguientes valores se van a potenciar" << endl;
			cout << "Ten en cuenta que los datos se van a potenciar al cuadrado" << endl; 
			cout << x << endl;
			cout << x1 << endl;
			cout << x2 << endl;
			d = pow(x, 2); 
			b = pow(x1, 2);
			c = pow(x2, 2);
			cout << "El resultado es:" << endl;
			cout << d << endl;
			cout << b << endl;
			cout << c << endl;
			cout << "FIN DE LA OPERACIÓN" << endl;
		}
		cout << "SI = 1 && NO = 2" << endl; 
		cout << "¿Desea repetir el ciclo?" << endl; 
		cin >> x4; 
		if (x4 == 1) {
			a = false;
		}
		else if (x4 == 2)
		{
			a = true; 
		}

	} while (a == false);

	cout << "Felicidades a roto el ciclo US" << endl;
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
