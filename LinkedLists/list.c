#include <stdio.h>
#include <stdlib.h>

// Struct Node
typedef struct Node{
  int key;
  struct Node *next;

}Node_t;


/*
 * Function: print_list
 * Arguments: head of list
 * Functionality: print values of all nodes in the list 
 */
void print_list( Node_t *  head){
  Node_t * current = head;
  while(current != NULL){
    printf("%d ", current->key);
    current = current -> next;
  }
  printf("\n");
}


/*
 * Function: insert 
 * Arguments: head of list, integer value to insert
 * Functionality: inserts new node to the end of the list 
 */
void insert( Node_t * head, int value){
  Node_t * current = head;
  while(current->next != NULL){
    current = current->next;
  }
  current->next = malloc(sizeof(Node_t));
  current->next->key = value;
  current->next->next = NULL;

}



/*
 * Function: delete 
 * Arguments: head of list, integer value to delete
 * Functionality: delete node from the list 
 */

int main(){

  Node_t *head = NULL;
  Node_t *tail = NULL;
  
  head = malloc(sizeof(Node_t));

  head->key=1;
  head->next = NULL;
  

  print_list(head);

  printf("------------after insertion---------------\n");
  insert(head, 2);
  insert(head, 4);

  print_list(head);

  printf("------------after deletion---------------\n");
  delete(head, 2);
  print_list(head);
}
