#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:C programm use printf function
 *
 * Return:Always 0 (Success)
 *
*/

int main(void)
{
	int n1, n;

	for (n1 = 0; n1 < 100; n1++)
	{
		for (n = 0; n < 100; n++)
		{
			if (n1 < n)
			{
				putchar((n1 / 10) + 48);
				putchar((n1 % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				if  (n1 != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
