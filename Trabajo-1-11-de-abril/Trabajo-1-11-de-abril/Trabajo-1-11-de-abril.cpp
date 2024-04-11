// Trabajo-1-11-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std; 
void tex()
{
    cout << "MENU PARA MOSTRAR FRASES RANDOM" << endl; 
}
void among()
{
    cout << "Gato queso" << endl; 
}
void GUs()
{
    cout << "1+243+4+343+2+2" << endl; 
}
void TEX()
{
    cout << "Los proyectos se acercan " << endl; 
}
void AGus()
{
    cout << "Gatooooooo" << endl; 
}
void PEX()
{
    cout << "Gasto de 240K" << endl; 
}
int main()
{
    int x1 = 0, x2 = 0 ; 
    do {
        tex();
        cout << "Escribir la opción a mostrar" << endl; cin >> x1;
        switch (x1)
        {
        case 1:
            cout << "Escogio la opción numero 1" << endl;
            among();
            break;
        case 2:
            cout << "Escogio la opción numero 2" << endl;
            GUs();
            break;
        case 3:
            cout << "Escogio la opción numero 3" << endl;
            TEX();
            break;
        case 4:
            cout << "Escogio la opción numero 4" << endl;
            AGus();
            break;
        case 5:
            cout << "Escogio la opción numero 5" << endl;
            PEX();
            break;
        dafault :
            cout << "ERROR SIGA INSTRUCCIONES" << endl; 
        }
        cout << "¿Desea repetir la acción?" << endl; cin >> x2;
    } while (x2 == 1);
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
