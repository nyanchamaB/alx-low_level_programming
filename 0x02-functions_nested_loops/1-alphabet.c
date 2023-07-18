#include "main.h"
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase followed by new line
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
