#include <iostream>
#include <ctime>
using namespace std;

int Mass3[10][10], x = 10, y = 10, Sum = 0;// двумерный массив 10*10

int main() {

    setlocale(LC_ALL, "Russian");
    srand(time(0));


    for (int i = 0; i < x; i++) {//движение по оси х
        for (int h = 0; h < y; h++) { // движение по оси у
            Mass3[i][h] = 1 + rand() % 100; // проходим по всему у -ку и прибавляем к х единицу, а потом заново заполняем у
        }
    }

    for (int i = 0; i < x; i++) {//проход по Х
        Sum = 0;
        cout << "Строка " << i << ": ";
        for (int h = 0; h < y; h++) { // проход по У
            Sum += Mass3[i][h]; // прибавление к сум каждого эл-та в строке
            cout << Mass3[i][h] << " "; // отпечатываем элементы строки
        }
        cout << endl;//переход на новую строку в консоли
        cout << "Сумма строки " << i << ": " << Sum << endl;
    }

    return 0;
}
