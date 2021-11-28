#include "menu.h"

Menu::menu::menu()
{
	this->price = 0;
	this->capacity = 0;
}

Menu::menu::menu(string name, string type, int price, int capacity)
{
	this->name = name;
	this->type = type;
	this->price = price;
	this->capacity = capacity;
}

void Menu::menu::set_Name(string name)
{
	this->name = name;
}
void Menu::menu::set_Type(string name)
{
	this->type = type;
}
void Menu::menu::set_Price(int price)
{
	this->price = price;
}
void Menu::menu::set_Capacity(int capacity)
{
	this->capacity = capacity;
}

string Menu::menu::get_Name()
{
	return name;
}

string Menu::menu::get_Type()
{
	return type;
}

int Menu::menu::get_Price()
{
	return price;
}

int Menu::menu::get_Capacity()
{
	return capacity;
}

int Menu::menu::get_Id()
{
	return id;
}

void Menu::menu::set_Id(int id)
{
	this->id = id;
}
