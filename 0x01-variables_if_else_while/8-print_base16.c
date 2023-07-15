#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print base 16 numbers in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 108; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
