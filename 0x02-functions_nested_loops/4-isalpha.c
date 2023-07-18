#include"main.h"
/**
 *_isalpha  - checks if the letter is lower case
  *@c : is char to be checked
  *Return: 1 if char is loer case, otherwise 0.
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 66 && c <= 90))
	{
	return (1);
	}
		else
		{
			return (0);
		}
	_putchar('\n');
}
