#include "main.h"

/**
 * wildcmp - function that compares two strings
 *
 * @m1: first string
 * @m2: second string
 *
 * Return: 1 if identical and 0 if not
 */

int wildcmp(char *m1, char *m2)
{
	if (*m2 == '*' && *(m2 + 1) != '\0' && *m1 == '\0')
		return (0);
	if (*m1 == '\0' && *m2 == '\0')
		return (1);
	if (*m1 == *m2)
		return (wildcmp(m1 + 1, m2 + 1));
	if (*m2 == '*')
		return (wildcmp(m1, m2 + 1) || wildcmp(m1 + 1, m2));
	return (0);
}
