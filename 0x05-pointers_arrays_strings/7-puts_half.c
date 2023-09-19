#include "main.h"

/**
 *puts_half - string to stdout
 * @str: pointer
 */

void puts_half(char *str)
{
	int i, length = 0, start;

	for (length = 0; str[length] != '\0'; length++)
		length = length;
	if (length % 2 != 0)
		start = length + 1;
	else
		start = length;
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
