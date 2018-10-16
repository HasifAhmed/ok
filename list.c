#include "list.h"
#include <stdio.h>
#include <string.h>



void print_list(struct song_node * p){
  struct song_node *hold = p;
  if(hold  == NULL){
    printf("END\n-----------\n");
  }
  else {

    printf("Name:%s Artist:%s -> ", hold -> name, hold ->artist);
    print_list(hold -> next);
  }

}

struct song_node * insert_front(struct song_node * p, char * n, char * a){
  struct song_node *add  = (struct song_node *)malloc(sizeof(struct song_node));
  add->next = p;
  strcpy(add->name,n);
  strcpy(add->artist,a);
  return add;
}




/*struct song_node * insert_order(char * n, char * a){
  struct song_node *new = (struct song_node *)malloc(sizeof(struct song_node));
  strcpy(new->name, *n);
  strcpy(new->artist,*a);
  int i = 0;
  while(i <= 27){
    if(
  }
  }*/








struct song_node * free_list(struct song_node * p){
  struct song_node * hold = p;
  struct song_node *temp = p;
  while(hold){
    
    hold = hold -> next;
    free(temp);
    temp = hold;
    
  }
  return hold;
}
