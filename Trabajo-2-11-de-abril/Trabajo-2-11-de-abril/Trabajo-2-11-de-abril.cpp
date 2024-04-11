// Trabajo-2-11-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>
using namespace std; 

void menu()
{
    cout << "PROGRAMA PARA PEDIR DATOS CORTOS SENCILLOS" << endl; 
    cout << "Existen 3 opciones" << endl; 
    cout << "Opcion 1 - números" << endl; 
    cout << "Opcion 2  - letra (solamente 1)" << endl;
    cout << "Opcion 3 - una palabra" << endl;
}
void AMONGUS(int a)
{
    cout << "Impresión de un numero fresco:" << endl; 
    cout << a <<endl ; 

}
void GATOS(char ab)
{
    cout << "Impresión de una letra:" << endl; 
    cout << ab << endl;
   
}
void PETOS(string ac)
{
    cout << "Impresión de una palabra completa US:" << endl; 
    cout << ac <<endl ; 
}

int main()
{
    int x1 = 0, a = 0, d = 0 ; 
    string ac;
    char ab ; 
  
    do{
        menu();
        cout << "Ingresar la opción a realizar" << endl; cin >> x1;
        switch (x1)
        {
        case 1 :
            cout << "Ha elegido la opción de un numero:" << endl; 
            cout << "Escribir un numero" << endl; cin >> a;
            AMONGUS(a); 
            break; 
        case 2:
            cout << "Ha elegido la opción de una letra:" << endl;
            cout << "Escribir una letra" << endl; cin >> ab;
            GATOS(ab);
            break;
        case 3:
            cout << "Ha elegido la opción de una palabra:" << endl;
            cout << "Escribir una palabra" << endl; cin >> ac;
            PETOS(ac);
            break;

        dafault :
            cout << "ERORR MAGUS" << endl; 
            break; 
        }
        cout << "¿Desea realizar de nuevo el ciclo" << endl; cin >> d; 
    } while (d == 1);
   
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
