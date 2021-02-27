#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
int a = 0;

while (*(s + a) != '\0')
a++;


return (a);
}
