/*
	typer.c @ Source Code
	Written by: Jose Escobar Mejia
	Date: 3:21.00 PM
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

	puts("Start typing");
	puts("Press ~ then enter to stop");
	/*
	char ch;
	for(;;)
	{
		ch = getchar();
		if(ch == '~')
		{
			break;
		}
	}
	*/
	while(getchar() != '~');	// Working inside out with the getchar
								// This is equivalent to the commented code above and you saved to declare 	
								// the char varibale since no data is stored.
	printf("Thanks!\n");
	return(0);
}