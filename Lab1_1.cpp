#include <iostream>
#include <ctime>
using namespace std;

int Mass1[10], Max, Min;

int main() {

	setlocale(LC_ALL, "Russian");
	srand(time(0)); //��-���������� ��������� ��������� �������
	cout << "������������ ������: "; // ����� 

	for (int i = 0; i < 10; i++) { // ���������� �������
		Mass1[i] = 1 + rand() % 100; //1+ ��� �� 0 �� 100
		cout << Mass1[i] << " ";//����� �������

		if (i == 0) { Max = Mass1[i]; Min = Mass1[i]; }//����� i = 0, ��������� ����� � ���� �������� 0-�� ����-�� �������
		else if (Max < Mass1[i]) { Max = Mass1[i]; }
		else if (Min > Mass1[i]) { Min = Mass1[i]; }
	}
	cout << "\n��������: " << Max << endl;
	cout << "�������: " << Min << endl;
	cout << "������� ����� ���������� � ���������: " << Max - Min << endl;
	return 0;
}
