#include "holberton.h"


/**
 * _islower - lowercase.
 * @c: the letter.
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
