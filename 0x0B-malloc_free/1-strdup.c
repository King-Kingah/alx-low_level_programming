#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: NULL if str = NULL, insufficient memory
 */

char *_strdup(char *str)
{
char *p;
int i, c;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;

p = malloc(i * sizeof(*p) + 1);
if (p == NULL)
return (NULL);

for (c = 0; c < i; c++)
p[c] = str[c];
p[c] = '\0'

return (p)
}
