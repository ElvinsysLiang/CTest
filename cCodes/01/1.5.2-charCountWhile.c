#include <stdio.h>

int main(int argc, char ** argv)
{
	long lCharCount = 0;
	char cChar = 0;
	cChar = getchar();
	while ( cChar != EOF )
	{
		lCharCount++;
		cChar = getchar();
	}
	printf("There have %d character.\n", lCharCount);
	return 0;
}
