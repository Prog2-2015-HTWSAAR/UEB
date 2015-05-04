/**
* @file ueb01.cpp
* @Author Andreas Schreiner & Simon Bastian
* @date 2015
*
* Funktionen, zum Sortieren des structs
*/
#include "ueb01.h"

void tauschePersonen(Person *personen, int person1, int person2){
	Person helfer = personen[person1];
	personen[person1] = personen[person2];
	personen[person2] = helfer;

}

void sortierePersonen(Person *personen, int saetze){
	int min_pos = 0;
	for (int i = 0; i < saetze; i++){

		min_pos = i;
		//Bestimme Position des Minimuns
		for (int j = i + 1; j < saetze; j++){

			if (personen[min_pos].name.compare(0, personen[i].name.size(), personen[j].name, 0, personen[j].name.size()) == 1){
				min_pos = j;
			}
			if (personen[min_pos].name.compare(0, personen[i].name.size(), personen[j].name, 0, personen[j].name.size()) == 0){
				if (personen[min_pos].vorname.compare(0, personen[i].vorname.size(), personen[j].vorname, 0, personen[j].vorname.size()) == 1){
					min_pos = j;
				}
			}
		}
		tauschePersonen(personen, i, min_pos);

	}

}