#include <iostream>
#include "Header.h"

using namespace std;


int main()
{

	setlocale(LC_ALL, "Russian");

	void(*pointer)();

	int choice;

	cout << "��� �� ������ ������� �� ����� ��������? " << endl;
	cout << "������� �������, ���� ������ ������� ��� �������� " << endl;
	cout << "������� ����, ���� ������ ����������� ��� �������� " << endl;
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
