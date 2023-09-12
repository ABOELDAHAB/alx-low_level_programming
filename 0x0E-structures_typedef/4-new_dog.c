#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function
 * @s: the lenght
 * Return: lenght of string
 */
int _strlen(const char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}

/**
 * _strcopy - function
 * @sr: string
 * @des: copying string
 * Return: dest
 */
char *_strcopy(char *des, char *sr)
{
	int i;

	for (i = 0; sr[i]; i++)
	{
		des[i] = sr[i];
	}
	des[i] = '\0';
	return (des);
}
/**
 * new_dog - function
 * @name: member
 * @age: member
 * @owner: member
 * Return: struct pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name;
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
