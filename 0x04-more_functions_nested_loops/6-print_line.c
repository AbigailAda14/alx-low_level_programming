#include "main.h"
/**
 * print_line - displays a straight line on the terminal
 * @n: number of times line is printed
 * Return: no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
