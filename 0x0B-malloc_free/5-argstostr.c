#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arg counter
 * @av: arg value
 * Return: NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
  int i = 0;
  int j;
  int x;
  int y;
  char *p;

  if (ac == 0 || av == NULL)
    {
      return (NULL);
    }
  for (i = 0, x = 0, y = 0; x < ac; i++)
    {
      if (av[x][y] == '\0')
	{
	  x++;
	}
    }
  p = malloc(i * sizeof(char));
  if (p == NULL)
    {
      return (NULL);
    }
  for (i = 0, j = 0; i < ac; i++, j++)
    {
      p[j] = av[i][j];
    }

  return (p);
}
