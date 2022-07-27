#include "main.h"
/**
 * create_array - create n array of char
 * @size: size of array
 * @c: array of char
 *
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *i;

	if (size == 0)
		return (NULL);
	i = malloc(size * sizeof(char));
	if (i == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		i[y] = c;
	}
	return (i);
}
