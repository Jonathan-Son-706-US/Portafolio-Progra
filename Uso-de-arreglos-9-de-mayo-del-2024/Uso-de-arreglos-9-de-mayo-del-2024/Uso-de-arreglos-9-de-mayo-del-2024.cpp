// Uso-de-arreglos-9-de-mayo-del-2024.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
using namespace std;
void msj()
{
    cout << "Programa para detectar diferentes operaciones con arreglos" << endl; 
    cout << "1 = Suma de elementos" << endl; 
    cout << "2 = Mayor elemento" << endl;
    cout << "3 = Promedio" << endl;
    cout << "4 = Busqueda de un numero" << endl;
    cout << "Ingresar la opcion a realizar" << endl; 
}
void sum()
{
    
    int sum = 0;
    int arreglo1[5]; 
    cout << "Suma de arreglos" << endl; 
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingresar primer numero en la posicion no:" << i << endl; cin >> arreglo1[i]; 
    }
    for (int i = 0; i < 5; i++)
    {
        sum += arreglo1[i];       
        
    }
    cout << sum << endl; 
}
void may()
{
    double numt = 0;
    bool sus = false; 
    int arreglos2[15] = {1, 5, 6, 7, 15, 20, 30, 15, 28, 30, 45, 67, 99, 67, 25};
    cout << "Programa para atinar ciertos numeros" << endl; 
    cout << "Los numeros a evaluar son los siguientes:" << "0 - 100" << endl; ;
    cout << "Ingresar un valor para ver la atinación" << endl; cin >> numt; 
    for (int i = 0; i < 15; i++)
    {
        if (numt == arreglos2[i])
        {
            sus = true;
            break; 
        }
    }
    if (sus == true)
    {
        cout << "Felicidades causa" << endl; 
    }
    else
    {
        cout << "Lamentablemente sus" << endl; 
    }

}
void prom()
{
    double arreglos3[10]; 
    double num = 0, fin = 0;
    cout << "Programa para evaluar promedios" << endl; 
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingresar el primer numero para la sumatoria en la posicion No. :" <<i << endl; 
        cin >> arreglos3[i];
        num += arreglos3[i];
    }
    fin = (num / 10); 
    cout.precision(2);
    cout << "promedio final es:" << endl; 
    cout << fin <<endl; 
}
void mayoR()
{
    double arreglos4[15];
    double pus2 = 0;
    cout << "Programa para evaluar diferentes numeros mayores" << endl; 
    for (int i = 0; i < 15; i++)
    {
        cout << "Ingresar un numero en la posicion no. :" << i << endl; 
        cin >> arreglos4[i];
        if (i == 0 || arreglos4[i] > pus2)
        {
            pus2 = arreglos4[i]; 
        }
    }
    
    cout << "El numero mayor entre todos es:" << endl; 
    cout << pus2 <<endl ; 

}
int main()
{
    int arreglo1 = 5, arreglo3 = 10, arreglo2 = 10, arreglo4 = 15;
    bool gost = true; 
    string x ; 
    int x1 = 0;
    do 
    {
        msj();
        cin >> x1;
        switch (x1)
        {
        case 1:
            sum();
            cout << "Este arreglo cuanta de un limite de:" << arreglo1 <<endl ; 
            break; 
        case 4:
            may(); 
            cout << "Este arreglo cuenta con un límite de:" << arreglo2 << endl; 
            break; 
        case 3:
            prom();
            cout << "Este arreglo cuenta con limite de:" << arreglo3 << endl; 
            break;
        case 2:
            mayoR();
            cout << "Este arreglo cuenta con un límite de:" << arreglo2 << endl; 
            break; 
        default :
            cout << "Ingresar valores coherente jefe" << endl; 
            break; 
        }
        cout << "Desea repetir de nuevo este programa" << endl; 
        cout << "Escribir si  para repetir " << endl; 
        cout << "Escribir no para salir" << endl; 
        cin >> x; 
        if (x == "Si" || x =="si")
        {
            gost; 
        }
        else if (x == "No" || x == "no")
        {
            gost = false; 
        }
        else
        {
            cout << "ERROR GRAVE PA" << endl; 
            gost = false;
        }

    } while (gost == true);
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
