#include "main.h"
/**
 * char *_memset - function that fills memory with a constant byte
 * @s: memory to be filled
 * @n: number of bytes
 * @b: constant byte
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
