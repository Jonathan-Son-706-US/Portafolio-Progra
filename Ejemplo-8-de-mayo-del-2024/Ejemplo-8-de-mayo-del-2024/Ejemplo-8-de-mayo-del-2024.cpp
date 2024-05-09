// Ejemplo-8-de-mayo-del-2024.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
using namespace std;


void menu2()
{
    cout << "Programa para recursividad" << endl;
    cout << "Ingrese la cantidad de los numeros:" << endl;

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
void sust()
{
}
int main()
{
    bool gus2 = true; 
    int x = 0; 
    do {
        int gustex[15];
        
        menu2();
        gus();
        cout << "FIn del programa sus" << endl;
        cout << "Ingresar si desea repetir el programa 1 = Si || 2 = No" << endl; 
        cin >> x; 
        if (x == 1)
        {
            gus2; 
        }
        else
        {
            gus2 = false; 
        }
    } while (gus2 == true); 
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
