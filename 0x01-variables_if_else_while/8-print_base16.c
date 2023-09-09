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
	int n;

	for (n = 48 ; n <= 102 ; n++)
	{
		putchar(n);

		if (n == 57)
			n += 39;
	}
	putchar('\n');
	return (0);
}
