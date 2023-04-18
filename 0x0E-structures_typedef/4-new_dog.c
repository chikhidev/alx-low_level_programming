#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 *
 * @name: name
 * @owner: pwner
 * @age: age
 * Return: the dog 
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int nameCount = 0, ownerCount = 0;
dog_t *new_dog = malloc(sizeof(dog_t));
  
if (new_dog == NULL)
return (new_dog);

while (name[nameCount])
nameCount++;
while (owner[ownerCount])
ownerCount++;
new_dog->name = malloc((nameCount + 1) * sizeof(char));
new_dog->owner = malloc((ownerCount + 1) * sizeof(char));
if (new_dog->name == NULL || new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}
nameCount = 0;
while (name[nameCount])
{
new_dog->name[nameCount] = name[nameCount];
nameCount++;
}
ownerCount = 0;
while (owner[ownerCount])
{
new_dog->owner[ownerCount] = owner[ownerCount];
ownerCount++;
}
new_dog->name[nameCount] = 0;
new_dog->owner[ownerCount] = 0;
new_dog->age = age;
return (new_dog);
}
