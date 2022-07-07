#include "main.h"
/**
 * print_most_numbers - print 0 to 9 followed by a new line
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		if (b != '2' && b != '4')
			_putchar(b);
	}
	_putchar('\n');
}
