#include <iostream>
#include <string>
#include <cstring>
#include "ueb01.h"

#define INDEXVAR 100

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