#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Alway 0
 */
int main(void)
{
	long int n1, n2, fn, bfn;

	n1 = 1;
	n2 = 2;
	fn = bfn = 0;
	while (fn <= 4000000)
	{
		fn = n1 +  n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
		{
			bfn += n1;
		}


	}
	printf("%ld\n", bfn);
	return (0);
}
