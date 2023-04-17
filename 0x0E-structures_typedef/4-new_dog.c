#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copyname, *copyowner;
	int n_len = 0, o_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[n_len])
		n_len++;
	while (owner[o_len])
		o_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	copyname = malloc(n_len + 1);
	if (copyname == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		copyname[i] = name[i];
	copyname[i] = '\0';

	copyowner = malloc(o_len + 1);
	if (copyowner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		copyowner[i] = owner[i];
	copyowner[i] = '\0';

	new_dog->name = copyname;
	new_dog->age = age;
	new_dog->owner = copyowner;
	return (new_dog);
}
