#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Print alphabet from a to z 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
