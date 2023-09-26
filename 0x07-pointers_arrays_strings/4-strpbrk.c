#include "main.h"

/**
 * _strpbk - function that searches a string for any of a set of bytes
 *
 * @s: the string to be searched
 * @accpet: the set of bytes to be scearched for 
 *
 * Return: if a set matched - a pointer to the matched bytes
 * if no set is matched - NULL
 */
	char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			return ('\0');
}
