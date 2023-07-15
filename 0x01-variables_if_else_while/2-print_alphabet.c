#include <stdio.h>
/**
 * main - A program that prints alphabets in uppercase and a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
