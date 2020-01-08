/*
 *  2016/10/27    By:Elvinsys
 *  OK, now I want a programme to count the number of words and lines in a article
 *  
 */
 
 #include <stdio.h>
 
 #define INWORD 1 
 #define OUTWORD 0
 
 int main(int argc, char** argv)
 {
 	int iStatus = OUTWORD;
 	int iWCount = 0;
 	int iLCount = 0;
 	char cGetChar = 0;
 	printf("Please input some words:\n");
 	while ((cGetChar = getchar()) != EOF)
 	{
 		if((cGetChar != '\n') && (cGetChar != '\t') && (cGetChar != ' '))
 		{
 			if(iStatus == OUTWORD)
 			{
 				iStatus = INWORD;
 				iWCount++;
 			}
 		}
 		else
 		{
 			if(iStatus == INWORD)
 			{
 				iStatus = OUTWORD;
 			}
 			if(cGetChar == '\n')
 			{
 				iLCount++;
 			}
 		}
 		
 	}
 	printf("there have %d words and %d lines.\n", iWCount, iLCount);
 	return 0;
 }
