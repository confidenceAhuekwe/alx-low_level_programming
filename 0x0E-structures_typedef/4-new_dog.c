#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create new data structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	len_name = strlen(name);
	new_dog->name = malloc(sizeof(char) * len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);
	len_owner = strlen(owner);
	new_dog->owner = malloc(sizeof(char) * len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
