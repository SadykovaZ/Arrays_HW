#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));


	int n = 0;
	cout << "Введите номер задания: ";
	cin >> n;

	if (n == 1)
	{
		cout << "Написать программу, которая заменяет все нули в двухмерном массиве на -1." << endl;
		int a[5][5];

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				a[i][j] = rand() % 10;

				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (a[i][j] == 0)
				{
					a[i][j] = -1;
				}

				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;
	}

	else if (n == 2)
	{
		cout << "Создайте двухмерный массив. Заполните его случайными числами и покажите на экран. Пользователь выбирает количество сдвигов и положение (влево, вправо, вверх, вниз). Выполнить сдвиг массива и показать на экран полученный результат. " << endl;

		int a[2][6];

		int move = 0;
		int choice = 0;
		int b[2][6];
		int k = 2;

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				a[i][j] = rand() % 10;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (((i + k) < 2) && ((j + k) < 6))
				{
					b[i + k][j + k] = a[i][j];
				}
				else
				{
					b[abs(2 - i - k)][abs(6 - j - k)] = a[i][j];
				}
			}
		}

		cout << endl;

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}




	system("pause");
	return 0;

}