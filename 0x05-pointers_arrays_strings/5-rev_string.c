#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s: pointer to be reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{

	int length = 0, j, i;
	char v1, v2;

	while (length >= 0)
	{
		if (s[length] == '\0')
			break;
		length++;
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
