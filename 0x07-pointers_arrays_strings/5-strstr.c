#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @needle: paramenter of the substring
 * @haystack: string
 * Return: a pointer to start of found sub, or NULL if the sub is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;
		while (haystack[a])
		{
			while (needle[b])
			{
				if (haystack[a + b] != needle[b])
				{
					break;
				}
				b++;
			}
				if (needle[b] == '\0')
			{
				return (haystack + a);
			}
			a++;
		}
	return ('\0');
}
