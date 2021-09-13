#include <iostream>
#include <ctime>
#include <malloc.h>
#include <conio.h>
using namespace std;

int n, **p = NULL; // n - к-во эл-тов в массиве, p -указатель на первый элемент в выделяемой памяти 

int main() {

	setlocale(LC_ALL, "Russian");
	srand(time(0)); //по-настоящему случайная генерация массива

	cout << "\nВведите размерность массива: ";
	cin >> n; // ввод к-ва эл-тов в массиве
	cout << "Массив: \n";
	p = (int**)calloc(n, 3);
	for(int i = 0; i < n; i++){p[i] = (int*)calloc(n, 3);} // выделение места под n элементов с рамерностью 2 байта(int - 2 байта)
	//присваиваем указателю адрес первого эл-та в памяти
	cout.precision(3*n);
	for (int i = 0; i < n; i++) {
      for(int m = 0; m < n; m++){
		p[i][m] = 1 + rand() % 100;
		cout << p[i][m] << " ";
	  }
	  cout<<endl;
	}
	getch();
	return 0;
}
