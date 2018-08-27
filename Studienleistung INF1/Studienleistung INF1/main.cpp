#include <stdio.h>
#include "funcsNstructs.h"
#include <Windows.h>

void main()
{
	/*Deklaration der Variablen*/
	abteilung abtl[sizeAbtl];
	abteilungsleiter abtlLtr[sizeAbtl];
	mitarbeiter ma[sizeMa];
	index ind = { 0,0,0 };																							// Index initialisieren damit auch ohne Daten im Speicher gearbeitet werden kann
	int auswahl, i;
	char eingabe;

	/*Datensätze laden*/
	{
	FILE *maDtb;
	FILE *abtDtb;
	FILE *ltrDtb;
	FILE *inDtb;

	maDtb = fopen("maDtb.dtb", "rb");
	abtDtb = fopen("abtDtb.dtb", "rb");
	ltrDtb = fopen("ltrDtb.dtb", "rb");
	inDtb = fopen("inDtb.dtb", "rb");

	if (!(maDtb == NULL))											//Datei lesen sofern sie existiert
	{
		fread(&ma, sizeof(mitarbeiter), sizeMa, maDtb);
		fclose(maDtb);
	}

	if (!(abtDtb == NULL))											//Datei lesen sofern sie existiert
	{
		fread(&abtl, sizeof(abteilung), sizeAbtl, abtDtb);
		fclose(abtDtb);
	}

	if (!(ltrDtb == NULL))											//Datei lesen sofern sie existiert
	{
		fread(&abtlLtr, sizeof(abteilungsleiter), sizeAbtl, ltrDtb);
		fclose(ltrDtb);
	}

	if (!(inDtb == NULL))											//Datei lesen sofern sie existiert
	{
		fread(&ind, sizeof(index), 1, inDtb);
		fclose(inDtb);
	}
	}
	
	/*Menüsteuerung*/
	do
	{
		printf("\n\t------------Mitarbeiter- und Abteilungsverwaltung von Daddeldu Enterprise Ltd------------\n");
		printf("\t|\t\t\t\t\t\t\t\t\t\t\t|\n");
		printf("\t|\t\t1. Mitarbeiter in die Datenbank aufnehmen\t\t\t\t|\n");
		printf("\t|\t\t2. Abteilung in die Datenbank aufnehmen\t\t\t\t\t|\n");
		printf("\t|\t\t3. Abteilungsleiter in die Datenbank aufnehmen\t\t\t\t|\n");
		printf("\t|\t\t4. Mitarbeiterliste ausgeben\t\t\t\t\t\t|\n");
		printf("\t|\t\t5. Abteilungsliste ausgeben\t\t\t\t\t\t|\n");
		printf("\t|\t\t6. Abteilungsleiterliste ausgeben.\t\t\t\t\t|\n");
		printf("\t|\t\t7. Datensatz suchen\t\t\t\t\t\t\t|\n");
		printf("\t|\t\t8. Daten speichern\t\t\t\t\t\t\t|\n");
		printf("\t|\t\t9. Datenbank laden\t\t\t\t\t\t\t|\n");
		printf("\t|\t\t\t\t\t\t\t\t\t\t\t|\n");
		printf("\t|\t\t0. Programm beenden.\t\t\t\t\t\t\t|\n");
		printf("\t-----------------------------------------------------------------------------------------\n\n");
		printf("\t\t\tAuswahl: ");

		scanf("%i", &auswahl);

		switch (auswahl)
		{
		case 1:
			if (ind.abteilung == 0)																		// überprüfen ob bereits eine Abteilung existiert
			{
				printf("\t\t\tNoch keine Abteilung vorhanden.\n");
				printf("\t\t\tUm zurueck zum Hauptmenue zu gelangen ");
				system("pause");
				system("cls");
			}
			else																						// Funktion zur Eingabe von Mitarbeitern aufrufen und Mitarbeiterindex inkrementieren
			{
				eingabeMa(ma, abtl, &ind, ja);
				ind.mitarbeiter++;
				system("cls");
			}
			break;
		case 2:
			eingabeAbt(abtl, &ind);																		// Funktion zur Eingabe von Abteilungen aufrufen und Abteilungsindex inkrementieren
			ind.abteilung++;
			system("cls");
			break;
		case 3:
			if (ind.abteilung == 0)																		// überprüfen ob bereits eine Abteilung existiert
			{
				printf("\t\t\tNoch keine Abteilung vorhanden.\n");
				printf("\t\t\tUm zurueck zum Hauptmenue zu gelangen ");
				system("pause");
				system("cls");
			}
			else																						// Funktion zur Eingabe von Leitern aufrufen und Index von Mitarbeiter und Leiter inkrementieren
			{
				getchar();
				eingabeLtr(abtlLtr, abtl, ma, &ind, ja, nein);
				ind.mitarbeiter++;
				ind.abteilungsleiter++;
				system("cls");
			}
			break;			
		case 4:
			ausgabeMa(ma, abtl, abtlLtr, &ind);															// Funktion zur Ausgabe von Mitarbeitern aufrufen
			break;
		case 5:
			ausgabeAbt(abtl, abtlLtr, &ind);															// Funktion zur Ausgabe von Abteilungen aufrufen
			break;
		case 6:
			ausgabeLtr(abtlLtr, abtl, ind.abteilungsleiter);											// Funktion zur Ausgabe von Leitern aufrufen
			break;
		case 7:
			search(ma, abtl, abtlLtr, &ind);															// Funktion zur Suche von Einträgen
			break;
		case 8:
			saveAll(ma, abtl, abtlLtr, &ind);		// Funktion zum Speichern der Einträge
			printf("\t\t\tAlle Daten gespeichert.\n\t\t\t");
			system("pause");
			system("cls");
			break;
		case 9:
			getchar();
			do
			{
				printf("\t\t\tSind sie sich sicher(j/n)? ");											// Sicher gehen, ob der Benutzer wirklich neue Daten überschreiben möchte
				scanf("%c", &eingabe);
				getchar();
				if (eingabe == 'j')																		// Datensätze laden
				{
					FILE *maDtb;
					FILE *abtDtb;
					FILE *ltrDtb;
					FILE *inDtb;

					maDtb = fopen("maDtb.dtb", "rb");
					abtDtb = fopen("abtDtb.dtb", "rb");
					ltrDtb = fopen("ltrDtb.dtb", "rb");
					inDtb = fopen("inDtb.dtb", "rb");

					if (!(maDtb == NULL))											//Datei lesen sofern sie existiert
					{
						fread(&ma, sizeof(mitarbeiter), sizeMa, maDtb);
						fclose(maDtb);
					}

					if (!(abtDtb == NULL))											//Datei lesen sofern sie existiert
					{
						fread(&abtl, sizeof(abteilung), sizeAbtl, abtDtb);
						fclose(abtDtb);
					}

					if (!(ltrDtb == NULL))											//Datei lesen sofern sie existiert
					{
						fread(&abtlLtr, sizeof(abteilungsleiter), sizeAbtl, ltrDtb);
						fclose(ltrDtb);
					}

					if (!(inDtb == NULL))											//Datei lesen sofern sie existiert
					{
						fread(&ind, sizeof(index), 1, inDtb);
						fclose(inDtb);
					}
					printf("\t\t\tDaten geladen\n\t\t\t");
					system("pause");
					system("cls");
				}
				else if (eingabe == 'n')
				{
					printf("\t\t\tDaten nicht geladen\n\t\t\t");
					system("pause");
					system("cls");
				}
				else
				{
					printf("\t\t\tUngueltige Eingabe\n");
				}
			} while (eingabe != 'j' && eingabe != 'n');
			break;
		default:
			if (auswahl != 0)
			{
				printf("\t\t\tUngueltige Eingabe.\n\t\t\t");
				printf("%c", 7);
				system("pause");
				system("cls");
			}
			break;
		}
	} while (auswahl != 0);																				// Menüschleife aufrecht erhalten bis der Benutzer das Programm beenden möchte
}