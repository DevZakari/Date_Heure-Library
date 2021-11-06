#include "pch.h"
#include "DateH.h"
#include <string>
using namespace std;

// tableau qui représente les nombres de jours de chaque mois en fonction de la nature de l'année : 
int nb;
int MOIS[12] = { 31,nb,31,30,31,30,31,31,30,31,30,31 };
// funtion :
int est_bissextile(int annee)
{
	if ((annee % 4 == 0) || (annee%100 ==0 && annee%400 ==0)) {
		return 1;
	}
	return 0;
}

hr::DateH::DateH(int hh, int mm, int ss, int jr, int ms, int an):Heure(hh,mm,ss)
{

	try {
		string str;
		if (an < 2000 || an > 2099)
		{
			str = "Enter a year between 2000 and 2099\n";
			throw str;
		}
		else {
			this->annee = an;
		}
		if (ms < 1 || ms > 12)
		{
			str = "Watch Out ! Enter a valid mounth ! \n";
			throw str;
		}
		else {
			this->mois = ms;
		}
		// Start : verification de l'année :
			if (est_bissextile(this->annee))
			{
				nb = 29;
			}
			else {
				nb = 28;
			}
		// end : 
		if (jr <1 || jr > MOIS[ms-1])
		{
			str = "You entered an INVALID Number day ! \n";
			throw str;
		}
		else {
			this->jour = jr;
		}
		
	}
	catch (string err)
	{
		cout << "\t *** ERROR :  " << err << endl;
	}
}

void hr::DateH::print_h() const
{
	cout << "DATE : ";
	cout << this->jour << "/" <<this->mois << "/" << this->annee << "  ";
	this->print();
}

bool hr::DateH::operator>(const DateH& d) const
{
	if (this->annee != d.annee)
	{
		return (this->annee > d.annee);
	}
	else {
		if (this->mois != d.mois)
		{
			return (this->mois > d.mois);
		}
		else {
			if (this->jour != d.jour)
			{
				return (this->jour > d.jour);
			}
			else {
				
				return this->Heure::operator > (d);
			}
		}
	}
	
}


