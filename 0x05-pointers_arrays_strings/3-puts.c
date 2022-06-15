#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string with puts into stdout
 * @str: char str input
 * Return: Always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		{
			_putchar(*str);
		}
	_putchar('\n');
}
