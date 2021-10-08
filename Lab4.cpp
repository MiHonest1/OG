#include<iostream>
#include<ctime>
#include<malloc.h>
#include<conio.h>

using namespace std;

int* vis = NULL, n, ** p = NULL;
int pogrx = 0;


void DFS(int num) {

	cout << num + 1 << " "; // вывод вершин
	vis[num] = 1;//вершина пройдена
	for (int i = 0; i <= n; i++) {
		if (p[num][i] == 1 && vis[i] == 0) { // проверка на посещение ранее
			DFS(i);
		}
	}
}

int main() {

	setlocale(LC_ALL, "Rus");
	srand(time(0)); //по-настоящему случайная генерация массива
	cout << "Пункты 1, 2:\n";
	cout << "Введите размер матрицы: ";
	cin >> n;
	cout << "Массив: \n";

	vis = (int*)calloc(n, 3);
	p = (int**)calloc(n, 3);

	for (int i = 0; i < n; i++) {
		p[i] = (int*)calloc(n, 3);
	}
	cout.precision(3 * n);

	for (int i = 0; i < n; i++) {
		for (int m = 0 + pogrx; m < n; m++) {
			p[i][m] = 0 + rand() % 2;
			p[m][i] = p[i][m];
			p[i][i] = 0;
		}
		pogrx++;
	}

	for (int i = 0; i < n; i++) {
		for (int m = 0; m < n; m++) {
			cout << p[i][m] << " ";
		}
		cout << endl;
	}

	cout << "Вершины: " << endl;

	DFS(0);
	DFS(n - 1);

	return 0;
}



