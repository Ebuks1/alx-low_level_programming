#include "main.h"
/**
 * _isdigit - Function that checks for digit 0 to 9
 * @c: digit to be checked
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
