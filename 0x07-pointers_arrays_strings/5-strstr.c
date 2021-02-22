#include "holberton.h"

/**
 * _strpbrk - finds the first occurrence of the substring needle in the string haystack. 
 * @haystack:
 * @needle:
 * Return: a pointer to the beginning of the located substring, or NULL if the substring is not found.
 */

char *_strpbrk(char *s, char *accept)
{
  int i, j;
  char *p;

  i = 0;
  while (s[i] != '\0')
    {
      j = 0;
      while (accept[j] != '\0')
	{
	  if (accept[j] == s[i])
	    {
	      p = &s[i];
	      return (p);
	    }
	  j++;
	}
      i++;
    }

  return (0);
}
