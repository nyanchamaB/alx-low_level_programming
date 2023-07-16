#include <stdio.h>
/**
 * main - Entrt point
 *
 * Description: Print combination of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || (a == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		a++;
		b = '0';
	}
	putchar('\n');
	return (0);
}
