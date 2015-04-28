#ifndef ueb1_h
#define ueb1_h

#include <iostream>
#include <string>
#include <cstring>

using namespace std;
struct Person{
	string name;
	string vorname;
	string geburtsdatum;
};

#endif 
void lesePerson(struct Person *structArray);
int steuereEingabe(struct Person *structArray, int indexVar);
void schreibePerson(Person *subjekt);
void steuereAusgabe(Person *structArray, int saetze);
void sortierePersonen(Person *personen, int saetze);