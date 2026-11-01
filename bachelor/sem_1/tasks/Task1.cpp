#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, ".UTF8");
	int arr[2][5] = { {52,20,-198,79,-13},{40,27,103,69,99} }; //Задаются элементы массива из 2 строк
	int summ = 0;
	for (int i = 0; i < 2; ++i) //Цикл для перехода к следующей строке
		for (int j = 0; j < 5; ++j) //Вложенный цикл для подсчета суммы всех элементов из 2 строк
			summ += arr[i][j];
	cout << "Сумма элементов массива: " << summ << endl;
	return 0;
}