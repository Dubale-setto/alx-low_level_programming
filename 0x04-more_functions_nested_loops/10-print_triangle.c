#include"main.h"

/**
 * print_triangle - Prints triangle
 *@size:  triangle size
*Return: return tr
  *
  */



void print_triangle(int size)
{
	int i, j;
		if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= i; j++)
	{
		_putchar('#');
		}
		_putchar('\n');
		}
	}
}
