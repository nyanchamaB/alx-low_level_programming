#include "main.h"

/**
 * _isupper - A fuction that checks for uppercase character
 * @c: character to be checked
 * Return: 1 if uppercse and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	return (0);
}
