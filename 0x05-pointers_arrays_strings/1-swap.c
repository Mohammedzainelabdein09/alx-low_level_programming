#include "main.h"

/**
 * swp_int - swps  values of two intogers
 *         using two paramters
 *
 * @a: input paramter 1
 * @b: input paramter 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
