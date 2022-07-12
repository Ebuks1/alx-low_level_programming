#include "main.h"
/**
 * swap_int - function that swap value of two integers
 * @a: stores first value
 * @b: stores second value
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;
}
