// trabajo-15-de-mayo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

void menus()
{
	cout << "Menu para realizar 5 ejercicios de arreglos" << endl;
	cout << "Las diferentes opciones para realizar son las siguientes:" << endl;
	cout << "1 = arrerglo al reves" << endl;
	cout << "2 = Clonar Arreglo" << endl;
	cout << "3 = Cambio de valores de positivo y negativo y al revés" << endl;
	cout << "4 = Extraccion de valores decimales y enteras" << endl;
	cout << "Ingresar la opción a realizar:" << endl;
}
void alvss()
{
	double arreglous[10], x = 0;
	cout << "Opción al reves de un arreglo u de forma ingresa" << endl;
	cout << "Ingresa la cantidad a evaluar" << endl;
	cin >> x;

	for (int i = x - 1; i >= 0; i--)
	{
		cout << "Ingresar el primer numero para el arreglo en la posicion No." << i << endl;
		cin >> arreglous[i];

	}
	for (int i = x - 1; i >= 0; i--)
	{
		cout << "El numero ingresado en la posicion No." << i << " " << "es:" << endl;
		cout << arreglous[i] << endl;
	}
}
void clonus()
{
	int arreglous2[100], arreglous3[100], x = 0;
	cout << "Clonar un arreglos us:" << endl;
	cout << "Ingresar un limite para el arreglo" << endl; cin >> x;
	for (int i = 0; i < x; i++)
	{
		cout << "Ingresar el primer numero en la posicion No." << i << endl;
		cin >> arreglous2[i];
	}
	for (int i = 0; i < x; i++)
	{
		arreglous3[i] = arreglous2[i];
	}
	for (int i = 0; i < x; i++)
	{

		cout << "El arreglo cloando es el siguiente: " << endl;
		cout << "El numero ingresado en la posicion No." << i << " " << "es:" << endl;
		cout << arreglous3[i] << endl;

	}

}
void gustPUS()
{
	int x1 = 0, arregloUS4[100];
	cout << "Conversion de numeros negativos a positivos" << endl;
	cout << "Ingresar el rango limite para el arreglo " << endl;
	cin >> x1;
	for (int i = 0; i < x1; i++)
	{
		cout << "Ingresar un numero para el arreglo en la posicion No." << i << endl;
		cin >> arregloUS4[i];
	}
	for (int i = 0; i < x1; i++)
	{
		if (arregloUS4[i] < 0)
		{
			arregloUS4[i] *= -1;
		}
	}
	for (int i = 0; i < x1; i++)
	{
		cout << "El numero posicionado en la posición No." << i << "es:" << endl;
		cout << arregloUS4[i] << endl;
	}
}
void PDEESTDUFDKJFD()
{
	double x1 = 0, reglonLargosus[100], pex = 0, arregloL[100], arregloL2[100];
	cout << "Separador de enteros y positiSUS" << endl;
	cout << "Ingresar por favor el limite de su reglon" << endl;
	cin >> x1;
	for (int i = 0; i < x1; i++)
	{
		cout << "Ingresar un numero para la posicion No." << i << endl;
		cin >> reglonLargosus[i];
	}

	for (int i = 0; i < x1; i++) 
	{
		double parteEntera, parteDecimal;
		parteDecimal = modf(reglonLargosus[i], &parteEntera);
		cout << "El numero ingresado en la posicion No." << i << " es: " << reglonLargosus[i] << endl;
		cout << "Parte entera: " << parteEntera << endl;
		cout << "Parte decimal: " << parteDecimal << endl;
	}
}
int main()
{
	int arreglous[10];
	bool sus = false;
	int x = 0, x1 = 0;
	do
	{
		menus();
		cin >> x1;
		switch (x1)
		{
		case 1:
			alvss();
			cout << "Este arreglo tienen un limite establecido por usted jefeSUS" << endl;
			break;
		case 2:
			clonus();
			cout << "Este arreglo tienen un limite establecido por usted jefeSUS" << endl; ;
			break;
		case 3:
			gustPUS();
			cout << "Este arreglo tienen un limite establecido por usted jefeSUS" << endl;
			break;
		case 4:
			PDEESTDUFDKJFD();
			cout << "Este arreglo tienen un limite establecido por usted jefeSUS" << endl;
			break;
		default:
			cout << "Este arreglo tienen un limite establecido por usted jefeSUS" << endl;
			break;
		}
		cout << "Desea repetir el bucle us" << endl;
		cout << "SI = 1" << endl;
		cout << "NO = 2" << endl;
		cin >> x;
		if (x == 2)
		{
			sus;
		}
		else if (x == 1)
		{
			sus = true;
		}

	} while (sus == true);
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
