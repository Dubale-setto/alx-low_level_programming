#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (*(s + len))
	len++;

	for (len--; len >= 0; len--)
		_putchar(*(s + len));

	_putchar('\n');
}
