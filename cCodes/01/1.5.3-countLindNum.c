/*
 *  the funtion of this programme is to count   
 */

#include <stdio.h>

int main(int argc, char** argv)
{
	int iLineNum = 0;
	char cCharA = 0;
	
	while ((cCharA = getchar()) != EOF)
	{
		if(cCharA == '\n')
		{
			iLineNum++;
		}
	}
	
	printf("Number of Line is %d\n", iLineNum);
	return 0;
}
