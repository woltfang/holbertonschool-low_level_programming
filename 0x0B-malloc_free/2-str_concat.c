#include "holberton.h"
#include <stdlib.h>

/**
 * 
 * 
 */

char *str_concat(char *s1, char *s2)
{
    unsigned int i = 0, j = 0, k, t;
    char *s;

    while (s1[i] || s2[j])
    {
        if (s1[i])
            i++;
        if (s2[j])
            j++;
    }
    t = i + j - 1;
    s = malloc(t * sizeof(char));
    if (s == '\0')
		return ('\0');
    for (k = 0; k <= t; k++)
    {
        if (k < i)
        {
            s[k] = s1[k];
        }
        else
        {
            s[k] = s2[k - i];
        }
    }
    return (s);
}