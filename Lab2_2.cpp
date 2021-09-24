#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include <iostream>
#include <windows.h>

using namespace std;

int Mass[20], chis = 20;
int time2, time3;
FILE* ANTON;
int a;

//Сортировка Шелла по возрастанию
void shell(int* items, int count) {
    int i, j, gap, k;
    int x, a[5];

    a[0] = 9; a[1] = 5; a[2] = 3; a[3] = 2; a[4] = 1;

    for (k = 0; k < 5; k++) {
        gap = a[k];
        for (i = gap; i < count; ++i) {
            x = items[i];
            for (j = i - gap; (x < items[j]) && (j >= 0); j = j - gap) {
                items[j + gap] = items[j];
                items[j + gap] = x;
            }
        }
    }
}
//Быстрая сортировка
void qs(int* items, int left, int right) {
    int i, j;
    int x, y;

    i = left; j = right;
    x = items[(left + right) / 2];

    do {
        while ((items[i] < x) && (i < right)) i++;
        while ((x < items[j]) && (j > left)) j--;

        if (i <= j) {
            y = items[i];
            items[i] = items[j];
            items[j] = y;
            i++;
            j--;
        }
    } while (i <= j);

    if (left < j) qs(items, left, j);
    if (i < right) qs(items, i, right);
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "1)Рандомный " << endl;
    cout << "2)Возрастающий " << endl;
    cout << "3)Убывающий " << endl;
    cout << "4)1/2 возрастающий, 1/2 убывающий " << endl;
    cout << "5)1/2 убывающий, 1/2 возрастающий " << endl;
    cout << "Выберите тип массива: ";
    cin >> a;
    ANTON = fopen("file.txt", "r");
    fseek(ANTON, 62*(a-1), SEEK_SET);

    for (int i = 0; i < 20; i++) {
        fscanf(ANTON, "%d", &Mass[i]);
        cout << Mass[i] << " ";
    }
    shell(Mass, chis);
    cout << "\n";
    time2 = clock();
    cout << "Work time 1: ";
    cout.precision(20);//вывод доп знаков
    cout << (float)time2 / CLOCKS_PER_SEC << endl;

    qs(Mass, 0, chis - 1);
    time3 = clock();
    cout << "Work time 2: " << ((float)time3 - (float)time2) / CLOCKS_PER_SEC << endl;

    return 0;
}
