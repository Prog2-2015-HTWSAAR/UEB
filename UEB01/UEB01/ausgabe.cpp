#include "ueb01.h"

void schreibePerson(Person *subjekt){
	cout << "Name :" << subjekt->name << "|| Vorname: " << subjekt->vorname << "|| Geburtsdatum: " << subjekt->geburtsdatum << endl;
}

void steuereAusgabe(Person *structArray, int saetze){
	int i = 0;
	while (i < saetze){
		schreibePerson(&structArray[i]);
		i++;
	}
}