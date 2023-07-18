#include "main.h"

/**
 * Description: prints alphabet_x10 lowercase,followed by a new line.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		b++;
	}
}
