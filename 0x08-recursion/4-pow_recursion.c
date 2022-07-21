#include "main.h"
/**
 * _pow_recursion - funtion that raise value to power of y
 * @x: the value to multiply
 * @y: times to multiply
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result *= _pow_recursion(x, y - 1);
	return (result);
}
