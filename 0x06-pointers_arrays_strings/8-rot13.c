#include "holberton.h"

/**                                           
 *                                                      
 *                                                           
 *                                                     
 *                                                            
 */

char *rot13(char *s)
{
  int i;
  int j;
  char from[] = "abcdefghijklmABCDEFGHIJKLM";
  char to[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

  for (i = 0; str[i] != '\0'; i++)
    {
      for (j = 0; from[j] != '\0'; j++)
	{
	  if (str[i] == from[j])
	    {
	      str[i] = to[j];
	    }
	  else if (str[i] == to[j])
	    {
	      str[i] = from[j];
	    }
	}
    }
  return (str);
}
