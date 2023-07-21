#include"main.h"
/**
  *_isdigit - checks if input is digit
  *
  *@c: input to be checked
  *
  *Return: 1 if digit, else 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
	{
		return (1);
	}
	return (0);
}
