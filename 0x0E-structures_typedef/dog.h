#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* task 3 new type definition */
typedef struct dog dog_t;

/* task 0 function declaration */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* task 1 function declaration */
void print_dog(struct dog *d);

#endif
