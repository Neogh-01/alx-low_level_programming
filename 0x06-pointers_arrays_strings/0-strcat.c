#include "main.h"

/**
 * _strcat - is a function that appends a string to a string
 * @dest: first parameter to be appended
 * @src: second parameter to be appended
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
int len = 0, i;
	while (dest[len])
		len++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
