#include<unistd.h>

/**
 * main - Entry point
 *
 * Description:Printting program
 *
 * Return:Always 1 (Success)
 *
*/

int main(void)
{
	char qts[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qts, 59);
	return (1);
}
