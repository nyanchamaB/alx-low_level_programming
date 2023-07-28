#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * using at most n bytes from src
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * @n: number of bytes to be appended from src to dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int slen = 0;

	while (dest[i++])
		slen++;

	for (i = 0; src[i] && i < n; i++)
		dest[slen++] = src[i];

	return (dest);
}
