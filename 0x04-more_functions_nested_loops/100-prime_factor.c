#include <stdio.h>
/**
 * main - prints largest prime factors
 *
 * Return: 0
 */
int main(void)
{
	long int b, bp;

	b = 612852475143;
	for (bp = 2; bp <= b; bp++)
	{
		if (b % bp == 0)
		{
			b /= bp;
			bp--;
		}
	}
	printf("%ld\n", bp);
	return (0);
}
