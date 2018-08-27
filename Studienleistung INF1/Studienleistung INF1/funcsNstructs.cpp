#include <stdio.h>
#include "funcsNstructs.h"
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

/*Hilfsfunktionen*/

void replace(char str[strLengthAbtlSitz], char ges, char neu)														// Funktion um einzelne Character eines Strings zu ersetzen
{
	int i;

	for (i = 0; i < strLengthAbtlSitz; i++)
	{
		if ((str[i] == ges) && (str[i] != '\0'))
		{
			str[i] = neu;
		}
	}
}

void replaceGrossKlein(char str[strLengthAbtlSitz])																		// Großbuchstaben durch Kleine ersetzen
{
	int i;
	for (i = 0; i < 26; i++)
	{
		replace(str, 65 + i, 97 + i);
	}
}

int compareString(char string1[strLengthAbtlSitz], char string2[strLengthAbtlSitz])												// Strings vergleichen ohne Groß- & Kleinschreibung zu beachten (temp strings verwendet um die original Strings nicht zu verändern)
{
	char temp1[strLengthAbtlSitz], temp2[strLengthAbtlSitz];
	strcpy(temp1, string1);																										// temporäre Strings benutzen, um die Strings nicht zu verändern
	strcpy(temp2, string2);
	int i;
	for (i = 0; i < 26; i++)
	{
		replace(temp1, 65 + i, 97 + i);
		replace(temp2, 65 + i, 97 + i);
	}

	return (!strcmp(temp1, temp2));																							// Funktion negiert um ein TRUE als return beim Match zu bekommen (für mich ersichtlicher)
}

int compareSubString(char subString[strLengthAbtlSitz], char sourceString[strLengthAbtlSitz])													// eigene strstr Funktion die Strings mit Stringabschnitten vergleicht ohne Groß- und Kleinschreibung
{
	char temp2[strLengthAbtlSitz], temp1[strLengthAbtlSitz];
	strcpy(temp2, sourceString);
	strcpy(temp1, subString);
	int i;
	for (i = 0; i < 26; i++)
	{
		replace(temp1, 65 + i, 97 + i);
		replace(temp2, 65 + i, 97 + i);
	}

	if (strstr(temp2, temp1))
	{
		return 1;
	}
	else { return 0; }
}

/*Hauptfunktionen*/

void eingabeMa(mitarbeiter *ma, abteilung *abt, index *ind, int erstEingabe)									// Eingabefunktion um Mitarbeiter in die Datenbank aufzunehmen
{
	char eingabe[strLengthMAX];																							// String zur Zwischenspeicherung für Kontrolle (extra lang um overflow zu vermeiden)
	int eingabeZahl, jahr, monat, i;																			// Integer zur Zwischenspeicherung für Kontrolle
	char monatStr[3], jahrStr[5], datum[8], mail[strLengthMail];

	system("cls");

	/*Funktion nur bearbeiten, solange die maximale Mitarbeiterzahl noch nicht erreicht ist*/
	if (ind->mitarbeiter >= sizeMa)
	{
		printf("Die maximale Anzahl an Mitarbeitern ist erreicht.\n");
		ind->mitarbeiter--;
		system("pause");
		return;
	}
		
	/*Personalnummer*/
	if (ind->mitarbeiter == 0)																					// Personalnummer auf 1 setzen bei Ersteingabe
	{
		ma[ind->mitarbeiter].personalnummer = 1;
	}
	else																										// Personalnummer des letzten Mitarbeiters um 1 erhöht speichern
	{
		ma[ind->mitarbeiter].personalnummer = ma[ind->mitarbeiter - 1].personalnummer + 1;
	}	

	/*Abteilung*/

	printf("Abteilungen in diesem Unternehmen:\n");

	for (i = 0; i < ind->abteilung; i++)
	{
		printf("%i. %s\n", i + 1, abt[i].name);
	}

	printf("Waehlen sie die Abteilung des Mitarbeiters aus (Abbruch mit 0).");

	do																					// Schleife um Abteilung auszuwählen
	{
		printf("Ihre Auswahl: ");
		scanf("%i", &eingabeZahl);

		switch (eingabeZahl)
		{
		case 1:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 2:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 3:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 4:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 5:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 6:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 7:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 8:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 9:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 10:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 11:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 12:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 13:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 14:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 15:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 16:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 17:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 18:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 19:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		case 20:
			if (eingabeZahl <= ind->abteilung && eingabeZahl > 0)
			{
				ma[ind->mitarbeiter].abtRef = eingabeZahl - 1;
			}
			else
			{
				printf("Ungueltige Eingabe.\n");
				eingabeZahl = -1;
			}
			break;
		default:
			if (eingabeZahl != 0)
			{
				printf("Ungueltige Eingabe.\n");
			}
			getchar();
			break;
		}
	} while (eingabeZahl < 0 || eingabeZahl > sizeAbtl);


	/*vermeiden das bei erstmaliger Eingabe, beim Abbruch der Index erhöht wird*/
	if (eingabeZahl == 0)
	{
		if (erstEingabe == 1)
		{
			ind->mitarbeiter--;
		}
		return;
	}

	getchar();

	/*Nachname*/
	printf("Geben sie den Nachnamen des Mitarbeiters ein: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ma[ind->mitarbeiter].nachname, eingabe);
		};
	} while (strcmp(ma[ind->mitarbeiter].nachname, eingabe));

	getchar();

	/*Vorname*/
	printf("Geben sie den Vornamen des Mitarbeiters ein: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ma[ind->mitarbeiter].vorname, eingabe);
		};
	} while (strcmp(ma[ind->mitarbeiter].vorname, eingabe));

	getchar();

	/*Beitrittsdatum*/
	printf("Geben sie das Beitrittsjahr ein (JJJJ Format): ");
	do
	{
		scanf("%i", &eingabeZahl);
		if (eingabeZahl > 2100 || eingabeZahl < 1900)															// Jahr Eingabe auf 1900-2100 begrenzen
		{
			printf("Ihr eingegebenes Jahr ist unlogisch. Bitte erneut eingeben: ");
		}
		else
		{
			jahr = eingabeZahl;
		};
	} while (!(jahr == eingabeZahl));

	getchar();

	printf("Geben sie den Beitrittsmonat ein (MM Format): ");
	do
	{
		scanf("%i", &eingabeZahl);
		if (eingabeZahl > 12 || eingabeZahl < 1)																// Keine Zahlen speichern zu denen kein Monat existiert
		{
			printf("Ihr eingegebener Monat existiert nicht. Bitte erneut eingeben: ");
		}
		else
		{
			monat = eingabeZahl;
		};
	} while (!(monat == eingabeZahl));

	getchar();

	itoa(monat, monatStr, 10);																					// Zahlen in String umwandeln und zusammengefügt speichern
	itoa(jahr, jahrStr, 10);
	strcpy(datum, monatStr);
	strcat(datum, "/");
	strcat(datum, jahrStr);
	strcpy(ma[ind->mitarbeiter].eintrittsdatum, datum);

	/*Adresse*/
	printf("Geben sie die Adresse des Mitarbeiters ein.\nStrasse: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ma[ind->mitarbeiter].adresseMA.strasse, eingabe);
		};
	} while (strcmp(ma[ind->mitarbeiter].adresseMA.strasse, eingabe));

	getchar();

	printf("Hausnummer: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthHsnr)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ma[ind->mitarbeiter].adresseMA.hausnummer, eingabe);
		};
	} while (strcmp(ma[ind->mitarbeiter].adresseMA.hausnummer, eingabe));

	getchar();

	printf("Postleitzahl: ");
	do
	{
		scanf("%i", &eingabeZahl);
		if (eingabeZahl > 99998 || eingabeZahl < 1001)																	// Nur PLZ erlauben die in Deutschland existieren
		{
			printf("Ihre eingegebene Postleitzahl existiert nicht. Bitte erneut eingeben: ");
		}
		else
		{
			ma[ind->mitarbeiter].adresseMA.postleitzahl = eingabeZahl;
		};
	} while (!(ma[ind->mitarbeiter].adresseMA.postleitzahl == eingabeZahl));

	getchar();

	printf("Stadt: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ma[ind->mitarbeiter].adresseMA.stadt, eingabe);
		};
	} while (strcmp(ma[ind->mitarbeiter].adresseMA.stadt, eingabe));

	getchar();

	/*Telefonnummern*/
	printf("Geben sie die Mobilnummer des Mitarbeiters ein: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ma[ind->mitarbeiter].mobilnummer, eingabe);
		};
	} while (strcmp(ma[ind->mitarbeiter].mobilnummer, eingabe));

	getchar();

	printf("Geben sie die Festnetznummer des Mitarbeiters ein: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ma[ind->mitarbeiter].festnetznummer, eingabe);
		};
	} while (strcmp(ma[ind->mitarbeiter].festnetznummer, eingabe));

	getchar();

	/*Email*/
	strcpy(mail, ma[ind->mitarbeiter].vorname);																// automatisch die E-mail erstellen
	strcat(mail, ".");
	strcat(mail, ma[ind->mitarbeiter].nachname);
	strcat(mail, "@daddeldu.com");
	replace(mail, ' ', '_');																				// Leerzeichen durch Unterstriche ersetzen bei Doppelnamen
	replaceGrossKlein(mail);																				// Grossbuchstaben durch kleine ersetzen um die Adresse einheitlicher zu gestalten
	strcpy(ma[ind->mitarbeiter].email, mail);	
}

void ausgabeMa(mitarbeiter *ma, abteilung *abt, abteilungsleiter *ltr, index *ind)
{
	int i;

	system("cls");

	for (i = 0; i < ind->mitarbeiter; i++)
	{
		if (abt[ma[i].abtRef].ltrRef < 0 || abt[ma[i].abtRef].ltrRef > ind->abteilungsleiter)								// prüfen ob bereits ein Abteilungsleiter eingetragen ist
		{
			/*Ausgabe ohne Abteilungsleiter*/
			printf("#%i:\nPersonalnummer:\t\t%i\nName:\t\t\t%s %s\nEintrittsdatum:\t\t%s\nAdresse:\t\t%s %s, %i %s\nMobilnummer:\t\t%s\nFestnetznummer:\t\t%s\nE-mail:\t\t\t%s\nAbteilung:\t\t%s\nAbteilungsleiter:\tTBD\n", i+1, ma[i].personalnummer, ma[i].vorname, ma[i].nachname, ma[i].eintrittsdatum, ma[i].adresseMA.strasse, ma[i].adresseMA.hausnummer, ma[i].adresseMA.postleitzahl, ma[i].adresseMA.stadt, ma[i].mobilnummer, ma[i].festnetznummer, ma[i].email, abt[ma[i].abtRef].name);
		}
		else
		{
			/*Ausgabe mit Abteilungsleiter*/
			printf("#%i:\nPersonalnummer:\t\t%i\nName:\t\t\t%s %s\nEintrittsdatum:\t\t%s\nAdresse:\t\t%s %s, %i %s\nMobilnummer:\t\t%s\nFestnetznummer:\t\t%s\nE-mail:\t\t\t%s\nAbteilung:\t\t%s\nAbteilungsleiter:\t%s %s\n", i+1, ma[i].personalnummer, ma[i].vorname, ma[i].nachname, ma[i].eintrittsdatum, ma[i].adresseMA.strasse, ma[i].adresseMA.hausnummer, ma[i].adresseMA.postleitzahl, ma[i].adresseMA.stadt, ma[i].mobilnummer, ma[i].festnetznummer, ma[i].email, abt[ma[i].abtRef].name, ltr[abt[ma[i].abtRef].ltrRef].vorname, ltr[abt[ma[i].abtRef].ltrRef].nachname);
		}
		
		printf("---------------------------------------------------------------------------------\n");
	}
	printf("Um die Ansicht zu beenden ");
	system("pause");
	system("cls");
}

void eingabeAbt(abteilung *abtl, index *ind)
{
	char eingabe[strLengthMAX];																					// String zur Zwischenspeicherung für Kontrolle (extra lang um overflow zu vermeiden)
	int eingabeZahl;

	system("cls");

	/*Funktion nur bearbeiten, solange die maximale Abteilungszahl noch nicht erreicht ist*/
	if (ind->abteilung >= sizeAbtl)
	{
		printf("Die maximale Anzahl an Abteilungen ist erreicht.\n");
		ind->abteilung--;																				// Erhöhung des Indexes nach Funktionsaufruf negieren
		system("pause");
		return;
	}

	/*Abteilung*/
	printf("Geben sie den Namen der Abteilung ein: ");
	do
	{
		getchar();
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(abtl[ind->abteilung].name, eingabe);
		};
	} while (strcmp(abtl[ind->abteilung].name, eingabe));

	getchar();

	/*Adresse*/
	printf("Geben sie die Adresse der Abteilung ein.\nStrasse: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(abtl[ind->abteilung].adresseAbt.strasse, eingabe);
		};
	} while (strcmp(abtl[ind->abteilung].adresseAbt.strasse, eingabe));

	getchar();

	printf("Hausnummer: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthHsnr)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(abtl[ind->abteilung].adresseAbt.hausnummer, eingabe);
		};
	} while (strcmp(abtl[ind->abteilung].adresseAbt.hausnummer, eingabe));

	getchar();

	printf("Postleitzahl: ");
	do
	{
		scanf("%i", &eingabeZahl);
		if (eingabeZahl > 99998 || eingabeZahl < 1001)
		{
			printf("Ihre eingegebene Postleitzahl existiert nicht. Bitte erneut eingeben: ");
		}
		else
		{
			abtl[ind->abteilung].adresseAbt.postleitzahl = eingabeZahl;
		};
	} while (!(abtl[ind->abteilung].adresseAbt.postleitzahl == eingabeZahl));

	getchar();

	printf("Stadt: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(abtl[ind->abteilung].adresseAbt.stadt, eingabe);
		};
	} while (strcmp(abtl[ind->abteilung].adresseAbt.stadt, eingabe));

	getchar();

	/*Abteilungssitz*/
	printf("Geben sie den Sitz der Abteilung ein (Bsp: Gebaeude 4, 1. Stockwerk): ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthAbtlSitz)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(abtl[ind->abteilung].abteilungssitz, eingabe);
		};
	} while (strcmp(abtl[ind->abteilung].abteilungssitz, eingabe));

	getchar();
}

void ausgabeAbt(abteilung *abtl, abteilungsleiter *ltr, index *ind)
{
	int i;

	system("cls");

	for (i = 0; i < ind->abteilung; i++)
	{
		if (abtl[i].ltrRef < 0 || abtl[i].ltrRef > ind->abteilungsleiter)								// prüfen ob bereits ein Abteilungsleiter eingetragen ist
		{
			/*Eingabe ohne Abteilungsleiter*/
			printf("#%i:\nAbteilung:\t\t%s\nAdresse:\t\t%s %s, %i %s\nSitz der Abteilung:\t%s\nAbteilungsleiter:\tTBD\n", i + 1, abtl[i].name, abtl[i].adresseAbt.strasse, abtl[i].adresseAbt.hausnummer, abtl[i].adresseAbt.postleitzahl, abtl[i].adresseAbt.stadt, abtl[i].abteilungssitz);
		}
		else
		{
			/*Eingabe mit Abteilungsleiter*/
			printf("#%i:\nAbteilung:\t\t%s\nAdresse:\t\t%s %s, %i %s\nSitz der Abteilung:\t%s\nAbteilungsleiter:\t%s %s\n", i + 1, abtl[i].name, abtl[i].adresseAbt.strasse, abtl[i].adresseAbt.hausnummer, abtl[i].adresseAbt.postleitzahl, abtl[i].adresseAbt.stadt, abtl[i].abteilungssitz, ltr[abtl[i].ltrRef].vorname, ltr[abtl[i].ltrRef].nachname);
		}		
		printf("---------------------------------------------------------------------------------\n");
	}
	printf("Um die Ansicht zu beenden ");
	system("pause");
	system("cls");
}

void eingabeLtr(abteilungsleiter *ltr, abteilung *abt, mitarbeiter *ma, index *ind, int erstEingabe, int abteilungsNummer)
{
	char eingabe[strLengthMAX];																						// String zur Zwischenspeicherung für Kontrolle (extra lang um overflow zu vermeiden)
	char monatStr[3], jahrStr[5], datum[8], mail[74];
	int i, auswahl, auswahl2, eingabeZahl, jahr, monat, j = 0;			

	system("cls");

	/*Funktion nur bearbeiten, solange die maximale Leiterzahl noch nicht erreicht ist*/
	if (ind->abteilungsleiter == sizeAbtl)
	{
		printf("Die maximale Anzahl an Abteilungsleitern ist erreicht.\n");
		ind->abteilungsleiter--;
		ind->mitarbeiter;
		system("pause");
		return;
	}

	/*Abteilung*/

	/*Wenn Funktion über die Suchfunktion aufgerufen wird, diesen Schritt überspringen, da die Abteilungsnummer bereits bekannt ist*/

	if (abteilungsNummer == 0)
	{
		printf("Abteilungen in diesem Unternehmen:\n");

		for (i = 0; i < ind->abteilung; i++)
		{
			printf("%i. %s\n", i + 1, abt[i].name);
		}

		printf("Waehlen sie die Abteilung aus, fuer die sie einen Leiter eintragen moechten (Abbruch mit 0).\n");

		do
		{
			printf("Ihre Auswahl: ");
			scanf("%i", &auswahl);

			getchar();

			/*prüfen bereits ein Leiter für die Abteilung existiert*/
			for (i = 0; i < ind->abteilungsleiter; i++)
			{
				if (auswahl - 1 == ltr[i].abtRef)
				{
					j = i;
				}
			}

			if (j != 0)
			{
				printf("Abteilung hat bereits einen Leiter. Um einen neuen Leiter einzugeben, den Alten vorher loeschen.\n");
				system("pause");
				auswahl = 0;
			}

			switch (auswahl)
			{
			case 1:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 2:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 3:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 4:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 5:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 6:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 7:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 8:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 9:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 10:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 11:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 12:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 13:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 14:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 15:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 16:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 17:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 18:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 19:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			case 20:
				if (auswahl <= ind->abteilung && auswahl > 0)
				{
					ltr[ind->abteilungsleiter].abtRef = auswahl - 1;
					ma[ind->mitarbeiter].abtRef = auswahl - 1;
					abt[auswahl - 1].ltrRef = ind->abteilungsleiter;
				}
				else
				{
					printf("Ungueltige Eingabe.\n");
					auswahl = -1;
				}
				break;
			default:
				if (auswahl != 0)
				{
					printf("Ungueltige Eingabe.\n");
				}
				break;
			}
		} while (auswahl < 0 || auswahl > 20);

		/*vermeiden das bei erstmaliger Eingabe, beim Abbruch der Index erhöht wird*/
		if (auswahl == 0)
		{
			if (erstEingabe == 1)
			{
				ind->mitarbeiter--;
				ind->abteilungsleiter--;
			}
			return;
		}
	}
	else
	{
		ltr[ind->abteilungsleiter].abtRef = abteilungsNummer - 1;
		ma[ind->mitarbeiter].abtRef = abteilungsNummer - 1;
		abt[abteilungsNummer - 1].ltrRef = ind->abteilungsleiter;
	}
	
	/*Personalnummer*/
	if (ind->mitarbeiter == 0)
	{
		ma[ind->mitarbeiter].personalnummer = 1;
	}
	else
	{
		ma[ind->mitarbeiter].personalnummer = ma[ind->mitarbeiter - 1].personalnummer + 1;
	}

	/*Nachname*/
	printf("Geben sie den Nachnamen des Abteilungsleiters ein: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ltr[ind->abteilungsleiter].nachname, eingabe);
			strcpy(ma[ind->mitarbeiter].nachname, eingabe);
		};
	} while (strcmp(ltr[ind->abteilungsleiter].nachname, eingabe));

	getchar();

	/*Vorname*/
	printf("Geben sie den Vornamen des Abteilungsleiters ein: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ltr[ind->abteilungsleiter].vorname, eingabe);
			strcpy(ma[ind->mitarbeiter].vorname, eingabe);
		};
	} while (strcmp(ltr[ind->abteilungsleiter].vorname, eingabe));

	getchar();

	/*Beitrittsdatum*/
	printf("Geben sie das Beitrittsjahr ein (JJJJ Format): ");
	do
	{
		scanf("%i", &eingabeZahl);
		if (eingabeZahl > 2100 || eingabeZahl < 1900)
		{
			printf("Ihr eingegebenes Jahr ist unlogisch. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			jahr = eingabeZahl;
		};
	} while (!(jahr == eingabeZahl));

	getchar();

	printf("Geben sie den Beitrittsmonat ein (MM Format): ");
	do
	{
		scanf("%i", &eingabeZahl);
		if (eingabeZahl > 12 || eingabeZahl < 1)
		{
			printf("Ihr eingegebener Monat existiert nicht. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			monat = eingabeZahl;
		};
	} while (!(monat == eingabeZahl));

	getchar();

	itoa(monat, monatStr, 10);																					// Zahlen in String umwandeln und zusammengefügt speichern
	itoa(jahr, jahrStr, 10);
	strcpy(datum, monatStr);
	strcat(datum, "/");
	strcat(datum, jahrStr);
	strcpy(ma[ind->mitarbeiter].eintrittsdatum, datum);

	/*Adresse*/
	printf("Geben sie die Adresse des Mitarbeiters ein.\nStrasse: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ma[ind->mitarbeiter].adresseMA.strasse, eingabe);
		};
	} while (strcmp(ma[ind->mitarbeiter].adresseMA.strasse, eingabe));

	getchar();

	printf("Hausnummer: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthHsnr)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ma[ind->mitarbeiter].adresseMA.hausnummer, eingabe);
		};
	} while (strcmp(ma[ind->mitarbeiter].adresseMA.hausnummer, eingabe));

	getchar();

	printf("Postleitzahl: ");
	do
	{
		scanf("%i", &eingabeZahl);
		if (eingabeZahl > 99998 || eingabeZahl < 1001)
		{
			printf("Ihre eingegebene Postleitzahl existiert nicht. Bitte erneut eingeben: ");
		}
		else
		{
			ma[ind->mitarbeiter].adresseMA.postleitzahl = eingabeZahl;
		};
	} while (!(ma[ind->mitarbeiter].adresseMA.postleitzahl == eingabeZahl));

	getchar();

	printf("Stadt: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ma[ind->mitarbeiter].adresseMA.stadt, eingabe);
		};
	} while (strcmp(ma[ind->mitarbeiter].adresseMA.stadt, eingabe));

	getchar();

	/*Telefonnummern*/
	printf("Geben sie die Mobilnummer des Abteilungsleiters ein: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ltr[ind->abteilungsleiter].mobilnummer, eingabe);
			strcpy(ma[ind->mitarbeiter].mobilnummer, eingabe);
		};
	} while (strcmp(ltr[ind->abteilungsleiter].mobilnummer, eingabe));

	getchar();

	printf("Geben sie die Festnetznummer des Abteilungsleiters ein: ");
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
		else
		{
			strcpy(ltr[ind->abteilungsleiter].festnetznummer, eingabe);
			strcpy(ma[ind->mitarbeiter].festnetznummer, eingabe);
		};
	} while (strcmp(ltr[ind->abteilungsleiter].festnetznummer, eingabe));

	getchar();

	/*Email*/
	strcpy(mail, ltr[ind->abteilungsleiter].vorname);
	strcat(mail, ".");
	strcat(mail, ltr[ind->abteilungsleiter].nachname);
	strcat(mail, "@daddeldu.com");
	replace(mail, ' ', '_');
	replaceGrossKlein(mail);
	strcpy(ltr[ind->abteilungsleiter].email, mail);
	strcpy(ma[ind->mitarbeiter].email, mail);
}

void ausgabeLtr(abteilungsleiter *ltr, abteilung *abt, int index)
{
	int i;

	system("cls");

	for (i = 0; i < index; i++)
	{
		printf("#%i:\nAbteilung:\t%s\nName:\t\t%s %s\nMobilnummer:\t%s\nFestnetznummer:\t%s\nE-Mail:\t\t%s\n", i + 1, abt[ltr[i].abtRef].name, ltr[i].vorname, ltr[i].nachname, ltr[i].mobilnummer, ltr[i].festnetznummer, ltr[i].email);
		printf("---------------------------------------------------------------------------------\n");
	}
	printf("Um die Ansicht zu beenden ");
	system("pause");
	system("cls");
}

void saveAll(mitarbeiter *ma, abteilung *abtl, abteilungsleiter *ltr, index *ind)			// alle Structs abspeichern in einer Binär-Datei
{
	FILE *maDtb;
	FILE *abtDtb;
	FILE *ltrDtb;
	FILE *inDtb;

	maDtb = fopen("maDtb.dtb", "wb");
	abtDtb = fopen("abtDtb.dtb", "wb");
	ltrDtb = fopen("ltrDtb.dtb", "wb");
	inDtb = fopen("inDtb.dtb", "wb");

	fwrite(ma, sizeof(mitarbeiter), ind->mitarbeiter, maDtb);
	fwrite(abtl, sizeof(abteilung), ind->abteilung, abtDtb);
	fwrite(ltr, sizeof(abteilungsleiter), ind->abteilungsleiter, ltrDtb);
	fwrite(ind, sizeof(index), 1, inDtb);

	fclose(maDtb);
	fclose(abtDtb);
	fclose(ltrDtb);
	fclose(inDtb);
}

void searchMa(mitarbeiter *ma, abteilung *abt, abteilungsleiter *ltr, index *ind)										// Mitarbeiter Datenbank durchsuchen und Einträge ändern / löschen
{
	char eingabe[strLengthMAX];
	int i, ctr = 0, searchMatch[sizeMa], auswahl, temp, auswahl2, maNr;
	printf("Es wird in der Mitarbeiterdatenbank gesucht.\nSuche: ");

	getchar();
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}		
	} while (strlen(eingabe) > strLengthStd);

	maNr = atoi(eingabe);

	for (i = 0; i < ind->mitarbeiter; i++)																				// jeden Eintrag nach Surchwort abgleichen und gefundene Einträge in einem Array speichern
	{
		if (compareSubString(eingabe, ma[i].vorname) || compareSubString(eingabe, ma[i].nachname) || /*compareSubString(eingabe, abt[ma[i].abtRef].name)*/ compareSubString(eingabe, abt[ma[i].abtRef].name) || maNr == ma[i].personalnummer)
		{
			searchMatch[ctr] = i;
			ctr++;
		}
	}

	getchar();

	if (ctr == 0)																										// Abbrechen bei 0 gefundenen Einträgen
	{
		printf("Ihre Suche ergab keine Treffer.\n");
		system("pause");
	}
	else
	{																													// Alle gefundenen Einträge anzeigen (inkl. Vermeidung der Ausgabe von nicht eingetragenen Abteilungsleitern)
		printf("Ihre Suche ergab folgende Treffer:\n\n");

		for (i = 0; i < ctr; i++)
		{
			if (abt[ma[searchMatch[i]].abtRef].ltrRef < 0 || abt[ma[searchMatch[i]].abtRef].ltrRef > ind->abteilungsleiter)
			{
				printf("#%i:\nPersonalnummer:\t\t%i\nName:\t\t\t%s %s\nEintrittsdatum:\t\t%s\nAdresse:\t\t%s %s, %i %s\nMobilnummer:\t\t%s\nFestnetznummer:\t\t%s\nE-mail:\t\t\t%s\nAbteilung:\t\t%s\nAbteilungsleiter:\tTBD\n", searchMatch[i] + 1, ma[searchMatch[i]].personalnummer, ma[searchMatch[i]].vorname, ma[searchMatch[i]].nachname, ma[searchMatch[i]].eintrittsdatum, ma[searchMatch[i]].adresseMA.strasse, ma[searchMatch[i]].adresseMA.hausnummer, ma[searchMatch[i]].adresseMA.postleitzahl, ma[searchMatch[i]].adresseMA.stadt, ma[searchMatch[i]].mobilnummer, ma[searchMatch[i]].festnetznummer, ma[searchMatch[i]].email, abt[ma[searchMatch[i]].abtRef].name);
			}
			else
			{
				printf("#%i:\nPersonalnummer:\t\t%i\nName:\t\t\t%s %s\nEintrittsdatum:\t\t%s\nAdresse:\t\t%s %s, %i %s\nMobilnummer:\t\t%s\nFestnetznummer:\t\t%s\nE-mail:\t\t\t%s\nAbteilung:\t\t%s\nAbteilungsleiter:\t%s %s\n", searchMatch[i] + 1, ma[searchMatch[i]].personalnummer, ma[searchMatch[i]].vorname, ma[searchMatch[i]].nachname, ma[searchMatch[i]].eintrittsdatum, ma[searchMatch[i]].adresseMA.strasse, ma[searchMatch[i]].adresseMA.hausnummer, ma[searchMatch[i]].adresseMA.postleitzahl, ma[searchMatch[i]].adresseMA.stadt, ma[searchMatch[i]].mobilnummer, ma[searchMatch[i]].festnetznummer, ma[searchMatch[i]].email, abt[ma[searchMatch[i]].abtRef].name, ltr[abt[ma[searchMatch[i]].abtRef].ltrRef].vorname, ltr[abt[ma[searchMatch[i]].abtRef].ltrRef].nachname);
			}

			printf("---------------------------------------------------------------------------------\n");
		}

		/*Menü um auszuwählen ob ein Eintrag gelöscht oder geändert werden soll*/
		do
		{
			printf("Moechten sie einen Datensatz aendern oder loeschen?\n1. Aendern\n2. Loeschen\n0. Abbrechen\n");
			printf("Ihre Auswahl: ");
			scanf("%i", &auswahl);

			switch (auswahl)
			{
			case 1:
				printf("Welchen Eintrag moechten sie aendern? Bitte Nummer eingeben: ");
				scanf("%i", &auswahl2);
				if (auswahl2 <= ind->mitarbeiter && auswahl2 > 0)
				{
					/*Eintrag nur ändern lassen wenn dieser kein Abteilungsleiter ist*/
					if (compareString(ltr[abt[ma[auswahl2 - 1].abtRef].ltrRef].vorname, ma[auswahl2 - 1].vorname) && compareString(ltr[abt[ma[auswahl2 - 1].abtRef].ltrRef].nachname, ma[auswahl2 - 1].nachname))
					{
						printf("Gewaehlter Mitarbeiter ist auch ein Abteilungsleiter. Aendern sie diesen in der Abteilungsleiter Datenbank.\n");
						system("pause");
					}
					else																		// gewählten Eintrag ändern und für den Vorgang den alten Indexeintrag temporär speichern
					{
						temp = ind->mitarbeiter;
						ind->mitarbeiter = auswahl2 - 1;
						eingabeMa(ma, abt, ind, nein);
						ind->mitarbeiter = temp;
						system("pause");
					}
				}
				else
				{
					printf("Eintrag existiert nicht.\n");
				}
				break;
			case 2:
				printf("Welchen Eintrag moechten sie loeschen? Bitte Nummer eingeben: ");
				scanf("%i", &auswahl2);
				if (auswahl2 < ind->mitarbeiter && auswahl2 > 0)
				{
					/*Eintrag nur löschen lassen wenn dieser kein Abteilungsleiter ist*/
					if (compareString(ltr[abt[ma[auswahl2 - 1].abtRef].ltrRef].vorname, ma[auswahl2 - 1].vorname) && compareString(ltr[abt[ma[auswahl2 - 1].abtRef].ltrRef].nachname, ma[auswahl2 - 1].nachname))
					{
						printf("Gewaehlter Mitarbeiter ist auch ein Abteilungsleiter. Loeschen sie diesen in der Abteilungsleiter Datenbank.\n");
					}
					else																		// Mitarbeiter Daten ab dem gewünschten Datensatz verschieben; damit wird der ausgewählte Datensatz gelöscht
					{
						for (i = auswahl2 - 1; i < ind->mitarbeiter - 1; i++)
						{
							ma[i].personalnummer = ma[i + 1].personalnummer;
							ma[i].abtRef = ma[i + 1].abtRef;
							strcpy(ma[i].vorname, ma[i + 1].vorname);
							strcpy(ma[i].nachname, ma[i + 1].nachname);
							strcpy(ma[i].adresseMA.strasse, ma[i + 1].adresseMA.strasse);
							strcpy(ma[i].adresseMA.hausnummer, ma[i + 1].adresseMA.hausnummer);
							ma[i].adresseMA.postleitzahl = ma[i + 1].adresseMA.postleitzahl;
							strcpy(ma[i].adresseMA.stadt, ma[i + 1].adresseMA.stadt);
							strcpy(ma[i].eintrittsdatum, ma[i + 1].eintrittsdatum);
							strcpy(ma[i].mobilnummer, ma[i + 1].mobilnummer);
							strcpy(ma[i].festnetznummer, ma[i + 1].festnetznummer);
							strcpy(ma[i].email, ma[i + 1].email);
						}
						ind->mitarbeiter--;														// Mitarbeiterindex dekrementieren um ihn an die neue Mitarbeiterzahl anzupassen
						printf("Eintrag geloescht.\n");
					}
					system("pause");
				}
				else if (auswahl2 == ind->mitarbeiter)
				{
					/*Eintrag nur löschen lassen wenn dieser kein Abteilungsleiter ist*/
					if (compareString(ltr[abt[ma[auswahl2 - 1].abtRef].ltrRef].vorname, ma[auswahl2 - 1].vorname) && compareString(ltr[abt[ma[auswahl2 - 1].abtRef].ltrRef].nachname, ma[auswahl2 - 1].nachname))
					{
						printf("Gewaehlter Mitarbeiter ist auch ein Abteilungsleiter. Loeschen sie diesen in der Abteilungsleiter Datenbank.\n");
					}
					else
					{
						ind->mitarbeiter--;
						printf("Eintrag geloescht.\n");
					}
					system("pause");
				}
				else
				{
					printf("Eintrag existiert nicht.\n");
				}
				break;
			case 10:																						//Vermeidung vom zusätzlichen Ausführen vom default case durch \n im Input Buffer
				break;
			default:
				if (auswahl != 0)
				{
					printf("Ungueltige Eingabe.\n");
				}
				getchar();
				break;
			}
		} while (auswahl != 0 && auswahl != 1 && auswahl != 2);
	}	
}

void searchAbt(abteilung *abt, abteilungsleiter *ltr, index *ind)
{
	char eingabe[strLengthMAX];
	int i, ctr = 0, searchMatch[sizeAbtl], auswahl, temp, auswahl2;
	printf("Es wird in der Abteilungsdatenbank gesucht.\nSuche: ");

	getchar();
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
	} while (strlen(eingabe) > strLengthStd);

	for (i = 0; i < ind->abteilung; i++)
	{
		if (compareSubString(eingabe, abt[i].name) || compareSubString(eingabe, ltr[abt[i].ltrRef].vorname) || compareSubString(eingabe, ltr[abt[i].ltrRef].nachname))
		{
			searchMatch[ctr] = i;
			ctr++;
		}
	}

	getchar();

	if (ctr == 0)
	{
		printf("Ihre Suche ergab keine Treffer.\n");
		system("pause");
	}
	else
	{
		printf("Ihre Suche ergab folgende Treffer:\n\n");

		for (i = 0; i < ctr; i++)
		{
			if (abt[searchMatch[i]].ltrRef < 0 || abt[searchMatch[i]].ltrRef > ind->abteilungsleiter)
			{
				printf("#%i:\nAbteilung:\t\t%s\nAdresse:\t\t%s %s, %i %s\nSitz der Abteilung:\t%s\nAbteilungsleiter:\tTBD\n", searchMatch[i] + 1, abt[searchMatch[i]].name, abt[searchMatch[i]].adresseAbt.strasse, abt[searchMatch[i]].adresseAbt.hausnummer, abt[searchMatch[i]].adresseAbt.postleitzahl, abt[searchMatch[i]].adresseAbt.stadt, abt[searchMatch[i]].abteilungssitz);
			}
			else
			{
				printf("#%i:\nAbteilung:\t\t%s\nAdresse:\t\t%s %s, %i %s\nSitz der Abteilung:\t%s\nAbteilungsleiter:\t%s %s\n", searchMatch[i] + 1, abt[searchMatch[i]].name, abt[searchMatch[i]].adresseAbt.strasse, abt[searchMatch[i]].adresseAbt.hausnummer, abt[searchMatch[i]].adresseAbt.postleitzahl, abt[searchMatch[i]].adresseAbt.stadt, abt[searchMatch[i]].abteilungssitz, ltr[abt[searchMatch[i]].ltrRef].vorname, ltr[abt[searchMatch[i]].ltrRef].nachname);
			}

			printf("---------------------------------------------------------------------------------\n");
		}

		printf("Moechten sie einen Datensatz aendern?\n1. Aendern\n0. Abbrechen\n");

		do
		{
			printf("Ihre Auswahl: ");
			scanf("%i", &auswahl);

			switch (auswahl)
			{
			case 1:
				printf("Welchen Eintrag moechten sie aendern? Bitte Nummer eingeben: ");
				scanf("%i", &auswahl2);
				if (auswahl2 <= ind->abteilung && auswahl2 > 0)
				{
					temp = ind->abteilung;
					ind->abteilung = auswahl2 - 1;
					eingabeAbt(abt, ind);
					ind->abteilung = temp;
				}
				else
				{
					printf("Eintrag existiert nicht.\n");
				}
				break;
			case 10:																						//Vermeidung vom zusätzlichen Ausführen vom default case durch \n im Input Buffer
				break;
			default:
				if (auswahl != 0)
				{
					printf("Ungueltige Eingabe.\n");
				}
				getchar();
				break;
			}
		} while (auswahl != 0 && auswahl != 1);
	}
}

void searchLtr(mitarbeiter *ma, abteilung *abt, abteilungsleiter *ltr, index *ind)
{
	char eingabe[strLengthMAX];
	int i, ctr = 0, searchMatch[sizeMa], auswahl, temp, temp2, auswahl2, maIndex, tempRef[sizeAbtl];
	printf("Es wird in der Abteilungsleiterdatenbank gesucht.\nSuche: ");

	getchar();
	do
	{
		scanf("%[^\n]s", &eingabe);
		if (strlen(eingabe) > strLengthStd)
		{
			printf("Eingabe zu lang. Bitte erneut eingeben: ");
			getchar();
		}
	} while (strlen(eingabe) > strLengthStd);

	for (i = 0; i < ind->abteilungsleiter; i++)
	{
		if (compareSubString(eingabe, ltr[i].vorname) || compareSubString(eingabe, ltr[i].nachname) || compareSubString(eingabe, abt[ltr[i].abtRef].name))
		{
			searchMatch[ctr] = i;
			ctr++;
		}
	}

	getchar();

	if (ctr == 0)
	{
		printf("Ihre Suche ergab keine Treffer.\n");
		system("pause");
	}
	else
	{
		printf("Ihre Suche ergab folgende Treffer:\n\n");

		for (i = 0; i < ctr; i++)
		{
			printf("#%i:\nAbteilung:\t%s\nName:\t\t%s %s\nMobilnummer:\t%s\nFestnetznummer:\t%s\nE-Mail:\t\t%s\n", searchMatch[i] + 1, abt[ltr[searchMatch[i]].abtRef].name, ltr[searchMatch[i]].vorname, ltr[searchMatch[i]].nachname, ltr[searchMatch[i]].mobilnummer, ltr[searchMatch[i]].festnetznummer, ltr[searchMatch[i]].email);
			printf("---------------------------------------------------------------------------------\n");
		}

		do
		{
			printf("Moechten sie einen Datensatz aendern oder loeschen?\n1. Aendern\n2. Loeschen\n0. Abbrechen\n");
			printf("Ihre Auswahl: ");
			scanf("%i", &auswahl);

			switch (auswahl)
			{
			case 1:
				printf("Welchen Eintrag moechten sie aendern? Bitte Nummer eingeben: ");
				scanf("%i", &auswahl2);
				if (auswahl2 <= ind->abteilungsleiter && auswahl2 > 0)
				{
					/*Mitarbeiter Index herausfinden, den man ändern muss*/
					for (i = 0; i < ind->mitarbeiter; i++)
					{
						if (compareString(ma[i].vorname, ltr[auswahl2 - 1].vorname) && compareString(ma[i].nachname, ltr[auswahl2 - 1].nachname) && compareString(ma[i].mobilnummer, ltr[auswahl2 - 1].mobilnummer))
						{
							maIndex = i;
						}
					}

					getchar();
					temp = ind->abteilungsleiter;
					temp2 = ind->mitarbeiter;
					ind->abteilungsleiter = auswahl2 - 1;
					ind->mitarbeiter = maIndex;
					eingabeLtr(ltr, abt, ma, ind, nein, auswahl2);
					ind->abteilungsleiter = temp;
					ind->mitarbeiter = temp2;
				}
				else
				{
					printf("Eintrag existiert nicht.\n");
				}
				break;
			case 2:
				printf("Welchen Eintrag moechten sie loeschen? Bitte Nummer eingeben: ");
				scanf("%i", &auswahl2);

				if (auswahl2 < ind->abteilungsleiter && auswahl2 > 0)
				{
					ctr = 0;
					for (i = ltr[auswahl2 - 1].abtRef; i < ind->abteilung; i++)
					{
						tempRef[ctr] = abt[i].ltrRef;
						ctr++;
					}

					for (i = 0; i < ind->mitarbeiter; i++)
					{
						/*Mitarbeiter Index herausfinden, der gelöscht wird*/
						if (compareString(ma[i].vorname, ltr[auswahl2 - 1].vorname) && compareString(ma[i].nachname, ltr[auswahl2 - 1].nachname) && compareString(ma[i].mobilnummer, ltr[auswahl2 - 1].mobilnummer))
						{
							maIndex = i;
						}
					}
					/*Mitarbeiter Struct verschieben*/
					for (i = maIndex; i < ind->mitarbeiter - 1; i++)
					{
						ma[i].personalnummer = ma[i + 1].personalnummer;
						ma[i].abtRef = ma[i + 1].abtRef;
						strcpy(ma[i].vorname, ma[i + 1].vorname);
						strcpy(ma[i].nachname, ma[i + 1].nachname);
						strcpy(ma[i].adresseMA.strasse, ma[i + 1].adresseMA.strasse);
						strcpy(ma[i].adresseMA.hausnummer, ma[i + 1].adresseMA.hausnummer);
						ma[i].adresseMA.postleitzahl = ma[i + 1].adresseMA.postleitzahl;
						strcpy(ma[i].adresseMA.stadt, ma[i + 1].adresseMA.stadt);
						strcpy(ma[i].eintrittsdatum, ma[i + 1].eintrittsdatum);
						strcpy(ma[i].mobilnummer, ma[i + 1].mobilnummer);
						strcpy(ma[i].festnetznummer, ma[i + 1].festnetznummer);
						strcpy(ma[i].email, ma[i + 1].email);
					}

					/*Leiter Struct verschieben*/
					for (i = auswahl2 - 1; i < ind->abteilungsleiter - 1; i++)
					{
						ltr[i].abtRef = ltr[i + 1].abtRef;
						strcpy(ltr[i].vorname, ltr[i + 1].vorname);
						strcpy(ltr[i].nachname, ltr[i + 1].nachname);
						strcpy(ltr[i].mobilnummer, ltr[i + 1].mobilnummer);
						strcpy(ltr[i].festnetznummer, ltr[i + 1].festnetznummer);
						strcpy(ltr[i].email, ltr[i + 1].email);
					}

					for (i = 0; i < ctr-1; i++)
					{
						abt[auswahl2 + i].ltrRef = tempRef[i];
					}

					abt[ltr[auswahl2 - 1].abtRef - 1].ltrRef = -1;
					ind->abteilungsleiter--;
					ind->mitarbeiter--;
				}
				else if (auswahl2 == ind->abteilungsleiter)
				{
					for (i = 0; i < ind->mitarbeiter; i++)
					{
						/*Mitarbeiter Index herausfinden, der gelöscht wird*/
						if (compareString(ma[i].vorname, ltr[auswahl2 - 1].vorname) && compareString(ma[i].nachname, ltr[auswahl2 - 1].nachname) && compareString(ma[i].mobilnummer, ltr[auswahl2 - 1].mobilnummer))
						{
							maIndex = i;
						}
					}
					for (i = maIndex; i < ind->mitarbeiter - 1; i++)
					{
						ma[i].personalnummer = ma[i + 1].personalnummer;
						ma[i].abtRef = ma[i + 1].abtRef;
						strcpy(ma[i].vorname, ma[i + 1].vorname);
						strcpy(ma[i].nachname, ma[i + 1].nachname);
						strcpy(ma[i].adresseMA.strasse, ma[i + 1].adresseMA.strasse);
						strcpy(ma[i].adresseMA.hausnummer, ma[i + 1].adresseMA.hausnummer);
						ma[i].adresseMA.postleitzahl = ma[i + 1].adresseMA.postleitzahl;
						strcpy(ma[i].adresseMA.stadt, ma[i + 1].adresseMA.stadt);
						strcpy(ma[i].eintrittsdatum, ma[i + 1].eintrittsdatum);
						strcpy(ma[i].mobilnummer, ma[i + 1].mobilnummer);
						strcpy(ma[i].festnetznummer, ma[i + 1].festnetznummer);
						strcpy(ma[i].email, ma[i + 1].email);
					}
					abt[ltr[auswahl2 - 1].abtRef].ltrRef = -1;
					ind->abteilungsleiter--;
					ind->mitarbeiter--;
				}
				else
				{
					printf("Eintrag existiert nicht.\n");
				}
				break;
			case 10:																						//Vermeidung vom zusätzlichen Ausführen vom default case durch \n im Input Buffer
				break;
			default:
				if (auswahl != 0)
				{
					printf("Ungueltige Eingabe.\n");
				}
				getchar();
				break;
			}
		} while (auswahl != 0 && auswahl != 1 && auswahl != 2);
	}	
}

void search(mitarbeiter *ma, abteilung *abt, abteilungsleiter *ltr, index *ind)								// Hauptsuchfunktion in der man die Datenbank wählen kann, die man durchsuchen möchte
{
	int auswahl;
			
	do
	{
		system("cls");
		printf("In welcher Datenbank moechten sie einen Eintrag suchen?\n1. Mitarbeiter\n2. Abteilungen\n3. Abteilungsleiter\n0. Abbruch\n");
		printf("Ihre Auswahl: ");
		scanf("%i", &auswahl);

		switch (auswahl)
		{
		case 1:
			searchMa(ma, abt, ltr, ind);
			break;
		case 2:
			searchAbt(abt, ltr, ind);
			break;
		case 3:
			searchLtr(ma, abt, ltr, ind);
			break;
		default:
			if (auswahl != 0)
			{
				printf("Ungueltige Eingabe.\n");
			}
			getchar();
			break;
		}
	} while (auswahl != 0 && auswahl != 1 && auswahl != 2 && auswahl != 3);
	
	system("cls");
}