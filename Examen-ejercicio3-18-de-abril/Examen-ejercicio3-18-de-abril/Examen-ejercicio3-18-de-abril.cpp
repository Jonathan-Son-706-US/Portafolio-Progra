// Examen-ejercicio3-18-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>

using namespace std; 

void ang(double e, double p)
{
    double f = 0, f1 = 0;
    f = 180 - (e + p); 
    if (f < 0)
    {
        cout << "Eror de medidas" << endl; 
    }
    else
    {
        cout << "El angulo faltante es:" << endl; 
        cout << f << endl;
    }
}
void calc(double d, double c)
{
    double vuelto = 0;
    vuelto = (d - c); 
    if (vuelto <0)
    {
        cout << "LO LAMENTO PERO DEBE TENER EL DINERO SUFICIENTE" << endl; 
    }
    else
    {
        cout << "Su cambio es el siguiente:" << endl; 
        cout << vuelto << endl;
    }
}
void hipo(double a, double b )
{
    double hip = 0, hipf = 0; 

    hip = (pow(a, 2) + pow(b, 2)); 
     
    hipf = sqrt(hip);
    cout.precision(4);
    cout << "Resultado final" << endl;
    cout << hipf << endl; ;
}
void fact(int y)
{
    int facto = 1; 
    for (int i = 1; i <= y; i++)
    {
        facto *= i;
        cout << facto << endl; 
    }
}
void msj()
{
    cout << "Programa para evaluar diferentes operaciones" << endl; 
    cout << "El menu contiene lo siguiente:" << endl; 
    cout << "Opcion no.1 = Factorial de un numero" << endl; 
    cout << "Opcion no.2 = hipotenusa de un triangulo" << endl; 
    cout << "Opcion no. 3 = calcular vuelto" << endl;
    cout << "Opcion no. 4 = angulo faltante de un triangulo" << endl;
}
int main()
{
    int x = 0,  m = 0 ; 
    double y = 0, a = 0, b = 0, d = 0 ,c = 0, e = 0 , p = 0;
    do 
    {
        msj();
        cout << "Escribir la opcion a realizar" << endl;
        cin >> x; 

        switch (x)
        {
        case 1 :
            cout << "Factorial de un Numero" << endl;
            cout << "Escribir un numero" << endl; cin >> y; 
            fact(y);
            break;
        case 2:
            cout << "Hipotenusa de un triangulo" << endl;
            cout << "Ingresar un valor para el lado a:" << endl; cin >> a; 
            cout << "Ingresar un valor para el lado b:" << endl; cin >> b; 
            hipo(a, b );
            break;
        case 3:
            cout << "Calcular vuelto" << endl; 
            cout << "Ingresar la cantidad de dinero que posee" << endl;  cin >> d;
            cout << "Ingresar la cantidad gastada" << endl; cin >> c;
            calc(d, c);
            break; 
        case 4:
            cout << "El angulo faltante de un triagunlo" << endl;
            cout << "Ingresar el primer angulo" << endl; cin >> e; 
            cout << "Ingresar el segundo angulo" << endl; cin >> p; 
            ang(e, p);
            break; 
        default:
            cout << "ERROR DE SISTEMA" << endl; 
            break; 
        }
        cout << "Desea repetir el problema?" << endl; 
        cout << "SI == 1" <<endl ; 
        cout << "No == cualquier numero" << endl; 
        cin >> m; 
        system("cls");
    } while (m == 1);
    cout << "FIN DEL PROGRAMA" << endl; 
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
