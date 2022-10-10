#ifndef DOG_H
#define DOG_H

/**
 *  struct dog - a dog's basic info (That is Dog's Structure)
 *  @name: First member - a pointer to the dog's name
 *  @age: Second member - a float variable reprenting dog's age
 *  @owner: Third member - a pointer to the name of dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - is a new type definition name for struct dog
 */
typedef struct dog dog_t;

/**
 * Other function prototypes
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
