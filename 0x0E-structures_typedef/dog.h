#ifndef DOG_H
#define DOG_H
/**
 * struct dog - The Dog main struct.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner for that dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
