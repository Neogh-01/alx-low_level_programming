#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copyies a string
 * @dest: first parameter to be appended
 * @src: parameter to be appended
 * @n: nth parameter to be appended
 * Return:a pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
