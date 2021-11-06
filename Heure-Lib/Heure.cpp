#include "pch.h"
#include "Heure.h"
#include <iostream>
#include <string>
using namespace std;


hr::Heure::Heure(int hh, int mm, int ss)
{
    // exceptions handling : 
    try {
        string str;
        if (hh < 0 || hh > 23)
        {
            str = "Heure n'est pas valide";
            throw str;
        }
        else {
            this->heure = hh;
        }
        if (mm < 0 || mm >= 60) {
            str = "Minute n'est pas valide";
            throw str;
        }
        else {
            this->minute = mm;
        }
        if (ss < 0 || ss >= 60)
        {
            str = "Seconde n'est pas valide";
            throw str;
        }
        else {
            this->seconde = ss;
        }
    }

    catch (string err)
    {
        cout << " \t *** Error : " << err << endl;
    }

}

bool hr::Heure::operator>(const Heure& hr) const
{
    if (this->heure != hr.heure)
    {
        return (this->heure > hr.heure);
    }
    else
    {
        if (this->minute != hr.minute)
        {
            return (this->minute > hr.minute);
        }
        else
        {
            if (this->seconde != hr.seconde)
            {
                return (this->seconde > hr.seconde);
            }
            else
            {
                return false;
            }
        }
    }

}

bool hr::Heure::operator<(const Heure& hr) const
{
    bool res = this->operator> (hr);
    if (res == true) {
        return false;
    }
    else {
        return true;
    }

}

void hr::Heure::print() const
{
    if (this->heure < 10 && this->minute<10 && this->seconde <10) 
    {
        cout << "Heure :  " << "0" << this->heure << ":" << "0" << this->minute << ":" << "0" << this->seconde << endl;
        return;
    }
    if (this->heure < 10 && this->minute < 10)
    {
        cout << "Heure :  " << "0" << this->heure << ":" << "0" << this->minute << ":" << this->seconde << endl;
        return;
    }
    if (this->heure < 10)
    {
        cout << "Heure :  " << "0" << this->heure << ":" << this->minute << ":" << this->seconde << endl;
        return;
    }
    if (this->minute < 10)
    {
        cout << "Heure :  " << this->heure << ":" << "0" << this->minute << ":" << this->seconde << endl;
        return;
    }
    if (this->seconde < 10)
    {
        cout << "Heure :  " << this->heure << ":" << this->minute << ":" << "0" << this->seconde << endl;
        return;
    }
    cout << "Heure :  " << this->heure << ":" << this->minute << ":" << this->seconde << endl;
    return;
}
