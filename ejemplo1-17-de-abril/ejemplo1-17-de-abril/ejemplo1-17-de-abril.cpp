// ejemplo1-17-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <windows.h>
using namespace std; 

void GOTOXY(int x, int y)
{
    COORD COORD;
    COORD.X = x;
    COORD.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), COORD);
}

int Menu1(int x, int y, string b, int p)
{
    int d = 0;
    if (p == 1)
    {
        GOTOXY(x, y);
        cout << "Hola mundo" << endl; 
    }
    else if (p == 2)
    {
        GOTOXY(0, 0);
        cout << x; 

    }
    else if (p == 3)
    {
        GOTOXY(x, y);
        cout << b; 
    }
    return d; 
}
int Menu(int m2, string b, int x, int y, int p)
{
    int us = 0; 
    if (m2 == 1)
    {
        cout << "Menu No.1" << endl; 
        int d = Menu1(x, y, b, p);
    }
    else if (m2 == 2)
    {
        cout << "Menu No.2" << endl; 
    }
    return us; 
}
void mensaje()
{
    cout << "A continuación se le presentara las siguientes opciones para el menu n.1" << endl; 
    cout << "Opción No.1 = Ingresar dos números para posicionarlas en la consola" << endl;
    cout << "Opcion No.2 =  posicionar un número en el centro " << endl;
    cout << "Opción No.3 =  Posicionar un numero en el centro" << endl;
}

int main()
{
    int m = 0, x = 0 , y =0 , m2 = 0, p = 0, u = 0; 
    string b; 
    do 
    {
        cout << "Programa para calcular y posicionar en la consola" << endl; 
        cout << "Menu no.1 = 1" << endl;
        cout << "Menu no. 2 = 2" << endl;
        cout << "Ingresar el Menu a su elección>" << endl; cin >> m2; 
        switch (m2) 
        {
        case 1:
            do 
            {
                cout << "Ha ingresado en el primer Menu" << endl;
                cout << "Ingresar un numero para x:" << endl;  cin >> x;
                cout << "Ingresar un numero para y:" << endl; cin >> y;
                cout << "Ingresar una palabra:" << endl; cin >> b;
                mensaje();
                cout << "Ingresar la opción del Menu a ejecutar " << endl;  cin >> p;
                int us = Menu(m2, b, x, y, p);
                cout << "¿Desea repetir este menu?" << endl; cin >> u;
            } while (u == 1);

            break; 
        default :
            cout << "HUBO UN GRAVE ERROR" << endl; 
            break; 
        }
        cout << "Desea repetir todo este programa desde 0" << endl; cin >> m;
    } while (m == 1);
    cout << "Ha salido del ciclo pe" << endl; 
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
