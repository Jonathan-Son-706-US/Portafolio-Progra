// proyecto-personal-multiplicacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
    double i = 0, e = 1, mult = 0, b = 0;
    int f; 
    bool c = true; 
    do {
     
        cout << "Escribir un numero para sacar su tabla de multiplicar:" << endl;  cin >> b;
        if (b > 0 && b <= 10)
        {
            for (int c = 1; c <= 10; c++)
            {
                mult = b * c;
                cout << mult << endl;
            }
        }
        else
        {
            cout << "ERROR DESOBEDECIO LAS REGLAS" << endl;
        }
        cout << "OTHER SOLUTION" << endl;
        do {
            cout << "Escribir un numero para sacar su tabla:" << endl; cin >> b; 
        } while ((b > 10 )|| (b < 1));
        for (int d = 1; d <= 10; d++)
        {
            mult = b * d; 
            cout << mult << endl;
        }
        cout << "SI == 1 && No = 2" << endl; 
        cout << "¿Desea repetir la secuencia?" << endl; cin >> f; 
        if (f == 2)
        {
            c = true; 
        }
        else if (f  == 1)
        {
            c = false; 
        }
    } while (c == false); 
    cout << "Ha roto el bucle " << endl; 
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
