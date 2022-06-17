#include "main.h"

/**
 * string_toupper - a function to convert string lettercase to upper case
 * @x: string parameter
 * Return: a pointer to a string
 */
char *string_toupper(char *x)
{
	int i = 0;
	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
		x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
