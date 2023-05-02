#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string
 * Return: 0 (Success)
 */
void puts_half(char *str)
{
	int i;
	int n;
	int longi;

	longi = 0;
	for (i = 0; str[i] != '\0'; i++)
		longi++;

	n = (longi / 2);
	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
