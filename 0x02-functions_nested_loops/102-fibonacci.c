#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 0;
	long b = 1, k = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%ld", b);
		else if (a == 1)
			printf(", %ld", k);
		else
		{
			k += b;
			b = k - b;
			printf(", %ld", k);
		}
		++a;
	}
	printf("\n");
	return (0);
}
