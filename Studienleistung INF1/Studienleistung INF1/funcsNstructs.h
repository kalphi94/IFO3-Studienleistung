/*globale Variablen um magische Zahlen zu vermeiden*/
const int ja = 1;
const int nein = 0;
const int sizeMa = 100;
const int sizeAbtl = 20;
const int strLengthStd = 30;
const int strLengthHsnr = 10;
const int strLengthAbtlSitz = 50;
const int strLengthMail = ((strLengthStd * 2) + 14);											// Stringlänge der Mail Adresse maximal Vorname + Nachname + "@daddeldu.com"
const int strLengthMAX = 1000;


typedef struct
{
	char strasse[strLengthStd];
	char hausnummer[strLengthHsnr];
	int postleitzahl;
	char stadt[strLengthStd];
} adresse;

typedef struct
{
	char nachname[strLengthStd];
	char vorname[strLengthStd];
	int abtRef;
	char mobilnummer[strLengthStd];
	char festnetznummer[strLengthStd];
	char email[strLengthMail];
} abteilungsleiter;

typedef struct
{
	char name[strLengthStd];
	adresse adresseAbt;
	char abteilungssitz[strLengthAbtlSitz];
	int ltrRef = -1;																							// Initialisierung auf -1 um Fehler zu vermeiden
} abteilung;

typedef struct
{
	int personalnummer;
	char nachname[strLengthStd];
	char vorname[strLengthStd];
	char eintrittsdatum[8];																						// Länge vorgesehen für ein MM/JJJJ Format (Bsp.: '11/2016')
	adresse adresseMA;
	char mobilnummer[strLengthStd];
	char festnetznummer[strLengthStd];
	char email[strLengthMail];
	int abtRef;
} mitarbeiter;

typedef struct
{
	int mitarbeiter;
	int abteilung;
	int abteilungsleiter;
} index;

extern void replace(char string[strLengthAbtlSitz], char ges, char neu);

extern void replaceGrossKlein(char str[strLengthAbtlSitz]);

extern int compareString(char string1[strLengthAbtlSitz], char string2[strLengthAbtlSitz]);

extern int compareSubString(char subString[strLengthAbtlSitz], char sourceString[strLengthAbtlSitz]);

extern void eingabeMa(mitarbeiter *ma, abteilung *abt, index *ind, int erstEingabe);

extern void ausgabeMa(mitarbeiter *ma, abteilung *abt, abteilungsleiter *ltr, index *ind);

extern void eingabeAbt(abteilung *abtl, index *ind);

extern void ausgabeAbt(abteilung *abtl, abteilungsleiter *ltr, index *ind);

extern void eingabeLtr(abteilungsleiter *ltr, abteilung *abt, mitarbeiter *ma, index *ind, int erstEingabe, int abteilungsNummer);

extern void ausgabeLtr(abteilungsleiter *ltr, abteilung *abt, int index);

extern void saveAll(mitarbeiter *ma, abteilung *abtl, abteilungsleiter *ltr, index *ind);

extern void searchMa(mitarbeiter *ma, abteilung *abt, abteilungsleiter *ltr, index *ind);

extern void searchAbt(abteilung *abt, abteilungsleiter *ltr, index *ind);

extern void searchLtr(mitarbeiter *ma, abteilung *abt, abteilungsleiter *ltr, index *ind);

extern void search(mitarbeiter *ma, abteilung *abt, abteilungsleiter *ltr, index *ind);