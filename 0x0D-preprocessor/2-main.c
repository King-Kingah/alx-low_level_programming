#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 * 
 * Return: zero (succesfull)
 */

int main(int argc, char **argv)
{
putchar("%s\n", __FILE__);

return (0);
}
