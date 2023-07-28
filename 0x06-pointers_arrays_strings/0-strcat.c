#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int slen = 0;

	while (dest[slen])
	{
		slen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[slen] = src[i];
		slen++;
	}
	dest[slen] = '\0';
	return (dest);
}
