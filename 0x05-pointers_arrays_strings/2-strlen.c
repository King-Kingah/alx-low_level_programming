#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 *
 * Return: length of string
 */

int _strlen(char *s)
{
  int a;
  for (a = 0; s[a] != '\0'; a++);

  return (a);
}
