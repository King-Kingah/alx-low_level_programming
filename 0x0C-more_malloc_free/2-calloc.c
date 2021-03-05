#include "holberton.h"

/**
 * _calloc -  allocates memory for an array
 * @nmemb: unisgned int
 * @size: memory allocation/capacity
 * Description: llocates memory for an array of nmemb elements of size
 * Return: NULL if 0, NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  int *p;
  unsigned int i;

  if (nmemb <= 0 || size <= 0)
    {
      return (NULL);
    }
  p = malloc(nmemb * size);
  if (p == NULL)
    {
      return (NULL);
    }
  for (i = 0; i < nmemb; i++)
    p[i] = 0;

  return (p);
}
