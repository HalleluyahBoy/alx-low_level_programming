#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\n') /*Declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);/* values null*/
}
