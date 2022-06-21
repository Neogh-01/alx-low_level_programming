#include "main.h"
#include <string.h>

/**
 * _memcpy - a function that copies memory
 * @dest: destination memory after copy
 * @src: source memory to be copied
 * @n: nth memory bytes to be copied
 * Return: string copied from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
		for (a = 0; a < n; a++)
			dest[a] = src[a];
		return (dest);
}
