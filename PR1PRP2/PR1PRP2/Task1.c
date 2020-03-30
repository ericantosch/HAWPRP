/*
PR1 - Praktikum 2
Aufgabe 2.1
Autoren: Florian Tietjen und Eric Antosch
Beschreibung: Dieses Programm enthält eine Reihe von Zuweisungen, die teilweise Fehler enthalten haben, die kommentiert korriegiert wurden
und gibt die Werte dann mit printf() aus.
*/

#include<stdio.h>


int main(void) {
    //Aufgabe a
    //Deklaration der Variablen und Initialisierung mit Werten
    int a = 2; // int a = 2.5 ist inkorrekt, da int (Integer) nur ganze Zahlen speichern kann.
    int b = '&'; // Dieser Wert ist von der Syntax her in Ordnung, als Wert wird jedoch 38 als Stelle in der ASCII-Tabelle ausgegeben. Eine solche Zuweisung sollte daher für die Lesbarkeit vermieden werden.
    char c = '\\'; // Die Zuweisung char c = '\\' ist korrekt, da hier der erste Backslash den zweiten Backslash escaped.
    char z = 65; // Die Zuweisung char z = 500 funktioniert nicht, da die ASCII-Tabelle nicht so weit geht. Der Wert 65 existiert jedoch und soll ein "A" darstellen.
    long count = 0; // Diese Zuweisung ist korrekt, long kann so einen Wert speichern, der Name ist in Ordnung und die Zeichen sind richtig gesetzt. Für den Wert Null ist long jedoch etwas zu groß und könnte durch z.B. short ersetzt werden.
    short big = 32767; // Die Zuweisung short big = 33333 ist zu groß für die Speicherkapazität einer short Variablen. Sie kann maximal 32767 als Wert aufnehmen.
    unsigned char ch = '\205'; // Die Zuweisung ist korrekt, sie wird als Octal Escape Sequence bezeichnet. Der Wert, den man aus der ACII-Tabelle entnehmen kann, wird im Oktalen System angegeben. So ist unsigned char ch = '\101' ausgegeben 'A'.
    unsigned int size = 40000; // unsigned int value = - 40000 ist falsch, da unsigned nur positive Werte zur Zuweisung zulässt. Eine weitere Lösung für das Problem wäre int value = -40000.
    double firstValue = 1.23E+5; // Der Name first value mit einem Leerzeichen dazwischen führt zu einem Fehler, da ein Name kein Leerzeichen enthalten darf. Daher ist es ratsam entweder CamelCase(firstValue) oder einen Unterstrich zu benutzen(first_value).
    double flaeche = 99999999.99; // Der Name fläche hat einen Umlaut, der vom Compiler teilweise nicht richtig gelesen werden kann. Daher wirft der Compiler u.U. hier einen Fehler aus. Ein Workaround ist dann flaeche. Es ist jedoch möglich, ein ä auszugeben, indem man den ASCII-Code dafür bei Printf benutzt. Davon haben wir jetzt zur besseren Programmstruktur abgesehen. Zudem ist die Genauigkeit von float nicht gross genug, um die Zahl richtig darzustellen. Daher wurde hier Double benutzt.
    //Aufgabe b
    //Ausgabe der Werte von oben
    printf("Der Wert der Variablen \"a\" ist: %d\n", a);
    printf("Der Wert der Variablen \"b\" ist: %d\n", b);
    printf("Der Wert der Variablen \"c\" ist: %c\n", c);
    printf("Der Wert der Variablen \"z\" ist: %c\n\n", z);
    printf("Der Wert der Variablen \"count\" ist: %d\n", count);
    printf("Der Wert der Variablen \"big\" ist: %d\n", big);
    printf("Der Wert der Variablen \"ch\" ist: %c\n", ch);
    printf("Der Wert der Variablen \"size\" ist: %d\n", size);
    printf("Der Wert der Variablen \"firstValue\" ist: %e\n", firstValue);
    printf("Der Wert der Variablen \"flaeche\" ist: %f\n", flaeche);
    //getchar();
    return 0;
}


