#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog
 * struct type_dog - fog type
 * @name: dog name
 * @age: dog edge
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog;
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog *d);

#endif
