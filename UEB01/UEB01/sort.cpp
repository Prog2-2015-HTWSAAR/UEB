/**
* @file sort.cpp
* @Author Andreas Schreiner & Simon Bastian
* @date 2015
*
* Funktionen, zum Sortieren des structs
*/
#include "ueb01.h"

/**
* @brief tauschePersonen fkt
* @details Funktion zum tauschen einer Person
* @param[in] *personen pointer auf Personenstruktur
* @param[in] person1 erster satz, welcher mit dem 2. satz getauscht wird
* @param[in] person2 zweiter satz, welcher mit dem 1. satz getauscht wird
*/
void tauschePersonen(Person *personen, int person1, int person2){
	Person helfer = personen[person1];
	personen[person1] = personen[person2];
	personen[person2] = helfer;

}

/**
* @brief sortierePersonen fkt
* @details Funktion zum erkennen, ob eine Tauschoperation noetig ist, fuehrt ggf den tausch aus
* @param[in] *personen Pointer auf Personenstruktur
* @param[in] saetze Anzahl der Saetze die eingelesen wurden
* @param[out] personen  Personenstruktur
* @param[out] i erster satz, welcher mit dem 2. satz getauscht wird
* @param[out] min_pos zweiter satz, welcher mit dem 1. satz getauscht wird(minimum)
*/
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