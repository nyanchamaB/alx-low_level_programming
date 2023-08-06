#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to search within (haystack)
 * @needle: the substring to find (needle)
 *
 * Return: 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
