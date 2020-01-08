#include <stdio.h>

int main(int argc, char ** argv)
{
	int iBlankFlag = 0;
	char cChar = 0;
	printf("Please input some character:");
	cChar = getchar();
	while( cChar != EOF )
	{
		if(cChar == ' ')
		{
			if(0 == iBlankFlag)
			{
				iBlankFlag = 1;
				printf("%c", cChar);
			}
		}
		else
		{
			iBlankFlag = 0;
			printf("%c", cChar);
		}
		cChar = getchar();
	}
	return 0;
}
