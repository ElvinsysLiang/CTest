#include <stdio.h>

int main(int argc, char ** argv)
{
	char cChar = 0;
	int iFlag = 0;
	printf("This program funtion is, replace '\\b''\\t''\\\\', so input some character:\n");
	while ( (cChar = getchar()) != EOF )
	{
		iFlag = 0;
		if (cChar == '\t')
		{
			printf("\\t");
			iFlag = 1;
		}
		if (cChar == '\b')
		{
			printf("\\b");
			iFlag = 1;
		}
		if (cChar == '\\')
		{
			printf("\\\\");
			iFlag = 1;
		}
		if (iFlag != 1)
		{
			printf("%c", cChar);
		}
	}
	return 0;
}
