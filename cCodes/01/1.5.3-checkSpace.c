#include <stdio.h>

int main(int argc, char ** argv)
{
	char cChar = 0;

	long lSpaceCount = 0;
	printf("Please input some character:");
	cChar = getchar();
	while(cChar != EOF)
	{
		if(cChar == ' ')
		{
			lSpaceCount++;
		}
		cChar = getchar();
	}
	printf("Space count are %ld\n", lSpaceCount);

	return 0;
}
