#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: string paramter input
 *
 * Return : length of string
 *
*/

int _strlen(char *s)
{
	int counteri;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
