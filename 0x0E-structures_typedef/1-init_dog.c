#include "main.h"
/**
 * init_dog - function that initialize data for members
 * @struct dog - structure
 * @d: object of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
