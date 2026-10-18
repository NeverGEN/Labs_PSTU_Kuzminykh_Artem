#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, ".UTF8");
	double sum = 0, a = 0; // Инициализация значений
	int n = 0;
	do
	{
		n++; // Увеличеие n на 1
		double fact = 1; 
		for (int i = 1; i <= n; i++) // Цикл для вычисления факториала
		{
			fact *= i;
		}
		a = fact / pow(n, n); // Значение элемента ряда
		if (a >= 0.0001)
		{
			sum += a; // Сумма переменныъ ряда
			cout << fixed << "Член ряда " << n << ": " << a << endl; // Вывод значений членов ряда
		}
	} while (a >= 0.0001); // Ограничение ряда
	cout << "Сумма членов ряда: " << sum << endl; // Вывод суммы ряда 
	return 0;
}