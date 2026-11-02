#include <iostream>
#include <cmath>
#include <clocale>
#include <iomanip>
using namespace std;
int main()
{
	cout << fixed << setprecision(6); // Кол-во цифр в мантиссе
	setlocale(LC_ALL,".UTF8"); 
	double a = 0.1, eps = 0.0001, c;
	int k = 10, b = 1, n=10;
	c = (b - a) / k; // Шаг x
	cout << setw(5) << "x" << setw(18) << "Sum(n=10)" << setw(13) << "Sum(eps)" << setw(32) << "Точное значение" << endl; // Создание столбцов для значений
	for (int i = 1;i <= k;++i)
	{
		double x = a + i * c, s1 = 1; // Вычисление x
		double nf;
		for (int j = 1;j <= n;++j) // Сумма с n = 10
		{
			nf = 1;
			for (int j1 = 1;j1 <= j;++j1) // Факториал n
				nf *= j1;
			s1 += ((2 * j + 1) / nf) * pow(x, 2 * j); // Подсчет суммы
		}
		int m = 1;
		double s2 = 1, j = 1, mf;
		while (j > eps) // Сумма с определением точности
		{
			mf = 1;
			for (int j1 = 1;j1 <= m;j1++) // Факториал n
				mf *= j1;
			j = ((2 * m + 1) / mf) * pow(x, 2 * m); // Знавчение элемента
			s2 += j; // Подсчет суммы
			++m;
		}
		double y;
		y = (1 + 2 * pow(x, 2)) * (exp(x * x)); // Вычисление точного значения
		cout << setw(6) << x << setw(14) << s1 << setw(14) << s2 << setw(14) << y << endl; // Вывод значений x, s1, s2, y по столбцам
	}
	return 0;
}