#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print single digit of base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
