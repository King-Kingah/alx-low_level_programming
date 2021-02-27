#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: array to copy into
 * @src: array to copy from
 * @n: number of elements
 * Return: pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *king;

king = dest;
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

return (king);
}
