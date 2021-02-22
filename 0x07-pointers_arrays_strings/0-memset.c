#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: buffer array
 * @b: constant byte 
 * @n: the number of bytes of memory area to fill
 * Returns pointer to the memory area s.
 * Description - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 */

char *_memset(char *s, char b, unsigned int n)
{
int p;

for (p = 0; p < n; p++;)
{
s[p] = b;
}
return (s);
}