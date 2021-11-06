#pragma once
#include <iostream>

namespace hr {
	class Heure
	{
	protected:
		int heure;
		int minute;
		int seconde;
	public:
		Heure(int hh = 0, int mm = 0, int ss = 0);
		bool operator > (const Heure& hr)const;
		bool operator < (const Heure& hr)const;
		void print()const;
	};
};
