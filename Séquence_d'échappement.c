#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
	printf("Ce programme vous montre les séquences d'échappement possibles en C et C++.\n");
	printf("Version française\n");
	printf("Présenté par Vilquid - GitHub\n\n\n");

	printf("Alarm :\n");
	printf("    Notation : \\a\n");
	printf("    Code ASCII : 07\n");
	printf("    Abbréviation : BEL\n");

	printf("Retour arrière\n");
	printf("    Notation : \\b\n");
	printf("    Code ASCII : 08\n");
	printf("    Abbréviation : BS\n\n");

	printf("Saut de page\n");
	printf("    Notation : \\f\n");
	printf("    Code ASCII : 0C\n");
	printf("    Abbréviation : FF\n\n");

	printf("Saut de ligne\n");
	printf("    Notation : \\n\n");
	printf("    Code ASCII : 0A\n");
	printf("    Abbréviation : LF\n\n");

	printf("Retour chariot\n");
	printf("    Notation : \\r\n");
	printf("    Code ASCII : 0D\n");
	printf("    Abbréviation : CR\n\n");

	printf("Tabulation horizontale\n");
	printf("    Notation : \\t\n");
	printf("    Code ASCII : 09\n");
	printf("    Abbréviation : HT\n\n");

	printf("Tabulation verticale\n");
	printf("    Notation : \\v\n");
	printf("    Code ASCII : 0B\n");
	printf("    Abbréviation : VT\n\n");

	printf("Autres séquences d'échappement :\n");
	printf("Notation : \\, code ASCII : 5C, abbréviation : \\ \n");
	printf("Notation : \\', code ASCII : 2C, abbréviation : '\n");
	printf("Notation : \\*, code ASCII : 22, abbréviation : *\n");
	printf("Notation : \\?, code ASCII : 3F, abbréviation : ?\n");
	printf("Notation : \\0, code ASCII : C1, abbréviation : NUL\n");

	return 0;
}