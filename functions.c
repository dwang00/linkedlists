#include <stdio.h>
#include <stdlib.h>

#include "header.h"

void print_list(struct node *p) {
  printf("[");
  if (p != NULL) {
    while (p->next != NULL) {
      printf("%d, ", p->i);
      p = p->next;
    }
    printf("%d", p->i);
  }
  printf("]\n");
}

struct node * insert_front(struct node *p, int x) {
  struct node *ins = malloc(sizeof(struct node));
  ins->next = p;
  ins->i = x;
  return ins;
}

struct node * free_list(struct node *p) {
  while (p != NULL) {
    printf("freeing node: %d\n", p->i);
    return free_list(p->next);
    free(p);
  }
  return NULL;
}

struct node * remove_node(struct node *front, int data) {
  if (front->i == data) {
    struct node *rest = front->next;
    free(front);
    return rest;
  }
  else {
    if (front->next != NULL) {
      front->next = remove_node(front->next, data);
    }
    return front;
  }
}
