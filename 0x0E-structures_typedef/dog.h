#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure that has three members
 * @name: member
 * @age: member
 * @owner: member
 * Description: struct that has three members
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

