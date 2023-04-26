#include "main.h"
/**
 * print_alphabet - Entry prints the alphabet in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
