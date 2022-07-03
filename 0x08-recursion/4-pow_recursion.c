#include "main.h"

/**
 * _pow_recursion - a funct that returns value of x raised to the power of y
 * @x: x the to be raised with a power
 * @y: the nth power number
 * Return: 1 if y is 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
