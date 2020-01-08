#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(int argc, char** argv)
{
    printf("1 + 3 = %d\n", iFunAdd(1,3));
    printf("3 - 1 = %d\n", iFunSub(3,1));
    return 0;
}
