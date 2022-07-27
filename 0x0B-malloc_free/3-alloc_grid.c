#include "main.h"
/**
 * alloc_grid - pointer to a 2 dimensional array
 * @width: width of array one
 * @height: height of array two
 *
 * Return: if width and height is negative or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **) malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(p + i) = (int *)malloc(width * sizeof(int));
		if (*(p + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(*(p + j));
			free(p);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(p + i) + j) = 0;

	return (p);
}
