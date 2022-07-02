#include <stdio.h>

/**
 * main - Prints z to a(reversed), one character at a time.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	for (character = 'z'; character >= 'a'; character--)
		putchar(character);

	putchar('\n');

	return (0);
}
