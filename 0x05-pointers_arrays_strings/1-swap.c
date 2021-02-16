#include "holberton.h" 

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to integer
 * @b: pointer to integer
 * 
 * Return: Void
 */

void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}
