#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string to use
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int set = 1, j = 0;
	unsigned int m = 0;

	while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
	{
		if (s[j] == '-')
			set *= -1;
		j++;
	}
	while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
	{
		m = (m * 10) + (s[j] - '0');
		j++;
	}
	m *= set;
	return (m);
}
