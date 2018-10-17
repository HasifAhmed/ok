#include <stdio.h>
#include <stdlib.h>



struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};

struct song_node * table[27];


void print_list(struct song_node *p );

struct song_node * insert_front(struct song_node * p, char * n, char * a);

struct song_node * insert_order(struct song_node * p, char * n, char * a);
struct song_node * free_list(struct song_node *p);

struct song_node * combine(struct song_node *p, struct song_node *add, int pos);
