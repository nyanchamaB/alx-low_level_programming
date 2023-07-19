#include <stdio.h>

/**
 * main - Prints the sum of even Fibanocci numbers
 * Less than 4000000
 * Return: Nothing 
 */

int main(void)
{
	int a = 0;
	long b = 1, k = 2, sum = k;

	while (k + b < 4000000)
	{
		k += b;
		if (k % 2 == 0)
			sum += k;
		b = k - b;
		++a;
	}
	printf("%ld\n", sum);
	return (0);
}
