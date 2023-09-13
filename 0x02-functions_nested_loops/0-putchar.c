#include "main.h"

/**
 * main - Entry point
 *
 * Description:C programm use printf function
 *
 * Return:Always 0 (Success)
 *
*/

int main(void)
{
	char myput[] = "_putchar";
	int ch;

	for (ch = 0; ch <= 7; ch++)
	{
		_putchar(myput[ch]);
	}
	_putchar('\n');
	return (0);
}
