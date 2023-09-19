#include "main.h"

/**
 *print_rev - print rev
 * @s: pointer
 */

void print_rev(char *s)
{
	int i, j, x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		x = x + 1;
	}
	for (j = x - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
