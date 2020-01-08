#include <stdio.h>

int main(int argc, char ** argv)
{
	float fahr, celsius, upper, lower, step;
	step = 20;
	lower = 0;
	upper = 300;
	fahr = lower;
	celsius = 0;
	while ( fahr <= upper )
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f\t%3.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
