#include <stdio.h>

int main(int argc, char ** argv)
{
	long lCharCount = 0;
	printf("please input some character:");
	char cChar = getchar();
	for( ; cChar != EOF; lCharCount++)
	{
		cChar = getchar();
	}
	printf("charCount is %ld", lCharCount);
	
	return 0;
}
