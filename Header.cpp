#include "Header.h"
#include<iostream>


using namespace std;

void Summ()
{
	int b = 0;
	cout << "¬ведите размерность массива: ";
	int razmer;
	cin >> razmer;
	int *arr = new int[razmer];
	cout << "¬ведите элементы массива: ";
	for (int i = 0; i < razmer; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < razmer; i++)
	{
		b += arr[i];
	}

	
		cout << b << " ";
}

void Umnog()
{
	int b = 1;
	cout << "¬ведите размерность второго массива: ";
	int razmer2;
	cin >> razmer2;
	int *arr = new int[razmer2];
	cout << "¬ведите элементы второго массива: ";
	for (int i = 0; i < razmer2; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < razmer2; i++)
	{
		b *= arr[i];

	}
	
	
		cout << b << " ";
	
}
