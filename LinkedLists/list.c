#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
  int key;
  struct Node *next;

}Node_t;



void print_list( Node_t *  head){
  Node_t * current = head;
  while(current != NULL){
    printf("%d ", current->key);
    current = current -> next;
  }
  printf("\n");
}


void insert( Node_t * head, int value){
  Node_t * current = head;
  while(current->next != NULL){
    current = current->next;
  }
  current->next = malloc(sizeof(Node_t));
  current->next->key = value;
  current->next->next = NULL;

}

int main(){

  Node_t *head = NULL;
  Node_t *tail = NULL;
  
  head = malloc(sizeof(Node_t));

  head->key=1;
  head->next = NULL;
  

  print_list(head);

  printf("----------------\n");
  insert(head, 2);

  print_list(head);
}
