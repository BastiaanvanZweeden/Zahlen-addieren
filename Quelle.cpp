#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
int eingegebeneZahlen[9];


int anzahlDerZahlen(void) { // Hier ist die Abfrage wie viele Zahlen eingegeben werden sollen als Funktion

	int anzahlZahlen;
	printf("Geben Sie Bitte an wie viele Zahle Sie eingeben möchten \n");
	printf("Bedenken Sie, dass die Zahl nicht zu hoch ist, zwischen 2 und 10.\n");
	scanf("%d", &anzahlZahlen);

	if (anzahlZahlen < 2) {

		printf("Sie können nicht weniger als 2 Zahlen miteinander addieren. \n");
		anzahlDerZahlen();

	}
	else if (anzahlZahlen > 10) {

		printf("Sie sollten bedenken, daß es anstrengend wird wenn Sie mehr als 10 Zahlen eingeben müssen. \n");
		anzahlDerZahlen();

	}
	else {
		return(anzahlZahlen);
	}
}

void zahlenEinlesen(int anzahl) {
	int i;
	for (i = 0; i < anzahl; i++) {
		printf("Geben sie bitte die Zahl Nummer %d ein: ", i + 1);
		scanf("%d", &eingegebeneZahlen[i]);
	}

}

int summeDerEingegebenenZahlen(void) {

	int summe = 0;
	int zahlen = sizeof(eingegebeneZahlen) / sizeof(int);
	for (int i = 0; i < zahlen; i++) {
		summe = eingegebeneZahlen[i] + summe;
	}

	return(summe);
}

int main(int argc, char** argv) { // Das ist mein Hauptprogramm

	SetConsoleOutputCP(1252); // für Umlaut-Ausgabe
	SetConsoleCP(1252); // für Umlaut-Eingabe

	int dieAnzahlDerEinzugebendenZahlen;
	dieAnzahlDerEinzugebendenZahlen = anzahlDerZahlen();
	zahlenEinlesen(dieAnzahlDerEinzugebendenZahlen);
	printf("Die Summe der eingegebenen Zahlen ist %d\n", summeDerEingegebenenZahlen());
	return(0);

}
