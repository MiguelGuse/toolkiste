//============================================================================
// Name        : Miguels-Toolkiste.cpp
// Author      : Miguel Guse
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int wahl;
	cout << "Hallo, Wie heissen sie?" << endl;                                       //Gruß+Name erfragen
	cin  >>name;                                                                     //Name einlesen
	cout <<"Wilkommen in Miguel's Toolkiste, "<<name<<"!!"<<endl;                    //Mit Namen begrüßen
	cout <<"Was wollen Sie machen?"<<endl;
	cout <<"1) Taschenrechner"<<endl;                                                //Menü-Option 1) ausgeben
	cout <<"0)Beenden"<<endl;                                                        //Menü-Option 0)Beenden ausgeben
	do
	{
		cin  >>wahl;                                                                //Menü-Auswahl einlesen
		if (wahl==1)
		{
			cout <<"Der unfertige Taschenrechner!"<<endl;
		}

	}
	while(wahl!=0);

	return 0;
}
