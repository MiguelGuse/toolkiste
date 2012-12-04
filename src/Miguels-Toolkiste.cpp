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
	do
	{
		cout <<"Was wollen Sie machen?"<<endl;
			cout <<"1) Taschenrechner"<<endl;                                                //Menü-Option 1) ausgeben
			cout <<"0)Beenden"<<endl;                                                        //Menü-Option 0)Beenden ausgeben
		cin  >>wahl;                                                                //Menü-Auswahl einlesen
		if (wahl==1)
		{
			char rechner;                                                          //Fortsetzungsanfrage um später Rechnungen zu wiederholen

			cout <<"Der unfertige Taschenrechner!"<<endl;
			cout <<"+ zum Addieren \n - zum Subtrahieren \n * zum Multiplizieren \n / zum Dividieren"<<endl;     //Operatoren ausgeben
			cout <<"Zum Fortfahren beliebigen Buchstaben drücken und anschliessend Rechnung eingeben."<<endl;
			cout <<"Zum Beenden beliebige Zahl drücken."<<endl;

			while (cin>>rechner)
			{
				int wert1;                                                            //Werte für anschliessende Rechnung deklarieren.
				int wert2;
				char oprt;                                                              //Operator-Wert( also + - * / )
				int ergebnis;

				cin >>wert1 >> oprt >> wert2;
				/* Der Operator wird als char eingelesen, dass heisst wir müssen die ASCII-Werte von +,-,*,/,rausfinden.Google hilft:
				 *  + entspricht '43'
				 *  - entspricht '45'
				 *  * entspricht '42'
				 *  / entspricht '47'
				 */
				if (oprt=='+')                                                                 //Addition
				{
					ergebnis= wert1 + wert2;
					cout <<"= "<< ergebnis<<endl;
				}
				else if (oprt=='-')
				{
					ergebnis= wert1 - wert2;
					cout <<"= "<< ergebnis<<endl;
				}
				else if (oprt=='*')
				{
					ergebnis= wert1 * wert2;
					cout <<"= "<< ergebnis <<endl;
				}
				else if (oprt=='/')
				{
					ergebnis= wert1/wert2;
					cout <<"= "<< ergebnis<<endl;
				}
				else
				{
					cout <<"Bitte einen gültigen Operanden eingeben!" <<endl;
				}


			}
		}

	}
	while(wahl!=0);

	return 0;
}
