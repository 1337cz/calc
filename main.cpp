#include <iostream>
#include <windows.h> //WinAPI
#include <math.h>

using namespace std;

float x, y;
int wybor;

int main()
{
	system("COLOR 0C");

	cout << "Podaj liczbe x (uzywana w pierwiastkach):";
	cin >> x;
	cout << "Podaj liczbe y:";
	cin >> y;

	cout << '\n';
	cout << "WYBIERZ TYP DZIALANIA!" << '\n'; //poczatek menu
	cout << "---------------------------" << '\n';
	cout << "1. Dodawanie" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Mnozenie" << endl;
	cout << "4. Dzielenie" << endl; 
	cout << "5. Potega" << endl;
	cout << "6. Pierwiastki" << endl;

	cout << "Wybierz: ";
	cin >> wybor;

	switch (wybor) //funkcja switch do szybkiego przelaczania miedzy funkcjami
	{
	case 1: //opcja 1
		cout << "Suma: " << x + y;
		system("pause");
		break;

	case 2: //opcja 2
		cout << "Roznica: " << x - y;
		system("pause");
		break;

	case 3: //opcja 3
		cout << "Iloczyn: " << x * y;
		system("pause");
		break;

	case 4: //opcja 4
		cout << "Iloraz: " << x / y;
		system("pause");
		break;

	case 5:
		cout << "Wynik to " << pow(x, y) << endl;
		system("pause");
		break;

	case 6:
		cout << "Wynik wynosi:" << sqrt(x) << endl;
		system("pause");
		break;

	default: //gdy nie ma innego wyboru niz wyzej wymienione
		cout << "Nie ma takiej opcji!";
	}

	return 0;
}

