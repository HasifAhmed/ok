#include <stdio.h>
#include <stdlib.h>



struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};

struct song_node * table[27];


void print_list(struct song_node *p );

struct node * insert_front(struct song_node * p, char * n, char * a);

struct node * insert_order(char * n, char * a);
struct node * free_list(struct node *p);


