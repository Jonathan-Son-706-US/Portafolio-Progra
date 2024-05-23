// Parcial-23-05-2024.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void tablilladeltotito(char marquillos[3][3])
{
	for (int T = 0; T < 3; T++)
	{
		cout << "           |";
		for (int P = 0; P < 3; P++)
		{

			cout << " " << marquillos[T][P] << " ";
			if (P < 2)
			{
				cout << "|";
			}
		}
		cout << "|" << endl;
		if (T < 2)

		{

			cout << "           |---|---|---|" << endl;
		}
	}
}

void espaciadodetotito(char marquillos[3][3]) {
	for (int e = 0; e < 3; e++) {
		for (int pace = 0; pace < 3; pace++) {
			marquillos[e][pace] = ' ';
		}
	}
}
int Dadorandom()
{
	return rand() % 6 + 1;

}

void pen(int& x1, int& x2)
{
	cout << "elige la fila por donde va a colocar su ficha tenga en cuenta lo siguiente: (1-3)" << endl;
	cin >> x1;
	cout << "Elige la columna por donde va a colocar su ficha tenga en cuenta lo siguiente: (1-3)" << endl;
	cin >> x2;
}
bool GANASUSSUS(string j1, string j2, char marquillos[3][3], char jugador)
{
	for (int h = 0; h < 3; h++)
	{
		if (marquillos[h][0] == jugador && marquillos[h][1] == jugador && marquillos[h][2] == jugador)
		{
			cout << "FELICIDADES AMONGUS GANAMOS" << " " << (jugador == 'X' ? j1 : j2) << " has ganado sus" << endl;
			return true;
		}

	}
	for (int j = 0; j < 3; j++)
	{
		if (marquillos[0][j] == jugador && marquillos[1][j] == jugador && marquillos[2][j] == jugador)
		{
			cout << "FELICIDADES AMONGUS JEFESOTE" << " " << (jugador == 'X' ? j1 : j2) << "Has ganado sus" << endl;
			return true;
		}
	}
	if ((marquillos[0][0] == jugador && marquillos[1][1] == jugador && marquillos[2][2] == jugador) ||
		(marquillos[0][2] == jugador && marquillos[1][1] == jugador && marquillos[2][0] == jugador))
	{
		cout << "FELICIDADES JEFESOTE" << ":" << (jugador == 'X' ? j1 : j2) << " " << "Has ganado sus" << endl;
		return true;
	}
	return false; 
	
}
bool empatedepana(char marquillos[3][3])
{
	for (int s = 0; s < 3; s++)
	{
		for (int m = 0; m < 3; m++)
		{
			if (marquillos[s][m] == ' ')
			{
				return false; 
			}
		}
	}
	cout << "EMPATE MIS BELLAKOS" << endl; 
	return true; 
}


void lanzada(string j1, string j2, char marquillos[3][3], bool &cambio, char &fichaUSSSS, bool &juegoFINISH)
{
	
	int x1, x2; 
	bool saltoH = false; 
	while (!saltoH)
	{
		cout << "Es el turno del papu llamado: " << endl; cout << (cambio ? j1 : j2) << endl; cout << "su simbolo predeterminado por el juego es:" << "(" << fichaUSSSS << ")" << endl;
		pen(x1, x2); 
		if (x1 < 1 || x1 > 3 || x2 < 1 || x2  > 3 || marquillos[x1 - 1][x2 - 1] != ' ')
		{
			cout << "La casilla no esta disponible jefesito ubiquese por favor y no tome alcohol que hace daño y envenena" << endl;

		}
		else
		{
			saltoH = true; 
		}
	}
		
	
	marquillos[x1 - 1][x2 - 1] = fichaUSSSS;
	tablilladeltotito(marquillos);
	if (GANASUSSUS(j1, j2, marquillos, fichaUSSSS))
	{
		juegoFINISH = true;
			return;
	}
	if (empatedepana(marquillos))
	{
		juegoFINISH = true; 
		return; 
	}
	cambio = !cambio;
	fichaUSSSS = cambio ? 'X' : 'O';

}


void inicioDELJUEGOUS(string &j1, string &j2)
{
	
	cout << "Programa para simular un juego de un totito " << endl;
	cout << "Ingrese el nombre para el jugador No.1" << endl;
	cin >> j1;
	cout << "Ingrese un nombre para el jugador No.2" << endl;
	cin >> j2; 

}
int main()

{
	srand(time(0));
	string respuesta, j1, j2;
	char marquillos[3][3];
	char fichaUSSSS; 
	bool repeteicion = false; 
	bool cambio ; 
		do 
		{
			espaciadodetotito(marquillos);
			inicioDELJUEGOUS(j1, j2);
			tablilladeltotito(marquillos);
			int finaldeltiro = Dadorandom();
			cout << "El dado se le a otorgado el valor:" << finaldeltiro <<endl; 
			switch (finaldeltiro % 2)
			{
			case 0 :
				cout << "Empieza el papu No.1" << endl;  cout<< j1 << "(X)" << endl;
				fichaUSSSS = 'X'; 
				cambio = true; 
				break; 
			case 1:
				cout << "Empieza el papu No.2" << endl; cout << j2 << "(O)" << endl;
				fichaUSSSS = 'O';
				cambio = false;
				break;
			default :
				cout << "Empieza el papu No.1" << endl; cout << j1 << "(X)" << endl;
				fichaUSSSS = 'X';
				cambio = true;
				break; 
			}
			bool juegoFINISH = false; 
			for (int d = 0; d < 9 &&!juegoFINISH; d++)
			{
				lanzada(j1, j2, marquillos, cambio, fichaUSSSS, juegoFINISH); 
			}
		
		cout << "Desea repetir de nuevo el videojuego" << endl; 
		cin >> respuesta; 

		if (respuesta == "si" || respuesta == "Si" || respuesta == "sI"|| respuesta == "SI")
		{
			repeteicion = true;
		}
		else if (respuesta == "No" || respuesta == "no" || respuesta == "nO"|| respuesta == "NO")
		{
			repeteicion ; 
		}
		
		
	} while (repeteicion == true);

	cout << "FIn del juego de totito ya hasta acá cabrones sus" << endl; 
	
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
