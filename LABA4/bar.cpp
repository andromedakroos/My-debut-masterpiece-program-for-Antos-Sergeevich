#include "bar.h"

void Menu::Bar::add_Pos(int x)
{
	if (x == 1)
	{
		object_alco.push_back(alcohol());
		object_alco[object_alco.size() - 1].input();
		object_alco[object_alco.size() - 1].set_Id(object_alco.size());
	}
	if (x == 2)
	{
		object_meal.push_back(meal());
		object_meal[object_meal.size() - 1].input();
		object_meal[object_meal.size() - 1].set_Id(object_meal.size());
	}
}

void Menu::Bar::output_Pos(int x)
{
	system("CLS");
	if (x == 1)
	{
		for (int i = 0; i < object_alco.size(); i++)
		{
			object_alco[i].output();
		}
	}
	if (x == 2)
	{
		for (int i = 0; i < object_meal.size(); i++)
		{
			object_meal[i].output();
		}
	}
	if(x==3)
	{
		cout << "Напитки:" << endl;
		for (int i = 0; i < object_alco.size(); i++)
		{
			object_alco[i].output();
		}
		cout << "Блюда:" << endl;
		for (int i = 0; i < object_meal.size(); i++)
		{
			object_meal[i].output();
		}
	}

}

void Menu::Bar::delete_Pos(int index, int choise)
{
	if (choise == 1)
	{
		for (int i = 0; i < object_alco.size(); i++)
		{
			if (object_alco[i].get_Id() == index)
			{
				object_alco.erase(object_alco.begin() + i);
				return;
			}
			else
				cout << "Элемента с таким индексом не существует" << endl;
			return;
		}
	}
	else if (choise == 2)
	{
		for (int i = 0; i < object_meal.size(); i++)
		{
			if (object_meal[i].get_Id() == index)
			{
				object_meal.erase(object_meal.begin() + i);
			}
			else
				cout << "Элемента с таким индексом не существует" << endl;
			return;
		}
	}
}

void Menu::Bar::sort_up(vector<alcohol>&, vector<meal>&, int choise)
{
	meal temp_meal;
	alcohol temp_alco;
	if (choise == 1)
	{
		for (int i = 0; i < object_alco.size() - 1; i++)
		{
			for (int j = 0; j < object_alco.size() - i - 1; j++)
			{
				if (object_alco[j].get_Price() > object_alco[j + 1].get_Price())
				{
					temp_alco = object_alco[j];
					object_alco[j] = object_alco[j + 1];
					object_alco[j + 1] = temp_alco;
				}
			}
		}

	}
	if (choise == 2)
	{
		for (int i = 0; i < object_meal.size() - 1; i++)
		{
			for (int j = 0; j < object_meal.size() - i - 1; j++)
			{
				if (object_meal[j].get_Price() > object_meal[j + 1].get_Price())
				{
					temp_meal = object_meal[j];
					object_meal[j] = object_meal[j + 1];
					object_meal[j + 1] = temp_meal;
				}
			}
		}

	}
}

void Menu::Bar::sort_down(vector<alcohol>&, vector<meal>&, int choise)
{
	meal temp_meal;
	alcohol temp_alco;
	if (choise == 1)
	{
		for (int i = 0; i < object_alco.size() - 1; i++)
		{
			for (int j = 0; j < object_alco.size() - i - 1; j++)
			{
				if (object_alco[j].get_Price() < object_alco[j + 1].get_Price())
				{
					temp_alco = object_alco[j];
					object_alco[j] = object_alco[j + 1];
					object_alco[j + 1] = temp_alco;
				}
			}
		}

	}
	if (choise == 2)
	{
		for (int i = 0; i < object_meal.size() - 1; i++)
		{
			for (int j = 0; j < object_meal.size() - i - 1; j++)
			{
				if (object_meal[j].get_Price() < object_meal[j + 1].get_Price())
				{
					temp_meal = object_meal[j];
					object_meal[j] = object_meal[j + 1];
					object_meal[j + 1] = temp_meal;
				}
			}
		}

	}
}

void Menu::Bar::sort_menu(int choise, int choisesort)
{

	if (choisesort == 1)
	{

		sort_up(object_alco, object_meal, choise);
	}
	else if (choisesort == 2)
	{

		sort_down(object_alco, object_meal, choise);
	}
}

void Menu::Bar::change_info(int choise, int index)
{
	system("cls");
	if (choise == 1)
	{
		for (int i = 0; i < object_alco.size(); i++)
		{
			if (object_alco[i].get_Id() == index)
			{
				object_alco[i].input();
				break;
			}
			else
				cout << "Данного элемента не существует!" << endl;
		}
	}
	else if (choise == 2)
	{
		for (int i = 0; i < object_meal.size(); i++)
		{
			if (object_meal[i].get_Id() == index)
			{
				object_meal[i].input();
				break;
			}
			else
				cout << "Данного элемента не существует!" << endl;
		}
	}
}


