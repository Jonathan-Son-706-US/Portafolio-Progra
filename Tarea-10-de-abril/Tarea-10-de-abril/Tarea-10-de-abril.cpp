// Tarea-10-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std; 

string manus(string a, string b, int us)
{
    string final; 
    if (us == 1)
    {
        final = "SI"; 
       cout << a;  cout << b; ;
        
    }
    else if (us == 2)
    {
        final = "NO"; 
        cout << "ERROR " << endl; 
    }
    return final; 
   
   
}
void mensaje()
{
    system("cls");
    cout << "Ingresar dos palabras para luego combinarlas" << endl; 
}
int main()
{
    string a, b;
    int us; 
    mensaje(); 
    cout << "Palabra uno:" << endl; 
    cin >> a; 
    cout << "Palabra dos" << endl;
    cin >> b; 
    cout << "¿Desea realizar la acción?" << endl; 
    cin >> us; 
    string final = manus( a,  b,  us); 

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
