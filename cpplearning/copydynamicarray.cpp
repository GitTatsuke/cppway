#include <iostream>
using namespace std;


void FillArray(int* const arr, const int size) 
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size) 
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}


void main() 
{
	const int SIZE = 10;
	int* firstArray = new int[SIZE];
	int* secondArray = new int[SIZE];

	FillArray(firstArray, SIZE);
	FillArray(secondArray, SIZE);

	cout << "First array " << endl;
	ShowArray(firstArray, SIZE);
	cout << "Second array " << endl;
	ShowArray(secondArray, SIZE);

	delete[]firstArray;
	firstArray = new int[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		firstArray[i] = secondArray[i];
	}
	cout << "======================" << endl;
	cout << "First array " << endl;
	ShowArray(firstArray, SIZE);
	cout << "Second array " << endl;
	ShowArray(secondArray, SIZE);

	delete[]firstArray;
	delete[]secondArray;
}