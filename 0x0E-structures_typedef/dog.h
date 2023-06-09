#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that keeps information of a dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Description: struct called "dog" that stores its name, age
 * and owner name.
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif

