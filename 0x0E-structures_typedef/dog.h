#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - this defines a new type which is struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
