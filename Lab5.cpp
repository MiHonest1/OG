#include <time.h>
#include <malloc.h>
#include <locale.h>
#include <iostream>
#include <queue>
#include <ctime>
#include <conio.h>

using namespace std;

int i, num = 0;
int* vis = NULL, n, ** p = NULL;
int pogr = 0;

void BFS(int** p, int* vis, int n, int num) {
	queue <int> q;
	int i;
	
	q.push(num);
	vis[num] = 1;
	while (!q.empty()) {
		num = q.front();
		q.pop();
		cout << num + 1 << " ";
		for (i = 0; i < n; i++) {
			if (vis[i] == 0 && p[num][i] == 1) {
				q.push(i);
				vis[i] = 1;
			}
		}
	}
}

int main() {

	setlocale(LC_ALL, "Rus");
	srand(time(0)); //по-настоящему случайная генерация массива

	cout << "Введите размер матрицы: ";
	cin >> n;
	cout << "Матрица: \n";


	vis = (int*)calloc(n, 3);
	p = (int**)calloc(n, 3);

	for (int i = 0; i < n; i++) {
		p[i] = (int*)calloc(n, 3);
	}
	cout.precision(3 * n);

	vis = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		vis[i] = 0;

	}

	for (int i = 0; i < n; i++) {             //Генерация матрицы смежности
		for (int m = 0 + pogr; m < n; m++) {
			p[i][m] = 0 + rand() % 2;
			p[m][i] = p[i][m];
			p[i][i] = 0;
		}
		pogr++;
	}

	for (int i = 0; i < n; i++) {            //Отрисовка матрицы смежности
		for (int m = 0; m < n; m++) { cout << p[i][m] << " "; }
		cout << endl;
	}

	cout << "Вершины: " << endl;

	BFS(p, vis, n, num);

	return 0;

}