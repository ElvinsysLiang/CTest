#include <stdio.h>

int main(int argc, char ** argv)
{
	char cEOF = 0;
	while (cEOF != EOF)
	{
		cEOF = getchar();
	}
	printf("EOF is %d\n", cEOF);
	return 0;
}
