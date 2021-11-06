// User_Heure.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Heure.h"
#include "DateH.h"

using namespace std;
using namespace hr;

int main()
{
    // Class Heure : 

    Heure* h1 = new Heure(22, 11, 14);
    h1->print();
    Heure* h2 = new Heure(23, 01, 13);
    h2->print();

    // operator < et >  :
    cout << endl << " **** Test des operateurs sur les heures **** \n\n";
    h1->print();
    if (*h1 > *h2)
    {  
        cout << " est superieur a \n";
    }
    else if(*h1 < *h2)
    {
        cout << " est inferieur a \n";
    }
    h2->print();


   // Class DateH : inherit from the base class : Heure ;

    cout << endl << " **** Affichage des Date avec l'heure : **** \n\n";

    DateH* date1 = new DateH(22, 17, 15, 5, 11, 2021);
    DateH* date2 = new DateH(23, 45, 15, 5, 12, 2022);
    // affichage du date : 
    date1->print_h();
    date2->print_h();

    cout << endl << " **** Test des operateures sur les dates  : **** \n\n";
    if (*date1 > *date2)
    {
        date1->print_h();
        cout << " est superieur que : \n";
        date2->print_h();
    }
    else
    {
        date1->print_h();
        cout << " est inferieur que : \n";
        date2->print_h();
    }

    system("pause>0");
}

