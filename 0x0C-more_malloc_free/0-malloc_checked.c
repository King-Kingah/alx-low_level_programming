#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer
 * Description: if malloc fails, normal process termination,status value 98
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b){
void *a;

a = malloc(b);
if (a == NULL)
exit(98);

return (a);
}
