#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog info
 * @name: dog's name
 * @owner: owner's name
 * @age: dog's age
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
