#pragma once
#include "Header.h"
#include "menu.h"
namespace Menu
{

	class meal : public menu
	{
	private:
		string taste;
	public:
		void set_Taste(string);
		string get_Taste();
		int checking(int x);
		void input() override;
		void output() override;
	};
}

