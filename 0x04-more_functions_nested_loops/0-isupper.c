#include"main.h"
/**
  *_isupper - identifies if upper case
  *
  *@c: input to be checked
  *Return: Returns 1 if upper &  else 0
  */
int _isupper(int c)
{
	if (c <= 90  && c >= 65)
	{
		return (1);
	}
	return (0);
}

