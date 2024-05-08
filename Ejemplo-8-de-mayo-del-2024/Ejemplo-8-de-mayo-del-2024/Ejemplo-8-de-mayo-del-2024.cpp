// Ejemplo-8-de-mayo-del-2024.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
using namespace std;

void menu()
{
    cout << "Programa para recursividad" << endl;
    cout << "Ingresar una cantidad maxima de 5 valores:" << endl; 

}
void gus()
{
    int gustex[15];

    for (int i = 0; i < 15; i++)
    {
        cout << "Ingresar un numero us en la posicion " << i << endl; cin >> gustex[i];
    }
    for (int i = 0; i < 15; i++)
    {
        cout << "Numero ingresado en la posicion:" << i << ":" << endl; cout << gustex[i] << endl;
    }
}
int main()
{
    
    
        int gustex[15];
        menu();
        gus();
        cout << "FIn del programa sus" << endl;
        
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
