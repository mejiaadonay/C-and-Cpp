/*
	ASCII.c Source Code
	Written by Jose Escobar Mejia
	Date: March 21, 2016 @ 3:15.00 PM
*/

#include <stdio.h>

int main() {

	unsigned char ch; // Unsigned char to avoid comparison out of range

	puts("***************");
	puts("* ASCII TABLE *");
	puts("* CODE = CHAR *");
	puts("***************");
	for(ch = 32; ch < 128; ++ch)
		printf("   %3d = '%c'\n", ch, ch);

	return(0); 
}