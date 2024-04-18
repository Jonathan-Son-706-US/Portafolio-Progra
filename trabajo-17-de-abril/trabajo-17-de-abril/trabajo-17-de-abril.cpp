// trabajo-17-de-abril.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
using namespace std;
void GOTOXY(int x,  int y )
{
    COORD coord{};
    coord.X = x; 
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
void menu22()
{
   int coordx , coordy , e = 0;
    cout << "Menu No.2" << endl; 
    cout << "Ingresar la opción a realizar:" << endl; cin >> e; 
    switch (e)
    {
    case 1:
        cout << "Impresión del caracter asch en coordenadas (30,30)" << endl; 
        coordx = 30;
        coordy = 30;
        GOTOXY(coordx, coordy); 
        cout << "¥ Æ" << endl; 
        break; 
    case 2:
        cout << "Saludar a un compañero" << endl; 
        cout << "Ingresar un valor para x:" << endl; cin >> coordx; 
        cout << "Ingresar un valor para y" << endl; cin >> coordy; 
        GOTOXY(coordx, coordy); 
        cout << "UN SALUDO A ABNER US" << endl; 
        break; 
    default:
        cout << "ERROR GRAVE PA" << endl; 
        break; 
    }
}
void menu11()
{
    int x = 0, y = 0, e = 0 , coordx , coordy ,  g = 0 ; 
    string b; 
    cout << "Menu 1" << endl; 
    cout << "Ingresar la opción a realizar" << endl; cin >> e; 
    switch (e)
    {
    case 1:
        cout << "A continuación se procederá a imprimir un:hola mundo en (x,y) coordenadas" << endl; 
        cout << "Ingresar coordenada en x" << endl;  cin >> coordx; 
        cout << "Ingresar una coordena en y" << endl;  cin >> coordy;  
        GOTOXY(coordx, coordy);
        cout << "Hola gente de youtube u visualpapus" << endl; 
        break; 
    case 2:
        cout << "A continuación se procederá a ingresar un numero en el centro" << endl; 
        cout << "Ingresar un número random" << endl; cin >> g; 
        cout << "Imprimir las siguiente coordenadas (0,0) " << endl; 
        GOTOXY(0, 0);
        cout << g <<endl; 
        break; 
    case 3:
        cout << "A continuación se procederá a imprimir una palabra x10 veces" << endl; 
        cout << "Ingresar una palabra random:" << endl; cin >> b; 
        for (int i = 0; i <= 10; i++)
        {
            coordx = (5 + (6*i)) * 2; 
            coordy = (8 + (9*i)) * 3; 

            GOTOXY(coordx, coordy);
            cout << b <<endl; 

        }
        break; 
    default :
        cout << "ERROR PA" << endl; 
        break; 
    }

}
void mensaje2()
{
    cout << "Ha escogido el menu 2" << endl; 
    cout << "El Menu 2 contiene:" << endl;
    cout << "Opción 1" << endl;  cout << "Dirigirse a las coordenadas (30,30) y se imprimira el codigo ASCII (16,32)" << endl;
    cout << "Opción 2" << endl;  cout << "Saludar un compañero" << endl;
   
}
void mensaje1() 
{
    cout << "Programa para inicializar 2 diferentes " << endl;
    cout << "Se le presentaran 2 menus diferentes por favor elegir sabiamente cuales de las dos le parece a su gusto" << endl;
    cout << "Menu 1" << endl; 
    cout << "Menu 2" << endl;
}
void mensaje()
{
    cout << "El Menu 1 contiene:" << endl; 
    cout << "Opción 1" << endl;  cout << "Ingresar 2 coordenadas para imprimir un hola mundo" <<endl ;
    cout << "Opción 2" << endl;  cout << "Ingresar un numero e imprimirlo en el centro" << endl;
    cout << "Opción 3" << endl;  cout << "Ingresar una palabra para imprimirla 10 veces en distintas posiciones " <<endl ;
}
int main()
{
    int m = 0, p = 0, m2 = 0 ; 
    do {
        mensaje1();
        cout << "Ingresar el menu a ejecutar" << endl;  cin >> m; 
        do 
        {
           switch (m)
           {
            case 1:
                mensaje();
                menu11();
                cout << "FIN" << endl;
                break;
            case 2:
                mensaje2();
                menu22();
                cout << "FIN" << endl; 
                break;
            default:
                cout << "ERROR GRAVESOTE DE DOTA" << endl;
                break; 
           }
           cout << "Desea regresar al menu principal Si= 2 || No = 3 numero" << endl; cin >> m2; 

        } while (m2 == 3);
        cout << "Desea repetir de nuevo el menu Si = 4 || No = 2" << endl;  cin >> p; 
    } while (p == 4); 
    cout << "FIN DEL PROGRAMA" << endl; 
    /*INTENTE LO MAS QUE PUDE :<  SE MEZCLAVA MUCHO EL MENU PERO AL FINAL QUEDO ASI*/
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
