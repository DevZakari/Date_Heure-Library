#pragma once
#include <iostream>
#include "Heure.h"
namespace hr {
	class DateH: public Heure
	{
	private:
		int jour;
		int mois;
		int annee;
	public:
		DateH(int hh, int mm, int ss, int jr, int ms, int an);
		void print_h()const;
		bool operator > (const DateH& d)const;
	};
};
