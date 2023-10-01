#include "main.h"

/**
 * _sqrt_a - find square root
 *
 * @x: int to find square root
 * @y: square root
 *
 * Return: int
 */

int sqrt_a(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt_a(x, y + 1));
}

/**
 * -sqrt_recursion - returns the natural square
 *  root of a number
 * @n: input number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
