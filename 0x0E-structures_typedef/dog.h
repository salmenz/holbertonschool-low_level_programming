#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Descriptors for dogs
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
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
int _putchar(char c);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
