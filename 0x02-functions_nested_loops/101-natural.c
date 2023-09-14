#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:C programm use printf sum of multiblay
 *
 * Return:Always 0 (Success)
 *
*/

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%i", sum);
	printf("\n");
	return (0);
}
