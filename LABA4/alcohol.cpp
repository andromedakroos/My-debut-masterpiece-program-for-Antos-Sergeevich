#include "alcohol.h"

void Menu::alcohol::set_Strength(int strength)
{
	this->strength = strength;
}

int Menu::alcohol::get_Strength()
{
	return strength;
}

int Menu::alcohol::checking(int x)
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

void Menu::alcohol::input()
{
	
		string tmp;
		int a;
		cout << "������� �������� �������: " << endl;
		getline(cin, tmp, '\n');
		set_Name(tmp);
		cout << "���(�������� ����, ���� � ��.): " << endl;
		getline(cin, tmp, '\n');
		set_Type(tmp);
		cout << "��������(� ��������): " << endl;
		cin >> a;
		a = checking(a);
		set_Strength(a);
		cout << "�����(� �����������): " << endl;
		cin >> a;
		a = checking(a);
		set_Capacity(a);
		cout << "����(� ������): " << endl;
		cin >> a;
		a = checking(a);
		set_Price(a);
		cin.ignore();
	
}
void Menu::alcohol::output()
{
		cout << "�������� �������: " <<
		get_Name() << "\n��� �������: " <<
		get_Type() << "\n���-�� ��������: " <<
		get_Strength() << "\n����� (��): " <<
		get_Capacity() << "\n����(�����): " <<
		get_Price() << "\n������ �������: " <<
		get_Id() <<"\n"<< endl;
};

