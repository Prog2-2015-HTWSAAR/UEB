/**
* @mainpage Person
* @file ueb01.cpp
* @Author Andreas Schreiner & Simon Bastian
* @date 2015
*
* Main Funktion
* 

*/
#include <iostream>
#include <string>
#include <cstring>
#include "ueb01.h"

#define INDEXVAR 100

/**
* @brief main fkt
* @details main function
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