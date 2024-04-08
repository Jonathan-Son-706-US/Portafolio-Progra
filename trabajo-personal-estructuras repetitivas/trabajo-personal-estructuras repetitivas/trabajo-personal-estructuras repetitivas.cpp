// trabajo-personal-estructuras repetitivas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
    int x = 0, b = 0, c = 0 ; 
    cout << "PROGRAMA PARA SEGUIR INGRESANDO DATOS:" << endl; 
    do {
        cout << "Ingresar un número favorito" << endl; cin >> x; 
        if (x > 0)
        {
            b = b + 1; 
        }
        else
        {
            c = c + 1; 
        }
     
    } while (x > 0); 

    cout << "El numero de valores enteros positivos ingresados es de:" << endl;
    cout << b << endl; 

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
