#include <iostream>
using namespace std;
int main() 
{
	int n, m, a, b, c;
	cin >> n >> m; // Ввод значений m, n с клавиатуры
	a = n++ * m; // Значение a (Сначала m*n, затем n+1)
	b = n++ < m; // Значение b (Сначала n<m, затем n+1)
	c = n-- > m++; // Значение c (Сначала n>m, затем n-1 и m+1)
	cout << a << endl << b << endl << c << endl; // Вывод значений
	return 0;
}