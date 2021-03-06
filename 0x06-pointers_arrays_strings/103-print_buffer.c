#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: Buffer to print.
 * @size: Size of buffer.
 * Return: Nothing.
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0, l;

	if (size <= 0)
		printf("\n");
	while (i < size)
	{
		printf("%08x: ", i);
		l = 0;
		while (l < 10 && l < (size - i))
			l++;
		for (j = i; j < i + l; j++)
		{
			if (j % 2 == 0)
				printf("%02x", b[j]);
			else
				printf("%02x ", b[j]);
		}
		while (j < i + 10)
		{
			if (j % 2 == 0)
				printf("  ");
			else
				printf("   ");
			j++;
		}
		for (j = i; j < i + l; j++)
		{
			if (b[j] < ' ')
				printf(".");
			else
				printf("%c", b[j]);
		}
		printf("\n");
		i += 10;
	}

}
