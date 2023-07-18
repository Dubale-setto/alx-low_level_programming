#include"main.h"
/**
 *_islower  - checks if the letter is lower case
  *@c : is char to be checked
  *Return: 1 if char is loer case, otherwise 0.
  */

int _islower(int c)
{
	if (c >= 97  && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
