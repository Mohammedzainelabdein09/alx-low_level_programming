#include "main.h"

/**
 * sqrt_a - find square root
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
