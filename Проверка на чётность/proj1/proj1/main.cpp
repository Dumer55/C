#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int var;
	cout << "¬ведите число дл€ проверки на чЄтность: ";
	cin >> var;

	if (var % 2 == 0)
	{
		cout << "„исло " << var << " чЄтное" << endl;
	}
	else
	{
		cout << "„исло " << var << " нечЄтное" << endl;
	}

}