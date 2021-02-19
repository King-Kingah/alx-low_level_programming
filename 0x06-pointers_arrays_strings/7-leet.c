#include "holberton.h"

/**                                           
 *                                                      
 *                                                           
 *                                                     
 *                                                            
 */

char *leet(char *s)
{
    int i;
    int j;
    char from[] = "aeotlAEOTL";
    char to[] = "4307143071";

    for (i = 0; str[i] != '\0'; i++)
      {
	for (j = 0; from[j] != '\0'; j++)
	  {
	    if (str[i] == from[j])
	      {
		str[i] = to[j];
	      }
	  }
      }

    return (str);
}
