#include"main.h"
/**
 * print_sign - print sign
 *
 * @n:number will be print its sign
 * Return: return 1 if "n" + and "-1" if "n" is - and 0 if "n" is 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else  if (n ==  0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}