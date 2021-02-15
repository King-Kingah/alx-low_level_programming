#include "holberton.h"
#include <stdio.h>

/**
 * main - takes a pointer to an int as parameter and updates the value it points to to 98.
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
  int *p = &n;

  *p = 98;

  return(0);
}
