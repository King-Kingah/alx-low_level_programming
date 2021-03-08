#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * Return: 0.
 */

void print_dog(struct dog *d)
{
struct dog d;

d.name = "Django";
d.age = 3.5;
d.owner = "King";
print_dog(&d);
return (0);
}
