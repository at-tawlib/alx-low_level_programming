#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char*, char*);

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	dog = malloc(sizeof(dog_t));
	/** check if dog != NULL */
	if (dog == NULL)
		return (NULL);

	/** get length of name and allocate space for it */
	len_name = _strlen(name);
	dog->name = malloc(sizeof(char) * len_name + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	/** store a copy of name in dog */
	dog->name = _strcpy(dog->name, name);

	/** get length of owner and allocate space for it */
	len_owner = _strlen(owner);
	dog->owner = malloc(sizeof(char) * len_owner + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	/** store a copy of owner in dog */
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

/**
 * _strlen - return length of string
 * @s: string to find length
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - copy string into another string
 * @new_str: string to be copied into
 * @old_str: string to copy
 * Return: copied string
 */
char *_strcpy(char *new_str, char *old_str)
{
	int i;

	for (i = 0; old_str[i] != '\0'; i++)
		new_str[i] = old_str[i];

	new_str[i] = '\0';
	return (new_str);
}
