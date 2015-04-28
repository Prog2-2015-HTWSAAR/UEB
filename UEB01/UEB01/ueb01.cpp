#include <iostream>
#include <string>
#include "ueb01.h"

#define INDEXVAR 100
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
	//const int indexVar = 1000; obsolet wegen define
	Person structArray[indexVar];

	int saetze = steuereEingabe(structArray, indexVar);
	steuereAusgabe();	sortierePersonen();	steuereAusgabe();
	return 0;
}

void lesePerson(struct Person *structArray){
	
}

int steuereEingabe(struct Person *structArraye, int indexVar){
	int saetze = 0;
	int ende = 0;
	char eingabe = '\0';
	do{
		lesePerson(&structArraye[saetze]);	
	
		saetze++;
		
		if(saetze==maxanzahl){
			ende=1;
			printf("Maximale Buchanzahl erreich!\n");
		}
		
		
		if(eingabe!='j'){
			ende=2;
		}
		
	}while(ende==0);
	
	
	
	

	return saetze;
}

void schreibePerson(){

}

void steuereAusgabe(){

}

void sortierePersonen(){

}