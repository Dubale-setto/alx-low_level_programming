#include <stdio.h>
/**
*main -entry point
*return : always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of short int: %d byte(s)\n", sizeof(short int));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	printf("Size of double: %d byte(s)\n", sizeof(double));
	printf("Size of long double: %d byte(s)\n", sizeof(long double));	
	return (0);
}

