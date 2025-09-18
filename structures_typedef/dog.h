#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that defines a dog
 * @name: name of the dog (string)
 * @age: age od the dog (float)
 * @owner: owner of the dog (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
