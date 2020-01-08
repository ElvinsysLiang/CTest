#include <stdio.h>

int main(int argc, char ** argv)
{
	float upper = 300.0;
	float lower = 0.0;
	float step = 20.0;
	float celsius = 0;
	float fahr = lower;
	for(;fahr <= upper; fahr += step)
	{
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f%7.1f\n", fahr, celsius);
	} 
	return 0;
}
