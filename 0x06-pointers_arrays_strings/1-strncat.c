include "holberton.h"

/**                                           
 * _strncat - concatenates two strings using at most `n` bytes
 * @dest: char str destination                                                
 * @src: char str source                                                    
 *                                                            
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
return (dest);
}
