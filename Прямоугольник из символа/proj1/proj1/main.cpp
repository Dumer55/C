#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int heigth, width;
	cout <<  "¬ведите высоту пр€моугольника" << endl;
	cin >> heigth;

	cout << "¬ведите ширину пр€моугольника" << endl;
	cin >> width;

	for (int j = 0; j < heigth; j++)
	{
		for (int i = 0; i < width; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}