#include <stdio.h>

int main(int argc, char ** argv)
{
	int cChar = 0;
	printf("please input a character:\n");
	cChar = getchar();
	while( cChar != EOF )
	{
		putchar(cChar);
		cChar = getchar();
	}
	return 0;
}

 
