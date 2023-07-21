#include"main.h"
/**
*print_numbers - prints 0-9 ecept 2 & 4
*
*
*Return; 0 always sucess
*/
void print_most_numbers(void)
	{
	int n;

for (n = 48; n <= 57; n++)
	{
	if (n == 50 || n == 52)
		continue;
	_putchar(n);
	}
	_putchar('\n');
}
