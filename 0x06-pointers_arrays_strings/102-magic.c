#include <stdio.h>
/**
 * main - entry point
 * Description: Add one line to this code, so the program prints a[2] = 98
 * Return: 0 (Success)
 */
int main(void)
{
	char a[] = {97, 98, 99, 100, 101};
	char *p;

	p = &a[0];

	printf("[2] = %d\n", *(p + 2));

	if (*p == 97)
	{
		printf("p points to the first element of array a.\n");
	}
	return (0);

}
