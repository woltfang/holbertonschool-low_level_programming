#include "holberton.h"

void print_diagonal(int n)
{
	int i, j;
	if (n >= 0)
	{
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
	}
}