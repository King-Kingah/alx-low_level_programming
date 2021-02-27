#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: buffer array
 * @b: constant byte 
 * @n: the number of bytes of memory area to fill
 * Description - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * Returns Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
int p;

p = 0;
while (n > 0)
{
s[p] = b;
p++;
n--:
}

return (s);
}
