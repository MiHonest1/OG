#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;
int Mass2[10];

int main() {

	setlocale(LC_ALL, "Russian");
	srand(time(0));
	cout << "\nÃåíåðèðóåìûé ìàññèâ: ";

	for (int i = 0; i < 10; i++) {
		Mass2[i] = -50 + rand() % 100;
		cout << Mass2[i] << " ";
	}
	cout << endl;
	
	getch();
	return 0;
}
