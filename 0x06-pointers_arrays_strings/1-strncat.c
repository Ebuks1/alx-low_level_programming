#include "main.h"
/**
 * _strncat - function that concatenate two string
 * @dest: destination string
 * @src: source string
 * @n: third string
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
