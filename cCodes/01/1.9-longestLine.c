/*
 *  In this programme, I want to put in some words and\
 *  count the longest line, print the line and number \
 *  of the words.
 *  2016/10/27    by:Elvinsys
 */
 
 #include <stdio.h>
 #include <string.h>
 
 #define LENMAX 1000
 #define ENTER '\n'
 #define ENDLINE '\0'
 #define FILEEND  1
 
 int iStatus = 0;
 
int iFunGetLine(char* cArray, int iNum);
int iFunCopyString(char* cpDest, char* cpSrc);
  
int main(int argc, char** argv)
 {
 	char cArrayGet[LENMAX];
 	char cArrayLongest[LENMAX];
 	memset(cArrayGet, 0, LENMAX);
 	memset(cArrayLongest, 0, LENMAX);
 	int iLongestLen = 0;
 	int iGetLen = 0;
 	printf("Now, please input some words:\n");
 	while((iGetLen = iFunGetLine(cArrayGet, LENMAX)) > 0)
 	{
 		printf("string cArrayGet is\n%s", cArrayGet);
 		if(iGetLen > iLongestLen)
 		{
 			iLongestLen = iGetLen;
 			iFunCopyString(cArrayLongest, cArrayGet);
 		}
 	}
 	printf("The longest line is %s\nthere %d words in the string.\n", cArrayLongest, iLongestLen);
 	
 	return 0;
 }
 
int iFunGetLine(char* cArray, int iNum)
 {
 	int iRet = 0;
 	int iIdx = 0;
	char cGetChar = 0;
 	
 	for(iIdx = 0; (iIdx < iNum - 2) && ((cGetChar = getchar()) != EOF) && (cGetChar != ENTER) ; iIdx++)
 	{
 		cArray[iIdx] = cGetChar;
 	}
 	iRet = iIdx;
 	if(cGetChar == '\n')
 	{
 		cArray[iIdx] = ENTER;
 		iIdx++;
 	}
 	cArray[iIdx] = ENDLINE;
 	
 	return iIdx-1;
 }
 
 int iFunCopyString(char* cpDest, char* cpSrc)
 {
 	int iRet = 0;
 	int iIdx = 0;
	for(iIdx = 0; cpSrc[iIdx] != ENDLINE; iIdx++)
	{
		cpDest[iIdx] = cpSrc[iIdx];
	}
	cpDest[iIdx] = ENDLINE;
	iRet = iIdx;
	return iRet;
 }
