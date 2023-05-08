#include "main.h"
/**
 * char *_strstr - locates a substring
 * @needle: substring
 * @haystack: string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *r = haystack;
		char *s = needle;

		while (*r == *s && *s != '\0')
		{
			r++;
			s++;
		}
		if (*s == '\0')
			return (haystack);
	}
	return (0);
}
