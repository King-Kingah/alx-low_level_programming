#include "holberton.h"
/**
 * _memset - fill memory with a constant byte
 * @s: character
 * @b: character
 * @n: integer
 *
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n ; i++)
    {
      s[i] = b;
    }
  return (s);
}
