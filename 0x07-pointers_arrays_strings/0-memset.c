#include "main.h"
#include <string.h>

/**
 * _memset - a function that fills memory
 * @s: string to be appended
 * @b: a character that appends the string
 * @n: nth bytes of the memory to  change
 * Return: a pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
		for (a = 0; a < n; a++)
			s[a] = b;
		return (s);
}
