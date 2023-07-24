#include "main.h"
/**
  *swap_int - swaps value
  *@a: input 1
  *@b: input 2
  *
  */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
