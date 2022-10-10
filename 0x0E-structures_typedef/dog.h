#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog
 * @name: An array of char to hold the name (First member)
 * @age: A float type to store the age (Second member)
 * @owner: Another array of char to hold name (Third member)
 *
 * A new type (struct dog)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
