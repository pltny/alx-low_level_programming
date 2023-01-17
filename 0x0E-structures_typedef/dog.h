#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs info
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: .......
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_m;

void init_dog(struct dog *x, char *name, float age, char *owner);
void print_dog(struct dog *x);
dog_m *new_dog(char *name, float age, char *owner);
void free_dog(dog_m *x);
char *_strcpy(char *dest, char *src);
int _strlen(char *n);

#endif
