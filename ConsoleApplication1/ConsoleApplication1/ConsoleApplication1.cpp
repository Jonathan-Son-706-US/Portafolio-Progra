#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texto;
    string palabra1;
    string palabra2;
    int cont1 = 0;
    char letra;
    int cont2 = 0;
    int cont3 = 0;
    int conte = 0;
    cout << "ingrese un texto" << endl;
    getline(cin, texto);
    cin >> palabra1;
    cin >> palabra2;
    for (int x = 0; x <= palabra1.length(); x++)
    {
        palabra = palabra[x];
        cont1++;
    }
    for (int x = 0; x <= palabra2.length(); x++)
    {

        cont2++;
    }
    for (int x = 0; x <= texto.length(); x++)
    {
        cont3++;
    }
    if (cont3 < cont2 && cont3 < cont1)
    {
        cout << "insuficiente texto" << endl;
    }
    if (palabra = 32)
    {
        conte++;
    }


    return 0;
}
