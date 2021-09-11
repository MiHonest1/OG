#include <iostream>
#include <ctime>
#include <malloc.h>
using namespace std;

int n, *p = NULL; // n - к-во эл-тов в массиве, p -указатель на первый элемент в выделяемой памяти 

int main() {

	setlocale(LC_ALL, "Russian");
	srand(time(0)); //по-настоящему случайная генерация массива

	cout << "\nВведите размерность массива: ";
	cin >> n; // ввод к-ва эл-тов в массиве
	cout << "Массив: ";
	p = (int*)calloc(n, 2); // выделение места под n элементов с рамерностью 2 байта(int - 2 байта)
	//присваиваем указателю адрес первого эл-та в памяти

	for (int i = 0; i < n; i++) {
		*(p + i) = 1 + rand() % 100;
		cout << *(p + i) << " ";
	}

	return 0;
}
