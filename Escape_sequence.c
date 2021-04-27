#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
	printf("This program is showing the escape sequences in C and C++.\n");
	printf("English version\n");
	printf("Presented by Vilquid - GitHub\n\n\n");

	printf("Audible bell - alert :\n");
	printf("    Notation : \\a\n");
	printf("    Code ASCII : 07\n");
	printf("    Abbreviation : BEL\n\n");

	printf("Backspace\n");
	printf("    Notation : \\b\n");
	printf("    Code ASCII : 08\n");
	printf("    Abbreviation : BS\n\n");

	printf("Form feed\n");
	printf("    Notation : \\f\n");
	printf("    Code ASCII : 0C\n");
	printf("    Abbreviation : FF\n\n");

	printf("Line feed\n");
	printf("    Notation : \\n\n");
	printf("    Code ASCII : 0A\n");
	printf("    Abbreviation : LF\n\n");

	printf("Carriage return\n");
	printf("    Notation : \\r\n");
	printf("    Code ASCII : 0D\n");
	printf("    Abbreviation : CR\n\n");

	printf("Horizontal tab\n");
	printf("    Notation : \\t\n");
	printf("    Code ASCII : 09\n");
	printf("    Abbreviation : HT\n\n");

	printf("Vertical tab\n");
	printf("    Notation : \\v\n");
	printf("    Code ASCII : 0B\n");
	printf("    Abbreviation : VT\n\n");

	printf("Others escape sequences :\n");
	printf("Notation : \\, code ASCII : 5C, abbreviation : \\ \n");
	printf("Notation : \\', code ASCII : 2C, abbreviation : '\n");
	printf("Notation : \\*, code ASCII : 22, abbreviation : *\n");
	printf("Notation : \\?, code ASCII : 3F, abbreviation : ?\n");
	printf("Notation : \\0, code ASCII : C1, abbreviation : NUL\n");

	return 0;
}