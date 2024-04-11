// Practica-Personalx.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>
using namespace std; 

void gus(char a)
{
    cout << "Analizador de numeros" << endl;
    if (a == 'a')
    {
        
    }
    else 
    {
        cout << "No es una vocal" << endl; 
}
}

int main()
{
    char a, b, c; 
    int x1 = 0;
    do {
        cout << "Escribir una letra" << endl; cin >> a; 
        cout << "Escribir la segunda " << endl; cin >> b; 
        cout << "Escribir la tercera letra " << endl; cin >> c;
        if ((a && b && c >= 'a') && (a && b && c <= 'u'))
        {
            cout << "Se encuentran disponibles las 3 vocales" << endl; 
        }
        else {
            cout << "No hay ninguna vocal" << endl; 
        }
        cout << "¿Desea repetir el programa?" << endl; 
        cout << "Si = 1, No = 2" << endl; 
        cin >> x1; 
    } while (x1 == 1);
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
