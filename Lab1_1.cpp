#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

int Mass1[10], Max, Min;

int main() {

	setlocale(LC_ALL, "Russian");
	srand(time(0)); //ïî-íàñòîÿùåìó ñëó÷àéíàÿ ãåíåðàöèÿ ìàññèâà
	cout << "Ãåíåðèðóåìûé ìàññèâ: "; // âûâîä 

	for (int i = 0; i < 10; i++) { // çàïîëíåíèå ìàññèâà
		Mass1[i] = 1 + rand() % 100; //1+ ýòî îò 0 äî 100
		cout << Mass1[i] << " ";//âûâîä ìàññèâà

		if (i == 0) { Max = Mass1[i]; Min = Mass1[i]; }//êîãäà i = 0, íàçíà÷àåì ìàêñó è ìèíó çíà÷åíèÿ 0-ãî ýëåì-òà ìàññèâà
		else if (Max < Mass1[i]) { Max = Mass1[i]; }
		else if (Min > Mass1[i]) { Min = Mass1[i]; }
	}
	cout << "\nÌàêñèìóì: " << Max << endl;
	cout << "Ìèíèìóì: " << Min << endl;
	cout << "Ðàçíèöà ìåæäó ìàêñèìóìîì è ìèíèìóìîì: " << Max - Min << endl;
	getch();
	return 0;
}
