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
	start:
	cout << "Введите номер задания (№1, №2 или №3): ";
	cin >> n;

	if (n == 1)
	{
		cout << "Написать программу, которая заменяет все нули в двухмерном массиве на -1." << endl;
		int a[5][5];

		cout << endl;

		cout << "Изначальный массив:" << endl;

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

		cout << "Замена нулей на -1:" << endl;

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
		int b[2][6];
		int k = 2;

		cout << endl;

		cout << "Изначальный массив:" << endl;

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				a[i][j] = rand() % 10;
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;

		cout << "Массив со сдвигом на два разряда:" << endl;

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if ((j + k) < 6)
				{
					b[i][j + k] = a[i][j];
				}
				else
				{
					b[i][abs(6 - j - k)] = a[i][j];
				}
			}
		}		

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				cout << b[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;
	}

	else if (n == 3)
	{
		cout << "Создайте двухмерный массив. Заполните его случайными числами и покажите на экран. Выполните сортировку элементов в каждой строке массива. Полученный результат покажите на экран." << endl;

		cout << endl;

		int a[5][5];

		cout << "Изначальный массив:" << endl;

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

		cout << "Отсортированный массив:" << endl;

		for (int i = 0; i < 5; i++)
		{
			for (int pass = 0; pass < 5; pass++)
			{
				for (int j = 0; j < 5 - 1; j++)
				{
					if (a[i][j] > a[i][j + 1])
					{
						swap(a[i][j], a[i][j + 1]);
					}

				}
			}
		}
		

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;
	}
	goto start;
	system("pause");
	return 0;
}