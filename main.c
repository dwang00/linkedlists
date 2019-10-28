#include <stdio.h>
#include <stdlib.h>

#include "header.h"

void main() {
  struct node *list = NULL;
  printf("printing empty list\n");
  print_list(list);
  printf("adding 0-9 to list\nprinting list\n");
  int i;
  for (i = 9; i >= 0; i--) {
    list = insert_front(list, i);
  }
  print_list(list);
  printf("removing 0\n");
  list = remove_node(list, 0);
  print_list(list);
  printf("removing 4\n");
  list = remove_node(list, 4);
  print_list(list);
  printf("removing 9\n");
  list = remove_node(list, 9);
  print_list(list);
  printf("removing 10\n");
  list = remove_node(list, 10);
  print_list(list);
  printf("freeing list\n");
  list = free_list(list);
  printf("printing list\n");
  print_list(list);
}
