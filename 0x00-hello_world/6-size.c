#include<stdio.h>

/**
 * main - Enter
 *
 *Description:C program that print the size of various computer types
 * 
 * Return:Always  0 (Success)
 *
 */

int main(void)
{

printf("Size of a char: %lu beyte(s)\n",(unsigned long)sizeof(char));
printf("Size of an int: %lu beyte(s)\n",(unsigned long)sizeof(int));
printf("Size of a long int: %lu beyte(s)\n",(unsigned long)sizeof(long int));
printf("Size of a long long int: %lu beyte(s)\n",(unsigned long)sizeof(long long));
printf("Size of a float: %lu beyte(s)\n",(unsigned long)sizeof(float));
return (0);
}
