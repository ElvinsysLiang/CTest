/*

 *  In this program, I want to test some funtion about the string\
 *  include length, cmp, copy and so on.
 *  2016/10/25  by:Elvinsys
 */

#include <stdio.h>
#include <string.h>
#include <malloc.h>
int iFunStrlen(char* ipA);

int main(int argc, char** argv)
{
    char cArray[] = "good morning";
    char *cpArray = NULL;
    int iCount = iFunStrlen(cArray);
//    int iSize = 0;
//    int iFlag = 0;
    printf("The string is %s\n", cArray);
    printf("String iArray lenght is %d\n", iCount);
    printf("Now I want to test the string copy\n");
    cpArray = (char*)malloc(iCount);
    strcpy(cpArray, cArray);
    printf("Now I change the first element , g -> a in the string\n");
    cArray[0] = 'a';
    if(strcmp(cArray, cpArray) != 0)
    {
        printf("cArray has been changed, now there is :\n%s\n", cArray);
    }
    printf("Before free, cpArray length is %d\n", (int)strlen(cpArray));
    free(cpArray);
    printf("After free, the cpArray length is %d\n", (int)strlen(cpArray));
    if(sizeof(cpArray) != 0)
    {
        printf("cpArray size is %ld\n", sizeof(cpArray));
    }
    return 0;
}

int iFunStrlen(char* ipA)
{
    int iRet = 0;
    int iLen = 0;
    while (*ipA != '\0')
    {
        iLen++;
        ipA++;
    }
    iRet = iLen;
    return iRet;
}

