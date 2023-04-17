#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structer
 * @name: pchar
 * @age: float
 * @owner: pchar
 * Description: declaring and defining struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
