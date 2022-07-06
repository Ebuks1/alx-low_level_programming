#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int c, boolean, boolean2;
	long int n1, n2, bn, bn2, n11, n22;

	n1 = 1;
	n2 = 2;
	boolean = boolean2 = 1;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			bn = n1 + n2;
			printf(", %ld", bn);
			n1 = n2;
			n2 = bn;
		}
		else
		{
			if (boolean2)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				boolean2 = 0;
			}
			bn2 = (n11 + n22);
			bn = n1 + n2 + (bn2 / 1000000000);
			printf(", %ld", bn);
			printf("%ld", bn2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = bn;
			n22 = (bn2 % 1000000000);
		}
		if (((n1 + n2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
