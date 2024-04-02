// tarea-1-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    int x1 = 0, x2 = 0, x3 = 1, x4 = 1, x5 = 0;
    cout << "Programa para resolver se serie de fibonacci" << endl; cin >> x1;
    cout << "Ingresar el limite para la serie" << endl;
    for (int x =1 ; x <= x1; x++)
    {
        x4 = x2 + x3;
       
        cout << x4 << endl;
        x2 = x3;
        x3 = x4;
    }
    cout << "Se aplico un limite para evitar el ciclo infinito " << endl;
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
