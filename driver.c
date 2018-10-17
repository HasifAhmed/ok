#include "tunes.h"
int main(){
  struct song_node *first = NULL;
  char a[10] = "Lil Wayne";
  first = insert_order(first,"Let it Fly",a);

  print_list(first);
  first = insert_order(first,"Mona Lisa","Lil Wayne");
  print_list(first);

  printf("==================================\n");


  first = insert_order(first,"Bible","Allah");
  print_list(first);

  printf("==================================\n");


/*
  struct song_node *second = NULL;
  second = insert_order(second,"Bible","Allah");
  print_list(second);
  */


}
