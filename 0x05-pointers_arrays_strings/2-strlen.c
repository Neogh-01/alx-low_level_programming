# include "main.h"
#include <string.h>

/**
 * _strlen - prints string length
 * @s: string input
 * Return to lenght of the string
*/
int _strlen(char *s);
{
	int len;
	for (; *s != '\0'; s++)
		{
			len + = 1;
		}
	return (len);
}
