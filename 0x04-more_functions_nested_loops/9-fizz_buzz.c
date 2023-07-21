#include <stdio.h>
#include"main.h"
/**
 * main - write fiz buz
 * Return: 0 sucess
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 15 == 0)
		printf("FizzBuzz ");
	else if (i % 3 == 0)
		printf("Fizz ");
	else if (i % 5 == 0)
		printf("Buzz ");
	else
		printf("%d ", i);
	if (i < 100)
	printf(" ");
	}
	return (0);
}


