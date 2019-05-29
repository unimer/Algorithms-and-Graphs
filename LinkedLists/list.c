#include "list.h"

/* Function: init_list
 * Arguments: value
 * Functionality: Initializes HEAD
 * Returns pointer to Node structure
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
 * Function: append 
 * Arguments: head of list, integer value to insert
 * Functionality: appends new node to the end of the list 
 */
void append( Node_t *head, int value){
 
    Node_t * current = head;

    while(current->next != NULL){
      current = current->next;
    }
    current->next = malloc(sizeof(Node_t));
    current->next->key = value;
    current->next->next = NULL;

}

/*
 * Function: push
 * Arguments: head of the list, integer value to insert
 * Functionality: inserts new node to the beginning of the list
 */
void push( Node_t **head, int value){
    Node_t *new_node = NULL;
    new_node = malloc(sizeof(Node_t));
    new_node->key = value;
    new_node->next = *head;
    
    *head = new_node;

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

/* 
 * Function: search
 * Arguments: head of list, integer value(searched value)
 * Functionality: search exact value in list
 * Return: boolean
 */
bool search(Node_t *head, int value){
    Node_t *current = head;
    
    while(current != NULL){
        if(current->key == value){ 
            return true;
        }
        current = current->next;
    }
    return false;
}


