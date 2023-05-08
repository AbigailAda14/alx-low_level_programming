#include "main.h"
/**
 * char *_strchr - locates a character in a string
 * @c: character
 * @s: string
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
