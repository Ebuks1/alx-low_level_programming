#include "main.h"
/**
 * _strpbrk - function that searches string
 * @s: pointer that stores string
 * @accept: accept the value
 *
 * Return: to bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
