#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer
 * @b: integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
