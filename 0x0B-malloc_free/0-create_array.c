#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it.
 * @size: the size of the memory to print
 * @c: char
 * Return:  pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

if (size == 0)
return (NULL);

p = malloc(size * sizeof(*p));
if (p == NULL)
return (NULL);

for (i = 0; i < size; i++)
p[i] = c;

return (p);
}
