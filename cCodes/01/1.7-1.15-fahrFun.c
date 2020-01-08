#include <stdio.h>\

#define STEP  20

void printTemperature(int, int, int);

int main(int argc, char ** argv)
{
	int iUpper = 0, iLower = 0, iStep = 0;
	printf("This program will take the fahr upper and lower change into the celsius\n");
	printf("So now, please input the fahr upper, lower, and step.(there int data, and 0~3000)\n");
	scanf("%d %d %d", &iLower, &iUpper, &iStep);
	printTemperature(iLower, iUpper, iStep); 
	return 0;
}

void printTemperature(int iLower, int iUpper, int iStep)
{
	float iCelsius = 0, iFahr = iLower;
	while (iFahr <= iUpper)
	{
		iCelsius = (5.0 / 9.0) * (iFahr - 32);
		printf("%3.0f%6.1f\n", iCelsius, iFahr);
		iFahr += iStep;
	}
	
}
