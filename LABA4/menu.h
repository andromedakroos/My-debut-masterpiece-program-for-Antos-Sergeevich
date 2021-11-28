#pragma once
#include "Header.h"
namespace Menu
{
	class menu
	{
	private:
		string name;
		string type;
		int price;
		int capacity;
	protected:
		int id;
	public:
		menu();
		menu(string, string, int, int);
		virtual void output() = 0;
		virtual void input() = 0;
		void set_Name(string);
		void set_Type(string);
		void set_Price(int);
		void set_Capacity(int);
		string get_Name();
		string get_Type();
		int get_Price();
		int get_Capacity();
		int get_Id();
		void set_Id(int);
	};
}


