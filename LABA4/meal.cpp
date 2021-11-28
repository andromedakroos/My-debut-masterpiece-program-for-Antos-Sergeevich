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
				cout << "Ошибка, повторите ввод!" << endl;
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
	cout << "Введите название блюда: " << endl;
	getline(cin, tmp, '\n');
	set_Name(tmp);
	cout << "Вид(закуска, горячее блюдо, холодное блюдо): " << endl;
	getline(cin, tmp, '\n');
	set_Type(tmp);
	cout << "Состав блюда: " << endl;
	getline(cin, tmp, '\n');
	set_Taste(tmp);
	cout << "Масса блюда(в граммах): " << endl;
	cin >> a;
	a = checking(a);
	set_Capacity(a);
	cout << "Цена(в рублях): " << endl;
	cin >> a;
	a = checking(a);
	set_Price(a);
	cin.ignore();
}

void Menu::meal::output()
{

	cout << "Название напитка: " <<
		get_Name() << "\nВид напитка: " <<
		get_Type() << "\nСостав блюда:" <<
		get_Taste() << "\nМасса(гр): " <<
		get_Capacity() << "\nЦена(рубли): " <<
		get_Price() << "\nИндекс позиции: " <<
		get_Id()<< "\n"<<endl;

}

