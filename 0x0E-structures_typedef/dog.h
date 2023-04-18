#ifndef _DOG_H
#define _DOG_H

/**
 * struct type_dog - fog type
 * @name: dog name
 * @age: dog edge
 * @owner: owner
 */
typedef struct type_dog
{
	char *name;
	float age;
	char *owner;
}
	dog;
typedef struct type_dog dog;

int _putchar(char c);
void init_dog(struct type_dog *d, char *name, float age, char *owner);
void print_dog(struct type_dog *d);
dog *new_dog(char *name, float age, char *owner);
void free_dog(type_dog *d);

#endif
