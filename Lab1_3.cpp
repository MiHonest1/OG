#include <iostream>
#include <ctime>
#include <malloc.h>
using namespace std;

int n, *p = NULL; // n - �-�� ��-��� � �������, p -��������� �� ������ ������� � ���������� ������ 

int main() {

	setlocale(LC_ALL, "Russian");
	srand(time(0)); //��-���������� ��������� ��������� �������

	cout << "\n������� ����������� �������: ";
	cin >> n; // ���� �-�� ��-��� � �������
	cout << "������: ";
	p = (int*)calloc(n, 2); // ��������� ����� ��� n ��������� � ����������� 2 �����(int - 2 �����)
	//����������� ��������� ����� ������� ��-�� � ������

	for (int i = 0; i < n; i++) {
		*(p + i) = 1 + rand() % 100;
		cout << *(p + i) << " ";
	}

	return 0;
}
