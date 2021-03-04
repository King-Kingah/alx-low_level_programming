#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: minimum val
 * @max: max value
 * Description: array contain all values from min-max, ordered
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *a, i;

if (min > max)
return (NULL);

a = malloc((max - min + 1) * sizeof(*a));
if (a == NULL)
return (NULL);

for (i == 0; min <= max; i++, min++)
a[i] = min;

return (a);
}
