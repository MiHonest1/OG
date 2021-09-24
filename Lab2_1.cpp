#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string>
#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setlocale(LC_ALL, "Rus");
	clock_t start = clock(); // объявляем переменные для определения времени выполнения
	//clock() - это команда, возвращающая кол-во тиков за определенный промежуток программы
	int i = 0, j = 0, r;
	int a[21][21], b[21][21], c[21][21], elem_c;

	srand(time(NULL)); // инициализируем параметры генератора случайных чисел

	while (i < 20)
	{
		while (j < 20)
		{
			a[i][j] = 1 + rand() % 100; // заполняем массив случайными числами
			cout<<a[i][j]<<" ";
			j++;
		}
		i++;
		j = 0;
		cout<<endl;
	}

	i = 0; j = 0;
	cout<<endl;
	while (i < 20)
	{
		while (j < 20)
		{
			b[i][j] = 1 + rand() % 100; // заполняем массив случайными числами
			cout<<b[i][j]<<" ";
			j++;
		}
		i++;
		j = 0;
		cout<<endl;
	}
	//Перемножение матриц
	clock_t start2 = clock(); // объявляем переменные для определения времени выполнения
	cout<<endl;
	getch();
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			elem_c = 0;
			for (r = 0; r < 20; r++)
			{
				elem_c = elem_c + a[i][r] * b[r][j];
				c[i][j] = elem_c;
			}
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	clock_t end = clock();//вторая временная метка
	double seconds = (double)(end - start) / CLOCKS_PER_SEC;//изначально эта операция целочисленная, но с помощью (double) мы делаем её с плавающей точкой
	double seconds2 = (double)(end - start2) / CLOCKS_PER_SEC;
	printf("Время: %f сек\n", seconds);
	printf("Время(Умножение): %f сек\n", seconds2);
	getch();
	return(0);
}

