#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible combination of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{       
        int a = 0;
	int b, c;

	while (a <= 9)
	{
		b = 0;
		while (c <= 9)
		{
			if (a != b && a < b && b != c && b < c)
			{
				putchar(a + 48);
				putchar(b + 48);
				putchar(c + 48);
				if (a + b + c != 24)
				{
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}		                 
