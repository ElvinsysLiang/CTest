#include <stdio.h>

#define INWORD 1
#define OUTWORD 0

int main(int argc, char ** argv)
{
	int iFlag = 0, nc = 0, nl = 0, nw = 0;
	
	char cChar = 0;
	
	while ((cChar = getchar()) != EOF)
	{
		++nc;
		if (cChar == '\n')
		{
			++nl;
		}
		if ((cChar == ' ') || (cChar == '\t') || (cChar == '\n'))
		{
			iFlag = OUTWORD;
		}
		else
		{
			if(iFlag == OUTWORD)
			{
				++nw;
				iFlag = INWORD;
			}
		}
	}
	printf("It have %d character, %d line and %d words.\n",nc, nl,nw);
	return 0;
}
