#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: p;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	/* reserving memory to struct*/
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	/* Cpunting name pointer*/
	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
