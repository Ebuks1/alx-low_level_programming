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
	char alphabet = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
