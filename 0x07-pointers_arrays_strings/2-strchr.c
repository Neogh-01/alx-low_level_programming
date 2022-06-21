#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string character
 * @c: another character being located
 * Return: NULL if the character is not found, or to pointer
 */
char *_strchr(char *s, char c)
{
	int a;
		while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
