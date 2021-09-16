#include <iostream>
#include <time.h>

using namespace std;

int Mass[20] = { 40,23,3,6,84,12,1,78,79,34,23,14,45,76,78,98,73,12,31,26 }, chis = 20;
int time2, time3;
int Mass1[20] = { 40,23,3,6,84,12,1,78,79,34,23,14,45,76,78,98,73,12,31,26 };

void shell(int* items, int count) {
    int i, j, gap, k;
    int x, a[5];

    a[0] = 9; a[1] = 5; a[2] = 3; a[3] = 2; a[4] = 1;

    for (k = 0; k < 5; k++) {
        gap = a[k];
        for (i = gap; i < count; ++i) {
            x = items[i];
            //cout << "@@@" << endl;
            for (j = i - gap; (x < items[j]) && (j >= 0); j = j - gap) {
                items[j + gap] = items[j];
                items[j + gap] = x;
            }
        }
    }
}

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
    shell(Mass, chis);
    time2 = clock();
    cout << "Work time 1: ";
    cout.precision(20);
    cout << (float)time2 / CLOCKS_PER_SEC << endl;

    qs(Mass1, 0, chis - 1);
    time3 = clock();
    cout << "Work time 2: " << ((float)time3 - (float)time2) / CLOCKS_PER_SEC << endl;

    return 0;
}
