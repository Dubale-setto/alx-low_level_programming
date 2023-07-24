#include "main.h"
/**
* _strlen - checks lenght
*@s: input
*Return: returns the length of a string.
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	len++;
	return (len);
}
