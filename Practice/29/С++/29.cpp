#include <iostream>
#include <vector>
struct Student
{
	string name;
	int Group;
	int Math;
	int Phys;
	int Hist;
	int Prog;
};
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	vector<int> students;
	Student s;
	vector<int> arr;
	cout << "Введите имя:\n";
	string a;
	s.name = a;
	cin >> a;
	cout << "Введите группу:\n";
	s.Group = arr[0];
	cin >> arr[0];
	cout << "Введите оценку по математике\n";
	s.Math = arr[1];
	cin >> arr[1];
	cout << "Введите оценку по физике\n";
	s.Phys = arr[2];
	cin >> arr[2];
	cout << "Введите оценку по истории\n";
	s.Hist = arr[3];
	cin >> arr[3];
	cout << "Введите оценку по программированию\n";
	s.Prog = arr[4];
	cin >> arr[4];
	if ((arr[0] >= 1) && (arr[0] <= 9))
	{
		if (((arr[0] && arr[1] && arr[2] && arr[3] && arr[4]) >= 2) && ((arr[0] && arr[1] && arr[2] && arr[3] && arr[4]) <= 5)) {

			for
				cout << "+------------ + ------ - +------ + ------ + ------ + ------ +\n";
			cout << "     Name     |  Group  |  Math  |  Phys  |  Hist  |  Prog  |";

		}
		else { cout << "Не корректная оценка"; return 0; }
	}
	else { cout << "Такой группы не существует"; return 0; }
}


/*
набросок

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>

std::string exams_arr[] = { "math", "phys", "hist", "prog" };

struct Student
{
	std::string name;
	int group;
	map<std::string, int> exams;
	map<std::string, int>::iterator examsInit;
	int z;

	void init()
	{
		cout << "Введите имя студента: ";
		cin >> name;
		cout << "Введите группу студента: ";
		cin >> group;

		for (int i = 0; i < 4; i++)
		{
			cout << "Введите оценку по " << exams_arr[i];
		cin >> exams[exams_arr[i]];
		}
	cout << '\n';
	}

};
*/
