#include <stdio.h>

int main(int argc, char ** argv)
{
	int fahr, celsius, upper, lower, step;
	step = 20;
	lower = 0;
	upper = 300;
	fahr = lower;
	celsius = 0;
	while ( fahr <= upper )
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
