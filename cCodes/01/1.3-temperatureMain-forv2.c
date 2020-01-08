#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20


int main(int argc, char ** argv)
{
	float fFahr = LOWER;
	float fCelsius = 0;
	for (; fFahr <= UPPER; fFahr += STEP)
	{
		fCelsius = (5.0 / 9.0) * (fFahr - 32);
		printf("%3.0f%6.1f\n", fFahr, fCelsius);
	}
	return 0;
}
