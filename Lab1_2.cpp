#include <iostream>

using namespace std;
int Mass2[10];

int main() {

	setlocale(LC_ALL, "Russian");
	srand(time(0));
	cout << "\n������������ ������: ";

	for (int i = 0; i < 10; i++) {
		Mass2[i] = 1 + rand() % 100;
		cout << Mass2[i] << " ";
	}
	cout << endl;

	return 0;
}
