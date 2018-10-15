#include "list.h"



void print_list(struct node * p){
  struct node *hold = p;
  if(hold  == NULL){
    printf("END\n-----------\n");
  }
  else {

    printf("|%d| -> ", hold -> i);
    print_list(hold -> next);
  }

}

struct node * insert_front(struct node * p, int val){
  struct node *add  = (struct node *)malloc(sizeof(struct node));
  add->next = p;
  add->i = val;
  return add;
}

struct node * free_list(struct node * p){
  struct node * hold = p;
  struct node *temp = p;
  while(hold){
    
    hold = hold -> next;
    free(temp);
    temp = hold;
    
  }
  return hold;
}
