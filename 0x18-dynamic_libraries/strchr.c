#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to the string to be searched
 * @c: the character to be located
 *
 * Return: a pointer to 1st occurrence of the character c in string s or NULL
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
