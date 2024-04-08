// Practica-personal-expresiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>
using namespace std; 

int main()
{
    double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, resultado = 0;
    cout << "Programa para evaluar la siguiente expresión:" << endl;
    cout << "(a + b/c)/(d + e/f)" << endl;
    cout << "Escribir el valor para a" << endl; cin >> a; 
    cout << "Escribir el valor para b" << endl; cin >> b;
    cout << "Escribir el valor para c" << endl; cin >> c;
    cout << "Escribir el valor para d" << endl; cin >> d;
    cout << "Escribir el valor para e" << endl;  cin >> e;
    cout << "Escribir el valor para f" << endl; cin >> f;

    resultado = ((a + b / c) / (d + e / f)); 
    cout.precision(4); 
    cout << "El resultado de la expresión es:" << endl; 
    cout << resultado; 
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
