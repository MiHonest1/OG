#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

struct student {
	string Name = "-", Surname = "-", Group = "-";
	int Curse = 0, TicketNum = 0;
} StudentList[5], StudentText; // список студентов и критерии поиска

bool stopper = false;
int choose;

int main() {

	SetConsoleCP(1251);               //Подключение кириллицы 
	SetConsoleOutputCP(1251);         //Для считывания и вывода 

	for (int i = 0; i < 5; i++) { // цикл ввода студентов (заполнение каждого параметра структуры) (полностью заполняем массив)

		cout << "Введите имя: ";
		cin >> StudentList[i].Name;
		cout << "Введите фамилию: ";
		cin >> StudentList[i].Surname;
		cout << "Введите группу: ";
		cin >> StudentList[i].Group;
		cout << "Введите курс: ";
		cin >> StudentList[i].Curse;
		cout << "Введите номер студенческого билета: ";
		cin >> StudentList[i].TicketNum;
		cout << endl;

	}
	//Заполняем структуру StudentText
	cout << "Введите критерии поиска: " << endl;
	cout << "Введите имя: ";
	cin >> StudentText.Name;
	cout << "Введите фамилию: ";
	cin >> StudentText.Surname;
	cout << "Введите группу: ";
	cin >> StudentText.Group;
	cout << "Введите курс: ";
	cin >> StudentText.Curse;
	cout << "Введите номер студенческого билета: ";
	cin >> StudentText.TicketNum;
	cout << endl;

	for (int i = 0; i < 5; i++) {

		if (StudentText.Name == StudentList[i].Name) { stopper = true; }
		if (StudentText.Surname == StudentList[i].Surname) { stopper = true; }
		if (StudentText.Group == StudentList[i].Group) { stopper = true; }
		if (StudentText.Curse == StudentList[i].Curse) { stopper = true; }
		if (StudentText.TicketNum == StudentList[i].TicketNum) { stopper = true; }
		if (stopper == true) { cout << StudentList[i].Name << " " << StudentList[i].Surname << " " << StudentList[i].Group << " " << StudentList[i].Curse << " " << StudentList[i].TicketNum << endl; }
		stopper = false;
	}

	return 0;
}
