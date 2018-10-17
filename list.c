#include "list.h"
#include <stdio.h>
#include <string.h>

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
  struct song_node *new = (struct song_node *)malloc(sizeof(struct song_node));
  strcpy(new->name, n);
  strcpy(new->artist,a);
  if(p == NULL){
    p = insert_front(p,n,a);
    return p;
  }
  else{
    struct song_node *iter = p;
    struct song_node *onefor = p;
    if(strcmp(a,p->artist)<= 0){
      //
      //perfect case
      if(strcmp(n,p->name)< 0){
        p = insert_front(p,n,a);
        //printf("test");
        return p;
      }
      else{
        while(strcmp(n,iter->name)>0){
         iter = iter->next;
        }
        iter = iter->next;
        new = insert_front(iter,n,a);
        p->next = new;
        printf("%d",strcmp(n,p->name));
        return p;
      }


    }
    else{
    while(strcmp(a,iter->artist)>0){
     iter = iter->next;
    }
    iter = iter->next;
    new = insert_front(iter,n,a);
    p->next = new;
    printf("%d",strcmp(a,p->artist));
    return p;
  }
}
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
