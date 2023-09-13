#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Print alphabet from a to z
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	putchar('\n');
}
