#include "main.h"
/**
 * print_line - Function that draws straight line in the terminal
 * @n: numbers of time
 *
 * Return: 0
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
