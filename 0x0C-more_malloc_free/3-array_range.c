#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum val
 * @max: max value
 * Description: array contain all values from min-max, ordered
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *arr, i;

if (min > max)
return (NULL);

arr = malloc((max - min + 1) * sizeof(*arr));
if (arr == NULL)
return (NULL);

for (i == 0; min <= max; i++, min++)
arr[i] = min;

return (arr);
}
