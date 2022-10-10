#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @wu: string to evaluate
 *
 * Return: the length of the string
*/
int _strlen(char *wu)
{
	int l1;
	int i;

	for (i = 0; wu[i] != '\0'; i++)
	{
		l1++;
	}
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l2, i;

	for (i = 0; src[i] != '\0'; i++)
	{
		l2++;
	}

	for (i = 0; i < l2; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int namelen, ownerlen;

	namelen = _strlen(name);
	ownerlen = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	(*ndog).name = malloc(sizeof(char) * (namelen + 1));
	if ((*ndog).name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	(*ndog).owner = malloc(sizoof(char) * (ownerlen + 1));
	if ((*ndog).owner == NULL)
	{
		free(ndog);
		free((*ndog).name);
		return (NULL);
	}
	_strcpy((*ndog).name, name);
	_strcpy((*ndog).owner, owner);
	(*ndog).age = age;

	return (ndog);
}
