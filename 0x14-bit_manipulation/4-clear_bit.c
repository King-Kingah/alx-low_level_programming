#include "holberton.h"
/**
 *clear_bit - a function that sets the value of a bit to 0 at a given index.
 *@n: unsigned long int *
 *@index: unsigned int, starting from 0 of the bit you want to set
 *Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8 - 1)
{
return (-1);
}

*n = *n & ~(1 << index);

return (1);
}
