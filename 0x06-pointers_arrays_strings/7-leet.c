#include "main.h"
/**
 * leet - functions that encodes string into 1337
 * @n: pointer that stores character
 *
 * Return: character
 */
char *leet(char *n)
{
	int i, k;
	char c[] = "aAeEoOtTlL";
	char t[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (k = 0; c[k] != '\0'; k++)
		{
			if (n[i] == c[k])
			{
				n[i] = t[k];
			}
		}
	}
	return (n);
}
