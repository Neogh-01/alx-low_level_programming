#include "main.h"
#include <string.h>

/**
 * _strncat - is a function concatenates two strings
 * @dest: first parameter to be appended
 * @src: second parameter to be appended
 * @n: nth parameter to be appended
 * Return: a pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
		strncat(dest, src, n);
			return (dest);
}
