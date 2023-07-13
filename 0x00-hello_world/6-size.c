#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of short int: %d byte(s)\n", sizeof(short int));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of double: %d byte(s)\n", sizeof(double));
	printf("Size of long double: %d byte(s)\n", sizeof(long double))
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
