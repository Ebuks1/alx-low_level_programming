#include "main.h"
/**
 * _strspn - function that get lenghth of a prefixed string
 * @s: pointers that stores value
 * @accept: accepted string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
