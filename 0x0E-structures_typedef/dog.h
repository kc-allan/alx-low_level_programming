#ifndef DOG
#define DOG
/**
 * struct dog - structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Descriptiom: Structure of a dog with name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
/*dog_t *new_dog(char *name, float age, char *owner);*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
