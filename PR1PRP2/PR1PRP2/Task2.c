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
    float a = 4;
    float b = 12.25;
    double c = 0.01234;
    //Ausgabe der Werte mit Bezeichnung
    printf("ZAHL\t        WURZEL\t\n");
    printf("%lf\t%lf\n", a, sqrt(a));
    printf("%f\t%f\n", b, sqrt(b));
    printf("%lf\t%lf\n", c, sqrt(c));
    //getchar();
    return 0;


}