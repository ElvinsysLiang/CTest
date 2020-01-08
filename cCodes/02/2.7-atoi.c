#include <stdio.h>

#define BUFFMAX 1024

int myAtoi(char arry[]);

int main(int argc, char ** argv)
{
	char arryA[BUFFMAX];
	char arryB[BUFFMAX];
	int iA = 0, iB = 0;
	printf("This program test a simple atoi funtion\n");
	printf("OK, input two string of number\n");
	printf("a=");
	scanf("%s", arryA);
	printf("b=");
	scanf("%s", arryB);
	iA = myAtoi(arryA);
	iB = myAtoi(arryB);
	printf("So, iA + iB = %d\n", iA + iB);
	return 0;
}

int myAtoi(char arry[])
{
	int iRet = 0;
	int iIdx = 0;
	for(iIdx = 0; (arry[iIdx] >= '0') && (arry[iIdx] <= '9'); iIdx++)
	{
		iRet = iRet * 10 + arry[iIdx] - '0'; 
	}
	return iRet;
}


















