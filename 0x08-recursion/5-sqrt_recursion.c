#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Returns: returns the natural square root of a number.
 * Description: If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
return (halp(n, 1));
}

int halp(int c, int i)
{
int square;

square = i * i;
if (square == c)
return (i);
else if (square < c)
return (halp(c, i + 1));
else
return (-1);
}
