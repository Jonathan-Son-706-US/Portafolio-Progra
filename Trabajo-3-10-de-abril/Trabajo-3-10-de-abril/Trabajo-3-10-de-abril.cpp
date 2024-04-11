// Trabajo-3-10-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>
using namespace std; 
void caso()
{

    cout << "Ingresar el número:" << endl;
    cout << "ACCIONES DISPONIBLES" << endl;
    cout << "Multiplos" << endl;
    cout << "Factorial " << endl;
    cout << "Fibonacci serie" << endl;
    cout << "Ingresar la acción a realizar" << endl; 
}
void multip(double a)
{
    cout << "Los multiplos del número seleccionado es:" << endl;
   for (int x1 = 1 ; x1 <=20 ; x1 ++)
   {
       cout <<a * x1 <<endl; 
      
   }
  
}
void factorial(double a)
{
    int g = 1 ;
    for (int x1 = 1; x1 <= a; x1++)
    {
     g *=  x1; 
      
    }
   
    cout << g; 
}

void fibonacci(double a)
{
    int f = 0 , h = 1, k = 0; 
    for (int x1 = 0; x1 < a; x1++)
    {
        k = f + h; 
        f = h; 
       h = k;
       cout << k <<endl ; 
    }
   
}

int main()
{
    int accion;
    double a; 
    caso();
    cout << "Escribir número" << endl; 
    cin >> a;
    cout << "Escribir la acción" << endl; 
    cin >> accion; 

    switch (accion)
    {
    case 1:
        cout << "Multiplo de el número" << endl; 
        multip(a); 
        break;
    case 2:
        cout << "Factorial de un número" << endl; 
        factorial(a); 
        break; 

    case 3 :
        cout << "Serie fibonacci de un número" << endl; 
        fibonacci(a);
        break; 

    default :
        cout << "ERROR EN ALGUNA PARTE" << endl; 

    }
    return 0; 
    /*SI me dio estoy orgulloso de esto :D*/
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
