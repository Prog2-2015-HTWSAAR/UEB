#include <iostream>
#include <string>
#include "ueb01.h"
using namespace std;

struct Person{
	string name;
	string vorname;
	int geburtsdatum;
};


void lesePerson(struct Person *structArray);
int steuereEingabe(struct Person *structArray, int indexVar);
void schreibePerson();
void steuereAusgabe();
void sortierePersonen();

int main(){
	const int indexVar = 1000;
	Person structArray[indexVar];

	int saetze = steuereEingabe(structArray, indexVar);
	steuereAusgabe();	sortierePersonen();	steuereAusgabe();
	return 0;
}

/*void lesePerson(struct Person *structArray){
	cout << "NAME: ";
	cin >> personenArray[0];
	cout << "VORNAME: ";
	cin >> personenArray[1];
	cout << "GEBURTSDATUM: ";
	cin >> personenArray[2];
}*/

int steuereEingabe(struct Person *structArraye, int indexVar){
	int saetze = 0;
	lesePerson(structArraye[saetze]);
	

	return saetze;
}

void schreibePerson(){

}

void steuereAusgabe(){

}

void sortierePersonen(){

}