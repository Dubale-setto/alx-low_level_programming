#include "main.h"
#include <unistd.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: integer value
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	return;

	for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
	{
		if ((i * j) > 99)
			_putchar(((i * j) / 100) + '0');
	else
	_putchar(' ');

	if ((i * j) > 9)
		_putchar((((i * j) / 10)) % 10 + '0');
	else
		_putchar(' ');

	_putchar(((i * j) % 10) + '0');

	if (j != n)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
}
}

