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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog *new_dog(char *name, float age, char *owner);
void free_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
