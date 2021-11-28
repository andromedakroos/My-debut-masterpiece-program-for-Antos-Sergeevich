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
				cout << "Ошибка, повторите ввод!" << endl;
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
		cout << "Введите название напитка: " << endl;
		getline(cin, tmp, '\n');
		set_Name(tmp);
		cout << "Вид(например пиво, вино и тд.): " << endl;
		getline(cin, tmp, '\n');
		set_Type(tmp);
		cout << "Крепость(в градусах): " << endl;
		cin >> a;
		a = checking(a);
		set_Strength(a);
		cout << "Объем(в миллилитрах): " << endl;
		cin >> a;
		a = checking(a);
		set_Capacity(a);
		cout << "Цена(в рублях): " << endl;
		cin >> a;
		a = checking(a);
		set_Price(a);
		cin.ignore();
	
}
void Menu::alcohol::output()
{
		cout << "Название напитка: " <<
		get_Name() << "\nВид напитка: " <<
		get_Type() << "\nКол-во оборотов: " <<
		get_Strength() << "\nОбъем (мл): " <<
		get_Capacity() << "\nЦена(рубли): " <<
		get_Price() << "\nИндекс позиции: " <<
		get_Id() <<"\n"<< endl;
};

