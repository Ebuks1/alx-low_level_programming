#include "main.h"
/**
 * puts_half - function that print seconf half of a string
 * @str: string to use
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int length = 0, i;

	while (length >= 0)
	{
		if (str[length] == '\0')
			break;
		length++;
	}

	if (length % 2 == 1)
		i = length / 2;
	else
		i = (length - 1) / 2;
	for (i++; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
