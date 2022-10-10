#include <stdio.h>
#include "main.h"
#include "dog.h"
/**
 * init_dog - initialization of the dog structure 
 * @d: a dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog = {.name = name, .age = age, .owner = owner};
}
