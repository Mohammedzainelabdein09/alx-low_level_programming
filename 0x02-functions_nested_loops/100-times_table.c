#include"main.h"
/**
 * print_times_table - print time table
 * @n:number will find its timetable
*/

void print_times_table(int n)
{
	int i, j, multi;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			printf("0");
			for (j = 1; j <= n; j++)
			{
				multi = i * j;
				if (j <= n)
				{
					printf(",");
					if (multi >= 0 && multi <= 9)
						printf("   ");
					else if (multi >= 10 && multi <= 99)
						printf("  ");
					else if (multi >= 100 && multi <= 999)
						printf(" ");
				}
				printf("%i", multi);
			}
			printf("\n");
		}
	}
}
