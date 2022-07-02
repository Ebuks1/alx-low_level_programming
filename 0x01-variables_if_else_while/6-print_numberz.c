#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
