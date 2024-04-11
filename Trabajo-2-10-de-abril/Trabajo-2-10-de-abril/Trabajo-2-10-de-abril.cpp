// Trabajo-2-10-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std; 

double dato(double a , double b, double p ,  string c)
{
    double final; 
    if (c == "+")
    {
        final = a + b + p ; 
    }
    else if (c == "-")
    {
        final = a - b - p; 
    }
    else if (c == "*")
    {
        final = a * b * p; 
    }
    else
    {
        cout << "ERROR" << endl;
        final = 0;
    }
    return  final; 
}
void Mostrarmensaje() {
    system("cls"); 
    cout << "Escribir los datos necesarios a las siguientes números y la operación a realizar:" <<endl; 
   
}

int main()
{
    double a, b, p; 
    string c; 
    
    Mostrarmensaje();
    cout << "Ingresar primer numero" << endl; 
    cin >> a; 
    cout << "Ingresar segundo numero" << endl;
    cin >> b; 
    cout << "Ingresar tercer numero" << endl;
    cin >> p; 
    cout << "Que operación desea realizar, por favor escribir el signo a realizar" << endl; 
    cin >> c; 
    double final = dato( a,  b,  p,  c);
    cout << "Su resultado final es:" << endl;  
    cout << final; 
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
