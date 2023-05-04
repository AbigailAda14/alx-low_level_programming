#include "main.h"
/**
 * char *string_toupper - function that changes lowercase to uppercase
 * @n: string
 * Return: 0 (Success)
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
	if (n[i] >= 'a' && n[i] <= 'z')
		n[i] = n[i] - 32;
	i++;
	}
	return (n);
}
