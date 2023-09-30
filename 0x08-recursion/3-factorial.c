#include "main.h"

/**
 * factorial - function that return the facrorial of a given number
 *
 * @n: number will calcolate its factorial
 *
 * Return: Nothing
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
