
    if(hold  == NULL){
      printf("END\n-----------\n");
    }
    else {

      printf("%s By %s => ", hold -> name, hold ->artist);
      print_list(hold -> next);
    }
}

struct song_node * find_node(struct song_node *p, char * n, char * a){
  struct song_node *iter = p;
  while(iter->next != NULL ){

    if(strcmp(iter->artist,a) == 0 && strcmp(iter->name,n) == 0){
      struct song_node *found = calloc(sizeof(struct song_node),1);
      iter -> next = NULL;
      found = iter;
      return found;
    }
=======
struct song_node * insert_order(struct song_node * p, char * n, char * a){

  printf("yes");
  int pos = 0;
  struct song_node *iter = p;

  struct song_node *add = NULL;

  if(p==NULL){
    p = insert_front(p,n,a);
    return p;
  }

  while(strcmp(a,iter->artist)> 0){
    iter = iter -> next;
    pos++;
  }

  add = insert_front(iter,n,a);
  p = combine(p,add,pos);
  return p;

}

struct song_node * combine(struct song_node *p, struct song_node *add, int pos){
  
  if(pos != 0){
    return add;
  }

  while(pos){
    struct song_node *top = p;
    int cnt = pos;
    cnt--;
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
>>>>>>> 2254f02608736da926176e202defe0f06ee803b2

    iter = iter -> next;

  }
  if(strcmp(iter->artist,a) == 0 && strcmp(iter->name,n) == 0 ){
    struct song_node *found = calloc(sizeof(struct song_node),1);
    iter -> next = NULL;
    found = iter;
    return found;
  }
  return NULL;

}

struct song_node * find_first(struct song_node *p, char * a){
  struct song_node *iter = p;
  while(iter -> next != NULL){
    if(strcmp(iter->artist,a)==0){
      struct song_node * found = calloc(sizeof(struct song_node),1);
      iter -> next = NULL;
      found = iter;
      return found;
    }
    iter = iter -> next;
  }
  if(strcmp(iter->artist,a) == 0){
    struct song_node * found = calloc(sizeof(struct song_node),1);
    iter -> next = NULL;
    found = iter;
    return found;
  }
  return NULL;
}

struct song_node * rand_node(struct song_node *p){
  return p;
}

struct song_node * remove_node(struct song_node * p, struct song_node * rem){
  return NULL;
}


void free_list(struct song_node * p){
  struct song_node * hold = p;
  struct song_node *temp = p;
  while(hold){

    hold = hold -> next;
    free(temp);
    temp = hold;

  }
  free(hold);
}
