#include "main.h"

/**
 *rev_string - print rev
 * @s: pointer
 */

void rev_string(char *s)
{
	int a, i;
	char tmp;

	for (a = 0; s[a] != '\0'; ++a)
		;
	for (i = 0; i < a / 2; i++)
	{
		tmp = s[i];
		s[i] = s[a - 1 - i];
		s[a - 1 - i] = tmp;
	}
}
