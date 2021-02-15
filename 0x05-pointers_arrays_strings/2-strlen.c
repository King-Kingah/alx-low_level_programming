#include "holberton.h"

/**
 * main - returns the length of a string.
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
  int a;
  for (a = 0; s[a] != '\0'; a++);

  return (a);
}
