#include "holberton.h"
#include <limits.h>
/**
 *print_binary - a function that prints the binary representation of a number
 *@n: unsigned long int
 *You are not allowed to use arrays
 *You are not allowed to use malloc
 *You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
  int index = 0;
  int i;

  if (n == 0)
    {
      _putchar('0');
    }

  for (i = ((sizeof(n) * 8) - 1); i >= 0; i--)
    {
      if ((n >> i) & 1)
	{
	  index = 1;
	  _putchar('1');
	}
      else if (index == 1)
	{
	  _putchar('0');
	}
    }
}
