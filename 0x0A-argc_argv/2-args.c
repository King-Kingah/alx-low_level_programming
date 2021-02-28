65;6003;1c#include "holberton.h"
#include <stdio.h>

/**
 * main - prints all given arguments given through command line
 * @argc: which stores the total number of arguments 
 * @argv: which stores the array of strings that mean all arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for(i = 0; i < argc; i++);
{
printf("%s\n", argv[i]);
}

return(0);
}
