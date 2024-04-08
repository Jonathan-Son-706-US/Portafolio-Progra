// trabajo-personal-expresiones-4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
    double a = 0, b = 0, c = 0,d= 0 ,  resultado = 0;
    cout << "PROGRAMA PARA DETERMINAR LA SIGUIENTE ECUACION:" << endl;
    cout << "La ecuación es:" << endl; 
    cout << "a + (a + b/c-d)" << endl;
    cout << "Ingresar el valor de a:" << endl; cin >> a;
    cout << "Ingresar el valor de b" << endl; cin >> b;
    cout << "Ingresar el valor de c" << endl; cin >> c;
    cout << "Ingresar el valor de d" << endl; cin >> d;
    cout << "----------------------------------" << endl;
    resultado = (a + (b / (c - d))); 
    cout << "El resultado de la ecuación es:" << endl; 
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
