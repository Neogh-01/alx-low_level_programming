#include "main.h"

/**
 *
 * _isupper - checks for uppercase character
 * @c: character to be checked for uppercase 
 * Return: 1 if uppercase, returns 0 if not uppercase
 **/

int _isupper(int c) 
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
