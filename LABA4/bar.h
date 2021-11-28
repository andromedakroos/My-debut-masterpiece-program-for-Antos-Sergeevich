#pragma once
#include "alcohol.h"
#include "meal.h"
namespace Menu
{

	class Bar
	{
	private:
		vector <alcohol> object_alco;
		vector <meal> object_meal;
	public:
		void add_Pos(int);
		void output_Pos(int);
		void delete_Pos(int, int);
		void sort_up(vector<alcohol>&, vector<meal>&, int);
		void sort_down(vector<alcohol>&, vector<meal>&, int);
		void sort_menu(int, int);
		void change_info(int, int);

	};
}



