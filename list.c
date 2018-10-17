#include "list.h"


void print_list(struct song_node * p){
  struct song_node *hold = p;
  if(hold  == NULL){
    printf("END\n-----------\n");
  }
  else {

    printf(" %s By %s  ", hold -> name, hold ->artist);
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




struct song_node * insert_order(struct song_node * p, char * n, char * a){


  int pos = 0;
  struct song_node *iter = p;

  struct song_node *add = NULL;

  if(p->next->artist ==  NULL){
    p = insert_front(p,n,a);
    return p;
  }

  while(strcmp(a,iter->artist)> 0){
    
    iter = iter -> next;
    pos++;
  }

  add = insert_front(iter,n,a);
  //p = combine(p,add,pos);
  return p;

}

struct song_node * combine(struct song_node *p, struct song_node *add, int pos){
  
  if(pos != 0){
    return add;
  }

  while(pos){
    struct song_node *top = p;
    int cnt = pos;
    while(cnt){
      top = top -> next;
      cnt--;
    }
    top->next = NULL;
    add = insert_front(add,top->name,top->artist);
    pos--;
  }
  return add;
}







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
