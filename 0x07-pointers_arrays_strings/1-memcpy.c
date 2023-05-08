#include "main.h"
/**
 * char *_memcpy - function that copies memory area
 * @n: number of bytes
 * @src: memory area
 * @dest: new memory area
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
