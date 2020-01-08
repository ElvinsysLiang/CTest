/*
 *  this file often be used to write some test code
 *  
 *  
 */
 
 #include <stdio.h>
 #include <string.h>
 #include <conio.h>
 
void getString(char* cArray, int iNum);
 
 int main(int argc, char** argv)
 {
	char cArray[10];
	memset(cArray, 0, 10);
	printf("Now, cArray is %s\n", cArray);
	getString(cArray, 10);
	printf("After change, cArray become:\n%s\n",cArray);
    return 0;
 }
 
void getString(char* cArray, int iNum)
 {
 	char cGetChar = 0;
 	int iIdx = 0;
 	for(iIdx = 0;  ((cGetChar = getch()) != EOF) && (iIdx < iNum-1); iIdx++)
 	{
 		cArray[iIdx] = cGetChar;
 	}
 	cArray[iIdx] = '\0';
 	
 }
