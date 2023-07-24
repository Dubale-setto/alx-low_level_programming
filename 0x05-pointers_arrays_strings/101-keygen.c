#include "main.h"

//**
 * _atoi - converts a string to an integer.
 *
 * @s: pointer to the string.
 *
 * Return: the integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
	if (*s == '-')
		sign *= -1;
	else if (*s >= '0' && *s <= '9')
		num = num * 10 + (*s - '0');
	else if (num > 0)
		break;

	s++;
	}

	return (num * sign);
}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int sum = 0;
	char password[100];

	srand(time(NULL));

	for (i = 0; sum < 2772 - 122; i++)
	{
	password[i] = rand() % 94 + 33;
	sum += password[i];
	}

	password[i] = 2772 - sum;

	printf("%s", password);

	return (0);
}














