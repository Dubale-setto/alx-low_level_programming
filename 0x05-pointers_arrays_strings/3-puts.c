#include "main.h"
#include <stddef.h>
/**
*_puts - taks char
*@str: valu
*
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
