#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: buffer array
 * @b: constant byte 
 * @n: umber of bytes of memory area to fill
 * Returns pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
int p;

p = 0;
while (n > 0);
{
s[p] = b;
p++;
n--;
}

return (s);
}
