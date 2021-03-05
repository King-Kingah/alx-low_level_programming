#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: unisgned int
 * @size: memory allocation/capacity
 * Description: llocates memory for an array of nmemb elements of size
 * Return: NULL if 0, NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  char *pt;
  unsigned int i;

  if (nmemb <= 0 || size <= 0)
    {
      return (NULL);
    }
  pt = malloc(nmemb * size);
  if (pt == NULL)
    {
      return (NULL);
    }
  for (i = 0; i < nmemb; i++)
    pt[i] = 0;

  return (pt);
}
