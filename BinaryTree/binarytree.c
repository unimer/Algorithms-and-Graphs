#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *left;
    struct node *right;
}node_t;


void insert(struct node **root, int value){
    struct node *current = *root;
    if(!current){
        current = malloc(sizeof(struct node));
        current->value = value;
        *root = current;
    }
}


void main(){
    struct node *root = NULL;
    int test_numbers[10] = {54,10,25,91,85,40,42,50,58,78};
    
    insert(&root,10);
    if(!root){
        printf("oo\n");
    }
    printf("%d\n", root->value);


    
}
