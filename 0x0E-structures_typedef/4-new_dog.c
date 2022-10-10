#include <stdlib.h>
#include "dog.h
#include <stdio.h>"

/**
 * new_dog - new dog to be created
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: new_dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *ndog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		ndog->name[k] = name[k];
	ndog->age = age;
	ndog->owner = malloc(j * sizeof(ndog->owner));
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		ndog->owner[k] = owner[k];
	return (ndog);
}
