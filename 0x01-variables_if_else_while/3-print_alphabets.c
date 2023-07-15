#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints lowercase and uppercase alphabets
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 97; /* ASCII value of 'a' */
	int m = 65; /*ASCII value of 'B' */

	/* print lowercase alphabet */
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	/* print uppercase alphabet */
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
