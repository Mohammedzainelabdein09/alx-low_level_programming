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
	int n1 = 0, n;

	for (; n1 <= 9; n1++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (n1 != n && n1 < n)
			{
				putchar(n1 + 48);
				putchar(n + 48);

				if  (n1 + n != 17)
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
