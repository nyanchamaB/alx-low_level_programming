#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: The character being checked
 *
 * Return: 1 for lowercase character and 0 one if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
