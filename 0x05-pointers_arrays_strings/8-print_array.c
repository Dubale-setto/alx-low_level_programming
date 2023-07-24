#include "main.h"
#include <stdio.h>
/**
 * print_array - prints every other character of a string
 * @a: string to be printed
 *@n: string to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != n - 1)
		printf(", ");
		}
	printf("\n");
}

