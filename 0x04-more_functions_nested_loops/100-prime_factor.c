#include <stdio.h>

int main (void)
{
	long i, n, f;

	f = 0;
	n = 612852475143;
	for (i = 2; i <= 612852475143; i++ )
	{
		while (n % i == 0)
		{
			n = n / i;
			if (i > f)
				f = i;
		}
	}
	printf("%li", f);
	return (0);
}
