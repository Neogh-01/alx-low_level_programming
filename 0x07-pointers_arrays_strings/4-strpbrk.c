#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: a string with bytes to be searched
 * @accept: string with accepted bytes
 * Return: a pointer to s that matches accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;
		while (s[a])
		{
			b = 0;
			while (accept[b])
			{
				if (s[a] == accept[b])
				{
					s += a;
					return (s);
				}
				b++;
			}
			a++;
		}
	return ('\0');
}
