#include <iostream>
using namespace std;
int main() {
	int n, m, a, b, c;
	n = 4;
	m = 7;
	a = n++ * m;
	b = n++ < m;
	c = n-- > m++;
	cout << a << endl << b << endl << c << endl;
	return 0;
}