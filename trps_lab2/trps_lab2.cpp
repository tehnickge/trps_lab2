// trps_lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "includes.h"
using namespace std;

int main()
{
	int c = 56;
	int b = 99;
	int* p2;
	int* p1 = &c;
	cout << "adress_x16: " << p1 << " data: " << *p1 << endl;
	p1 = &b;
	cout << "adress_x16: " << p1 << " data: " << *p1 << endl;
	p2 = &b;
	cout << "adress_x16: " << p2 << " data: " << *p2 << endl;

	cout << "enter size arr: ";
	int row;
	cin >> row;
	int* arr = new int[row];

	for (int i = 0; i < row; i++)
	{
		arr[i] = i * 23;
		cout << arr[i] << endl;
	}
	
	cout << *(arr + 9) << endl;
	arr = nullptr;
	delete[] arr;

	int** sthArr = new int* [row];
	for(int i = 0; i < row;)
	

} 
