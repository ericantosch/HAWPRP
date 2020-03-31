/*
PR1 - Praktikum 2
Aufgabe 2.2
Autoren: Florian Tietjen und Eric Antosch
Beschreibung: Dieses Programm berechnet die Quadratwurzeln der einzelnen angegebenen Werte und gibt
diese in einer Tabelle wieder aus.
*/

//Includes
#include<stdio.h>
#include<math.h>

int main(void) {
    //Deklaration der Variablen mit Werten
    double a = 4;
    double b = 12.25;
    double c = 0.01234;
    //Ausgabe der Werte mit Bezeichnung
    printf("ZAHL\t        WURZEL\t\n");
    printf("%10.5lf\t%10.5lf\n", a, sqrt(a));
    printf("%10.5lf\t%10.5lf\n", b, sqrt(b));
    printf("%10.5lf\t%10.5lf\n", c, sqrt(c));
    getchar();
    return 0;


}