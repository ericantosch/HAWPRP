/*
PR1 - Praktikum 2
Aufgabe 2.3a
Autoren: Florian Tietjen und Eric Antosch
Beschreibung: Dieses Programm berechnet die Oberfläche und das Volumen einer Kugel
und gibt die Ergebnisse aus
*/

//Includes und Definition des Wertes PI mit const double als Variable.
#include<stdio.h>
#include<math.h>

const double PI = 3.1415926;
//Funktion zur Berechnung der Oberfläche
double surface(double r) {

    return r * r * PI * 4;

}
//Funktion zur Berechnung des Volumens
double volume(double r) {

    return (r * r * r * 4) / 3 * PI;

}
//Ausgabe der Ergebnisse in der main-Funktion
int main(void) {

    double radius;
    printf("Kugelberechnung\n\n");

    printf("Bitte geben Sie einen Radius ein:\n");
    scanf_s("%lf", &radius);
    printf("Radius: %lf\n", radius);
    printf("Oberfl%cche: %lf\n", 132, surface(radius));
    printf("Volumen: %lf\n", volume(radius));
    getchar();
    return 0;



}