#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

// Struct Node
typedef struct Node{
    int key;
    struct Node *next;

}Node_t;


struct Node* init_list(int value);

/*
 * Function: print_list
 * Arguments: head of list
 * Functionality: print values of all nodes in the list 
 */
void print_list( Node_t *  head);


/*
 * Function: append 
 * Arguments: head of list, integer value to insert
 * Functionality: appends new node to the end of the list 
 */
void append( Node_t *head, int value);

/*
 * Function: push
 * Arguments: head of the list, integer value to insert
 * Functionality: inserts new node to the beginning of the list
 */
void push( Node_t **head, int value);

/*
 * Function: delete 
 * Arguments: head of list, integer value to delete
 * Functionality: delete node from the list 
 */
void delete(Node_t * head, int value);

/* 
 * Function: search
 * Arguments: head of list, integer value(searched value)
 * Functionality: search exact value in list
 * Return: boolean
 */
bool search(Node_t *head, int value);
