#include "meal.h"

void Menu::meal::set_Taste(string taste)
{
	this->taste = taste;
}

string Menu::meal::get_Taste()
{
	return taste;
}

int Menu::meal::checking(int x)
{

	{
		bool success = true;
		while (success)
		{
			if (cin.peek() != '\n' || x <= 0)
			{
				cin.clear();
				cin.ignore(3333333, '\n');
				cout << "������, ��������� ����!" << endl;
				cin >> x;
			}
			else
				success = false;
		}
		return x;

	}
}

void Menu::meal::input()
{
	string tmp;
	int a;
	cout << "������� �������� �����: " << endl;
	getline(cin, tmp, '\n');
	set_Name(tmp);
	cout << "���(�������, ������� �����, �������� �����): " << endl;
	getline(cin, tmp, '\n');
	set_Type(tmp);
	cout << "������ �����: " << endl;
	getline(cin, tmp, '\n');
	set_Taste(tmp);
	cout << "����� �����(� �������): " << endl;
	cin >> a;
	a = checking(a);
	set_Capacity(a);
	cout << "����(� ������): " << endl;
	cin >> a;
	a = checking(a);
	set_Price(a);
	cin.ignore();
}

void Menu::meal::output()
{

	cout << "�������� �������: " <<
		get_Name() << "\n��� �������: " <<
		get_Type() << "\n������ �����:" <<
		get_Taste() << "\n�����(��): " <<
		get_Capacity() << "\n����(�����): " <<
		get_Price() << "\n������ �������: " <<
		get_Id()<< "\n"<<endl;

}

