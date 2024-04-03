// trabajo-clase-1-3-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h> 
using namespace std; 

int main()
{
    int x1 = 0; 
    cout << "Ingresar un número para la ejecución del programa:" << endl; cin >> x1; 
    switch (x1)
    {
    case 1:
        cout << "area comun" << endl;
    break; 

    case 3:
        cout << "area comun." << endl;
        break;
  
    case 5:
        cout << "area especifica." << endl;
        break;
 
    case 7:
        cout << "area especifica" << endl;
        break;
    default :
        cout << "El número no corresponde a ninguna area." << endl; 
        break; 
    }

    cout << "Fin del programa:" << endl; 
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
