/**
* compile: g++ -c -o -Wall -pedantic *.cpp per make
* @file ausgabe.cpp
* @Author Andreas Schreiner & Simon Bastian
* @date 2015
*
* Ausgabe Funktionen
*/
#include "ueb01.h"

/**
* @brief schreibe fkt
* @details Gebe Datensaetze aus
* @param[in] *subjekt pointer auf eine Person
*/
void schreibePerson(Person *subjekt){
	cout << "Name :" << subjekt->name << "|| Vorname: " << subjekt->vorname << "|| Geburtsdatum: " << subjekt->geburtsdatum << endl;
}
/**
* @brief steuereAusgabe fkt
* @details Steuere die Ausgabefunktion schreibe
* @param[in] *structArray pointer auf Personenstruktur
* @param[in] saetze Anzahl der Datensaetze
* @param[out] &structArray[i] pointer auf eine Person
*/
void steuereAusgabe(Person *structArray, int saetze){
	int i = 0;
	while (i < saetze){
		schreibePerson(&structArray[i]);
		i++;
	}
}