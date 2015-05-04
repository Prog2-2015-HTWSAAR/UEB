/**
* @file eingabe.cpp
* @Author Andreas Schreiner & Simon Bastian
* @date 2015
*
* Eingabe Funktionen
*/
#include "ueb01.h"
/**
* @brief lesePerson fkt
* @details Funktion zum lesen von Personen
* @param[in] *subjekt Die Person dessen Daten eingelesen werden
*/
void lesePerson(Person *subjekt){
	cout << "Name: ";
	cin >> subjekt->name;
	cout << "Vorname: ";
	cin >> subjekt->vorname;
	cout << "Geburtsdatum: ";
	cin >> subjekt->geburtsdatum;

}
/**
* @brief steuereEingabe fkt
* @details Funktion zur Steuerung der Eingabe
* @param[in] *structArray Ein Array von Personen
* @param[in] maxanzahl Groesse des Arrays
* @param[out] saetze Anzahl der tatsaechlich gelesenen Saetze
*/
int steuereEingabe(Person *structArray, int maxanzahl){
	int saetze = 0;
	int ende = 0;
	char eingabe = '\0';
	do{
		lesePerson(&structArray[saetze]);

		saetze++;

		if (saetze == maxanzahl){
			ende = 1;
			cout << "Maximal!\n";
		}
		cout << "Weiter(j)?";
		cin >> eingabe;
		if (eingabe != 'j'){
			ende = 2;
		}
	} while (ende == 0);
	cout << saetze << endl;
	return saetze;
}
