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
	cout << "������� ���:\n";
	string a;
	s.name = a;
	cin >> a;
	cout << "������� ������:\n";
	s.Group = arr[0];
	cin >> arr[0];
	cout << "������� ������ �� ����������\n";
	s.Math = arr[1];
	cin >> arr[1];
	cout << "������� ������ �� ������\n";
	s.Phys = arr[2];
	cin >> arr[2];
	cout << "������� ������ �� �������\n";
	s.Hist = arr[3];
	cin >> arr[3];
	cout << "������� ������ �� ����������������\n";
	s.Prog = arr[4];
	cin >> arr[4];
	if ((arr[0] >= 1) && (arr[0] <= 9))
	{
		if (((arr[0] && arr[1] && arr[2] && arr[3] && arr[4]) >= 2) && ((arr[0] && arr[1] && arr[2] && arr[3] && arr[4]) <= 5)) {

			for
				cout << "+------------ + ------ - +------ + ------ + ------ + ------ +\n";
			cout << "     Name     |  Group  |  Math  |  Phys  |  Hist  |  Prog  |";

		}
		else { cout << "�� ���������� ������"; return 0; }
	}
	else { cout << "����� ������ �� ����������"; return 0; }
}


/*
��������

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
		cout << "������� ��� ��������: ";
		cin >> name;
		cout << "������� ������ ��������: ";
		cin >> group;

		for (int i = 0; i < 4; i++)
		{
			cout << "������� ������ �� " << exams_arr[i];
		cin >> exams[exams_arr[i]];
		}
	cout << '\n';
	}

};
*/
