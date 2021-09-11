#include <iostream>
#include <ctime>
using namespace std;

int Mass1[10], Max, Min;

int main() {

	setlocale(LC_ALL, "Russian");
	srand(time(0)); //по-насто€щему случайна€ генераци€ массива
	cout << "√енерируемый массив: "; // вывод 

	for (int i = 0; i < 10; i++) { // заполнение массива
		Mass1[i] = 1 + rand() % 100; //1+ это от 0 до 100
		cout << Mass1[i] << " ";//вывод массива

		if (i == 0) { Max = Mass1[i]; Min = Mass1[i]; }//когда i = 0, назначаем максу и мину значени€ 0-го элем-та массива
		else if (Max < Mass1[i]) { Max = Mass1[i]; }
		else if (Min > Mass1[i]) { Min = Mass1[i]; }
	}
	cout << "\nћаксимум: " << Max << endl;
	cout << "ћинимум: " << Min << endl;
	cout << "–азница между максимумом и минимумом: " << Max - Min << endl;
	return 0;
}
