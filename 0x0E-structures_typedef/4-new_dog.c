#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p;
    int name_len, owner_len;

    /* Reserve memory for struct */
    p = malloc(sizeof(dog_t));
    if (p == NULL)
        return (NULL);

    /* Check if name or owner is NULL */
    if (name == NULL || owner == NULL)
    {
        free(p);
        return (NULL);
    }

    /* Calculate string lengths */
    name_len = strlen(name);
    owner_len = strlen(owner);

    /* Allocate memory for name and owner strings */
    p->name = malloc((name_len + 1) * sizeof(char));
    p->owner = malloc((owner_len + 1) * sizeof(char));
    if (p->name == NULL || p->owner == NULL)
    {
        free(p->name);
        free(p->owner);
        free(p);
        return (NULL);
    }

    /* Copy name and owner strings */
    strcpy(p->name, name);
    strcpy(p->owner, owner);

    /* Set age */
    p->age = age;

    return (p);
}

