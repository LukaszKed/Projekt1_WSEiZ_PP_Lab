#include <iostream>

using namespace std;

float cosinus(float x, float e)
{
	float i = 1;
	float znak = 1;
	float silnia = 1;
	float potega = 1;
	float r = 1;
	float result = 1;

	while (r > e)
	{
		silnia = (silnia * i * (i + 1));
		potega = potega * x * x;
		r = potega / silnia;
		i = i + 2;

		znak = znak * (-1);
		result = result + (r * znak);

	}

	return result;
}

int main()
{
	float x;
	cout << "Wprowadz wartosc x z zakresu od 1 do -1: ";
	cin >> x;

	if (x > 1 || x < -1)
	{
		cout << "Podana wartoœæ jest z poza zakresu!" << endl;
		return 0;
	}

	float e;
	cout << "Wprowadz dokladnosc: ";
	cin >> e;

	if (e <= 0)
	{
		cout << "Nie mozna obliczyc cosinusa dla podanej dokladnosci!" << endl;
		return 0;
	}

	float cos;
	cos = cosinus(x, e);
	cout << "wynik dzialania =" << cos;

	return 0;
}