#include "main.h"

/**
 * _strlen_recursion - to get string length
 *
 * @m: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *m)
{
	if (*m == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compare each character of string
 *
 * @m: string
 * @str1: smallest iterator
 * @str2: largest iterator
 *
 * Return: int
 */

int compare_string(char *m, int str1, int str2)
{
	if (*(s + str1) == *(m + str2))
	{
		if (str1 == str2 || str1 == str2 + 1)
			return (1);
		return (0 + compare_string(m, str1 + 1, str2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a pallindrome
 *
 * @m: string to test
 *
 * Return: 1 if it is a pallundrome, 0 if not
 */
int is_palindrome(char *m)
{
	if (*m == '\0')
		return (1);
	return (compare_string(m, 0, _strlen_recursion(s) - 1));
}
