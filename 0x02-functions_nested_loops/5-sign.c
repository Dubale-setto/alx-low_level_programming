#include"main.h"
/**
 *print_sign  - checks if the letter is lower case
  *@c : is char to be checked
  *Return: 1 if char is loer case, otherwise 0.
  */
int print_sign(int n)
{
	if (n >0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return(0);
	}
	else
	{
		_putchar(48);
		return(0);
		}
	_putchar('\n');
}
