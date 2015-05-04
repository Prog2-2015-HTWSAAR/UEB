/**
* compile: g++ -c -o -Wall -pedantic *.cpp per make
* @mainpage Person
* @file ueb01.cpp
* @Author Andreas Schreiner & Simon Bastian
* 
* @date 04.05.2015
* 
* Main Funktion
* 

*/
#include <iostream>
#include <string>
#include <cstring>
#include "ueb01.h"
/**
* @brief INDEXVAR Maximale Feldgroesse fuer die Personenstruktur
*/
#define INDEXVAR 100

/**
* @brief main fkt
* @details main function
* @param[out] structArray Personenstruktur(steuereEingabe Fkt)
* @param[out] INDEXVAR Maximale Feldgroesse(steuereEingabe Fkt)
* @param[in] saetze Anzahl belegter Stellen im Personen Array(steuereEingabe Fkt)
*
* @param[out] structArray Personenstruktur(steuereAusgabe Fkt)
* @param[out] saetze Maximale Feldgroesse(steuereAusgabe Fkt)
*
* @param[out] structArray Personenstruktur(sortierePersonen Fkt)
* @param[out] saetze Maximale Feldgroesse(sortierePersonen Fkt)

*/
int main(){
	Person structArray[INDEXVAR];

	int saetze = steuereEingabe(structArray, INDEXVAR);
	cout << "Unsortiert" << endl;
	steuereAusgabe(structArray, saetze);
	sortierePersonen(structArray, saetze);
	cout << "Sortiert" << endl;
	steuereAusgabe(structArray, saetze);
	return 0;
}