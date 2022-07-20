#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination value
 * @src: source value
 * @n: copy limit
 *
 * Return: dest value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
