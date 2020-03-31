/*
PR1 - Praktikum 2
Aufgabe 2.4
Autoren: Florian Tietjen und Eric Antosch
Beschreibung: Dieses Programm gibt dem User, der einen gro�en Buchstaben eingeben soll, 
den entsprechenden kleinen Buchstaben zur�ck.
*/
#include<stdio.h>

int main(void) {

	char upperCase; //Varibale zur Aufnahme des gro�en Buchstaben
	printf("Geben Sie einen grossen Buchstaben ein:\n"); //Eingabe vom User annehmen
	upperCase = getchar();
	int asciiValue = upperCase; //Buchstaben zum Int casten, um den ASCII-Wert zu bekommen
		
	if (asciiValue >= 'A' && asciiValue <= 'Z') //�berpr�fen, ob der ASCII-Wert einem gro�en Buchstaben entspricht
	{
		asciiValue += 32; // Falls true, dann wird der Buchstabe in einen Kleinen umgewandelt
	}
	else {

		printf("Geben Sie bitte einen grossen Buchstaben ein!");//Falls false, dann wird das Programm mit einer Fehlermeldung beendet
		return 0;
	}

	printf("Kleiner Buchstabe: %c", asciiValue); //Ausgabe des kleinen Buchstaben mit einem impliziten Cast auf Char.
	getchar();
	return 0; //End of Program

}