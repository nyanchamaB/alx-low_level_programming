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
        int n = 0;
	int m;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			if (n != m && n < m)
			{
				putchar(n + 48);
				putchar(m + 48);

				if(n + m != 12)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
