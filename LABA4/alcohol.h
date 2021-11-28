#pragma once
#include "Header.h"
#include "menu.h"

namespace Menu
{
	class alcohol : public menu
	{
	private:
		int strength;
	public:
		void set_Strength(int);
		int get_Strength();
		int checking(int x);
		void input() override;
		void output() override;

	};
}


