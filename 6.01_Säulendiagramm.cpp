#include <iostream>
using namespace std;

int main()
{
	int eingabe[5];
	int oberegrenze = 9; //groesser als 9 macht Fehler, da 10 und höher 2 Stellig oder mehr stellig sind

	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> eingabe[i];
		} while (eingabe[i] < 1 || eingabe[i] > oberegrenze );
	}

	for (int i = 0; i <= oberegrenze; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (j == 0 && i != oberegrenze)
			{
				cout << oberegrenze-i;
			}
			else if (j == 0 && i == oberegrenze)
			{
				cout << " ";
			}
			else if (i == oberegrenze)
			{
				cout << j;
			}
			else if (oberegrenze-i > eingabe[(j-1)])
			{
				cout << ".";
			}
			else if (oberegrenze-i == eingabe[(j - 1)])
			{
				cout << "*";
			}
			else
			{
				cout << "+";
			}
			
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}


//Variante alt, mit speichern und ausbgeben von einen 2ten Array, auch funktionsfähig
/*
int main()
{
	int eingabe[5];
	char saelendiagramm[6][10];

	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> eingabe[i];
		} while (eingabe[i] < 1 || eingabe[i] > 9);
	}

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (j == 0 && i != 9)
			{
				saelendiagramm[j][i] = 9 - i + '0';
			}
			else if (j == 0 && i == 9)
			{
				saelendiagramm[j][i] = ' ';
			}
			else if (i == 9)
			{
				saelendiagramm[j][i] = j + '0';
			}
			else if (9 - i > eingabe[(j - 1)])
			{
				saelendiagramm[j][i] = '.';
			}
			else if ((9 - i) == eingabe[(j - 1)])
			{
				saelendiagramm[j][i] = '*';
			}
			else
			{
				saelendiagramm[j][i] = '+';
			}

		}
	}

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << saelendiagramm[j][i];
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}
*/