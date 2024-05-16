// ejercicio-cifrado-5-de-mayo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <string>
using namespace std ;

double pust(double num, double num2c)
{
    double final = num + num2c;
    cout << final * num2c;
    return final;
}

string pusus(const string& frase)
{
    string usp = frase;
    int longitud = usp.length();
    for (int i = 0; i < longitud; i++)
    {
        char casus = usp[i];
        if (casus == 'i' || casus == 'I')
        {
            usp[i] = '1';
        }
        else if (casus == 'e' || casus == 'E')
        {
            usp[i] = '3';
        }
        else if (casus == 'a' || casus == 'A')
        {
            usp[i] = '4';
        }
        else if (casus == 'o' || casus == 'O')
        {
            usp[i] = '0';
        }
        else if (casus == 'u' || casus == 'U')
        {
            usp[i] = '*';
        }
    }
    return usp;
}

void susT()
{
    cout << "Programa para evaluar diferentes opciones para las contraseñas" << endl;
    cout << "1 = Contraseña Numerica" << endl;
    cout << "2 = Contraseña de caracteres " << endl;
    cout << "Ingresar la opcion para " << endl;
}

int main()
{
    int x = 0, num = 0, num2c = 0, x1 = 0;
    string frase;
    bool sus = true;
    do
    {
        susT();
        cin >> x;
        cin.ignore(); // Limpiar el buffer antes de getline
        switch (x)
        {
        case 1:
        {
            cout << "Ingresar la contraseña" << endl;
            cin >> num;
            cout << "Ingresar un numero para cifrar la contraseña" << endl;
            cin >> num2c;
            cout << "La contra final es la siguiente:" << endl;
            double final = pust(num, num2c);
            cout << "\nFIN" << endl;
        }
        break;
        case 2:
        {
            cout << "Ingresar una frase" << endl;
            getline(cin, frase);

            cout << "La contraseña modificada al final quedo como:" << endl;
            string usp = pusus(frase);
            cout << usp << endl; 
            cout << "FIN" << endl;
        }
        break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        cout << "¿Desea repetir de nuevo el programa?" << endl;
        cout << "Si = 1" << endl;
        cout << "No = 2" << endl;
        cin >> x1;
        if (x1 == 1)
        {
            sus = true;
        }
        else if (x1 == 2)
        {
            sus = false;
        }
        else
        {
            cout << "ERROR " << endl;
            sus = false;
        }

    } while (sus == true);
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
