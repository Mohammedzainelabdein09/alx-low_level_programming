#include "main.h"

/**
 * _put_recursion - function that prints a string, followed by a new line
 *
 * @s: pointer to string
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putschar('\n');
	}
	else
	{
		_putschar(*s);
		_puts_recursion(s + 1)
	}
}
