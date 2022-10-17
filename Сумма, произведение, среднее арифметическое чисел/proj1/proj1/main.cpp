#include <iostream>



using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b, c;

	cout << "Введите 3 числа:" << endl;
	cin >> a >> b >> c;

	cout << "Сумма трёх чисел = " << a + b + c << endl;

	cout << "Произведение трёх чисел = " << a * b * c << endl;

	cout << "Среднее арифметическое 3х чисел = " <<(double)(a + b + c) / 3<< endl;

}