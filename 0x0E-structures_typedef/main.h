#ifndef _MAIN_H
#define _MAIN_H
#define dog_t ((struct dog))
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _MAIN_H */
