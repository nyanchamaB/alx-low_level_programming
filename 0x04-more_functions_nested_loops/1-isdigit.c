#include "maih.h"

/**
 * _isdigit - Checks for a character digit
 * @x: A number to be checked
 * Return: 1 if a character returns a digit 0 if otherwise
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
