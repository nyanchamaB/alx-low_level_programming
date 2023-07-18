#include "main.h"

/**
 * _isalpha - Checks for alphabet character
 * @c: Character eing checked
 *
 * Return: 1 for alphabet character and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
