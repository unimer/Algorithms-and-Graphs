#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
// Struct Node
typedef struct Node{
  int key;
  struct Node *next;

}Node_t;


/* Function: init_list
 * Arguments: value
 * Functionality: Initializes HEAD
 *
 */ 
struct Node* init_list(int value){
  Node_t *new_head = NULL;
  new_head = malloc(sizeof(Node_t));
  new_head->key = value;
  new_head->next = NULL;
  
  return new_head;
 }

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
void insert( Node_t *head, int value){
 
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
void delete(Node_t * head, int value){
  Node_t * current = head;
  
  if(current->key == value){
    *head = *current->next;
  }
  else{
    while(current->next != NULL){
      if(current->next->key == value){
        current->next = current->next->next;
      }
      else{
        current = current->next;
      }
    }
  }
  


}
int main(){

  Node_t *head = NULL;
  int test_numbers[10] = {54,10,25,91,85,40,42,50,58,78};
  
  for(int i=0;  i<10; i++){
    if(head == NULL){
      head = init_list(test_numbers[i]);
    }
    else{
      insert(head, test_numbers[i]);
    }   
  }
 
  printf("------------List at the beggining---------\n");
  print_list(head);

  printf("------------after insertion---------------\n");
  insert(head, 2);
  insert(head, 4);

  print_list(head);

  printf("------------after deletion---------------\n");
  delete(head, 54);
  delete(head, 40);
  print_list(head);
}
