	// Begriffe (Aufgabe 1.3, 1.4, 1.5)

#include <iostream>

int f (int x); // Funktionsdeklaration

int f (int x) { // Funktionsdefinition 
	return x * x; 
}

int main () {
	/* Typ: (Datentyp) gibt die Art der Variable an (z.B. Art der erlaubten Zeichen, Zahlen, usw.)
	Jeder Datentyp hat einen Wertebereich, der die Anzahl der Bit zur Abspeicherung der 
	Variable bestimmt 
	Datentypen helfen bei der Fehlererkennung (z.B. Division von Zeichenketten usw.) */
	/* Variable: Behaelter für einen bestimmten Typ, dem ein Name und ein Wert zugewiesen wird */
	/* Wert: Ein Wert wird einer Variable zugewiesen. Bei einer Abfrage gibt die Variable den Wert 
	aus. Ein Wert selbst kann nicht verändert werden. Eine Variable schon. */
	/* Typkonvertierung: Bei einer Typkonvertierung ändert man den Datentyp einer Variable
	z.B. von einem int auf ein double. Dabei können Daten verloren gehen. Außerdem
	kann nicht jeder Typ in einen anderen konvertiert werden */

	int a = 9; // Initialisierung einer ganzen Zahl
	bool b = false; // Initialisierung eines boolschen Ausdrucks (true / false)
	char c = 'a'; // Initialisierung eines Characters (ASCII Zeichen)
	double d = 1.3; // Initialisierung einer Gleitkommazahl
	const int two = 2; /* Initialisierung einer Konstanten => ganze Zahl 2 
	Konstanten können nach der Initialisierung nicht verändert werden 
	d.h. es ist keine weitere Zuweisung möglich */
	double e = a / two; /* Division von zwei natürlichen Zahlen 
	=> Ergebnis 4,5 d.h Gleitkommazahl */
	two = d; /* Der Variable "two" wird der Wert 1.3 zugewiesen, in diesem Fall 
	*/

	/* Zuweisung: Anweisung, durch die eine Variable einen neuen Wert bekommt */
	a = a + 1; 
	def = 7; 

	/* Initialisierung: Einer Variable wird ein Anfangswert zugewiesen, der sich ändern kann, 
	aber nicht ändern muss (d.h. Deklaration, Definition und Zuweisung)*/
	int init = 42; 

	/* Deklaration: Variable oder Funktion / Methode wird dem Compiler bekannt gemacht  
	(Name, Typ):  */
	extern char ran; // hier wird kein Speicherplatz reserviert es handelt sich also um eine reine Deklaration 

	/* Definition: Einer Variable oder Funktion / Methode wird ein Speicherbereich zugeteilt. Compiler legt etwas an. 
	Setzt immer eine Deklaration voraus:  */
	int def;

	return 0; 

}
