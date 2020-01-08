#include <stdio.h>

#define INWORD 1
#define OUTWORD 0

int main(int argc, char ** argv)
{
	int iState = 0;
	char cChar = 0;
	while ((cChar = getchar()) != EOF)
	{
		if ( (cChar == ' ') || (cChar == '\n') || (cChar == '\t'))
		{
			if (iState == INWORD)
			{
				putchar('\n');
				iState = OUTWORD;
			}
		}
		else
		{
			iState = INWORD;
			putchar(cChar);
		}
	}
	return 0;
}
