#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a = 100;
	float b1 = 0.001;
	double b2 = 0.001;
	float c1, d1, e1, f1, g1, h1;
	double c2, d2, e2, f2, g2, h2;
	c1 = pow(a - b1, 4); // 1 скобка в числителе
	d1 = (pow(a, 4) + 4 * pow(a, 3) * b1); // 2 скобка в числителе
	e1 = c1 - d1; // Вычитание между скобками в числителе
	f1 = (6 * a * a * b1 * b1) - 4 * a * pow(b1, 3); // Вычитание в знаменателе
	g1 = f1 + pow(b1, 4); // Сложение в знаменателе
	h1 = e1 / g1; // Значение выражения
	cout << "float:" << h1 << endl; // Вывод значения выражения с float b
	cout << c1 << endl << d1 << endl << e1 << endl << f1 << endl << g1 << endl;
	c2 = pow(a - b2, 4); // 1 скобка в числителе
	d2 = (pow(a, 4) + 4 * pow(a, 3) * b2); // 2 скобка в числителе
	e2 = c2 - d2; // Вычитание между скобками в числителе
	f2 = (6 * a * a * b2 * b2) - 4 * a * pow(b2, 3); // Вычитание в знаменателе
	g2 = f2 + pow(b2, 4); // Сложение в знаменателе
	h2 = e2 / g2; // Значение выражения
	cout << "double:" << h2 << endl; // Вывод значения выражения с double b
	cout << c2 << endl << d2 << endl << e2 << endl << f2 << endl << g2 << endl;
	return 0;
}