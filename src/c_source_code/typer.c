#include <stdio.h>

int main() {
	char ch;

	puts("Start typing");
	puts("Press ~ then enter to stop");

	for(;;)
	{
		ch = getchar();
		if(ch == '~')
		{
			break;
		}
	}

	printf("Thanks!\n");
	return(0);
}