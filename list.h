#include <stdio.h>
#include <stdlib.h>


struct node { int i; struct node *next;};

void print_list(struct node *p );

struct node * insert_front(struct node * p, int val);

struct node * free_list(struct node *p);
