#include "math.h"
#include <stdio.h>
/**
 * main - prints largest prime factor of number 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
	long x, mxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			mxf = number / x;
		}
	}
	printf("%ld\n", mxf);
	return (0);
}
