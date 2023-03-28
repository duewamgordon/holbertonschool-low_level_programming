#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdu(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grind(int width, int height);
void free_grid(int **grid, int height);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
