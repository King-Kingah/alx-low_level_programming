#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer
 * Description: if malloc fails, normal process termination,status value 98
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *arr;

arr = malloc(b);
if (arr == NULL)
exit(98);

return (arr);
}
