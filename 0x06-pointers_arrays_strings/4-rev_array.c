#include "main.h"
/**
 * reverse_array - function that reverses the content of a string
 * @a: an array of integers
 * @n: numbers of element to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
