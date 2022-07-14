#include "main.h"
/**
 * string_toupper - funvtion that prints lowercase character to uppercase
 * @c: pointer to be checked
 *
 * Return: pointer
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	}

	return (c);
}
