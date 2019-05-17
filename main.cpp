#include <iostream>
#include "Header.h"

using namespace std;


int main()
{

	setlocale(LC_ALL, "Russian");

	void(*pointer)();

	int choice;

	cout << "Что вы хотите сделать со своим массивом? " << endl;
	cout << "Нажмите единицу, если хотите сложить все элементы " << endl;
	cout << "Нажмите ноль, если хотите перемножить все элементы " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1: pointer = Summ;
		pointer();
		break;
	case 0: pointer = Umnog;
		pointer();
		break;
	}
	system("pause");
}
