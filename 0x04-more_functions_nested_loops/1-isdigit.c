#include "maih.h"

/**
 * _isdigit - A function that checks a digit 0 through 9
 * @c: A number to be checked
 * Return: 1 if a character returns a digit 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
