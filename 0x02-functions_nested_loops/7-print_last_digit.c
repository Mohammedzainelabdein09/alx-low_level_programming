#include"main.h"

/**
 * print_last_digit - print last digit
 *
 * @n:number input
 * Return: return ld lastdigit
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;
	_putchar(ld + '0');
	return (ld);

}
