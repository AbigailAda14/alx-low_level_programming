#include "main.h"
/**
 * reverse_array - function that reverse the content of an array of integers
 * @a: array
 * @n: integer
 * Return: 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
