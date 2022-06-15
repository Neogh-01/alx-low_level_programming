#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed in reverse
 *
 */
void print_rev(char *s)
{
	int i;
	for (i = strlen(s) - 1; i >= 0; i--)
		{
			printf("%c", s[i]);
		}
	printf("\n");
}
